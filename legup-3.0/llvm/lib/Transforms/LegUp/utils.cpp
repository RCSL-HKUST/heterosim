//===- utils.cpp - LegUp pre-LTO helper functions -------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// Legup helper functions
//
//===----------------------------------------------------------------------===//

#include "llvm/Pass.h"
#include "llvm/Function.h"
#include "llvm/Module.h"
#include "llvm/CodeGen/IntrinsicLowering.h"
#include "llvm/Support/IRBuilder.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Instructions.h"
#include "llvm/GlobalValue.h"
#include "llvm/Intrinsics.h"
#include "llvm/Target/TargetData.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/ADT/StringExtras.h"
#include "llvm/Support/Debug.h"
#include "LegupConfig.h"
#include "utils.h"
#include <string>
#include "llvm/Support/Signals.h"
#include "llvm/LLVMContext.h"

using namespace llvm;
using namespace std;

namespace legup {


// looks for calls in function F to any functions not in HwFcts
// if found, add the new function to HwFcts and call addCalledFunctions() on
// the new function
void addCalledFunctions(Function *F, std::set<GlobalValue*> &HwFcts) {

    for (Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB) {
        for (BasicBlock::iterator I = BB->begin(), EE = BB->end(); I != EE;
                ++I) {
            if (CallInst *CI = dyn_cast<CallInst>(I)) {

                Function *calledFunction = CI->getCalledFunction();
                // ignore indirect function calls
                if (!calledFunction) continue;

                if (HwFcts.find(calledFunction) == HwFcts.end()) {
                    HwFcts.insert(calledFunction);
                    addCalledFunctions(calledFunction, HwFcts);
                }


            }

        }
    }

}

/// get all non-accelerated functions to be deleted
void getAcceleratedFunctions(Module &M,
        std::set<GlobalValue*> &HwFcts) {

    for (Module::iterator I = M.begin(), E = M.end(); I != E; ++I) {
        if (LEGUP_CONFIG->isAccelerated(*I)) {
          HwFcts.insert(I);
          addCalledFunctions(I, HwFcts);
        }
    }

}

CallInst *ReplaceCallWith(const char *NewFn, CallInst *CI,
								 vector<Value*> Args,
                                 Type *RetTy) {
	// If we haven't already looked up this function, check to see if the
	// program already contains a function with this name.
	Module *M = CI->getParent()->getParent()->getParent();
	// Get or insert the definition now.
	std::vector<Type *> ParamTys;
	std::vector<Value*> Params;
	if (!Args.empty()) {
		for (vector<Value*>::iterator it = Args.begin(); it != Args.end(); ++it) {
			ParamTys.push_back((*it)->getType());
		}
	}

	Constant* FCache = M->getOrInsertFunction(NewFn, FunctionType::get(RetTy, ParamTys, false));

	Instruction * Ins = CI;
	CallInst *NewCI = CallInst::Create(FCache, Args, "", Ins);
	NewCI->setName(CI->getName());
	if (!CI->use_empty()) {
		CI->replaceAllUsesWith(NewCI);
	}

	// CI doesn't get erased, so do it explicitly
	CI->eraseFromParent();
	return NewCI;
}

std::vector<Value*> copyArguments (User::op_iterator startIdx, User::op_iterator endIdx) {
	std::vector<Value*> newParam;
	for (User::op_iterator it = startIdx; it != endIdx; ++it) {
		newParam.push_back(*it);
	}
	return newParam;
}

//find the function pointer with the given function name
Function * findFuncPtr (Module &M, const char *funcName) {
	for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F) {
		if(strcmp(F->getName().str().c_str(), funcName) == 0) {
			return F;
		}
	}	
	return NULL;
}

void set_all_linkage(Module &M, GlobalValue::LinkageTypes LT) {
  for (Module::global_iterator I = M.global_begin(), E = M.global_end(); I != E;
      ++I)
    if (!I->isDeclaration()) {
      I->setLinkage(LT);
    }
  for (Module::iterator I = M.begin(), E = M.end(); I != E; ++I)
    if (!I->isDeclaration()) {
      I->setLinkage(LT);
    }
}

