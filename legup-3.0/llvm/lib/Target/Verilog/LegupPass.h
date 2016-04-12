//===-- LegupPass.h - Legup Pass --------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the main LLVM pass for Legup
//
//===----------------------------------------------------------------------===//


#ifndef LEGUP_PASS_H
#define LEGUP_PASS_H

#include "llvm/Pass.h"
#include "llvm/Support/InstVisitor.h"
#include "MinimizeBitwidth.h"
#include "MinimizeBitwidth.h"
#include "LVA.h"
#include "LegupConfig.h"
#include "llvm/Analysis/AliasAnalysis.h"

#include <set>

using namespace llvm;

namespace legup {

static std::string LEGUP_VERSION = "3.0";

class Allocation;
class HwModule;

/// LegupPass - This class is the LLVM pass that converts LLVM IR into
/// Verilog
/// @brief Legup Backend Pass
class LegupPass : public ModulePass, public InstVisitor<LegupPass> {
public:

    LegupPass(raw_ostream &o) : ModulePass(ID), Out(o), allocation(0) {}

    ~LegupPass();

    virtual const char *getPassName() const { return "LegupPass backend"; }

    /// doInitialization - Allocate RAMs for global variables
    virtual bool doInitialization(Module &M);

    /// runOnFunction - schedule each function and create HwModule object
    bool runOnModule(Module &M);

    /// doFinalization - print the verilog
    virtual bool doFinalization(Module &M);

private:
    void printVerilog(const std::set<const Function*> &AcceleratedFcts);
    void printResourcesFile(std::string fileName);

    virtual void getAnalysisUsage(AnalysisUsage &AU) const {
        AU.addRequired<LiveVariableAnalysis>();
        AU.addRequired<MinimizeBitwidth>();
	AU.addRequired<AliasAnalysis>();
        AU.setPreservesAll();
    }

    raw_ostream &Out;
    static char ID;
    Allocation *allocation;
    LiveVariableAnalysis *LVA;
    MinimizeBitwidth *MBW;
};

} // End legup namespace

#endif
