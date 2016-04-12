//===- SwOnly.cpp - LegUp pre-LTO pass ------------------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// SwOnly - Replace accelerated functions with wrappers and create
// legup_wrappers.c. Create tcl files (legup_sopc.tcl, _hw.tcl) to 
// control SOPC builder to add the accelerator to the system. 
//===----------------------------------------------------------------------===//

#include "llvm/Pass.h"
#include "llvm/Function.h"
#include "llvm/Module.h"
#include "llvm/Instructions.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/FileUtilities.h"
#include "llvm/Support/IRBuilder.h"
#include "llvm/Support/Signals.h"
#include "LegupConfig.h"
#include "utils.h"
#include <math.h>
#include <set>
#include <sstream>
#include <iostream>
#include <string>
#include "llvm/LLVMContext.h"

using namespace llvm;

namespace legup {

// SwOnly - Replace accelerated functions with wrappers and create
// legup_wrappers.c. Create tcl files (legup_sopc.tcl, _hw.tcl) to 
// control SOPC builder to add the accelerator to the system. 
class SwOnly  : public ModulePass {
public:

	static char ID; // Pass identification, replacement for typeid
	SwOnly() : ModulePass(ID),
			   //initialize constant cache parameters
			   FPGABoard(LEGUP_CONFIG->getFPGABoard()), dcachesize(LEGUP_CONFIG->getCacheParameters("dcachesize")), icachesize(LEGUP_CONFIG->getCacheParameters("icachesize")) {
		//initialize other cache parameters (these are not constant since if they are not defined, they need to be set to default values later)
		dcachelinesize = LEGUP_CONFIG->getCacheParameters("dcachelinesize");
		dcacheway = LEGUP_CONFIG->getCacheParameters("dcacheway");
		dcacheports = LEGUP_CONFIG->getCacheParameters("dcacheports");
		icachelinesize = LEGUP_CONFIG->getCacheParameters("icachelinesize");
		icacheway = LEGUP_CONFIG->getCacheParameters("icacheway"); 
		dcacheType = LEGUP_CONFIG->getDCacheType();

		if (dcacheports > 2) {
			multiportedCache = true;
		} else {
			multiportedCache = false;
		}

		//DE2 processor does not support multi-ported caches due to CycloneII chip size
		if (FPGABoard == "DE2") {
			multiportedCache = false;
			dcacheports = 2;
			dcacheType = "";
		} 

		ompUsed = false;
		lockUsed = false;
		barrierUsed = false;
	}

	virtual bool doInitialization(Module &M);
	virtual bool doFinalization(Module &M);
	virtual bool runOnModule(Module &M);

	virtual void getAnalysisUsage(AnalysisUsage &AU) const {
	}

private:

	bool replaceHwCallWithWrapper(CallInst *CI, Function *calledFunction, wrapperType type);
	void printWrapper(raw_ostream &Out, Function *F, const wrapperType type, const int wrapperNum, const int threadID, const std::map<Value*, std::string> &pthreadFcts);
	void printWrapperPCIe(raw_ostream &Out, Function *F, const unsigned long long startAddress, const wrapperType type, const int wrapperNum, const int threadID, const std::map<Value*, std::string> &pthreadFcts);
	void printWrapperPrototype(raw_ostream &Out, bool &voidtype, const wrapperType type, const int wrapperNum, Function *F);
	void printWrapperArguments(raw_ostream &Out, const wrapperType type, const std::string AccelName, const int wrapperNum,  const int threadID, Function *F);
	void printWrapperReturn(raw_ostream &Out, const bool voidtype, const wrapperType type, const std::string AccelName, const int wrapperNum, const std::map<Value*, std::string> &pthreadFcts);
	void printWrapperThreadIDArgument(raw_ostream &Out, const wrapperType type, const std::string AccelName, const int wrapperNum, int &ArgIdx, const int threadID);
	void printWrapperSTATUSArgument(raw_ostream &Out, const wrapperType type, const std::string AccelName, const int wrapperNum);
	unsigned long long printMemAddr(raw_ostream &Out, Function *F, unsigned long long CurAddr, int accelNum, wrapperType type);
	void printDATApointer(raw_ostream &Out, const std::string AccelName, const int accelNum, const Type *rT, const wrapperType type, unsigned long long &CurAddr);
	void printSTATUSpointer(raw_ostream &Out, const std::string AccelName, const int accelNum, const wrapperType type, unsigned long long &CurAddr);
	void printARGpointers(raw_ostream &Out, const std::string AccelName, const int accelNum, const wrapperType type, Function *F, unsigned long long &CurAddr);
	bool isPthreadFunction (std::string AccelName, const std::map<Value*, std::string> &pthreadFcts);
	void printHWtcl(Function * F, int AddrOffset);
	void printSopcFileInitial(raw_ostream &sopc);
	void printSopcFileAPIcores(raw_ostream &sopc);
	void printSopcFile(raw_ostream &sopc, Function * F, unsigned long long baseAddr, int AccelCount);
	void printQSYSFilePCIe(raw_ostream &sopc, Function * F, unsigned long long baseAddr, int AccelCount);
	void printCacheParametersFile ();
	void printCacheHWtcl();
	void printSWfiles(const std::vector<accelFcts> &AcceleratedFcts, const std::map<Value*, std::string> &pthreadFcts);
	void printSWfilesPCIe(const std::vector<accelFcts> &AcceleratedFcts, const std::map<Value*, std::string> &pthreadFcts);
	const char * printIntType (const Type * Ty);
	const char * printFloatType (const Type* Ty);
	std::string printType(const Type * Ty, bool MemAddr);
	void getSwFunctions(Module &M, std::set<GlobalValue*> &SwFcts);
	void addSwFunctions(Function *F, std::set<GlobalValue*> &SwFcts);
	void getdeleteFunctions(Module &M, std::set<GlobalValue*> SwFcts, std::set<GlobalValue*> &deleteFcts);
	void initWaveFile(raw_ostream &wave);
	void addAcceltoWaveFile(raw_ostream &wave, Function *F, int AccelCount);
	void finishWaveFile(raw_ostream &wave);
	void replacePthreadCreate(Module &M, CallInst *CI, BasicBlock::iterator I, std::map<Value*, std::string> &pthreadFcts, std::vector<accelFcts> &AcceleratedFcts, const std::set<Function*> &internalAccels);
	void replacePthreadJoin(Module &M, CallInst *CI, BasicBlock::iterator I, const std::map<Value*, std::string> &pthreadFcts, std::vector<accelFcts> &AcceleratedFcts, const std::set<Function*> &internalAccels);
	void generateParallelAccelConfigs(const std::vector<accelFcts> &AcceleratedFcts);
	void setCacheParameters();
	void setdefaultCacheParameters(const std::string cacheType, const int cachesize, int &cachelinesize, int &cacheway, int &cachenumlines);
	void checkLinesizes();
	void checkMaximumLinesize(const std::string cacheType, const int cachelinesize, const int maxValue);
	void addAcceleratedFct(const bool isAvalonAccel, accelFcts accel, std::vector<accelFcts> &AcceleratedFcts);
	bool replaceCalls(Module &M, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts, std::map<Value*, std::string> &pthreadFcts);
	bool replaceOMPFunctions(Module &M, Function::iterator BB, BasicBlock::iterator I, CallInst *CI, Function *calledFunction, int &numOMPthreads, std::string &ompFuncName, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts);
	bool replacePthreadFunctions(Module &M, BasicBlock::iterator I, CallInst *CI, Function *calledFunction, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts, std::map<Value*, std::string> &pthreadFcts);
	bool replaceSequentialFunction(CallInst *CI, Function *calledFunction, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts);