// copied isolateGV() and deleteGV() from ExtractGV
// TODO: How do I call another pass from here?
// opt: Pass.cpp:234: void<unnamed>::PassRegistrar::RegisterPass(const llvm::PassInfo&): Assertion `Inserted && "Pass registered multiple times!"' failed.
// ModulePass *GV = createGVExtractionPass(GVs, true, false);
// return GV->runOnModule(M);
bool isolateGV(Module &M, std::set<GlobalValue*> &Named) {

  // Mark all globals internal
  // FIXME: what should we do with private linkage?
  set_all_linkage(M, GlobalValue::InternalLinkage);

  // All of the functions may be used by global variables or the named
  // globals.  Loop through them and create a new, external functions that
  // can be "used", instead of ones with bodies.
  std::vector<Function*> NewFunctions;

  Function *Last = --M.end();  // Figure out where the last real fn is.

  for (Module::iterator I = M.begin(); ; ++I) {
    if (std::find(Named.begin(), Named.end(), &*I) == Named.end()) {
      Function *New = Function::Create(I->getFunctionType(),
                                       GlobalValue::ExternalLinkage);
      New->copyAttributesFrom(I);

      // If it's not the named function, delete the body of the function
      I->dropAllReferences();

      M.getFunctionList().push_back(New);
      NewFunctions.push_back(New);
      New->takeName(I);
    }

    if (&*I == Last) break;  // Stop after processing the last function
  }

  // Now that we have replacements all set up, loop through the module,
  // deleting the old functions, replacing them with the newly created
  // functions.
  if (!NewFunctions.empty()) {
    unsigned FuncNum = 0;
    Module::iterator I = M.begin();
    do {
      if (std::find(Named.begin(), Named.end(), &*I) == Named.end()) {
        // Make everything that uses the old function use the new dummy fn
        I->replaceAllUsesWith(NewFunctions[FuncNum++]);

        Function *Old = I;
        ++I;  // Move the iterator to the new function

        // Delete the old function!
        M.getFunctionList().erase(Old);

      } else {
        ++I;  // Skip the function we are extracting
      }
    } while (&*I != NewFunctions[0]);
  }

  // set function linkage back to external
  set_all_linkage(M, GlobalValue::ExternalLinkage);

  return true;
}

bool deleteGV(std::set<GlobalValue*> &Named) {

  // Let a later invocation of clang run Dead-Code Elimination for the PCIe flow rather than here
  if (LEGUP_CONFIG->isPCIeFlow()) {
    return false;
  }

  for (std::set<GlobalValue*>::iterator GI = Named.begin(), 
         GE = Named.end(); GI != GE; ++GI) {
    if (Function* NamedFunc = dyn_cast<Function>(*GI)) {
     NamedFunc->setLinkage(GlobalValue::ExternalLinkage);
     NamedFunc->deleteBody();
     assert(NamedFunc->isDeclaration() && "This didn't make the function external!");
   } else {
      if (!(*GI)->isDeclaration()) {
        cast<GlobalVariable>(*GI)->setInitializer(0);  //clear the initializer
        (*GI)->setLinkage(GlobalValue::ExternalLinkage);
      }
    }
  }
  return true;
}

/// GetOutputStream - return a stream to the given file
formatted_raw_ostream * GetOutputStream(string & OutputFilename) {

    // stdout
    if (OutputFilename == "-")
        return &fouts();

    // Make sure that the Out file gets unlinked from the disk if we get a
    // SIGINT
    sys::RemoveFileOnSignal(sys::Path(OutputFilename));

    std::string error;
    raw_fd_ostream *FDOut =
        new raw_fd_ostream(OutputFilename.c_str(), error,
                raw_fd_ostream::F_Binary);
    if (!error.empty()) {
        errs() << error << '\n';
        delete FDOut;
        exit(1);
    }
    formatted_raw_ostream *Out =
        new formatted_raw_ostream(*FDOut, formatted_raw_ostream::DELETE_STREAM);

    return Out;
}

