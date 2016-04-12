//===- NonAcceleratedOnly.cpp - LegUp pre-LTO pass -------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// The NonAcceleratedOnly pass strips away all accelerated functions including
// those still used in SW part.
//
//===----------------------------------------------------------------------===//

#include "llvm/Pass.h"
#include "llvm/Function.h"
#include "llvm/Module.h"
#include "llvm/Instructions.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/IRBuilder.h"
#include "LegupConfig.h"
#include "utils.h"

using namespace llvm;

namespace legup {

class NonAcceleratedOnly  : public ModulePass {
public:
    static char ID; // Pass identification, replacement for typeid
    NonAcceleratedOnly() : ModulePass(ID) {}

    virtual bool runOnModule(Module &F);
    };

char NonAcceleratedOnly::ID = 0;
static RegisterPass<NonAcceleratedOnly> Y("legup-non-accelerated-only",
        "Strip away non-accelerated functions");

/// remove the accelerating function
bool NonAcceleratedOnly::runOnModule(Module &M) {

    std::set<GlobalValue*> HwFcts;

    for (Module::iterator I = M.begin(), E = M.end(); I != E; ++I)
        if (! LEGUP_CONFIG->isAccelerated(*I))
            HwFcts.insert(I);

    return isolateGV(M, HwFcts);
}


} // end of legup namespace