	//variables which hold cache parameters and type of fpga board
	const std::string FPGABoard;
	const int dcachesize, icachesize;
	int dcachelinesize, icachelinesize; 
	int dcacheway, icacheway;
	int dcachenumlines, icachenumlines;
	int dcacheports;	
	std::string dcacheType;
	bool multiportedCache;
	bool ompUsed, lockUsed, barrierUsed;
};

char SwOnly::ID = 0;
static RegisterPass<SwOnly> Z("legup-sw-only",
	"Replace accelerated functions with wrappers and produce legup_wrappers");

bool SwOnly::doInitialization(Module &M) {
	return false;
}

bool SwOnly::doFinalization(Module &M) {
	return false;
}

bool SwOnly::runOnModule(Module &M) {
	bool modified = false;
	modified |= doInitialization(M);

	std::set<GlobalValue*> SwFcts;
	std::set<GlobalValue*> deleteFcts;
	std::set<Function*> internalAccels;

	//vector of structs accelFcts which hold the functions to be accelerated
	std::vector<accelFcts> AcceleratedFcts;
	//map for pthread functions, where key is the thread variable and value is the name of the function being forked to
	std::map<Value*, std::string> pthreadFcts;
	
	getSwFunctions(M, SwFcts);	
	getdeleteFunctions(M, SwFcts, deleteFcts);		

	//if accelerated function is main
	if (LEGUP_CONFIG->isAccelerated("main")) {
		assert(0 && "main function cannot be accelerated!\n");
	}

	//find all accelerators which are internal to another accelerator
	//internal accelerators are created when an accelerated function contains pthreads or openmp 
	//Only the uppermost function (where it's a user-designated function, pthread function, or openmp function) are created as Avalon accelerators.
	findInternalAccels(M, internalAccels);

	modified |= replaceCalls(M, internalAccels, AcceleratedFcts, pthreadFcts);

	generateParallelAccelConfigs(AcceleratedFcts);
	setCacheParameters();
	if (!LEGUP_CONFIG->isPCIeFlow()) {
		printSWfiles(AcceleratedFcts, pthreadFcts);
	} else {
		printSWfilesPCIe(AcceleratedFcts, pthreadFcts);
	}

	modified |= deleteGV(deleteFcts);

	modified |= doFinalization(M);
	return modified;
}

void SwOnly::addAcceleratedFct(const bool isAvalonAccel, accelFcts accel, std::vector<accelFcts> &AcceleratedFcts) {
	//add to AcceleratedFcts only if it doesn't exist already
	if ((find(AcceleratedFcts.begin(), AcceleratedFcts.end(), accel) == AcceleratedFcts.end()) && isAvalonAccel) {
		AcceleratedFcts.push_back(accel);					
	}
}

void SwOnly::printSWfilesPCIe(const std::vector<accelFcts> &AcceleratedFcts, const std::map<Value*, std::string> &pthreadFcts) {

	unsigned long long StartAddr_Wrapper = 0x00000000; //The actual memory address assigned to accelerator, will be the one printed out in C wrapper file
	unsigned long long StartAddr_qsys = 0x00000000; //Memory address used in qsys. Pipeline bridges base address set to f0000000, hence the accelerator only needs the offset from Pipeline bridges base address
	unsigned long long CurrAddr_Wrapper;
	std::string AccelName;	
	int AccelCount = 0, AddrOffset = 0, AddressBusWidth = 0;
	int numAccelerated;

	//make file stream for C wrapper file
	formatted_raw_ostream *file;	
	string wrapperFile = "legup_pcie_wrappers_generated.c"; //wrapper file for accelerator
	file = GetOutputStream(wrapperFile);
	assert(file);
	raw_ostream &Out = *file;

	//make file stream for qsys commands
	formatted_raw_ostream *qsys_file;
	string qsysFile = "legup_qsys_pcie_generated.tcl"; //tcl script to run QSYS
	qsys_file = GetOutputStream(qsysFile);
	assert(qsys_file);
	raw_ostream &qsys = *qsys_file;

	// print C wrapper for all accelerated functions
	// note: we don't need a wrapper for functions _called_ by accelerated
	// functions
	if (!AcceleratedFcts.empty()) {
		wrapperType type;
		Function *F;

		qsys << "load_system pcie_tutorial/qsys_system.qsys\n";
		for (std::vector<accelFcts>::const_iterator I = AcceleratedFcts.begin(), E = AcceleratedFcts.end(); I != E; ++I) {
			type = (*I).type;	
			F = (*I).fct;
			// For parallel accelerators
			// 		Generate Wrapper
			// 		Generate HW.tcl file
			//		Add in QSYS system
			numAccelerated = (*I).numAccelerated;
			for (int i=0; i<numAccelerated; i++) {
				if (type == call || type == seq) {
					//CurrAddr_Wrapper = printMemAddr(Out, F, StartAddr_Wrapper, numcallingWrapper);
					unsigned long long tempStartAddrWrapper = StartAddr_Wrapper & 0x0fffffff;
					CurrAddr_Wrapper = printMemAddr(Out, F, StartAddr_Wrapper, i, type);
					printWrapperPCIe(Out, F, tempStartAddrWrapper, type, i, AccelCount+1, pthreadFcts);
					//printWrapper(Out, F, type, numcallingWrapper);
					AddrOffset = CurrAddr_Wrapper - StartAddr_Wrapper;

					printQSYSFilePCIe(qsys, F, StartAddr_qsys, AccelCount);
					printHWtcl(F, AddrOffset);
					AddressBusWidth = ceil(log (AddrOffset/4) / log (2));		
					StartAddr_Wrapper = StartAddr_Wrapper + 4*pow(2,AddressBusWidth);
					StartAddr_qsys = StartAddr_qsys + 4*pow(2,AddressBusWidth);
					//numcallingWrapper++;
					AccelCount++;
				} else if (type == poll) {
					printWrapper(Out, F, type, i, 0, pthreadFcts);
					//printWrapper(Out, F, type, numpollingWrapper);
					//numpollingWrapper++;
				}
			}
		}
		qsys << "save_system\n\n";
	} else {
		assert(0 && "Accelerated function is never called or optimized away!\n");
	}

	delete file;
	delete qsys_file;

}

void SwOnly::printSWfiles(const std::vector<accelFcts> &AcceleratedFcts, const std::map<Value*, std::string> &pthreadFcts) {

	unsigned long long StartAddr_Wrapper = 0xf0000000; //The actual memory address assigned to accelerator, will be the one printed out in C wrapper file
	unsigned long long StartAddr_Sopc = 0x00000000; //Memory address used in SOPC Builder. Pipeline bridges base address set to f0000000, hence the accelerator only needs the offset from Pipeline bridges base address
	unsigned long long CurrAddr_Wrapper;
	std::string AccelName;	
	int AccelCount = 0, AddrOffset = 0, AddressBusWidth = 0;
	int numAccelerated;

	//make file stream for C wrapper file
	formatted_raw_ostream *file;	
	string wrapperFile = "legup_wrappers.c"; //wrapper file for accelerator
	file = GetOutputStream(wrapperFile);
	assert(file);
	raw_ostream &Out = *file;

	//make file stream for Modelsim waves
	formatted_raw_ostream *wave_file;
	string waveFile = "wave.do"; //wave.do file for Modelsim (automatically adds certain signals to wave window)
	wave_file = GetOutputStream(waveFile);
	assert(wave_file);
	raw_ostream &wave = *wave_file;

	//make file stream for Sopc commands
	formatted_raw_ostream *sopc_file;
	string sopcFile = "legup_sopc.tcl"; //tcl script to run SOPC builder
	sopc_file = GetOutputStream(sopcFile);
	assert(sopc_file);
	raw_ostream &sopc = *sopc_file;

	//initializing modelsim wave file with common processor signals
	initWaveFile(wave);

	// print C wrapper for all accelerated functions
	// note: we don't need a wrapper for functions _called_ by accelerated
	// functions
	if (!AcceleratedFcts.empty()) {
		wrapperType type;
		Function *F;

		sopc << "load_system tiger/tiger.sopc\n";
		printSopcFileInitial(sopc);
		printCacheParametersFile();
		printCacheHWtcl();
		for (std::vector<accelFcts>::const_iterator I = AcceleratedFcts.begin(), E = AcceleratedFcts.end(); I != E; ++I) {
			type = (*I).type;	
			F = (*I).fct;
			//F->addFnAttr(1<<11); //adding noinline attribute to function
			//for parallel accelerators, generated wrapper and sopc function for each instance
			numAccelerated = (*I).numAccelerated;
			for (int i=0; i<numAccelerated; i++) {
				if (type == call || type == seq) {
					//Adding accelerator top signals to Modelsim wave file	
					addAcceltoWaveFile(wave, F, AccelCount);	
					//CurrAddr_Wrapper = printMemAddr(Out, F, StartAddr_Wrapper, numcallingWrapper);
					CurrAddr_Wrapper = printMemAddr(Out, F, StartAddr_Wrapper, i, type);
					printWrapper(Out, F, type, i, AccelCount+1, pthreadFcts);
					//printWrapper(Out, F, type, numcallingWrapper);
					AddrOffset = CurrAddr_Wrapper - StartAddr_Wrapper;

					//print tcl which controls SOPC builder to add accelerator to system
					printSopcFile(sopc, F, StartAddr_Sopc, AccelCount);
					printHWtcl(F, AddrOffset);
					AddressBusWidth = ceil(log (AddrOffset/4) / log (2));		
					StartAddr_Wrapper = StartAddr_Wrapper + 4*pow(2,AddressBusWidth);
					StartAddr_Sopc = StartAddr_Sopc + 4*pow(2,AddressBusWidth);
					AccelCount++;
				} else if (type == poll) {
					printWrapper(Out, F, type, i, 0, pthreadFcts);
				}
			}
		}
		sopc << "save_system\n\n";
		sopc << "generate_system\n";
	} else {
		assert(0 && "Accelerated function is never called or optimized away!\n");
	}

	finishWaveFile(wave);

	delete file;
	delete wave_file;
	delete sopc_file;

}

//returns true if replaced
bool SwOnly::replacePthreadFunctions(Module &M, BasicBlock::iterator I, CallInst *CI, Function *calledFunction, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts, std::map<Value*, std::string> &pthreadFcts) {

	bool replaced = false;
	//pthread_create
	if (calledFunction->getName().str() == "pthread_create") {
		replacePthreadCreate(M, CI, I, pthreadFcts, AcceleratedFcts, internalAccels);			
		replaced = true;
	} 
	//if this is a pthread join
	else if (calledFunction->getName().str() == "pthread_join") {
		replacePthreadJoin(M, CI, I, pthreadFcts, AcceleratedFcts, internalAccels);
		replaced = true;
	}
	//if locks are used in the program
	else if (calledFunction->getName().str() == "pthread_mutex_lock") {
		lockUsed = true;
		replaced = true;
	}
	//if barriers are used in the program
	else if (calledFunction->getName().str() == "legup_barrier_init") {
		barrierUsed = true;
		replaced = true;
	}

	return replaced;
}


//replace OpenMp functions, returns true if replaced
bool SwOnly::replaceOMPFunctions(Module &M, Function::iterator BB, BasicBlock::iterator I, CallInst *CI, Function *calledFunction, int &numOMPthreads, std::string &ompFuncName, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts) {

	accelFcts accel;
	bool replaced = false, isAvalonAccel = false;
	//GOMP_parallel_start
	if (calledFunction->getName().str() == "GOMP_parallel_start") {
		//OpenMP is used in this program	
		ompUsed = true;
		//replace call to OMP function call with legup function calls
		isAvalonAccel = replaceOMPParallelStart(M, BB, I, CI, accel, numOMPthreads, ompFuncName, internalAccels);
		//add this accelerated function if it doesn't exist already
		addAcceleratedFct(isAvalonAccel, accel, AcceleratedFcts);
		replaced = true;
	}
	//GOMP_parallel_end
	else if (calledFunction->getName().str() == "GOMP_parallel_end") {	
		//OpenMP is used in this program	
		ompUsed = true;
		//replace call to OMP function call with legup function calls
		isAvalonAccel = replaceOMPParallelEnd(M, I, CI, accel, numOMPthreads, ompFuncName, internalAccels);
		//add this accelerated function if it doesn't exist already
		addAcceleratedFct(isAvalonAccel, accel, AcceleratedFcts);
		replaced = true;
	} 
	//if there is a function call to the OMP function, we delete it, otherwise this function will be executed on the processor
	else if (calledFunction->getName().str().c_str() == ompFuncName) {
		//delete the original call instruction 
		deleteInstruction(CI);
		replaced = true;
	}

	return replaced;
}


bool SwOnly::replaceSequentialFunction(CallInst *CI, Function *calledFunction, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts) {

	accelFcts accel;
	bool isAvalonAccel, modified=false;

	if (LEGUP_CONFIG->isAccelerated(*calledFunction))
	 {
		modified |= replaceHwCallWithWrapper(CI, calledFunction, seq);
		accel.fct = calledFunction;
		accel.type = seq;
		accel.numAccelerated = 1;
		isAvalonAccel = (internalAccels.find(calledFunction) == internalAccels.end());
		addAcceleratedFct(isAvalonAccel, accel, AcceleratedFcts);;
	}
	return modified;
}


bool SwOnly::replaceCalls(Module &M, const std::set<Function*> &internalAccels, std::vector<accelFcts> &AcceleratedFcts, std::map<Value*, std::string> &pthreadFcts) {

	bool modified = false;
	int numOMPthreads=0;
	std::string ompFuncName;
	// replace all calls to accelerated functions with calls to the wrapper

    formatted_raw_ostream *sopc_file;
	string sopcFile = "trace.tcl"; //tcl script to run SOPC builder
	sopc_file = GetOutputStream(sopcFile);
	assert(sopc_file);
	raw_ostream &sopc = *sopc_file;

	for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F) {
		for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
			for (BasicBlock::iterator I = BB->begin(), E = BB->end(); I != E;) {
				if (CallInst *CI = dyn_cast<CallInst>(I++)) {

					Function *calledFunction = CI->getCalledFunction();
					//ignore indirect function calls
					if (!calledFunction) continue;

					//do not automatically replace OpenMP and Pthread functions in the PCIe flow
					if (LEGUP_CONFIG->isPCIeFlow()) {
						//replace sequential functions if there are any
						modified |= replaceSequentialFunction(CI, calledFunction, internalAccels, AcceleratedFcts);
						continue;
					}
                    
                    

					//replace OpenMP functions if there are any, continue if replaced
					if (replaceOMPFunctions(M, BB, I, CI, calledFunction, numOMPthreads, ompFuncName, internalAccels, AcceleratedFcts)) continue;

					//replace Pthread functions if there are any, continue if replaced
  					//if (replacePthreadFunctions(M, I, CI, calledFunction, internalAccels, AcceleratedFcts, pthreadFcts)) continue;

					//replace sequential functions if there are any
					string Name = calledFunction->getName();
	                stripInvalidCharacters(Name);
					sopc << Name << "\n";
					modified |= replaceSequentialFunction(CI, calledFunction, internalAccels, AcceleratedFcts);
				}
			}
		}
	}
	delete sopc_file;
	return modified;
}