void findInternalAccels(Module &M, std::set<Function*> &internalAccels) {

	std::string FuncName;
	Function *FuncPtr;
	for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F) {
	    for (Function::iterator BB = F->begin(), EE = F->end(); BB != EE; ++BB) {
			for (BasicBlock::iterator I = BB->begin(), EE = BB->end(); I != EE; ++I) {
			    if (CallInst *CI = dyn_cast<CallInst>(I)) {
			        Function *calledFunction = CI->getCalledFunction();
			        // ignore indirect function calls
			        if (!calledFunction) continue;

					// Don't consider OpenMP or Pthread functions for PCIe flow
					if (LEGUP_CONFIG->isPCIeFlow()) {
						// if user-designated function
						if (LEGUP_CONFIG->isAccelerated(calledFunction->getName().str())) {
							FuncPtr = findFuncPtr(M, calledFunction->getName().str().c_str());
							addInternalAccels(M, FuncPtr, internalAccels);
						}
						continue;
					}

					// if OpenMP function
					if (calledFunction->getName().str() == "GOMP_parallel_start") {
						//get the name of the function being forked to
						FuncName = (CI->op_begin())->get()->getName().str();
						FuncPtr = findFuncPtr(M, FuncName.c_str());
						addInternalAccels(M, FuncPtr, internalAccels);
					} 
					// if Pthread function
					/*else if (calledFunction->getName().str() == "pthread_create") {
						//get the name of the function being forked to
						FuncName = (CI->getArgOperand(2))->stripPointerCasts()->getName().str();
						FuncPtr = findFuncPtr(M, FuncName.c_str());
						addInternalAccels(M, FuncPtr, internalAccels);
					}*/
					// if user-designated function
					else if (LEGUP_CONFIG->isAccelerated(calledFunction->getName().str())) {
						FuncPtr = findFuncPtr(M, calledFunction->getName().str().c_str());
						addInternalAccels(M, FuncPtr, internalAccels);
					}
			    }
			}
		}
	}
}

void addInternalAccels(Module &M, Function *F, std::set<Function*> &internalAccels) {

	std::string FuncName;
	Function *FuncPtr;
    for (Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB) {
        for (BasicBlock::iterator I = BB->begin(), EE = BB->end(); I != EE; ++I) {
            if (CallInst *CI = dyn_cast<CallInst>(I)) {

                Function *calledFunction = CI->getCalledFunction();
                // ignore indirect function calls
                if (!calledFunction) continue;

				if (calledFunction->getName().str() == "GOMP_parallel_start") {
					//get the name of the function being forked to
					FuncName = (CI->op_begin())->get()->getName().str();
					FuncPtr = findFuncPtr(M, FuncName.c_str());
					internalAccels.insert(FuncPtr);
					addInternalAccels(M, FuncPtr, internalAccels);
				} 
				else if (calledFunction->getName().str() == "pthread_create") {
					//get the name of the function being forked to
					FuncName = (CI->getArgOperand(2))->stripPointerCasts()->getName().str();
					FuncPtr = findFuncPtr(M, FuncName.c_str());
					internalAccels.insert(FuncPtr);
					addInternalAccels(M, FuncPtr, internalAccels);
				}
				// if user-designated function
				else if (LEGUP_CONFIG->isAccelerated(calledFunction->getName().str())) {
					FuncPtr = findFuncPtr(M, calledFunction->getName().str().c_str());
					internalAccels.insert(FuncPtr);
					addInternalAccels(M, FuncPtr, internalAccels);
				}
            }
        }
    }
}

