//===-- SchedulerDAG.cpp -----------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the data structures needed for scheduling.
//
//===----------------------------------------------------------------------===//

#include "FiniteStateMachine.h"
#include "SchedulerDAG.h"
#include "Scheduler.h"
#include "State.h"
#include "LegupPass.h"
#include "llvm/LLVMContext.h"
#include "llvm/Function.h"
#include "llvm/Module.h"
#include "llvm/Instructions.h"
#include "llvm/Support/ErrorHandling.h"
#include "utils.h"
#include "LegupConfig.h"
#include "llvm/Pass.h"
#include "llvm/Analysis/AliasAnalysis.h"

using namespace llvm;
using namespace legup;

namespace legup {

// Add dependencies for all the operands of iNode
// ie. %3 = add %1, %2
// %3 is dependent on %1 and %2
// %1 is used by %3
// %2 is used by %3
void SchedulerDAG::regDataDeps(InstructionNode *iNode) {
    Instruction *inst = iNode->getInst();
    // these instructions are not scheduled
    if (isa<AllocaInst>(inst) || isa<PHINode>(inst)) return;
    for (User::op_iterator i = inst->op_begin(), e = inst->op_end(); i != e;
            ++i) {
        // we only care about operands that are created by other instructions
        Instruction *dep = dyn_cast<Instruction>(*i);
        // also ignore if the dependency is an alloca
        if (!dep || isa<AllocaInst>(dep)) continue;

        // ignore operands from other basic blocks, these are
        // guaranteed to be in another state
        if (dep->getParent() != inst->getParent()) continue;

        assert (nodeLookup.find(dep) != nodeLookup.end());

        InstructionNode* depNode = nodeLookup[dep];
        iNode->addDepInst(depNode);
        depNode->addUseInst(iNode);
    }

    // push multipliers into separate states...
    if (LEGUP_CONFIG->getParameterInt("MINIMIZE_MULTIPLIERS")) {
        Instruction *ci = iNode->getInst();
        if (alloc->useExplicitDSP(ci)) {
            BasicBlock* b = ci->getParent();
            for (BasicBlock::iterator dep = b->begin(), ie = b->end(); dep != ie; ++dep) {
                if (ci == dep) {
                    break;
                }
                if (alloc->useExplicitDSP(dep)) {
                    InstructionNode* depNode = nodeLookup[dep];
                    iNode->addDepInst(depNode);
                    depNode->addUseInst(iNode);
                }
            }
        }
    }
}

bool SchedulerDAG::addDependency(Instruction *inst, Instruction *dep)
{
    AliasAnalysis::Location Loc1, Loc2;

    bool store = false;
    if (LoadInst* lInst = dyn_cast<LoadInst>(inst)) {
        Loc1 = AliasA->getLocation(lInst);
    } else if (StoreInst* sInst = dyn_cast<StoreInst>(inst)) {
        Loc1 = AliasA->getLocation(sInst);
        store = true;
    } else {
        assert(0 && "Unexpected input");
    }

    if (isa<CallInst>(dep)) {
        // assume that any loads/stores after a call must indeed execute
        // AFTER the call
        return true;

    } else if (isa<StoreInst>(inst) && isa<LoadInst>(dep)) {
        // if iNode (function arg) is a store and dep is a load from
        // potentially the same address
        LoadInst* lInst = dyn_cast<LoadInst>(dep);
        Loc2 = AliasA->getLocation(lInst);
        if (!AliasA->isNoAlias(Loc1, Loc2))  {
            return true;
        }

    } else if (isa<StoreInst>(dep)) {
        // if (iNode is a store OR a load) and dep is a store to
        // potentially same address
        StoreInst* sInst = dyn_cast<StoreInst>(dep);
        Loc2 = AliasA->getLocation(sInst);
        if (!AliasA->isNoAlias(Loc1, Loc2)) {
            return true;
        }
    }
    return false;
}

void SchedulerDAG::memDataDeps(InstructionNode *iNode) {
    Instruction *inst = iNode->getInst();
    BasicBlock* bb = inst->getParent();

    // walk through the instructions in the same BB, beginning at the start
    // of the BB and terminating when we hit the instruction for which
    // this method was called.
    for (BasicBlock::iterator dep = bb->begin(), ie = bb->end(); dep != ie;
            ++dep) {
        if (inst == dep) break;
        if (isa<AllocaInst>(dep)) continue;

        if (addDependency(inst, dep)) {
            InstructionNode* depNode = nodeLookup[dep];
            iNode->addMemDepInst(depNode);
            depNode->addMemUseInst(iNode);
        }
    }
}

// get ram from a load/store pointer operand
// todo: refactor with GenerateRTL
Value *getLocalMem(Instruction *I) {
    if (!LEGUP_CONFIG->getParameterInt("PARALLEL_LOCAL_RAMS")) {
        return NULL;
    }

    Value *addr = NULL;
    if (LoadInst *M = dyn_cast<LoadInst>(I)) {
        addr = M->getPointerOperand();
    } else if (StoreInst *M = dyn_cast<StoreInst>(I)) {
        addr = M->getPointerOperand();
    } else {
        return NULL;
    }

    assert(addr);
    Value *mem = addr;
    // handle cases like:
    // %st.i.0 = phi i32* [ getelementptr inbounds ([3 x [3 x i32]]* @main.A, i32 0, i32 0, i32 0), %0 ], [ %6, %4 ]
    // assume the phi isn't going to switch to another array
    for (int depth = 0; depth < 10; depth++) {
        const User *U = dyn_cast<User>(mem);
        if (U->getNumOperands() > 1 || isa<BitCastInst>(U)) {
            mem = U->getOperand(0);
        } else {
            break;
        }
    }
    return mem;
}

void SchedulerDAG::callDataDeps(InstructionNode *iNode) {
    Instruction *ci = iNode->getInst();
    BasicBlock* b = ci->getParent();

    Value *localMem = NULL;
    if (LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
        localMem = getLocalMem(ci);
    }

    for (BasicBlock::iterator dep = b->begin(), ie = b->end(); dep != ie; ++dep) {
        if (ci == dep) {
            break;
        }

        Value *depMem = getLocalMem(dep);
        if (localMem && depMem) {
            // only make them dependent if they point to the same memory
            if (localMem == depMem) {
                InstructionNode* depNode = nodeLookup[dep];
                iNode->addMemDepInst(depNode);
                depNode->addMemUseInst(iNode);
            }
            continue;
        }


        if (isa<LoadInst>(dep) || isa<StoreInst>(dep) || isa<CallInst>(dep)) {
            InstructionNode* depNode = nodeLookup[dep];
            iNode->addMemDepInst(depNode);
            depNode->addMemUseInst(iNode);
        }
    }
}

SchedulerDAG::~SchedulerDAG() {
    for (DenseMap<Instruction *, InstructionNode*>::iterator i =
            nodeLookup.begin(), e = nodeLookup.end(); i != e; ++i) {
        delete i->second;
    }
}

// hasNoDelay - detect instructions which have no delay. For example a shift by
// constant will just be turned into a wire by Quartus
bool hasNoDelay(Instruction *instr) {
   if (instr->isShift()) {
       return (isa<ConstantInt>(instr->getOperand(1)));
   }
   if (isa<GetElementPtrInst>(instr)) {
       if (LEGUP_CONFIG->getParameterInt("DONT_CHAIN_GET_ELEM_PTR")) {
           return false;
       }
       for (unsigned i = 1; i < instr->getNumOperands(); i++) {
           if (!isa<ConstantInt>(instr->getOperand(i))) {
               return false;
           }
       }
       return true;
   }

   switch(instr->getOpcode()) {
       case (Instruction::And):
       case (Instruction::Or):
           return (isa<ConstantInt>(instr->getOperand(1)) ||
                       getBitWidth(instr->getType()) == 1);
   }
   return (instr->isCast() || isa<PHINode>(instr) || isa<AllocaInst>(instr) ||
           instr->isTerminator() || isa<LoadInst>(instr) ||
           isa<CallInst>(instr));
}

void SchedulerDAG::updateDAGwithInst(Instruction *instr) {
    // generate Instruction to InstructionNode mapping
    InstructionNode *iNode = new InstructionNode(instr);
    nodeLookup[instr] = iNode;

    // set delay
    std::string opName = LEGUP_CONFIG->getOpNameFromInst(instr);
    if (opName.empty() || isMem(instr)) {
        if (isa<GetElementPtrInst>(instr)) {
               if (LEGUP_CONFIG->getParameterInt("DONT_CHAIN_GET_ELEM_PTR")) {
                   iNode->setAtMaxDelay();
               } else if (hasNoDelay(instr)) {
                   iNode->setDelay(0);
               } else {
                   iNode->setAtMaxDelay();
               }
        } else if (hasNoDelay(instr)) {
            iNode->setDelay(0);
        } else {
            //errs() << "Empty: " << *instr << "\n";
            //assert(hasNoDelay(instr));
            iNode->setAtMaxDelay();
        }
    } else {
        Operation *Op = LEGUP_CONFIG->getOperationRef(opName);
        assert(Op);
        float critDelay = Op->getCritDelay();

        if (critDelay > InstructionNode::getMaxDelay()) {
            //errs() << "Warning delay " << critDelay <<
            //    "ns is greater than clock constraint of " <<
            //    InstructionNode::getMaxDelay() << "ns for instruction: " <<
            //    *instr << "\n";
            iNode->setAtMaxDelay();
        } else if (isMul(instr) &&
                LEGUP_CONFIG->getParameterInt("MULTIPLIER_NO_CHAIN")) {
            iNode->setAtMaxDelay();
        } else {
            iNode->setDelay(critDelay);
        }

    }

    // generate dependencies
    regDataDeps(iNode);

    if (isa<LoadInst>(*instr) || isa<StoreInst>(*instr)) {
        if (LEGUP_CONFIG->getParameterInt("ALIAS_ANALYSIS")) {
            memDataDeps(iNode); // create dependencies based on LLVM alias analysis
        } else {
            callDataDeps(iNode); // create dependences in same order as in IR [LegUp 1.0 & 2.0 functionality]
        }
    } else if (isa<CallInst>(instr)) {
        callDataDeps(iNode);
    }
}

bool SchedulerDAG::runOnFunction(Function &F, AliasAnalysis *A, Allocation *alloc) {
    
    assert(A); 
    AliasA = A;

    for (Function::iterator b = F.begin(), be = F.end(); b != be; b++) {
        for (BasicBlock::iterator instr = b->begin(), ie = b->end();
                instr != ie; ++instr) {
            updateDAGwithInst(instr);
        }
    }
    return false;
}

/// createStates - create new states for an FSM.
void createStates(unsigned begin, unsigned end,
        std::map<unsigned, State*> &orderStates, FiniteStateMachine *fsm) {
    assert (orderStates.find(begin - 1) != orderStates.end());
    for (; begin <= end; begin++) {
        orderStates[begin] = fsm->newState(orderStates[begin - 1]);
    }
}

/// setStateTransitions - determine the state transitions given a terminating
/// instruction
void setStateTransitions(State *lastState, const TerminatorInst *TI,
        State *waitState, std::map<BasicBlock*, State*> bbFirstState) {

    lastState->setTerminating(true);

    // unreachable could occur in a basic block like:
    // bb:                                               ; preds = %entry
    //   %2 = tail call i32 (i8*, ...)* @printf(i8* noalias getelementptr
    //    inbounds ([32 x i8]* @.str1, i32 0, i32 0)) nounwind ; <i32> [#uses=0]
    //   tail call void @exit(i32 1) noreturn nounwind
    //   unreachable
    if (isa<UnreachableInst>(TI) ||
            TI->getOpcode() == Instruction::Ret) {
        lastState->setDefaultTransition(waitState);
        return;
    }

    lastState->setTransitionVariable(TI->getOperand(0));

    BasicBlock *Default;
    if (const SwitchInst *SI = dyn_cast<SwitchInst>(TI)) {

        for (unsigned i = 2, e = SI->getNumOperands(); i != e; i += 2) {
            Value *value = SI->getOperand(i);
            assert(value);
            BasicBlock *Succ = dyn_cast<BasicBlock>(SI->getOperand(i+1));
            State *state = bbFirstState[Succ];

            lastState->addTransition(state, value);
        }

        Default = dyn_cast<BasicBlock>(SI->getDefaultDest());

    } else if (const BranchInst *B = dyn_cast<BranchInst>(TI)) {

        if (B->isConditional()) {
            Default = dyn_cast<BasicBlock>(TI->getSuccessor(1));

            BasicBlock *Succ = dyn_cast<BasicBlock>(B->getSuccessor(0));
            State *state = bbFirstState[Succ];

            lastState->addTransition(state);
        } else {
            Default = dyn_cast<BasicBlock>(TI->getSuccessor(0));
        }

    } else {
        llvm_unreachable(0);
    }

    State *state = bbFirstState[Default];
    lastState->setDefaultTransition(state);

}

/// createFSM - create a Finite State Machine object from the scheduler mapping.
FiniteStateMachine * SchedulerMapping::createFSM(Function *F, SchedulerDAG
        *dag) {
    // create FSM
    FiniteStateMachine *fsm = new FiniteStateMachine();

    // very first state
    State *waitState = fsm->newState();

    // first state in each basic block
    std::map<BasicBlock*, State*> bbFirstState;
    // this map is used for labeling the states
    // each state name will have an index, from this map, as well as being
    // labeled with a function name, and a basic block name.
    std::map<BasicBlock*, unsigned> sCount;

    // create a FSM for the function where each basic block is assigned
    // an empty state as a placeholder
    unsigned bbNum = 0;
    for (Function::iterator b = F->begin(), be = F->end(); b != be; ++b) {
        State *s = fsm->newState();
        s->setBasicBlock(b);
        bbFirstState[b] = s;
        sCount[b] = 0;
        bbNum++;
    }

    for (Function::iterator B = F->begin(), BE = F->end(); B != BE; ++B) {
        std::map<unsigned, State*> orderStates;

        orderStates[0] = bbFirstState[B];
        unsigned lastState = getNumStates(B);

        //int pipelined = getMetadataInt(B->getTerminator(), "legup.pipelined");

        //errs() << "BB: " << getLabel(B) << " lastState: " << lastState << "\n";
        createStates(1, lastState, orderStates, fsm);

        for (BasicBlock::iterator instr = B->begin(), ie = B->end();
                instr != ie; ++instr) {
            Instruction *I = instr;
            unsigned order = getState(dag->getInstructionNode(I));

            orderStates[order]->push_back(instr);

            // need to ensure multi-cycle instructions finish in the basic block
            unsigned delayState = Scheduler::getNumInstructionCycles(I);


            if (delayState == 0) {
                fsm->setEndState(I, orderStates[order]);
                continue;
            }

            delayState += order;
            if (delayState > lastState) {

                /*
                // assume iterative module scheduler has already handled
                // multi-cycle instructions
                // can't insert a new state - assume its ready in the first
                // state of next basic block
                if (pipelined) {
                    // this doesn't work for the kernel
                    assert(isa<LoadInst>(I));
                    //++B;
                    //assert(B != BE);
                    //fsm->setEndState(I, bbFirstState[B]);
                    //--B;

                    // all loads are assumed to be wires
                    fsm->setEndState(I, orderStates[order]);

                    continue;
                }
                */

                createStates(lastState + 1, delayState, orderStates, fsm);
                lastState = delayState;
            }

            fsm->setEndState(I, orderStates[delayState]);
        }

        setStateTransitions(orderStates[lastState], B->getTerminator(),
            waitState, bbFirstState);
        orderStates[lastState]->setBasicBlock(B);

        for (unsigned i = 0; i < lastState; i++) {
            assert(orderStates.find(i) != orderStates.end());

            State *s = orderStates[i];
            s->setBasicBlock(B);
            s->setDefaultTransition(orderStates[i+1]);
        }
    }


    FiniteStateMachine::iterator stateIter = fsm->begin();
    for (; stateIter != fsm->end(); stateIter++) {
      State* state = stateIter;
      if (!state->getBasicBlock())
          continue; // ??? janders -- can this happen?

      sCount[state->getBasicBlock()] += 1;
      std::string newStateName = std::string("LEGUP_F_") +
          F->getNameStr().data() + "_BB" +
          getLabel(state->getBasicBlock());


      // LLVM uses '.', '-' in their Basic Block names, and these characters are illegal
      // in Verilog identifiers.  So we must replace them.
      std::replace(newStateName.begin(), newStateName.end(), '.', '_');
      std::replace(newStateName.begin(), newStateName.end(), '-', '_');
      std::replace(newStateName.begin(), newStateName.end(), '%', '_');
      std::replace(newStateName.begin(), newStateName.end(), '"', '_');

      state->setName(newStateName);
    }

    return fsm;
}


void printNodeLabel(raw_ostream &out, InstructionNode *I) {
    out << *I->getInst();
}

// print a dot graph representing the dependency information (both normal and
// memory) for a basic block
void SchedulerDAG::printDFGDot(formatted_raw_ostream &out, BasicBlock *BB) {

    dotGraph<InstructionNode> graph(out, printNodeLabel);
    graph.setLabelLimit(40);

    bool ignoreDummyCalls = true;
    for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I != ie; ++I) {
          InstructionNode *op = getInstructionNode(I);
          if (ignoreDummyCalls && isaDummyCall(I)) continue;

          std::string label = "label=\"D:" + ftostr(op->getDelay()) + "ns L:" +
              utostr(Scheduler::getNumInstructionCycles(I)) + "\",";
          for (Value::use_iterator use = I->use_begin(), e = I->use_end(); use != e;
                  ++use) {
              if (Instruction *child = dyn_cast<Instruction>(*use)) {
                  if (ignoreDummyCalls && isaDummyCall(child)) continue;
                  graph.connectDot(out, op, getInstructionNode(child), label +
                          "color=blue");
              }
          }

          for (InstructionNode::iterator use = op->mem_use_begin(),
                  e = op->mem_use_end(); use != e; ++use) {
              if (ignoreDummyCalls && isaDummyCall((*use)->getInst())) continue;
              graph.connectDot(out, op, *use, label + "color=red");
          }

    }

}


} // End legup namespace