/// replaceHwCallWithWrapper - replace the call instruction with a call to the
/// legup wrapper function
bool SwOnly::replaceHwCallWithWrapper(CallInst *CI, Function *calledFunction, wrapperType type)
{
	string wrapperName = getWrapperName(calledFunction, type);

	ReplaceCallWith(wrapperName.c_str(), CI, copyArguments(CI->op_begin(), CI->op_end()-1), calledFunction->getReturnType());

	return false;
}


void SwOnly::printWrapperPrototype(raw_ostream &Out, bool &voidtype, const wrapperType type, const int wrapperNum, Function *F) {
	string wrapperName = getWrapperName(F, type);
	const Type* rT = F->getReturnType();
	std::string functionPrototype;

	//print return type
	if (type == call) {
		//if calling function, it's always void
		voidtype = true;
		functionPrototype.append("void ");
	} else {
		if (rT->getTypeID() == Type::VoidTyID) {
			voidtype = true;
			functionPrototype.append("void ");
		} else {
			functionPrototype.append(printType(rT, false));
		}
	}

	//wrapper function name, add indexes if this is a parallel function
	if (type == call || type == poll) {
		std::stringstream ss;
		ss << wrapperNum;
		wrapperName+=ss.str();
	}

	functionPrototype.append(wrapperName);		
	functionPrototype.append("(");

	//for either calling or sequential wrapper
	if (type == call || type == seq) {
		//print each argument
		for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end(); i != e; ++i) {
			if (i == F->arg_begin())
				functionPrototype.append("");					
			else
				functionPrototype.append(", ");		
			functionPrototype.append(printType(i->getType(), false));
			std::string argName = i->getName();
			stripInvalidCharacters(argName);
			functionPrototype.append(argName);
		}
		functionPrototype.append(")");
	} else {
		//polling wrapper never has any arguments
		functionPrototype.append(")");
	}

	Out << functionPrototype << "\n{\n"; 
}

void SwOnly::printWrapperThreadIDArgument(raw_ostream &Out, const wrapperType type, const std::string AccelName, const int wrapperNum, int &ArgIdx, const int threadID) {

	if (type == call) {
		Out << "\t*" << AccelName << wrapperNum << "_ARG" << ArgIdx << " = (volatile int) "; 
	} else {
		Out << "\t*" << AccelName << "_ARG" << ArgIdx << " = (volatile int) "; 
	}
	Out << threadID << ";\n";
	ArgIdx++;
}

void SwOnly::printWrapperSTATUSArgument(raw_ostream &Out, const wrapperType type, const std::string AccelName, const int wrapperNum) {

	if (type == call) {
                Out << "\t*" << AccelName << wrapperNum << "_FINISH = 0;\n"; 
		Out << "\t*" << AccelName << wrapperNum << "_STATUS = 1;\n";
	} else if (type == poll) {
		Out << "\twhile (*" << AccelName << wrapperNum << "_STATUS == 0){}\n";
	} else {
                Out << "\t*" << AccelName << "_FINISH = 0;\n";
		Out << "\t*" << AccelName << "_STATUS = 1;\n";
	}
}

void SwOnly::printWrapperArguments(raw_ostream &Out, const wrapperType type, const std::string AccelName, const int wrapperNum, const int threadID, Function *F) {

	int ArgIdx = 1;
	Type * ITy;
	std::string argName;

	//if calling or seq wrapper, send arguments and give start signal
	if (type == call || type == seq) {
		
		//for each argument in this function
		for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end(); i != e; ++i) {
			//if parallel function, also print wrapper number
			if (type == call) {
				Out << "\t*" << AccelName << wrapperNum << "_ARG" << ArgIdx << " = "; 
			} else {
				Out << "\t*" << AccelName << "_ARG" << ArgIdx << " = "; 
			}
	
			//get the type of this argument
			ITy = i->getType();
			//if integer type
			if (ITy->isIntegerTy()) {
				//if 64 bits
				if (ITy->isIntegerTy(64)) {
					Out << "(volatile long long) ";
				} else {
					Out << "(volatile int) ";
				}
			}
			else if (ITy->isFloatTy()) {
				Out << "(volatile float) ";
			}
			else if (ITy->isDoubleTy()) {
				Out << "(volatile double) ";
			}
			//otherwise, just use int
			else {
				Out << "(volatile int) ";
			}

			//get name of argument
			argName = i->getName();
			stripInvalidCharacters(argName);
			Out << argName << ";\n";
			//increment argument index
			ArgIdx++;	
		} 

		//if locks are used, insert an extra argument to pass in the threadID
		if (lockUsed) {
			printWrapperThreadIDArgument(Out, type, AccelName, wrapperNum, ArgIdx, threadID);
		}
	}

	//if calling or seq wrapper, print STATUS pointer to start accelerator
	//if polling wrapper, print polling loop
	printWrapperSTATUSArgument(Out, type, AccelName, wrapperNum);
}


void SwOnly::printWrapperReturn(raw_ostream &Out, const bool voidtype, const wrapperType type, const std::string AccelName, const int wrapperNum, const std::map<Value*, std::string> &pthreadFcts) {

	//if sequential or polling wrapper, and the function is not a void type, retrieve return value
	if ((type == seq || type == poll) && !voidtype) {
		//sequential wrapper
		if (type == seq) {
                        Out << "\twhile (*" << AccelName << "_FINISH == 0){}\n";
			Out << "\treturn *" << AccelName << "_DATA;\n";
		//polling wrapper
		} else {
			//check if this function is a pthread function
			//we need to know this since pthreads return a char*
			bool isPthread = isPthreadFunction(AccelName, pthreadFcts);

			//if pthread function
			if (isPthread) {
                                Out << "\twhile (*" << AccelName << wrapperNum << "_FINISH == 0){}\n";
				Out << "\treturn (char*)*" << AccelName << wrapperNum << "_DATA;\n";
			//else regular polling function
			} else {
                                Out << "\twhile (*" << AccelName << wrapperNum << "_FINISH == 0){}\n";
				Out << "\treturn *" << AccelName << wrapperNum << "_DATA;\n";
			}
		}
	}
	Out << "}\n\n";
}


/// printWrapper - print the C code of the legup wrapper for a function to
// the wrapper file.
// look in CBackend
void SwOnly::printWrapper(raw_ostream &Out, Function *F, const wrapperType type, const int wrapperNum, const int threadID, const std::map<Value*, std::string> &pthreadFcts) {
	string AccelName = F->getName();
	stripInvalidCharacters(AccelName);
	bool voidtype = false;

	printWrapperPrototype(Out, voidtype, type, wrapperNum, F);
	printWrapperArguments(Out, type, AccelName, wrapperNum, threadID, F);
	printWrapperReturn(Out, voidtype, type, AccelName, wrapperNum, pthreadFcts);
}