bool replaceOMPParallelStart(Module &M, Function::iterator BB, BasicBlock::iterator I, CallInst *CI, accelFcts &accel, 
	int &numOMPthreads, std::string &ompFuncName, const std::set<Function*> &internalAccels) {

	//get the name of the function being forked to
	ompFuncName = (CI->op_begin())->get()->getName().str();

	//get the number of threads
	ConstantInt * constInt = dyn_cast<ConstantInt>((CI->op_begin()+2)->get());
	assert(constInt);
	numOMPthreads = constInt->getValue().getZExtValue();

	//now you need to find the function pointer for the function
	Function * ompFuncPtr =	findFuncPtr(M, ompFuncName.c_str());

	//search to see if this function is one of the internal accelerators
	//if not found, that means its an avalon accelerator
	bool isAvalonAccel = (internalAccels.find(ompFuncPtr) == internalAccels.end());

	//get the argument into the OMP function
	Value * OMP_arg = CI->getArgOperand(1);	

	//delete the original call instruction 
	deleteInstruction(CI);
	
	accel.fct = ompFuncPtr;
	accel.type = call;
	accel.numAccelerated = numOMPthreads;

	//inserting the call to legup_set_num_threads to set the number of threads in the omp core
	std::vector<Type*>params;
	IntegerType * intparam = IntegerType::get(M.getContext(), 32);
	params.push_back(intparam);
	//insert the function definition to the program, which has an argument of type int, which is used to send in the number of threads
	Constant* omp_set_threads = M.getOrInsertFunction("legup_set_num_threads", FunctionType::get(Type::getVoidTy(M.getContext()), params, false));
	ConstantInt* numthreadsARG = ConstantInt::get(M.getContext(), APInt(32, numOMPthreads, false));
	//create the call instruction to legup_set_num_threads
	CallInst::Create(omp_set_threads, numthreadsARG, "", BB->begin());	

	//minus 1 since the original OMP_parallel_start will be replaced with one 
	//numOMPthreads--;

	//set the argument type to the argument of the original omp_parallel_start function
	params.clear();
	params.push_back(OMP_arg->getType());
	int numcallingWrapper=0;

	std::string wrapperName;
	CallInst* voidCI; Constant* FCache;
	//if it's an avalon accelerator
	if (isAvalonAccel) {
		//add it as many times as there are number of OMP threads																			
		for (int i = 0; i < numOMPthreads; i++) {
				
			//insert new calls to wrapper functions
			//get the name of the calling wrapper
			wrapperName = getWrapperName(ompFuncPtr, call);
			std::stringstream ss;
			ss << numcallingWrapper;
			//add the calling wrapper number
			wrapperName += ss.str();

			//add the function definition
			FCache = M.getOrInsertFunction(wrapperName, FunctionType::get(Type::getVoidTy(M.getContext()), params, false));
			//create the new call instructions
			voidCI = CallInst::Create(FCache, OMP_arg, "", I);
			//increment the calling wrapper counter
			numcallingWrapper++;
		}
	} else {
		wrapperName = ompFuncPtr->getName().str();
		//create the new call instructions
		voidCI = CallInst::Create(ompFuncPtr, OMP_arg, "", I);
		//increment the calling wrapper counter
		//numcallingWrapper++;
		voidCI->setMetadata("OMP", MDNode::get(I->getContext(), MDString::get(I->getContext(), utostr(numOMPthreads))));
		voidCI->setMetadata("OMPTYPE", MDNode::get(I->getContext(), MDString::get(I->getContext(), "call")));

	}
	
	//actually if it's an internal accelerator, it will be removed from swonly, hence no need to add anything here 
	//metadata should be added before, either in parallel accels pass, or later in hwonly pass. 
	/*	
	else {
		//if it's an internal accelerator, only add the call instruction once
		//add metadata indication that it's OMP and save the number of parallel threads
		wrapperName = getWrapperName(ompFuncPtr, call);
		//add the function definition
		FCache = M.getOrInsertFunction(wrapperName, FunctionType::get(Type::getVoidTy(M.getContext()), params, false));
		//create the new call instructions
		voidCI = CallInst::Create(FCache, OMP_arg, "", I);
		//setMetadataIns(voidCI, "OMP", numOMPthreads);
		I->setMetadata("OMP", MDNode::get(I->getContext(), MDString::get(I->getContext(), utostr(numOMPthreads))));
	}*/

	return isAvalonAccel;
}

