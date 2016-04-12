//===- HwOnly.cpp - LegUp pre-LTO pass ------------------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// The HwOnly pass strips away software only (non-accelerated) functions
//
//===----------------------------------------------------------------------===//

#include "llvm/Pass.h"
#include "llvm/Function.h"
#include "llvm/Module.h"
#include "llvm/Instructions.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "utils.h"
#include <set>

using namespace llvm;

namespace legup {

class HwOnly  : public ModulePass {
public:
    static char ID; // Pass identification, replacement for typeid
    HwOnly() : ModulePass(ID) {}

    virtual bool runOnModule(Module &F);

    virtual void getAnalysisUsage(AnalysisUsage &AU) const {
    }

private:
	void getParallelAcceleratedFunctions(Module &M, std::set<GlobalValue*> &HwFcts);
	Value * insertNewArgument(Module &M, CallInst *CI, std::string funcName, std::string argName, Type *argType);
	void replaceFuncCallwithNewFunc(Function *F, std::string oldfuncName, std::string newfuncName, Type *newfuncType, std::vector<Value*> newParam);
	void createOMPCloneFunctions(Module &M, const Function *HwFuncPtr, std::set<GlobalValue*> &HwFcts, const int numOMPthreads);
	bool replaceOMPFunctions(Module &M, CallInst *CI, Function *calledFunction, bool &isAvalonAccel, Function::iterator BB, BasicBlock::iterator &I, const std::set<Function*> &internalAccels, std::set<GlobalValue*> &HwFcts);
	bool replacePthreadFunctions(Module &M, CallInst *CI, Function *calledFunction, std::set<GlobalValue*> &HwFcts);
};

char HwOnly::ID = 0;
static RegisterPass<HwOnly> Y("legup-hw-only",
        "Strip away non-accelerated functions");

/// remove all functions that are s/w only (not accelerated)
/// Adapted from GlobalDCE pass
bool HwOnly::runOnModule(Module &M) {

    std::set<GlobalValue*> HwFcts;

    getParallelAcceleratedFunctions(M, HwFcts);
    getAcceleratedFunctions(M, HwFcts);

    return isolateGV(M, HwFcts);

}

void HwOnly::getParallelAcceleratedFunctions(Module &M,
        std::set<GlobalValue*> &HwFcts) {

	// skip in PCIe flow
	if (LEGUP_CONFIG->isPCIeFlow()) return;

	std::set<Function*> internalAccels;

	findInternalAccels(M, internalAccels);
	bool isAvalonAccel = true;
	//designate all omp functions as hardware accelerators
	for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F) {
	    for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
	        for (BasicBlock::iterator I = BB->begin(), E = BB->end(); I != E;) {

	            if (CallInst *CI = dyn_cast<CallInst>(I++)) {

	                Function *calledFunction = CI->getCalledFunction();

	                // ignore indirect function calls
	                if (!calledFunction) continue;

					if (replaceOMPFunctions(M, CI, calledFunction, isAvalonAccel, BB, I, internalAccels, HwFcts)) continue; 

					if (replacePthreadFunctions(M, CI, calledFunction, HwFcts)) continue;
		        }
		    }
		}
	}
}

