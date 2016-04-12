//===- ParallelAPI.cpp - LegUp pre-LTO pass ------------------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// ParallelAPI - Replace Pthread/OMP API calls to LegUp functions
//
//===----------------------------------------------------------------------===//

#include "llvm/Pass.h"
#include "llvm/Function.h"
#include "llvm/Module.h"
#include "llvm/Instructions.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "utils.h"

using namespace llvm;

namespace legup {

class ParallelAPI  : public ModulePass {
public:
    static char ID; // Pass identification, replacement for typeid
    ParallelAPI() : ModulePass(ID) {}

    virtual bool runOnModule(Module &M);

    virtual void getAnalysisUsage(AnalysisUsage &AU) const {
    }
   
private:

	bool replaceOMPFunctions(Module &M, CallInst *CI, Function *calledFunction);
	bool replaceBarrierFunctions(Module &M, CallInst *CI, Function *calledFunction);
	bool replacePthreadExit(Module &M, CallInst *CI, Function *calledFunction);
	void replaceUnreachableInst(Instruction *Inst);
	void replaceFuncwithNewFucName(Module &M, CallInst *CI, const char *oldFuncName, const char *newFuncName);
};

char ParallelAPI::ID = 0;
static RegisterPass<ParallelAPI> K("legup-parallel-api",
        "Replace Pthread/OMP API calls to LegUp functions");

bool ParallelAPI::runOnModule(Module &M) {

	for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F) {
	    for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
			for (BasicBlock::iterator I = BB->begin(), E = BB->end(); I != E;) {
				Instruction * Inst = I++;
				//If it's a call instruction
				if (CallInst *CI = dyn_cast<CallInst>(Inst)) {	            
	                Function *calledFunction = CI->getCalledFunction();
	                // ignore indirect function calls
	                if (!calledFunction) continue;
				
					if (replaceOMPFunctions(M, CI, calledFunction)) continue;

					if (replacePthreadExit(M, CI, calledFunction)) continue;

					if (replaceBarrierFunctions(M, CI, calledFunction)) continue;
				} else {
					//if it's an unreachable instruction, check if the previous instruction is a return (changed from pthread_exit)
					//it it is then just delete it, if not leave it
					replaceUnreachableInst(Inst);
				}
		    }
		}
	}

    return true;
}

//This replaces the function call with the old name to a function call with the new name while keeping the return type and arguments the same
void ParallelAPI::replaceFuncwithNewFucName(Module &M, CallInst *CI, const char *oldFuncName, const char *newFuncName) {
	
	Function *FuncPtr;
	//find the function pointer to the old function
	FuncPtr = findFuncPtr (M, oldFuncName);
	assert(FuncPtr);
	//replace with the new name
	ReplaceCallWith(newFuncName, CI, copyArguments(CI->op_begin(), CI->op_begin()), FuncPtr->getReturnType());
}

bool ParallelAPI::replaceOMPFunctions(Module &M, CallInst *CI, Function *calledFunction) {

	bool replaced = false;
	//if this is a omp_get_num_threads, find the function pointer to this function and replace the call to legup function
	if (calledFunction->getName().str() == "omp_get_num_threads") {
		replaceFuncwithNewFucName(M, CI, "omp_get_num_threads", "legup_get_num_threads");
		replaced = true;
	}
	//if this is a omp_get_thread_num, find the function pointer to this function and replace the call to legup function
	else if (calledFunction->getName().str() == "omp_get_thread_num") {
		replaceFuncwithNewFucName(M, CI, "omp_get_thread_num", "legup_get_thread_num");
		replaced = true;
	}
	return replaced;
}

bool ParallelAPI::replaceBarrierFunctions(Module &M, CallInst *CI, Function *calledFunction) {

	bool replaced = false;
	//if this is a call to pthread_barrier_init, find the function pointer to this function and replace the call to legup function
	if (calledFunction->getName().str() == "pthread_barrier_init") {
		ReplaceCallWith("legup_barrier_init", CI, copyArguments((CI->op_end())-2, CI->op_end()-1), Type::getVoidTy(M.getContext()));
		replaced = true;
	}
	//if this is a call to pthread_barrier_wait, find the function pointer to this function and replace the call to legup function
	else if (calledFunction->getName().str() == "pthread_barrier_wait") {
		ReplaceCallWith("legup_barrier_wait", CI, copyArguments(CI->op_end(), CI->op_end()), Type::getVoidTy(M.getContext()));
		replaced = true;
	}
	return replaced;
}


bool ParallelAPI::replacePthreadExit(Module &M, CallInst *CI, Function *calledFunction) {

	bool replaced = false;
	//if this is a call to pthread_exit, check if it's returning anything
	//if it is, add a ret instruction, else just delete it
	if (calledFunction->getName().str() == "pthread_exit") {
		Value* ret = CI->getArgOperand(0);
		if (!isa<ConstantPointerNull>(ret)) {
			ReturnInst::Create(M.getContext(), ret, CI);
		} else {
			//create a null pointer
			ConstantPointerNull * nullPtr = ConstantPointerNull::get(PointerType::get(IntegerType::get(M.getContext(), 8), 0));
			//create the return instruction with the null pointer
			//there has to be a return instruction (even for void) since it's a terminator for the basic block
			ReturnInst::Create(M.getContext(), nullPtr, CI);
		}
		//delete the original call instruction 
		deleteInstruction(CI);
		replaced = true;
	}
	return replaced;
}

//if it's an unreachable instruction, check if the previous instruction is a return (changed from pthread_exit)
//it it is then just delete it, if not leave it
void ParallelAPI::replaceUnreachableInst(Instruction *Inst) {

	//check if it's an unreachable instruction
	if (llvm::UnreachableInst::classof(Inst)) {
		BasicBlock::iterator BBiter = Inst;				
		Instruction * prevInst = (--BBiter);
		//if the previous instruction is a return
		if (llvm::ReturnInst::classof(prevInst)) {
			//delete the unreachable instruction
			deleteInstruction(Inst);
		}
	} 
}

} // end of legup namespace






