//===- HwOnlyRename.cpp - LegUp pre-LTO pass ------------------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// The HwOnlyRename pass strips away software only (non-accelerated) functions
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

class HwOnlyRename  : public ModulePass {
public:
    static char ID; // Pass identification, replacement for typeid
    HwOnlyRename() : ModulePass(ID) {}

    virtual bool runOnModule(Module &F);

};

char HwOnlyRename::ID = 0;
static RegisterPass<HwOnlyRename> Y("legup-hw-only-rename",
        "rename accelerated functions and set linkage for global varaibles");

bool HwOnlyRename::runOnModule(Module &M) {

    // If a function is not the accelerating function (the descendents),
    //    then add suffix '_accelerated' to the function names.
    // In the case that a descendent function appears in both HW and SW side,
    //    this makes sure BB cycles can still be correctly gathered.
    for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F)
        if ( !F->isIntrinsic () && !LEGUP_CONFIG->isAccelerated(*F))
            F->setName(F->getNameStr()+"_accelerated");

    // Since this IR will be linked back with sw-only IR, global variables should be set
    //    as LinkOnceAnyLinkage
    for (Module::global_iterator I = M.global_begin(), E = M.global_end(); I != E; ++I) {
        if (!I->isDeclaration()) {
            I->setLinkage(GlobalValue::LinkOnceAnyLinkage);
        }
    }
  
    return true;

}

} // end of legup namespace