bool replaceOMPParallelEnd(Module &M, BasicBlock::iterator I, CallInst *CI, accelFcts &accel, 
	int numOMPthreads, std::string ompFuncName, const std::set<Function*> &internalAccels) {

	//now you need to find the function pointer for the function
	Function * ompFuncPtr =	findFuncPtr(M, ompFuncName.c_str());

	//search to see if this function is one of the internal accelerators
	//if not found, that means its an avalon accelerator
	bool isAvalonAccel = (internalAccels.find(ompFuncPtr) == internalAccels.end());

	//delete the original call instruction 
	deleteInstruction(CI);
	
	accel.fct = ompFuncPtr;
	accel.type = poll;
	accel.numAccelerated = numOMPthreads;

	int numpollingWrapper=0;
	Constant* FCache; CallInst* voidCI;
	std::string wrapperName;
	std::vector<Type*> params;
	if (isAvalonAccel) {
		//add it as many times as there are number of OMP threads																			
		for (int i = 0; i < numOMPthreads; i++) {
			//insert new calls to polling wrapper functions
			//get the name of the polling wrapper
			wrapperName = getWrapperName(ompFuncPtr, poll);
			std::stringstream ss;
			ss << numpollingWrapper;
			wrapperName += ss.str();

			//create the new call instructions
			FCache = M.getOrInsertFunction(wrapperName, FunctionType::get(Type::getVoidTy(M.getContext()), params, false));
			CallInst::Create(FCache, "", I);
			numpollingWrapper++;	
		}
	} else {
		wrapperName = ompFuncPtr->getName().str();
		//stripInvalidCharacters(wrapperName);
		//add the function definition
		//FCache = M.getOrInsertFunction(wrapperName, FunctionType::get(Type::getVoidTy(M.getContext()), params, false));
		//create the new call instructions
		//voidCI = CallInst::Create(FCache, "", I);
		//voidCI = CallInst::Create(ompFuncPtr, "", I);
		
		voidCI = CallInst::Create(ompFuncPtr, ConstantPointerNull::get(PointerType::get(IntegerType::get(M.getContext(), 8), 0)), "", I);
		//increment the calling wrapper counter
		voidCI->setMetadata("OMP", MDNode::get(I->getContext(), MDString::get(I->getContext(), utostr(numOMPthreads))));
		voidCI->setMetadata("OMPTYPE", MDNode::get(I->getContext(), MDString::get(I->getContext(), "poll")));
	}
	return isAvalonAccel;
}

/// getWrapperName - gives the name of the legup wrapper for a function
/// wrapperType may be seq, call, poll, lock, or unlock
/// if wrapperType is seq, call, or poll, append the function name at the end
string getWrapperName(Function *F, wrapperType type) {
	string wrapperName = "legup_";
    string funcName = F->getName();
    stripInvalidCharacters(funcName);	

	if (type == call) {
		wrapperName += "call_" + funcName;
	} else if (type == poll) {
		wrapperName += "poll_" + funcName;
	} else if (type == seq) {
		wrapperName += "seq_" + funcName;
	} else if (type == lock) {
		wrapperName += "lock";
	} else if (type == unlock) {
		wrapperName += "unlock";
	}

    return wrapperName;
}

void deleteInstruction(Instruction *I) {

	if (!I->use_empty()) {
		I->replaceAllUsesWith(UndefValue::get(I->getType()));
	}
	I->eraseFromParent();
}

//this function was copied from CloneFunction in Transforms/Utils/CloneFunction.cpp
Function *CloneFunctionWithNewName(std::string newName, const Function *F, ValueToValueMapTy &VMap,
                              bool ModuleLevelChanges,
                              ClonedCodeInfo *CodeInfo) {
  std::vector<Type*> ArgTypes;

  // The user might be deleting arguments to the function by specifying them in
  // the VMap.  If so, we need to not add the arguments to the arg ty vector
  //
  for (Function::const_arg_iterator I = F->arg_begin(), E = F->arg_end();
       I != E; ++I)
    if (VMap.count(I) == 0)  // Haven't mapped the argument to anything yet?
      ArgTypes.push_back(I->getType());

  // Create a new function type...
  FunctionType *FTy = FunctionType::get(F->getFunctionType()->getReturnType(),
                                    ArgTypes, F->getFunctionType()->isVarArg());

  // Create the new function...
  Function *NewF = Function::Create(FTy, F->getLinkage(), newName);

  // Loop over the arguments, copying the names of the mapped arguments over...
  Function::arg_iterator DestI = NewF->arg_begin();
  for (Function::const_arg_iterator I = F->arg_begin(), E = F->arg_end();
       I != E; ++I)
    if (VMap.count(I) == 0) {   // Is this argument preserved?
      DestI->setName(I->getName()); // Copy the name over...
      VMap[I] = DestI++;        // Add mapping to VMap
    }

  SmallVector<ReturnInst*, 8> Returns;  // Ignore returns cloned.
  CloneFunctionInto(NewF, F, VMap, ModuleLevelChanges, Returns, "", CodeInfo);
  return NewF;
}

} // end of legup namespace