/// printWrapper - print the C code of the legup wrapper for a function to
// the wrapper file.
// look in CBackend
void SwOnly::printWrapperPCIe(raw_ostream &Out, Function *F, const unsigned long long startAddress, const wrapperType type, const int wrapperNum, const int threadID, const std::map<Value*, std::string> &pthreadFcts) {
	string AccelName = F->getName();
	stripInvalidCharacters(AccelName);
	bool voidtype = false;

	Out << "#include \"alt_up_pci_lib_helper.h\"\n\n";
	printWrapperPrototype(Out, voidtype, type, wrapperNum, F);
	
	
	// 4 bytes for status
	int numOfBytesForArgs = 4;
	Type * ITy;
	//for each argument in this function
	for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end(); i != e; ++i) {
		//get the type of this argument
		ITy = i->getType();
		//if integer type
		if (ITy->isIntegerTy()) {
			//if 64 bits
			if (ITy->isIntegerTy(64)) {
				numOfBytesForArgs += 8;
			} else {
				numOfBytesForArgs += 4;
			}
		}
		else if (ITy->isDoubleTy()) {
			numOfBytesForArgs += 8;
		} else {
			numOfBytesForArgs += 4;
		}
	}

	Out << "\tchar LEGUP_BUF[" << numOfBytesForArgs << "] = {};\n"
		<< "\tint LEGUP_STATUS = 1;\n";

	const Type* rT = F->getReturnType();
	bool isVoidReturn = false;
	//print return type
	if (type == call) {
		//if calling function, it's always void
		isVoidReturn = true;
	} else {
		if (rT->getTypeID() == Type::VoidTyID) {
			isVoidReturn = true;
		} else {
			Out << "\t" << printType(rT, false) << "LEGUP_RET_VAL;\n";
			isVoidReturn = false;
		}
	}

	Out << "\n";

	// 4 bytes for status
	int byteNum = 4, byteOffset = 0;
	std::string argName;
		
	//for each argument in this function
	for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end(); i != e; ++i) {
		Out << "\t*";

		//get the type of this argument
		ITy = i->getType();
		//if integer type
		if (ITy->isIntegerTy()) {
			//if 64 bits
			if (ITy->isIntegerTy(64)) {
				Out << "(long long *) ";
				byteOffset = 8;
			} else {
				Out << "(int *) ";
				byteOffset = 4;
			}
		}
		else if (ITy->isFloatTy()) {
			Out << "(float *) ";
			byteOffset = 4;
		}
		else if (ITy->isDoubleTy()) {
			Out << "(double *) ";
			byteOffset = 8;
		}
		else {
			Out << "(int *) ";
			byteOffset = 4;
		}
		//get name of argument
		argName = i->getName();
		stripInvalidCharacters(argName);
		Out << "(LEGUP_BUF + " << byteNum << ") = " << argName << ";\n";
		byteNum += byteOffset;
	}
	Out << "\n"
		<< "\tpci_write_data(LEGUP_BUF, sizeof(LEGUP_BUF), (int)("
		<< AccelName << "_STATUS));\n"
		<< "\tpci_write_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)("
		<< AccelName << "_STATUS));\n"
		<< "\tpci_dma_go();\n"
		<< "\tdo {\n"
		<< "\t\tpci_read_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)("
		<< AccelName << "_STATUS));\n";
	if (!isVoidReturn) {
		Out << "\t\tpci_read_data(&LEGUP_RET_VAL, sizeof(LEGUP_RET_VAL), (int)("
		    << AccelName << "_DATA));\n";
	}
	
	Out << "\t\tpci_dma_go();\n"
		<< "\t} while (LEGUP_STATUS == 0);\n"
		<< "\n";

	if (!isVoidReturn) {
		Out << "\treturn LEGUP_RET_VAL;\n";
	}

	Out << "}\n";
}


const char * SwOnly::printIntType (const Type * Ty)
{
	int NumBits;
	const char * type;
	const IntegerType *ITy = dyn_cast<IntegerType>(Ty);
	NumBits = ITy->getBitWidth();
	if (NumBits == 1) 
	  	type = "bool ";
	else if (NumBits <= 8)
		type = "char ";
	else if (NumBits <= 16)
		type = "short ";
	else if (NumBits <= 32)
		type = "int ";
	else if (NumBits <= 64)
		type = "long long ";
	else {
		assert(0 && "Unsupported Integer type!\n");
	}
	return type;	
}


const char * SwOnly::printFloatType (const Type * Ty)
{
	const char * type;
	if (Ty->isFloatTy()) 
		type = "float ";
	else if (Ty->isDoubleTy())
		type = "double ";
	else {
		assert(0 && "Unsupported Floating point type!\n");
	}
	return type;	
}


bool SwOnly::isPthreadFunction (std::string AccelName, const std::map<Value*, std::string> &pthreadFcts) {
	for (std::map<Value*, string>::const_iterator iter=pthreadFcts.begin(); iter != pthreadFcts.end(); iter++) {
		if (iter->second == AccelName) {
			return true;
		}
	}	
	return false;
}

void SwOnly::printDATApointer(raw_ostream &Out, const std::string AccelName, const int accelNum, const Type *rT, const wrapperType type, unsigned long long &CurAddr) {
	//print only if not a void return type
	if (rT->getTypeID() != Type::VoidTyID){
		if (type == call) { //if this is a parallel function
			Out << "#define " << AccelName << accelNum << "_DATA\t" << "(volatile";
		} else {
			Out << "#define " << AccelName << "_DATA\t" << "(volatile";
		}
		if (rT->getTypeID() == Type::IntegerTyID) {
			if (cast<IntegerType>(rT)->getBitWidth() == 64) {
				Out << " long long * ) ";
			}
			else {
				Out << " int * ) ";
			}
		} else {
				Out << " int * ) ";
		}
		Out << "0x";   
		Out.write_hex(CurAddr);
		Out << "\n";	
	}

	//increment for next pointer
	//incrememt by 8 since it can be a long long pointer
	CurAddr = CurAddr + 8;
}

void SwOnly::printSTATUSpointer(raw_ostream &Out, const std::string AccelName, const int accelNum, const wrapperType type, unsigned long long &CurAddr) {
	if (type == call) { //if this is a parallel function
		Out << "#define " << AccelName << accelNum << "_STATUS\t" << "(volatile int * ) 0x";
	} else {
		Out << "#define " << AccelName << "_STATUS\t" << "(volatile int * ) 0x";
	}
	Out.write_hex(CurAddr);
	Out << "\n";
	
	//increment for next pointer
	CurAddr = CurAddr + 4;

	if (type == call) { //if this is a parallel function
		Out << "#define " << AccelName << accelNum << "_FINISH\t" << "(volatile int * ) 0x";
	} else {
		Out << "#define " << AccelName << "_FINISH\t" << "(volatile int * ) 0x";
	}
	Out.write_hex(CurAddr);
	Out << "\n";
	
	//increment for next pointer
	CurAddr = CurAddr + 4;
        
}

void SwOnly::printARGpointers(raw_ostream &Out, const std::string AccelName, const int accelNum, const wrapperType type, Function *F, unsigned long long &CurAddr) {

	int ArgNum = 1;
	bool arg64bit = false;
	//for every argument into the function, print a pointer
	for (Function::arg_iterator it = F->arg_begin(), e = F->arg_end(); it != e; ++it) {
		//if this is a parallel function
		if (type == call) { 
			//need to print out accelNum since there can be multiple instances of the same function
			Out << "#define " << AccelName << accelNum << "_ARG" << ArgNum << "\t" << "(volatile ";
		} else {
			Out << "#define " << AccelName << "_ARG" << ArgNum << "\t" << "(volatile ";	
		}
		//if integer type
		if (const IntegerType *ITy = dyn_cast<IntegerType>(it->getType())) {
			//if 64 bits 
			if (ITy->getBitWidth() == 64) {
				Out << "long long * ) 0x";
				arg64bit = true;
			}
			//if 32 bits
			else {
				Out << "int * ) 0x";
				arg64bit = false;
			}
		}
		else if (it->getType()->isFloatTy()) {
			Out << "float * ) 0x";
			arg64bit = false;
		}
		else if (it->getType()->isDoubleTy()) {
			Out << "double * ) 0x";
			arg64bit = true;
		}
		//otherwise just use int
		else {
			Out << "int * ) 0x";
			arg64bit = false;
		}	
		Out.write_hex(CurAddr);
		//incrememt address for next pointer
		if (arg64bit) {
			CurAddr = CurAddr + 8;
		}
		else {
			CurAddr = CurAddr + 4;			
		}
		ArgNum++;
		Out << "\n";
	}

	//if locks are used, insert an extra argument to pass in the threadID
	if (lockUsed) {
		if (type == call) { //if this is a parallel function
			Out << "#define " << AccelName << accelNum << "_ARG" << ArgNum << "\t" << "(volatile int * ) 0x";
		} else {
			Out << "#define " << AccelName << "_ARG" << ArgNum << "\t" << "(volatile int * ) 0x";	
		}
		Out.write_hex(CurAddr);
		CurAddr = CurAddr + 4;			
		ArgNum++;
		Out << "\n";
	}
	Out << "\n";
}

//Prints memory mapped addresses which will be used to send arguments, poll status, and retrieve return value
unsigned long long SwOnly::printMemAddr(raw_ostream &Out, Function *F, unsigned long long CurAddr, int accelNum, wrapperType type) {

	//get accel name	
	std::string AccelName = F->getName();
	stripInvalidCharacters(AccelName);

	//get return type
	const Type* rT = F->getReturnType();

	//print DATA, STATUS, and ARG pointers
	printDATApointer(Out, AccelName, accelNum, rT, type, CurAddr);
	printSTATUSpointer(Out, AccelName, accelNum, type, CurAddr);
	printARGpointers(Out, AccelName, accelNum, type, F, CurAddr);

	return CurAddr;
}

