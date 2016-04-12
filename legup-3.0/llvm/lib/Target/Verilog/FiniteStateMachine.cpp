//===-- FiniteStateMachine.cpp - Store finite state machine -----*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the FiniteStateMachine class.
//
//===----------------------------------------------------------------------===//

#include "FiniteStateMachine.h"
#include "State.h"
#include "RTL.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/ADT/StringExtras.h"

using namespace legup;

State* FiniteStateMachine::newState(State *InsertAfter, std::string Name) {
    State *s = new State(); 
    if (InsertAfter) {
        StateList.insertAfter(InsertAfter, s);
    } else {
        StateList.push_back(s);
    }

    // this name will be modified later
    s->setName(Name);
    s->setFSM(this);
    return s;
}

// pushes an instruction to the next state, creating an extra if necessary
void FiniteStateMachine::pushInstructionToNextState(Instruction *needle) {
    State *st = map[needle];
    st->remove(needle);
    // no need to create an extra state
    if (!st->isTerminating()) {
        assert(st->getDefaultTransition() && "no default transition");
        st->getDefaultTransition()->push_back(needle);
        return;
    }
    // create a new state for the instruction
    State *s = newState(st);
    s->setBasicBlock(needle->getParent());
    s->push_back(needle);
    s->setTerminating(true);
    // fix transitioning
    s->setTransition(st->getTransition());
    State::Transition blank;
    st->setTransition(blank);
    st->setTerminating(false);
    if (st->getDefaultTransition()) {
        s->setDefaultTransition(st->getDefaultTransition());
    }
    st->setDefaultTransition(s);
}

void FiniteStateMachine::pushExtraStates(Instruction *needle, unsigned num) {
    BasicBlock *bb = needle->getParent();
    State *s = map[needle];
    State::Transition trans = s->getTransition();
    State *defaultTrans = s->getDefaultTransition();
    State::Transition blank;
    s->setTransition(blank);
    for (unsigned i = 0; i < num; i++) {
        State *next = newState(s);
        s->setDefaultTransition(next);
        next->setBasicBlock(bb);
        s = next;
    }
    s->setTransition(trans);
    s->setDefaultTransition(defaultTrans);
}

void printNodeLabel(raw_ostream &out, State *s) {
    out << s->getName();
}

void printTransitionValue(Value *v) {
}

// print a dot graph representing the dependency information (both normal and
// memory) for a basic block
void FiniteStateMachine::printDot(formatted_raw_ostream &out) {

    dotGraph<State> graph(out, printNodeLabel);
    graph.setLabelLimit(40);

    for (iterator s = begin(), se = end(); s != se; ++s)
    {

        assert(s->getDefaultTransition());

        // uncond
        if (s->getNumTransitions() == 1) {
            graph.connectDot(out, s, s->getDefaultTransition(), "");
            // cond branch
        } else if (s->getNumTransitions() == 2) {
            // true condition
            graph.connectDot(out, s, s->getTransitionState(0),
                    "label=\"" + getTransitionOp(s) + "\"");

            // false condition
            graph.connectDot(out, s, s->getDefaultTransition(),
                    "label=\"~" + getTransitionOp(s) + "\"");
        } else {
            // switch
            assert(s->getNumTransitions() > 0);

            for (unsigned i = 0, e = s->getNumTransitions()-1; i != e; ++i) {
                std::string label = "label=\"" + getTransitionOp(s) + " == " +
                    getLabel(s->getTransitionValue(i)) + "\"";
                graph.connectDot(out, s, s->getTransitionState(i), label);
            }

            graph.connectDot(out, s, s->getDefaultTransition(), "Default");

        }
    }

}