bool HwOnly::replacePthreadFunctions(Module &M, CallInst *CI, Function *calledFunction, std::set<GlobalValue*> &HwFcts) {

	bool replaced = false;
	std::string HwFuncName;
	Function *HwFuncPtr, *lockFuncPtr;
	Value *newARG;	
	Type *voidTy;
	std::vector<Value*>params;

	if (calledFunction->getName().str() == "pthread_create") {
		//get the name of the pthread routine 
		HwFuncName = (CI->getArgOperand(2))->stripPointerCasts()->getName().str();
		//find a function pointer to that routine		
		HwFuncPtr =	findFuncPtr(M, HwFuncName.c_str());
		assert(HwFuncPtr);
		//check if locks are used
		//Function * funcPtr = findFuncPtr(M, "pthread_mutex_lock");
		lockFuncPtr = findFuncPtr(M, "pthread_mutex_lock");	
		//if locks are found in the program
		if (lockFuncPtr != NULL) {
			//get the accelerated function, and insert a new argument into the accelerator, which passes in the threadID//
			//insert a new argument, threadID, into the pthread routine function
			newARG = insertNewArgument(M, CI, HwFuncName, "threadID", IntegerType::get(M.getContext(), 32));
			//find the function pointer to the pthread routine function,
			//and iterate through the function to find calls to pthread_mutex_lock, pthread_mutex_unlock
			//replace these with calls to legup_lock, legup_unlock and send in the new argument as a parameter
			//find a function pointer to that routine		
			HwFuncPtr =	findFuncPtr(M, HwFuncName.c_str());
			
			params.push_back(newARG);
			voidTy = Type::getVoidTy(M.getContext());
			replaceFuncCallwithNewFunc(HwFuncPtr, "pthread_mutex_lock", "legup_lock", voidTy, params);
			replaceFuncCallwithNewFunc(HwFuncPtr, "pthread_mutex_unlock", "legup_unlock", voidTy, params);
		}

		//always add pthreads as accelerators
		HwFcts.insert(HwFuncPtr);
		replaced = true;
	}

	return replaced;
}

bool HwOnly::replaceOMPFunctions(Module &M, CallInst *CI, Function *calledFunction, bool &isAvalonAccel, Function::iterator BB, BasicBlock::iterator &I, const std::set<Function*> &internalAccels, std::set<GlobalValue*> &HwFcts) {

	bool isaOMPFuncCall, replaced = false;
	std::string HwFuncName;
	Function *HwFuncPtr;
	int numOMPthreads;
	accelFcts accel;

	//if this is a call to fork OMP threads
	if (calledFunction->getName().str() == "GOMP_parallel_start") {
		//get the OMP function
		HwFuncName = (CI->op_begin())->get()->getName().str();
		//HwFuncPtr = findFuncPtr(M, HwFuncName);
		HwFuncPtr =	M.getFunction(HwFuncName);
		//add noinline attribute to the OMP function, since this should never be inlined
		HwFuncPtr->addFnAttr(1<<11);

		//always add OMP functions as hardware accelerators
		HwFcts.insert(HwFuncPtr);

		isAvalonAccel = replaceOMPParallelStart(M, BB, I, CI, accel, numOMPthreads, HwFuncName, internalAccels);

		if (!isAvalonAccel) {
			createOMPCloneFunctions(M, HwFuncPtr, HwFcts, numOMPthreads);
		}

		//check if the instruction after call to GOMP_parallel_start is a call instruction to call the function to be execute
		//if it's a call instruction to the omp function, just delete it 
		//if not, that means the OMP function got inlined
		//we need to delete all of these instructions, since they will be executed sequentially by the state machine. 
		CallInst *CINext = dyn_cast<CallInst>(I++);
		assert(CINext);

		isaOMPFuncCall = (CINext->getCalledFunction()->getName().str() == HwFuncName);

		if (isaOMPFuncCall) {
			deleteInstruction(CINext);
		} else {
			assert(0 && "There must be a call instruction to the OMP function after call to GOMP_parallel_start!\n");
		}
		replaced = true;
	} 
	//GOMP_parallel_end
	else if (calledFunction->getName().str() == "GOMP_parallel_end") {
		if (!isAvalonAccel) {
			deleteInstruction(CI);
			//set it back to true
			isAvalonAccel = true;
		}
		replaced = true;
	} 
	
	return replaced;
}

