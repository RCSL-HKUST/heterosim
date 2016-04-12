//===-- Scheduler.cpp - Scheduling Pass -------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the Legup Scheduler passes.
//
//===----------------------------------------------------------------------===//

#include "RTL.h"
#include "llvm/ADT/StringExtras.h"
#include "Scheduler.h"
#include "LegupConfig.h"
#include "llvm/Function.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/raw_ostream.h"

using namespace legup;


Allocation* Scheduler::alloc = NULL;

// getNumInstructionCycles - return the number of cycles for an instruction to
// complete
unsigned Scheduler::getNumInstructionCycles(Instruction *instr) {
    if (isa<CallInst>(instr) && !isaDummyCall(instr)) {
        return 1;
    }

    if (dyn_cast<FPExtInst>(instr)){
        return 2;
    }

    if (dyn_cast<FPTruncInst>(instr)){
        return 3;
    }

    if (dyn_cast<SIToFPInst>(instr)){
        return 6;
    }

    if (dyn_cast<FPToSIInst>(instr)){
        return 6;
    }

    if (const FCmpInst *cmp = dyn_cast<FCmpInst>(instr)){
        switch (cmp->getPredicate()) {
            case (FCmpInst::FCMP_OEQ):
            case (FCmpInst::FCMP_UEQ):
            case (FCmpInst::FCMP_ONE):
            case (FCmpInst::FCMP_UNE):
            case (FCmpInst::FCMP_OLE):
            case (FCmpInst::FCMP_ULE):
            case (FCmpInst::FCMP_OLT):
            case (FCmpInst::FCMP_ULT):
            case (FCmpInst::FCMP_OGE):
            case (FCmpInst::FCMP_UGE):
            case (FCmpInst::FCMP_OGT):
            case (FCmpInst::FCMP_UGT):
                return 1;
            default:
                return 0;
        }
    }

   switch(instr->getOpcode()) {
      case (Instruction::UDiv):
      case (Instruction::SDiv):
      case (Instruction::URem):
      case (Instruction::SRem):
          {
          unsigned pipelineDepth =
              getBitWidth(instr->getType());
          return pipelineDepth;
          }
      case (Instruction::Mul):
          assert(alloc);
          if (alloc->useExplicitDSP(instr)) {
              return LEGUP_CONFIG->getParameterInt("MULTIPLIER_PIPELINE_STAGES");
          } else {
              return 0;
          }
      case (Instruction::Load):
          if (LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
              return 1;
          } else {  
              return 2;
          }
//Floating point core latencies (fixed) chosen based on Jack's experiment.
//Lower latency causes Fmax to drop.  
//Latencies are specified through Quartus GUI when generating the cores
      case (Instruction::FAdd):
          return 14;
      case (Instruction::FSub):
          return 14;
      case (Instruction::FMul):
          return 11;
      case (Instruction::FDiv):{
          int width = instr->getOperand(0)->getType()->getPrimitiveSizeInBits();
          if (width == 32)
              return 33;
          else
              return 61;
      }
      default:
	return 0;
   }
}

/**
 * Determine the initiation interval for a function.
 * This is used for shared resources and affects scheduling.
 * For example, one may want to have a divider functional unit
 * that takes, say 10 cycles to complete (latency), with 
 * the unit capable of starting a new division every 2 cycles (initiation interval).
 * 
 * @param instr The instruction we wish to find the II for.
 */
unsigned Scheduler::getInitiationInterval(Instruction *instr) {

  switch(instr->getOpcode()) {
    default:
      return 1;
  }
}