void SwOnly::printCacheHWtcl() {

	formatted_raw_ostream *HW_tcl;
	std::string fileName = "data_cache_hw.tcl";
	HW_tcl = GetOutputStream(fileName);
	assert(HW_tcl);
	raw_ostream &tcl = *HW_tcl;

	int sdramSize;
	if (FPGABoard == "DE4") {
		sdramSize = 256;
	} else {
		sdramSize = 32;
	}
	int byteenableSize = sdramSize/8;

	tcl << "package require -exact sopc 11.0\n\n"
	<< "set_module_property NAME data_cache\n"
	<< "set_module_property VERSION 1.0\n"
	<< "set_module_property INTERNAL false\n"
	<< "set_module_property OPAQUE_ADDRESS_MAP true\n"
	<< "set_module_property DISPLAY_NAME data_cache\n"
	<< "set_module_property TOP_LEVEL_HDL_FILE data_cache.v\n"
	<< "set_module_property TOP_LEVEL_HDL_MODULE data_cache\n"
	<< "set_module_property INSTANTIATE_IN_SYSTEM_MODULE true\n"
	<< "set_module_property EDITABLE true\n"
	<< "set_module_property ANALYZE_HDL TRUE\n\n"

	<< "add_file data_cache.v {SYNTHESIS SIMULATION}\n\n"
	
	<< "add_interface clockreset clock end\n"
	<< "set_interface_property clockreset clockRate 0\n"
	<< "set_interface_property clockreset ENABLED true\n"
	<< "add_interface_port clockreset csi_clockreset_clk clk Input 1\n"
	<< "add_interface_port clockreset csi_clockreset_reset_n reset_n Input 1\n\n";
 
	if (multiportedCache && dcacheType == "MP" && FPGABoard == "DE4") {
		tcl << "add_interface clockreset2X clock end\n"
		<< "set_interface_property clockreset2X clockRate 0\n"
		<< "set_interface_property clockreset2X ENABLED true\n"
		<< "add_interface_port clockreset2X csi_clockreset2X_clk clk Input 1\n\n"

		<< "add_interface clockreset2X_reset reset end\n"
		<< "set_interface_property clockreset2X_reset associatedClock clockreset\n"
		<< "set_interface_property clockreset2X_reset synchronousEdges DEASSERT\n"
		<< "set_interface_property clockreset2X_reset ENABLED true\n"
		<< "add_interface_port clockreset2X_reset csi_clockreset2X_reset_n reset_n Input 1\n\n";
	}

	tcl << "add_interface PROC avalon_streaming start\n"
	<< "set_interface_property PROC associatedClock clockreset\n"
	<< "set_interface_property PROC dataBitsPerSymbol 8\n"
	<< "set_interface_property PROC errorDescriptor \"\"\n"
	<< "set_interface_property PROC maxChannel 0\n"
	<< "set_interface_property PROC readyLatency 0\n"
	<< "set_interface_property PROC ENABLED true\n"
	<< "add_interface_port PROC aso_PROC_data data Output 8\n\n";

	for (int i=0; i<dcacheports; i++) {
		tcl << "add_interface CACHE" << i << " avalon end\n"
		<< "set_interface_property CACHE" << i << " addressAlignment DYNAMIC\n"
		<< "set_interface_property CACHE" << i << " addressUnits WORDS\n"
		<< "set_interface_property CACHE" << i << " associatedClock clockreset\n"
		<< "set_interface_property CACHE" << i << " burstOnBurstBoundariesOnly false\n"
		<< "set_interface_property CACHE" << i << " explicitAddressSpan 0\n"
		<< "set_interface_property CACHE" << i << " holdTime 0\n"
		<< "set_interface_property CACHE" << i << " isMemoryDevice false\n"
		<< "set_interface_property CACHE" << i << " isNonVolatileStorage false\n"
		<< "set_interface_property CACHE" << i << " linewrapBursts false\n"
		<< "set_interface_property CACHE" << i << " maximumPendingReadTransactions 0\n"
		<< "set_interface_property CACHE" << i << " printableDevice false\n"
		<< "set_interface_property CACHE" << i << " readLatency 0\n"
		<< "set_interface_property CACHE" << i << " readWaitTime 1\n"
		<< "set_interface_property CACHE" << i << " setupTime 0\n"
		<< "set_interface_property CACHE" << i << " timingUnits Cycles\n"
		<< "set_interface_property CACHE" << i << " writeWaitTime 0\n"
		<< "set_interface_property CACHE" << i << " ENABLED true\n\n"

		<< "add_interface_port CACHE" << i << " avs_CACHE" << i << "_begintransfer begintransfer Input 1\n"
		<< "add_interface_port CACHE" << i << " avs_CACHE" << i << "_read read Input 1\n"
		<< "add_interface_port CACHE" << i << " avs_CACHE" << i << "_write write Input 1\n"
		<< "add_interface_port CACHE" << i << " avs_CACHE" << i << "_writedata writedata Input 128\n"
		<< "add_interface_port CACHE" << i << " avs_CACHE" << i << "_readdata readdata Output 128\n"
		<< "add_interface_port CACHE" << i << " avs_CACHE" << i << "_waitrequest waitrequest Output 1\n\n"

		<< "add_interface dataMaster" << i << " avalon start\n"
		<< "set_interface_property dataMaster" << i << " addressUnits SYMBOLS\n"
		<< "set_interface_property dataMaster" << i << " associatedClock clockreset\n"
		<< "set_interface_property dataMaster" << i << " burstOnBurstBoundariesOnly false\n"
		<< "set_interface_property dataMaster" << i << " doStreamReads false\n"
		<< "set_interface_property dataMaster" << i << " doStreamWrites false\n"
		<< "set_interface_property dataMaster" << i << " linewrapBursts false\n"
		<< "set_interface_property dataMaster" << i << " readLatency 0\n"
		<< "set_interface_property dataMaster" << i << " ENABLED true\n\n"

		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_read read Output 1\n"
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_write write Output 1\n"
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_address address Output 32\n"

		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_writedata writedata Output " << sdramSize <<"\n"
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_byteenable byteenable Output " << byteenableSize << "\n"
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_readdata readdata Input " << sdramSize <<"\n"
			
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_beginbursttransfer beginbursttransfer Output 1\n"
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_burstcount burstcount Output 6\n"
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_waitrequest waitrequest Input 1\n"
		<< "add_interface_port dataMaster" << i << " avm_dataMaster" << i << "_readdatavalid readdatavalid Input 1\n\n";
	}

	delete HW_tcl;
}

//print _hw.tcl file to specify interface specs for the accelerator (needed for SOPC builder)
void SwOnly::printHWtcl(Function * F, int AddrOffset) {

	formatted_raw_ostream *HW_tcl;
	string AccelName = F->getName();
	stripInvalidCharacters(AccelName);
	HW_tcl = GetOutputStream(AccelName.append("_hw.tcl"));
	assert(HW_tcl);
	raw_ostream &tcl = *HW_tcl;
	AccelName = F->getName();
	stripInvalidCharacters(AccelName);
	string AccelFilename = std::getenv ("LEGUP_ACCELERATOR_FILENAME");
	//getting the bitwidth of address bus of accelerator
	//bitwidth = (log (#_of_32bit_arguments)+ 3) / log(2)
	//one 64bit argument = two 32bit arguments
	int AddressBusWidth = ceil(log (AddrOffset/4) / log (2));
	tcl << "package require -exact sopc 11.0\n\n"

	<< "set_module_property NAME " << AccelName <<"\n"
	<< "set_module_property VERSION 1.0\n"
	<< "set_module_property INTERNAL false\n"
	<< "set_module_property GROUP \"\"\n"
	<< "set_module_property DISPLAY_NAME " << AccelName <<"\n"
	<< "set_module_property TOP_LEVEL_HDL_FILE " << AccelFilename << ".v\n" 
	<< "set_module_property TOP_LEVEL_HDL_MODULE " << AccelName << "_top\n"
	<< "set_module_property INSTANTIATE_IN_SYSTEM_MODULE true\n"
	<< "set_module_property EDITABLE true\n"
	<< "set_module_property ANALYZE_HDL TRUE\n\n"
	<< "add_file " << AccelFilename << ".v {SYNTHESIS SIMULATION}\n\n"
	<< "add_interface clockreset clock end\n"
	<< "set_interface_property clockreset ENABLED true\n"
	<< "add_interface_port clockreset csi_clockreset_clk clk Input 1\n"
	<< "add_interface_port clockreset csi_clockreset_reset reset Input 1\n\n"

	<< "add_interface s1 avalon end\n"
	<< "set_interface_property s1 addressAlignment DYNAMIC\n"
	<< "set_interface_property s1 associatedClock clockreset\n"
	<< "set_interface_property s1 burstOnBurstBoundariesOnly false\n"
	<< "set_interface_property s1 explicitAddressSpan 0\n"
	<< "set_interface_property s1 holdTime 0\n"
	<< "set_interface_property s1 isMemoryDevice false\n"
	<< "set_interface_property s1 isNonVolatileStorage false\n"
	<< "set_interface_property s1 linewrapBursts false\n"
	<< "set_interface_property s1 maximumPendingReadTransactions 0\n"
	<< "set_interface_property s1 printableDevice false\n"
	<< "set_interface_property s1 readLatency 0\n"
	<< "set_interface_property s1 readWaitTime 1\n"
	<< "set_interface_property s1 setupTime 0\n"
	<< "set_interface_property s1 timingUnits Cycles\n"
	<< "set_interface_property s1 writeWaitTime 0\n\n"

	<< "set_interface_property s1 ASSOCIATED_CLOCK clockreset\n"
	<< "set_interface_property s1 ENABLED true\n\n"

	<< "add_interface_port s1 avs_s1_address address Input " << AddressBusWidth << "\n"
	<< "add_interface_port s1 avs_s1_read read Input 1\n"
	<< "add_interface_port s1 avs_s1_write write Input 1\n"
	<< "add_interface_port s1 avs_s1_writedata writedata Input 32\n" //always 32 bits since its a 32 bit processor
	<< "add_interface_port s1 avs_s1_readdata readdata Output 32\n" 

 	<< "add_interface ACCEL avalon start\n"
	<< "set_interface_property ACCEL associatedClock clockreset\n"
	<< "set_interface_property ACCEL burstOnBurstBoundariesOnly false\n"
	<< "set_interface_property ACCEL doStreamReads false\n"
	<< "set_interface_property ACCEL doStreamWrites false\n"
	<< "set_interface_property ACCEL linewrapBursts false\n\n"

	<< "set_interface_property ACCEL ASSOCIATED_CLOCK clockreset\n"
	<< "set_interface_property ACCEL ENABLED true\n"

	<< "add_interface_port ACCEL avm_ACCEL_readdata readdata Input 128\n"
	<< "add_interface_port ACCEL avm_ACCEL_waitrequest waitrequest Input 1\n"
	<< "add_interface_port ACCEL avm_ACCEL_address address Output 32\n"
	<< "add_interface_port ACCEL avm_ACCEL_writedata writedata Output 128\n"
	<< "add_interface_port ACCEL avm_ACCEL_write write Output 1\n"
	<< "add_interface_port ACCEL avm_ACCEL_read read Output 1\n\n";

	if (ompUsed || lockUsed || barrierUsed) {
	 	tcl << "add_interface API avalon start\n"
		<< "set_interface_property API associatedClock clockreset\n"
		<< "set_interface_property API burstOnBurstBoundariesOnly false\n"
		<< "set_interface_property API doStreamReads false\n"
		<< "set_interface_property API doStreamWrites false\n"
		<< "set_interface_property API linewrapBursts false\n\n"

		<< "set_interface_property API ASSOCIATED_CLOCK clockreset\n"
		<< "set_interface_property API ENABLED true\n"

		<< "add_interface_port API avm_API_readdata readdata Input 32\n"
		<< "add_interface_port API avm_API_waitrequest waitrequest Input 1\n"
		<< "add_interface_port API avm_API_address address Output 32\n"
		<< "add_interface_port API avm_API_writedata writedata Output 32\n"
		<< "add_interface_port API avm_API_write write Output 1\n"
		<< "add_interface_port API avm_API_read read Output 1\n\n";
	}

	delete HW_tcl;
}