//this function copies a function into a new function with the same function body but with an extra argument of type argType
//it returns the value pointer to the new argument
Value * HwOnly::insertNewArgument(Module &M, CallInst *CI, std::string funcName, std::string argName, Type *argType) {

	Function * F =	findFuncPtr(M, funcName.c_str());
	assert(F);

    // Start by computing a new prototype for the function, which is the same as
	// the old function, but has an extra argument.
	const FunctionType *FTy = F->getFunctionType();

	/* Copy the argument types and add an extra argument */
	std::vector<Type*> params(FTy->param_begin(), FTy->param_end());
	params.push_back(argType);

	// Make a new parameter attribute list (they are immutable) that has the new
	// argument marked as byval. Since the parameter attributes include the
	// return type parameters at index 0, we don't use size() - 1, but just
	// size() as index.
	AttrListPtr PAL = F->getAttributes();

	// Create the new function type based on the recomputed parameters.
	FunctionType *NFTy = FunctionType::get(F->getReturnType(), params, false);

	// Create the new function body and insert it into the module...
	Function *NF = Function::Create(NFTy, F->getLinkage());
	NF->copyAttributesFrom(F);
	NF->setAttributes(PAL);
	F->getParent()->getFunctionList().insert(F, NF);
	NF->takeName(F);
	//copy the names of the arguments
	for (Function::arg_iterator AI = F->arg_begin(), AE = F->arg_end(),
		  NAI = NF->arg_begin(); AI != AE; ++AI, ++NAI)
	  NAI->takeName(AI);
	
	Value *newARG = --NF->arg_end();
	newARG->setName(argName);

    // Since we have now created the new function, splice the body of the old    
	// function right into the new function, leaving the old rotting hulk of the 
	// function empty.
	NF->getBasicBlockList().splice(NF->begin(), F->getBasicBlockList());

	// Replace all uses of the old arguments with the new arguments
	for (llvm::Function::arg_iterator I = F->arg_begin(), E = F->arg_end(),
		   NI = NF->arg_begin(); I != E; ++I, ++NI)
	  I->replaceAllUsesWith(NI);

	return newARG;
}

//this function iterates though function F and replaces a function call from oldfuncName to newfuncName with parameters newParam and a return type of newfuncType
void HwOnly::replaceFuncCallwithNewFunc(Function *F, std::string oldfuncName, std::string newfuncName, Type *newfuncType, std::vector<Value*> newParam) {

	Module *M = F->getParent();
	//iterate through this function to find the function call to funcName
	for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
	    for (BasicBlock::iterator I = BB->begin(), E = BB->end(); I != E;) {
	        if (CallInst *CI = dyn_cast<CallInst>(I++)) {

				Function *calledFunction = CI->getCalledFunction();

                // ignore indirect function calls
                if (!calledFunction) continue;

				//if this is a call to the wanted function
				if (calledFunction->getName().str().c_str() == oldfuncName) {
					std::vector<Type*>params;
					
					for (std::vector<Value*>::iterator iter = newParam.begin(); iter != newParam.end(); iter++) {
						params.push_back((*iter)->getType());
					}
					
					//create the new function definition
					Constant* FCache = M->getOrInsertFunction(newfuncName, FunctionType::get(newfuncType, params, false));
					//insert the call to the new function
					CallInst::Create(FCache, newParam, "", I);

					Instruction* ins = CI;
					//delete the original call instruction 
					deleteInstruction(ins);
				}
			}
		}
	}
}

void HwOnly::createOMPCloneFunctions(Module &M, const Function *HwFuncPtr, std::set<GlobalValue*> &HwFcts, const int numOMPthreads) {

	std::string FuncName; 
	
	for (int i=0; i<numOMPthreads; i++) {

		FuncName = HwFuncPtr->getName().str() + IntToString(i);
		ValueToValueMapTy VMap;
		ClonedCodeInfo *CodeInfo = NULL;
		Function* duplicateFunction = CloneFunctionWithNewName(FuncName, HwFuncPtr, VMap, /*ModuleLevelChanges=*/true, CodeInfo);
		HwFcts.insert(duplicateFunction);
		duplicateFunction->setLinkage(HwFuncPtr->getLinkage());
		//duplicateFunction->dump();
		M.getFunctionList().push_back(duplicateFunction);
	}
}

} // end of legup namespace






