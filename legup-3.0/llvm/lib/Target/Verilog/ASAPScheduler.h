//===-- SimpleSchedulers.h -------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains simple ASAP and ALAP schedulers.
//
//===----------------------------------------------------------------------===//

#ifndef SIMPLESCHEDULERS_H
#define SIMPLESCHEDULERS_H

#include "Scheduler.h"
#include "llvm/ADT/DenseMap.h"

using namespace llvm;

namespace legup {

class Scheduler;

/// ASAPScheduler - A bare bones As-Soon-As-Possible Scheduler
/// @brief Legup sipmle ASAP Scheduler
class ASAPScheduler : public Scheduler {
public:
    ASAPScheduler () : map(0), dag(0) {}
    SchedulerMapping* createMapping(Function *F, SchedulerDAG *dag);

    unsigned getSoonestState(InstructionNode *);
private:
    SchedulerMapping *map;
    void getSoonestStateMemUses(InstructionNode *in, float &propDelay, unsigned
            &stateNum);
    void getSoonestStateRegUses(InstructionNode *in, float &propDelay, unsigned
            &stateNum);
    SchedulerDAG *dag;
};

} // End legup namespace

#endif