//initial part of sopc file, removing the connection only needs to be done once
void SwOnly::printSopcFileInitial(raw_ostream &sopc) {

	//need to first remove data cache and add it again in order to add accelerator port to cache
	sopc << "remove_module data_cache_0\n"
	<< "add_module data_cache data_cache_0\n";

	//add the clock connection
	if (FPGABoard == "DE4") {
		sopc << "add_connection ddr2.sysclk data_cache_0.clockreset\n";
	} else {
		sopc << "add_connection clk.clk data_cache_0.clockreset\n";
	}

	if (multiportedCache && dcacheType == "MP" && FPGABoard == "DE4") {
		sopc << "add_connection ddr2.auxfull data_cache_0.clockreset2X\n";
	}

	//connect the other ports from data cache
	sopc << "add_connection data_cache_0.PROC tiger_top_0.PROC\n";

	for (int i=0; i<dcacheports; i++) {
		sopc << "add_connection data_cache_0.dataMaster"<< i << "  pipeline_bridge_MEMORY.s1\n";
	}

	sopc << "add_connection tiger_top_0.CACHE data_cache_0.CACHE0\n";

	//add omp, lock, barrier cores if needed
	printSopcFileAPIcores(sopc);
}

void SwOnly::printSopcFileAPIcores(raw_ostream &sopc) {

	//if OpenMP is used, connect the omp_core to the processor 
	if (ompUsed) {
		if (FPGABoard == "DE4") {
			sopc << "add_module omp_core omp_core_0\n"
			<< "add_connection ddr2.sysclk omp_core_0.clockreset\n"
			<< "add_connection tiger_top_0.procMaster omp_core_0.s1\n"
			<< "set_avalon_base_address omp_core_0.s1 \"0xc5000000\"\n";
		} else {
			sopc << "add_module omp_core omp_core_0\n"
			<< "add_connection clk.clk omp_core_0.clockreset\n"
			<< "add_connection tiger_top_0.procMaster omp_core_0.s1\n"
			<< "set_avalon_base_address omp_core_0.s1 \"0xc5000000\"\n";
		}
	}

	//if locks are used, connect the mutex core to the processor
	if (lockUsed) {
		sopc << "add_module mutex mutex_0\n"
		<< "add_connection tiger_top_0.procMaster mutex_0.s1\n"
		<< "set_avalon_base_address mutex_0.s1 \"0xc5000020\"\n";
		if (FPGABoard == "DE4") {
			sopc << "add_connection ddr2.sysclk mutex_0.clockreset\n";
		} else {
			sopc << "add_connection clk.clk mutex_0.clockreset\n";
		}
	}

	//if barriers are used, connect the mutex core to the processor
	if (barrierUsed) {
		sopc << "add_module legup_barrier legup_barrier_0\n"
		<< "add_connection tiger_top_0.procMaster legup_barrier_0.s1\n"
		<< "set_avalon_base_address legup_barrier_0.s1 \"0xc5000040\"\n";
		if (FPGABoard == "DE4") {
			sopc << "add_connection ddr2.sysclk legup_barrier_0.clockreset\n";
		} else {
			sopc << "add_connection clk.clk legup_barrier_0.clockreset\n";
		}
	}
}

//prints tcl commands to generate SOPC
void SwOnly::printSopcFile(raw_ostream &sopc, Function * F, unsigned long long baseAddr, int AccelCount) {
	
	//for accelerator	
	std::string moduleName = F->getName();
	stripInvalidCharacters(moduleName);
	sopc << "add_module " << F->getName() << " " << moduleName << "_" << AccelCount << "\n";

	//for DE4, connect the sysclk from ddr2 controller to the clock of accelerator
	//for DE2, connect the system clock to the clock of accelerator
	if (FPGABoard == "DE4") {
		sopc << "add_connection ddr2.sysclk " << moduleName << "_" << AccelCount << ".clockreset\n\n";
	} else {
		sopc << "add_connection clk.clk " << moduleName << "_" << AccelCount << ".clockreset\n\n";
	}

	sopc << "add_connection pipeline_bridge_PERIPHERALS.m1 " << moduleName << "_" << AccelCount << ".s1\n"
	<< "set_avalon_base_address " << moduleName << "_" << AccelCount << ".s1 \"0x"; 
	sopc.write_hex(baseAddr);
	sopc << "\"\n\n";

	int cachePortNum = ((AccelCount+1)%dcacheports);
	sopc << "add_connection " << moduleName << "_" << AccelCount << ".ACCEL data_cache_0.CACHE" << cachePortNum << "\n";
	
	sopc << "set_avalon_base_address data_cache_0.CACHE1 \"0x01000000\"\n\n";

	if (ompUsed) {
		sopc << "add_connection " << moduleName << "_" << AccelCount << ".API omp_core_0.s1\n";
	}

	if (lockUsed) {
		sopc << "add_connection " << moduleName << "_" << AccelCount << ".API mutex_0.s1\n";
	}

	if (barrierUsed) {
		sopc << "add_connection " << moduleName << "_" << AccelCount << ".API legup_barrier_0.s1\n";
	}		
}

//prints tcl commands to generate QSYS
void SwOnly::printQSYSFilePCIe(raw_ostream &qsys, Function * F, unsigned long long baseAddr, int AccelCount) {

	// Runs for each accelerator	
	std::string moduleName = F->getName();
	stripInvalidCharacters(moduleName);
	qsys << "add_instance " << moduleName << "_" << AccelCount << " " << F->getName() << "\n";
	qsys << "\n";

	// Clock & Reset Connections
	// Using PCIe IP clock/reset for now
	qsys << "add_connection pcie_ip.pcie_core_clk " << moduleName << "_" << AccelCount << ".clockreset\n";
	qsys << "add_connection pcie_ip.pcie_core_reset " << moduleName << "_" << AccelCount << ".clockreset_reset\n";
	qsys << "\n";

	// Connections to SGDMA
	qsys << "add_connection sgdma.m_read " << moduleName << "_" << AccelCount << ".s1\n";
	qsys << "add_connection sgdma.m_write " << moduleName << "_" << AccelCount << ".s1\n";

	// We need to find out why this works
	qsys << "add_connection pcie_ip.bar1_0 " << moduleName << "_" << AccelCount << ".s1\n";
	qsys << "\n";

	// Set base address for this accelerator
	// Note: 
	qsys << "set_connection_parameter_value sgdma.m_read/" << moduleName << "_" << AccelCount << ".s1 baseAddress \"0x";
	qsys.write_hex(baseAddr);
	qsys << "\"\n";
	qsys << "set_connection_parameter_value sgdma.m_write/" << moduleName << "_" << AccelCount << ".s1 baseAddress \"0x";
	qsys.write_hex(baseAddr);
	qsys << "\"\n";
	qsys << "set_connection_parameter_value pcie_ip.bar1_0/" << moduleName << "_" << AccelCount << ".s1 baseAddress \"0x";
	qsys.write_hex(baseAddr);
	qsys << "\"\n";	
	qsys << "\n";
}

std::string SwOnly::printType(const Type * Ty, bool MemAddr) {
	std::string str_front = "";
	std::string str_back = "";

	if (dyn_cast<IntegerType>(Ty)) {
		str_front += printIntType(Ty);
	}
	else if (Ty->isFloatingPointTy()) {
		str_front += printFloatType(Ty);
	}
	else if (const PointerType *PTy = dyn_cast<PointerType>(Ty)) {
		const Type * ETy = PTy->getElementType();
		str_front = printType(ETy, MemAddr);
		if (!MemAddr) {
			str_back = "*";
			str_front.append(str_back);
		}
	}
	else if (const ArrayType *ATy = dyn_cast<ArrayType>(Ty)) { //if argument is an array
		const Type * ETy = ATy->getElementType();
		str_front = printType(ETy, MemAddr);
		if (!MemAddr) {
			str_back = "*";
			str_front.append(str_back);
		}	
	}
	else if (dyn_cast<StructType>(Ty)) {
		str_front = "void ";
	}
	else {
		assert(0 && "Unsupported Argument for Accelerator\n");
	}
	return str_front;
}

