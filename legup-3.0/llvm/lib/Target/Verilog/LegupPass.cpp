//===-- LegupPass.cpp -----------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the LegupPass object
//
//===----------------------------------------------------------------------===//

#include "Allocation.h"
#include "LegupPass.h"
#include "VerilogWriter.h"
#include "utils.h"
#include "Binding.h"
#include "RTL.h"
#include "GenerateRTL.h"
#include "LegupConfig.h"
#include "Scheduler.h"
#include "ResourceEstimator.h"
#include <fstream>

using namespace llvm;
using namespace legup;

namespace legup {

bool LegupPass::doInitialization(Module &M) {
    allocation = new Allocation(&M);
    Scheduler::alloc = allocation;

    // no modification
    return false;
}

bool LegupPass::runOnModule(Module &M) {
    doInitialization(M);

	for (Module::iterator f = M.begin(), FE = M.end(); f != FE; ++f) {
        Function &F = *f;

        // can't call a function analysis pass on a function declaration
        // without a body
        if (F.isDeclaration()) continue;

        DEBUG(errs() << "Entering function: " << F.getName() << "\n");

        // debugging: view a dot graph of function control flow graph:
        //F->viewCFG();

        // Do not codegen any 'extern' functions at all, they have
        // definitions outside the translation unit.
        if (F.hasAvailableExternallyLinkage()) {
            DEBUG(errs() << "Skipping function (extern)\n");
            continue;
        }

        // Create an RTL Generator for this function
        allocation->createGenerateRTL(&F);
    }
    
    allocation->addAA(&getAnalysis<AliasAnalysis>());	
  	
    // Schedule the operations in each function
    for (Allocation::hw_iterator i = allocation->hw_begin(), ie =
            allocation->hw_end(); i != ie; ++i) {
        GenerateRTL *HW = *i;
        HW->scheduleOperations();
    }

    // Calculate the required functional units (multipliers/dividers) required
    // This requires scheduling information to get a complete picture of the
    // overall resource usage
    allocation->calculateRequiredFunctionalUnits();

    // Generate the RTL
    for (Allocation::hw_iterator i = allocation->hw_begin(), ie =
            allocation->hw_end(); i != ie; ++i) {
        GenerateRTL *HW = *i;
        Function *F = HW->getFunction();

        allocation->addLVA(F, &getAnalysis<LiveVariableAnalysis>(*F));
        allocation->addMBW(F, &getAnalysis<MinimizeBitwidth>(*F));

        RTLModule* rtl = HW->generateRTL();

        // Store the RTL for this module in the Allocation object
        allocation->addRTL(rtl);

    }

    doFinalization(M);

    // no modifications to IR so return false
    return false;

}


bool LegupPass::doFinalization(Module &M) {
    std::set<const Function*> AcceleratedFcts;

    if (M.begin() == M.end()) {
        llvm_unreachable("No functions exist in the module!\n");
    }

	for (Module::iterator F = M.begin(), FE = M.end(); F != FE; ++F) {
        if (LEGUP_CONFIG->isAccelerated(*F)) {
        	AcceleratedFcts.insert(F);
		}
	}

    allocation->addGlobalDefines();


    if (!LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
        if (!LEGUP_CONFIG->getParameterInt("KEEP_SIGNALS_WITH_NO_FANOUT")) {
            for (Allocation::const_rtl_iterator i = allocation->rtl_begin(), e =
                    allocation->rtl_end(); i != e; ++i) {
                RTLModule *rtl = *i;

                // delete register signals that are unconnected
                rtl->removeSignalsWithoutFanout();

                rtl->verifyConnections(allocation);

            }
        }
    }

    if (LEGUP_CONFIG->getParameterInt("LOOP_PIPELINING")) {
        for (Allocation::const_rtl_iterator i = allocation->rtl_begin(), e =
                allocation->rtl_end(); i != e; ++i) {
            RTLModule *rtl = *i;
            if (rtl->getName() == "main") {
                rtl->buildCircuitStructure();
                formatted_raw_ostream out(allocation->getPipelineDotFile());
                rtl->printPipelineDot(out);
            }
        }
    }

    printVerilog(AcceleratedFcts);

    printResourcesFile("resources.legup.rpt");

    return false;
}

LegupPass::~LegupPass() {
    assert(allocation);
    delete allocation;
}

void LegupPass::printVerilog(const std::set<const Function*> &AcceleratedFcts) {
    VerilogWriter writer(Out, allocation, AcceleratedFcts);
    writer.print();
}

void LegupPass::printResourcesFile(std::string fileName) {
    std::string EstimateError = "Error in printing early resource estimate\n";
    raw_fd_ostream resourceFile(fileName.c_str(), EstimateError);
    resourceFile << getFileHeader();

    ResourceEstimator estimator(allocation);
    estimator.print(resourceFile);
}

} // End legup namespace

