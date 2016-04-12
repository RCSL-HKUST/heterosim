//===-- ASAPScheduler.cpp ---------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the simple ASAP scheduler.
//
//===----------------------------------------------------------------------===//

#include "llvm/Support/raw_ostream.h"
#include "utils.h"
#include "ASAPScheduler.h"
#include "llvm/Module.h"
#include "llvm/Instructions.h"

using namespace llvm;
using namespace legup;

namespace legup {

void ASAPScheduler::getSoonestStateRegUses(InstructionNode *in,
        float &propDelay, unsigned &stateNum) {
    for (InstructionNode::iterator i = in->dep_begin(), 
            e = in->dep_end(); i != e; ++i) {
      InstructionNode *depIn = *i;

        unsigned depState = map->getState(depIn) +
            Scheduler::getNumInstructionCycles(depIn->getInst());
        if (depIn->getAsapDelay() + in->getDelay() > // ??? janders watch OUT added '1 ||'
                InstructionNode::getMaxDelay()) {
            depState++;
            if (depState > stateNum) {
                propDelay = in->getDelay();
            }
        } else if (depState == stateNum) {
            propDelay = std::max(propDelay, depIn->getAsapDelay() +
                in->getDelay());
        }
        stateNum = std::max(stateNum, depState);
    }
}

void ASAPScheduler::getSoonestStateMemUses(InstructionNode *in,
        float &propDelay, unsigned &stateNum) {
    for (InstructionNode::iterator i = in->mem_dep_begin(),
            e = in->mem_dep_end(); i != e; ++i) {
        InstructionNode *memDepIn = *i;
        unsigned depState = map->getState(memDepIn) + 1;
        if (isaDummyCall(in->getInst())) {
            depState--;
        }
        // special case for a call following a load
        if (isa<CallInst>(in->getInst()) && isa<LoadInst>(memDepIn->getInst())) {
            depState++;
        }
        if (depState > stateNum) {
            stateNum = depState;
            propDelay = in->getDelay();
        }
    }
}

/// Reused for constraint scheduling.
unsigned ASAPScheduler::getSoonestState(InstructionNode *in) {
    unsigned stateNum = 0;
    float propDelay = in->getDelay();

    getSoonestStateRegUses(in, propDelay, stateNum);

    getSoonestStateMemUses(in, propDelay, stateNum);

    in->setAsapDelay(propDelay);
    return stateNum;
}

SchedulerMapping* ASAPScheduler::createMapping(Function *F, SchedulerDAG *dag) {
    map = new SchedulerMapping();

    for (Function::iterator b = F->begin(), be = F->end(); b != be; ++b) {
        unsigned numStates = 0;
        for (BasicBlock::iterator instr = b->begin(), ie = b->end();
                instr != ie; ++instr) {
            InstructionNode *in = dag->getInstructionNode(instr);
            unsigned stateNum = getSoonestState(in);
            map->setState(in, stateNum);
            numStates = std::max(numStates, stateNum +
                    Scheduler::getNumInstructionCycles(instr));
        }
        map->setNumStates(b, numStates);

        // return must always be last instruction
        // ie. 'ret void'
        Instruction *inst = b->getTerminator();
        if (isa<ReturnInst>(inst)) {
            InstructionNode *in = dag->getInstructionNode(inst);
            map->setState(in, map->getNumStates(b));
        }
    }
    return map;
}

} // End legup namespace