void SwOnly::getSwFunctions(Module &M, std::set<GlobalValue*> &SwFcts) {

	for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F) {
		if (F->getName() == "main") {
			SwFcts.insert(F);
			for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
				for (BasicBlock::iterator I = BB->begin(), EE = BB->end(); I != EE; ++I) {
					if (CallInst *CI = dyn_cast<CallInst>(I)) {
						Function *calledFunction = CI->getCalledFunction();

						// ignore indirect function calls
						if (!calledFunction) continue;

						if (!(LEGUP_CONFIG->isAccelerated(*calledFunction))) {
							SwFcts.insert(calledFunction);
							addSwFunctions(calledFunction, SwFcts);
						}
					}
				}
			}
		}
	}
}

void SwOnly::addSwFunctions(Function *F, std::set<GlobalValue*> &SwFcts) {

	for (Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB) {
		for (BasicBlock::iterator I = BB->begin(), EE = BB->end(); I != EE;
				++I) {
			if (CallInst *CI = dyn_cast<CallInst>(I)) {

				Function *calledFunction = CI->getCalledFunction();
				// ignore indirect function calls
				if (!calledFunction) continue;

				if (!(LEGUP_CONFIG->isAccelerated(*calledFunction)) && SwFcts.find(calledFunction) == SwFcts.end()) {
					SwFcts.insert(calledFunction);
					addSwFunctions(calledFunction, SwFcts);
				}
			}
		}
	}
}

void SwOnly::getdeleteFunctions(Module &M, std::set<GlobalValue*> SwFcts, std::set<GlobalValue*> &deleteFcts) {

	for (Module::iterator I = M.begin(), E = M.end(); I != E; ++I) {
		Function * F = I;
		if (SwFcts.find(F) == SwFcts.end()) {
			deleteFcts.insert(F);
		}
	}
}

//include common signals signals for processor such as top, decode, branch, and cache signals and configure the modelsim wave file
void SwOnly::initWaveFile(raw_ostream &wave) {

	//add processor, instruction/data cache signals to waves
	wave << "onerror {resume}\n"
	<< "quietly WaveActivateNextPane {} 0\n"
	<< "add wave -noupdate -label clk -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/clk\n"
	<< "add wave -noupdate -label pc -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/core/pc\n"
	<< "add wave -noupdate -label ins -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/ins\n"
	<< "add wave -noupdate -label reset_n -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/reset\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/*\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_data_cache_0/data_cache_0/*\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_data_cache_0/data_cache_0/state\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/InsCache/*\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/InsCache/state\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/core/*\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/core/de/*\n"
	<< "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_tiger_top_0/tiger_top_0/core/de/b/*\n\n";

	//add omp, lock, barrier cores to waves if they are used
	if (ompUsed) {
		wave << "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_omp_core_0/omp_core_0/*\n\n";
	}
	if (lockUsed) {
		wave << "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_mutex_0/mutex_0/*\n\n";
	}
	if (barrierUsed) {
		wave << "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_legup_barrier_0/legup_barrier_0/*\n\n";
	}

	//add multi-ported caches to waves if they are used
	for (int i=0; i<dcacheway; i++) {
		if (dcacheType == "MP") {
			wave << "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_data_cache_0/data_cache_0/loop_instantiateRAM[" << i << "]/dcacheMemIns/*\n\n";
		} else if (dcacheType == "LVT") {
			wave << "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_data_cache_0/data_cache_0/loop_instantiateRAMArbiter[" << i << "]/dcacheMemIns/*\n\n";
			wave << "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_data_cache_0/data_cache_0/loop_instantiateRAMArbiter[" << i << "]/cacheWrite_arbiter/*\n\n";
		}
	}
}

//adding accelerator_top signals to modelsim wave file 
void SwOnly::addAcceltoWaveFile(raw_ostream &wave, Function *F, int AccelCount) {

	std::string AccelName = F->getName();
	stripInvalidCharacters(AccelName);
	wave << "add wave -noupdate -radix hexadecimal /test_bench/DUT/the_" << AccelName << "_" << AccelCount << "/";
//	toLowerCase(AccelName);
	wave << AccelName << "_" << AccelCount << "/*\n\n";
}

//finishing modelsim wave file with some configurations 
void SwOnly::finishWaveFile(raw_ostream &wave) {

	wave << "TreeUpdate [SetDefaultTree]\n"
	<< "configure wave -namecolwidth 556\n"
	<< "configure wave -valuecolwidth 145\n"
	<< "configure wave -justifyvalue left\n"
	<< "configure wave -signalnamewidth 0\n"
	<< "configure wave -snapdistance 10\n"
	<< "configure wave -datasetprefix 0\n"
	<< "configure wave -rowmargin 4\n"
	<< "configure wave -childrowmargin 2\n"
	<< "configure wave -gridoffset 0\n"
	<< "configure wave -gridperiod 1\n"
	<< "configure wave -griddelta 40\n"
	<< "configure wave -timeline 0\n"
	<< "configure wave -timelineunits ns\n"
	<< "WaveRestoreZoom {109112943 ps} {109266688 ps}\n"
	<< "update\n";
}

void SwOnly::printCacheParametersFile () {
	
	//make file
	formatted_raw_ostream *file;
	std::string fileName = "cache_parameters.v";
	file = GetOutputStream(fileName);
	assert(file);
	raw_ostream &Out = *file;

	//assign the bitwidth of burst count
	int DburstCountWidth = 6; //these are hard-coded to 10 bits for now (up to 1024 bursts)
	int IburstCountWidth = 6;
	int burstCountWidth_divider;
	int sdramWidth;

	if (FPGABoard == "DE4") {
		burstCountWidth_divider = 32;
		sdramWidth = 256;
	} else {
		burstCountWidth_divider = 4;
		sdramWidth = 32;
	}

	std::string NUMPORTS;
	if (dcacheports == 2) {
		NUMPORTS = "TWO_PORTS";
	} else if (dcacheports == 4) {
		NUMPORTS = "FOUR_PORTS";
	}

	Out << "`ifndef CACHE_PARAMETERS_H\n"
	<< "`define CACHE_PARAMETERS_H\n\n";

	//defines cache parameters
	Out << "//define which board to use\n"
	<< "`define " << FPGABoard << "\n\n";

	Out << "//defines the number of ports to the cache\n"
	<< "//1 when only the processor, 2 when accelerator present\n"
	<< "`define NUM_DCACHE_PORTS " << dcacheports << "\n"
	<< "`define NUM_ICACHE_PORTS 1\n\n"

	<< "//this is defined if an accelerator is present\n"
	<< "`define ACCELERATOR_PORT\n"
	<< "`define " << NUMPORTS << "\n\n";

	if (multiportedCache) {
		Out << "`define " << dcacheType << "\n";
	}

	Out << "//defines the associativity of the cache\n"
	<< "`define DWAYS " << dcacheway << "\n"
	<< "`define IWAYS " << icacheway << "\n\n";

	Out << "//define the cache size\n"
	<< "`define DCACHE_SIZE "<< dcachenumlines << "\n" //1024-bit bus
	<< "`define DBLOCKSIZE " << dcachelinesize << "\n"
	<< "`define ICACHE_SIZE "<< icachenumlines << "\n"
	<< "`define IBLOCKSIZE " << icachelinesize << "\n\n"

	<< "//external memory bus width (256 = DDR2 on DE4, 32 = SDRAM on DE2)\n"
	<< "`define SDRAM_WIDTH " << sdramWidth << "\n"
	<< "`define BURSTCOUNT_DIV " << burstCountWidth_divider << "\n"
	<< "`define DBURSTCOUNTWIDTH " << DburstCountWidth << "\n"
	<< "`define IBURSTCOUNTWIDTH " << IburstCountWidth << "\n\n";

	Out << "//other definitions\n"
	<< "`define BYTE 8\n"
	<< "`define BYTEEN_WIDTH `SDRAM_WIDTH/`BYTE\n\n"

	<< "`define MP_cacheSize		`DCACHE_SIZE //log2(number of lines in cache)\n"
	<< "`define MP_cacheDepth		(2 ** `DCACHE_SIZE) //number of lines in cache\n"
	<< "`define MP_blockSize  `DBLOCKSIZE\n"
	<< "`define MP_blockSizeBits	(8*(2**`MP_blockSize)) //total data bits per cache line\n"
	<< "`define MP_cacheWidth		(`MP_blockSizeBits + `MP_tagSizeBits + 1) //total bits per cache line\n\n"

	<< "`define WORD_WIDTH	   `MP_cacheWidth\n"
	<< "`define WORD			 [`WORD_WIDTH-1:0]\n\n"

	<< "`define MEM_ADDR_WIDTH   `MP_cacheSize\n"
	<< "`define MEM_ADDR		 [`MEM_ADDR_WIDTH-1:0]\n\n"

	<< "`define MEM_DEPTH		`MP_cacheDepth\n"
	<< "`define MEM			  [`MEM_DEPTH-1:0]\n\n"

	<< "`define MP_tagSizeBits		31\n"
	<< "`define HIGH 1'b1\n"
	<< "`define LOW  1'b0\n\n"

	<< "// Used for write enables\n"
	<< "`define READ  `LOW\n"
	<< "`define WRITE `HIGH\n\n"

	<< "// Multipumping phases\n"
	<< "`define PHASE_WIDTH	 1\n"
	<< "`define PHASE		   [`PHASE_WIDTH-1:0]\n\n"

	<< "`define PHASE_0 `PHASE_WIDTH'd0\n"
	<< "`define PHASE_1 `PHASE_WIDTH'd1\n\n"

	<< "`define BYTE_EN [((2**`MP_blockSize)+4)-1:0]\n\n"

	<< "// Table pointing to which bank holds live register value\n"
	<< "`define LVT_ENTRY_WIDTH   2\n"
	<< "`define LVT_ENTRY		 [`LVT_ENTRY_WIDTH-1:0]\n\n"

	<< "// One entry for each register\n"
	<< "`define LVT_DEPTH		 (1 << `MEM_ADDR_WIDTH)\n\n"

	<< "// This changes with number of ports in memory\n"
	<< "`define ACCEL_0 `LVT_ENTRY_WIDTH'd0\n"
	<< "`define ACCEL_1 `LVT_ENTRY_WIDTH'd1\n"
	<< "`define ACCEL_2 `LVT_ENTRY_WIDTH'd2\n"
	<< "`define ACCEL_3 `LVT_ENTRY_WIDTH'd3\n\n"

	<< "`define HIGH 1'b1\n"
	<< "`define LOW  1'b0\n\n"

	<< "// Used for various write enables\n"
	<< "`define READ  `LOW\n"
	<< "`define WRITE `HIGH\n\n"

	<< "`endif\n";

	delete file;
}






