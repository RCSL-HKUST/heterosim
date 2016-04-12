//===- utils.h - LegUp pre-LTO helper functions -------------------------===//
//
/// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// Legup helper functions
//
//===----------------------------------------------------------------------===//


#ifndef LEGUP_UTILSTRANSFORMS_H
#define LEGUP_UTILSTRANSFORMS_H

#include "llvm/Pass.h"
#include "llvm/Function.h"
#include "llvm/Module.h"
#include "llvm/CodeGen/IntrinsicLowering.h"
#include "llvm/Support/IRBuilder.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Instructions.h"
#include "llvm/Intrinsics.h"
#include "llvm/Target/TargetData.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/ADT/StringExtras.h"
#include "llvm/Support/Debug.h"
#include "LegupConfig.h"
#include <string>
#include "llvm/Support/Signals.h"
#include <sstream>
#include "llvm/Transforms/Utils/Cloning.h"
#include "../../Target/Verilog/utils.h"

using namespace llvm;
using namespace std;

namespace legup {

enum wrapperType {
	seq, call, poll, lock, unlock
};
struct accelFcts {
	wrapperType type;
	Function * fct;
	int numAccelerated;
	//overloading operator == to check if two structs are equal
	bool operator==(const accelFcts &a) const { 
		//if ((type == a.type) && (fct == a.fct) && (numAccelerated == a.numAccelerated)) {
		if ((type == a.type) && (fct == a.fct)) {
			return true;
		} else {
			return false;
		}
	}
};

std::string getLabel(const Value *v);

void addCalledFunctions(Function *F,
        std::set<GlobalValue*> &HwFcts);

/// get all non-accelerated functions to be deleted
void getAcceleratedFunctions(Module &M, std::set<GlobalValue*> &HwFcts);

//void replaceAll(std::string &haystack, const std::string &needle, const std::string &replace);

//void stripInvalidCharacters(std::string &str);

//Function * findFuncPtr (Module &M, std::string funcName);
Function * findFuncPtr (Module &M, const char *funcName);

bool isolateGV(Module &M, std::set<GlobalValue*> &Named);

bool deleteGV(std::set<GlobalValue*> &Named);

//void copyArguments (Value* startIdx, Value* endIdx, std::vector<Value*>& newParam);
//std::vector<Value*> copyArguments (Value* startIdx, Value* endIdx);
std::vector<Value*> copyArguments (User::op_iterator startIdx, User::op_iterator endIdx);

/// GetOutputStream - return a stream to the given file
formatted_raw_ostream * GetOutputStream(string & OutputFilename);

/// ReplaceCallWith - This function is used when we want to lower an intrinsic
/// call to a call of an external function.  This handles hard cases such as
/// when there was already a prototype for the external function, and if that
/// prototype doesn't match the arguments we expect to pass in.

// Note: This is defined in a header file due to the template parameter
// Copied from CodeGen/IntrinsicLowering.cpp, added eraseFromParent() call
//template <class ArgIt>

CallInst *ReplaceCallWith(const char *NewFn, CallInst *CI,
                                 //ArgIt ArgBegin, ArgIt ArgEnd,
								 vector<Value*> Args,
								 //std::vector<Value*>::iterator startIdx, std::vector<Value*>::iterator endIdx,
                                 Type *RetTy);

unsigned getBitWidth(const Type* T);

void findInternalAccels(Module &M, std::set<Function*> &internalAccels);

void addInternalAccels(Module &M, Function *F, std::set<Function*> &internalAccels);

void replaceAll(std::string &haystack, const std::string &needle, const std::string &replace);

void stripInvalidCharacters(std::string &str);

bool replaceOMPParallelStart(Module &M, Function::iterator BB, BasicBlock::iterator I, CallInst *CI, accelFcts &accel, 
	int &numOMPthreads, std::string &ompFuncName, const std::set<Function*> &internalAccels);

bool replaceOMPParallelEnd(Module &M, BasicBlock::iterator I, CallInst *CI, accelFcts &accel, 
	int numOMPthreads, std::string ompFuncName, const std::set<Function*> &internalAccels);

string getWrapperName(Function *F, wrapperType type);

void deleteInstruction(Instruction *I);

Function *CloneFunctionWithNewName(std::string newName, const Function *F, ValueToValueMapTy &VMap,
                              bool ModuleLevelChanges,
                              ClonedCodeInfo *CodeInfo);

} // end of legup namespace

#endif