//replace call to pthread_create to LegUp calling wrapper calls
void SwOnly::replacePthreadCreate(Module &M, CallInst *CI, BasicBlock::iterator I, std::map<Value*, std::string> &pthreadFcts, std::vector<accelFcts> &AcceleratedFcts, const std::set<Function*> &internalAccels) {

	//get the name of the function being forked to
	std::string FuncName = (CI->getArgOperand(2))->stripPointerCasts()->getName().str();
	//get the thread variable
	Value * threadVar = CI->getArgOperand(0);
	//get the argument into the thread
	Value * threadArg = CI->getArgOperand(3);
	//store into map
	pthreadFcts[threadVar] = FuncName;

	bool modified = false;
	int numOMPthreads=0;
	std::string ompFuncName;

	//now you need to find the function pointer for the function
	Function * pthreadFuncPtr =	findFuncPtr(M, FuncName.c_str());

	
	Instruction* pthread_create_instr = CI;
	//delete the original call instruction 
	deleteInstruction(pthread_create_instr);
	//store data into accel struct
	accelFcts accel;
	accel.fct = pthreadFuncPtr;
	accel.type = call;
	accel.numAccelerated = 1;
	int numcallingWrapper = 0;

	//see if this function is an avalon accelerator or an internal accelerator
	bool isAvalonAccel = (internalAccels.find(pthreadFuncPtr) == internalAccels.end());
	//only add to the vector if it's an avalon accelerator
	if (isAvalonAccel) {
		std::vector<accelFcts>::iterator it = std::find(AcceleratedFcts.begin(), AcceleratedFcts.end(), accel);
		//if the function hasn't already been added, add it to the vector
		if (it == AcceleratedFcts.end()) {
			AcceleratedFcts.push_back(accel);					
		} else { //if the same function already exists, then increment numAccelerated;
			numcallingWrapper = (*it).numAccelerated;
			(*it).numAccelerated++;
		}
	}

	//set the argument type to the argument of the original omp_parallel_start function
	std::vector<Type*>params;
	params.push_back(threadArg->getType());

	//inserting new call to calling wrapper function//
	//get the name of the calling wrapper
	std::string wrapperName = getWrapperName(pthreadFuncPtr, call);
	std::stringstream ss;
	ss << numcallingWrapper;
	wrapperName += ss.str();

	//add the function definition
	Constant* FCache = M.getOrInsertFunction(wrapperName, FunctionType::get(Type::getVoidTy(M.getContext()), params, false));
	//create the new call instructions
	CallInst::Create(FCache, threadArg, "", I);
}

//replace call to pthread_join to LegUp polling wrapper calls
void SwOnly::replacePthreadJoin(Module &M, CallInst *CI, BasicBlock::iterator I, const std::map<Value*, std::string> &pthreadFcts, std::vector<accelFcts> &AcceleratedFcts, const std::set<Function*> &internalAccels) {

	//get the thread variable
	Value * Arg = CI->getArgOperand(0);
	Value *threadVar;
	if (LoadInst *load = dyn_cast<LoadInst>(Arg)) {
		threadVar = load->getOperand(0);
	} else {
		assert(0 && "Thread variable not found for pthread_join!\n");
	}
	bool returnNull = false;
	//get the return variable
	Value *retVar = CI->getArgOperand(1);
	if (isa<ConstantPointerNull>(retVar)) {
		returnNull = true;
	}
	//find the name of thread routine in the map
	std::string FuncName = pthreadFcts.find(threadVar)->second;
	Function * pthreadFuncPtr =	M.getFunction(FuncName);
	assert(pthreadFuncPtr);

	Instruction* pthread_join_instr = CI;
	//delete the original call instruction 
	deleteInstruction(pthread_join_instr);
	//store data into accel struct
	accelFcts accel;
	accel.fct = pthreadFuncPtr;
	accel.type = poll;
	accel.numAccelerated = 1;
	int numpollingWrapper = 0;

	//see if this function is an avalon accelerator or an internal accelerator
	bool isAvalonAccel = (internalAccels.find(pthreadFuncPtr) == internalAccels.end());
	//only add to the vector if it's an avalon accelerator
	if (isAvalonAccel) {
		std::vector<accelFcts>::iterator it = std::find(AcceleratedFcts.begin(), AcceleratedFcts.end(), accel);
		//if the function hasn't already been added, add it to the vector
		if (it == AcceleratedFcts.end()) {
			AcceleratedFcts.push_back(accel);					
		} else { //if the same function already exists, then increment numAccelerated;
			numpollingWrapper = (*it).numAccelerated;
			(*it).numAccelerated++;
		}
	}
	std::vector<Type*>params;
	//inserting new call to polling wrapper function//
	//get the name of the calling wrapper
	std::string wrapperName = getWrapperName(pthreadFuncPtr, poll);
	std::stringstream ss;
	ss << numpollingWrapper;
	wrapperName += ss.str();
	//add the function definition
	Constant* FCache;
	if (returnNull) {
		FCache = M.getOrInsertFunction(wrapperName, FunctionType::get(Type::getVoidTy(M.getContext()), params, false));
	} else {
		FCache = M.getOrInsertFunction(wrapperName, FunctionType::get(PointerType::get(IntegerType::get(M.getContext(), 8), 0), params, false));
	}
	//create the new call instructions
	CallInst *NewCI = CallInst::Create(FCache, "", I);
	//if there is a return value, add a store instruction to store the return value to the second parameter in pthread_join
	//store i8*	NewCI, i8** retVar
	if (!returnNull) {
		//StoreInst::StoreInst(NewCI, retVar, ++I);
		new StoreInst(NewCI, retVar, false, I);
	}
}

void SwOnly::generateParallelAccelConfigs(const std::vector<accelFcts> &AcceleratedFcts) {

	formatted_raw_ostream *Out;
	std::string fileName = "parallelaccels.tcl";
	Out = GetOutputStream(fileName);
	assert(Out);
	raw_ostream &tcl = *Out;
	wrapperType type;

	if (!AcceleratedFcts.empty()) {
		for (std::vector<accelFcts>::const_iterator I = AcceleratedFcts.begin(), E = AcceleratedFcts.end(); I != E; ++I) {
			type = (*I).type;	
			if (type == call) {
				std::string funcName = ((*I).fct)->getName();		
				tcl << "set_parallel_accelerator_function \"" << funcName << "\"\n";
			}
		}
	}

	delete Out;
}

void SwOnly::setdefaultCacheParameters(const std::string cacheType, const int cachesize, int &cachelinesize, int &cacheway, int &cachenumlines) {

	//check that they are properly defined	
	//the parameters for a type of cache need to be either all defined or none defined
	//if none defined, they will use default values
	if (cachesize == 0 && cachelinesize == 0 && cacheway == 0) { //if none of the parameters are defined, assign default values
		cacheway = 1;
		if (FPGABoard == "DE4") {
			cachenumlines = 9;
			cachelinesize = 7;
		} else {
			cachenumlines = 9;
			cachelinesize = 4;
		}
	} else if (cachesize != 0 && cachelinesize != 0 && cacheway != 0) { //if they are all defined, change to log2 base
		cachenumlines = log2((cachesize*1024)/(cachelinesize*cacheway));
		cachelinesize = log2(cachelinesize);		
	} else {
		errs() << "If any of the parameters are defined for " << cacheType << " cache, they all need to be defined!\n";
		assert(0);
	}

}

void SwOnly::checkMaximumLinesize(const std::string cacheType, const int cachelinesize, const int maxValue) {
	if (cachelinesize > maxValue ) {
		int maxBytes = pow(2, maxValue);
		errs() << cacheType << " cache line size too large! The maximum " << cacheType << " cache line size is " << maxBytes << " bytes!\n";
		assert(0);
	}
} 

void SwOnly::checkLinesizes() {
	//check that the linesizes are smaller than the maximum allowed. 
	//the burstcount width is set to 6 bits (since DDR2 controller allows max burst of 64),
	//the maximum line size for DE4 is 256*64 = 16384 bits = 2048 bytes -> log2(2048) = 11
	//the maximum line size for DE2 is 32*64 = 2048 bits = 256 bytes -> log2(256) = 8
	if (FPGABoard == "DE4") {
		checkMaximumLinesize("data", dcachelinesize, 11);
		checkMaximumLinesize("instruction", icachelinesize, 11);
	} else {
		checkMaximumLinesize("data", dcachelinesize, 8);
		checkMaximumLinesize("instruction", icachelinesize, 8);
	}
}

void SwOnly::setCacheParameters() {

	//check that they are properly defined	
	//the parameters for a type of cache need to be either all defined or none defined
	//if none defined, they will use default values
	setdefaultCacheParameters("data", dcachesize, dcachelinesize, dcacheway, dcachenumlines);
	setdefaultCacheParameters("instruction", icachesize, icachelinesize, icacheway, icachenumlines);

	//set number of data cache ports
	if (dcacheports == 0) {
		dcacheports = 2; //default value is 2 if not specified
	}

	//check that the linesizes are smaller than the maximum allowed. 
	//the burstcount width is set to 6 bits (since DDR2 controller allows max burst of 64),
	//the maximum line size for DE4 is 256*64 = 16384 bits = 2048 bytes -> log2(2048) = 11
	//the maximum line size for DE2 is 32*64 = 2048 bits = 256 bytes -> log2(256) = 8
	checkLinesizes();
}

} // end of legup namespace
