/**
 * @file SDCScheduler.cpp
 * @author janders
 * @version
 *
 * @section LICENSE
 *
 * This file is distributed under the LegUp license. See LICENSE for details.
 *
 * @section DESCRIPTION
 *
 * This file implements the SDC-based scheduler.
 */

#include "SDCScheduler.h"
#include "llvm/LLVMContext.h"
#include "LegupConfig.h"
#include "EdmondMatching.h"
#include "utils.h"
#include <lp_lib.h>
#include <map>
#include <algorithm>

using namespace llvm;
using namespace legup;

namespace legup {

std::map<Instruction*, unsigned> asap_control_step;
std::map<Instruction*, unsigned> alap_control_step;

SDCScheduler::SDCScheduler(Allocation *alloc) : lp(0), map(0), alloc(alloc) {
  chaining = false; // default is no chaining -- maximally pipelined
  clockPeriodConstraint = -1.0; // default is no clock period constraint
  numVars = 0; // LP isn't constructed yet
  numInst = 0; // the number of LLVM instructions to be scheduled
  SDCdebug = LEGUP_CONFIG->getParameterInt("SDC_DEBUG");
}

void SDCScheduler::createLPVariables(Function *F) {
  
  // iterate over all BBs
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
    
    // iterate over the instructions in a BB
    for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
      
      numInst++;
      InstructionNode* iNode = dag->getInstructionNode(i);
      startVariableIndex[iNode] = numVars;
      endVariableIndex[iNode] = numVars + Scheduler::getNumInstructionCycles(i);
      numVars += (1 + Scheduler::getNumInstructionCycles(i));
#if 0
      if (Scheduler::getNumInstructionCycles(i))
	printf("OPCODE: %s CYCLES: %d\n", i->getOpcodeName(), Scheduler::getNumInstructionCycles(i));
#endif
      
    }
  }

  if (SDCdebug)
    printf("SDC: # of variables: %d # of instructions.\n", numVars, numInst);
  
  // build an empty LP instance with the right # of variables
  lp = make_lp(0, numVars);
}

void SDCScheduler::addMulticycleConstraints(Function *F) {

  int col[2];
  REAL val[2];

  for (std::map<InstructionNode*, unsigned>::iterator i = startVariableIndex.begin(), 
	 e = startVariableIndex.end(); i != e; i++) {

    InstructionNode* iNode = i->first; 
    
    if (i->second == endVariableIndex[iNode])
      continue; // not a multicycle instruction

    // add constraints so that the variable corresponding to each
    // cycle of a multiple cycle instruction gets assigned to 
    // contiguous states.

    for (unsigned j = i->second + 1; j <= endVariableIndex[iNode]; j++) {
      col[0] = 1 + j;  // variable indicies
      col[1] = 1 + (j-1);
      val[0] = 1.0; // variable coefficients
      val[1] = -1.0;
      // there must be EXACTLY 1 cycle delay between variable j and j-1
      add_constraintex(lp, 2, val, col, EQ, 1.0);
    }
  }
}

// note: source and dest must be in the same basic block
bool SDCScheduler::isDependent(InstructionNode *source, InstructionNode *dest) {
    //errs() << "isDependent() s: " << *source->getInst() << "d: " << *dest->getInst() << "\n";

    assert(source->getInst()->getParent() == dest->getInst()->getParent());

    set <InstructionNode*> seen;
    queue <InstructionNode*> Q;
    Q.push(dest);

    while (!Q.empty()) {
        InstructionNode* cur;
        cur = Q.front(); Q.pop();
        if (cur == source) {
            //errs() << "Found dependency!\n";
            return true;
        }
        if (seen.find(cur) != seen.end()) continue;
        seen.insert(cur);

        for (InstructionNode::iterator i = cur->dep_begin(), e = cur->dep_end(); i
                != e; ++i) {
            InstructionNode *depIn = *i;
            if(depIn->getInst()->getParent() != source->getInst()->getParent()) continue;
            Q.push(depIn);
        }
        for (InstructionNode::iterator i = cur->mem_dep_begin(),
                e = cur->mem_dep_end(); i != e; ++i) {
            InstructionNode *depIn = *i;
            if(depIn->getInst()->getParent() != source->getInst()->getParent()) continue;
            Q.push(depIn);
        }
    }

  return false;
}

void SDCScheduler::addDependencyConstraints(InstructionNode *in) {

  int col[2];
  REAL val[2];

  // First make sure each instruction is scheduled into a cycle >= 0
  col[0] = 1+ startVariableIndex[in];
  val[0] = 1.0;
  add_constraintex(lp, 1, val, col, GE, 0.0);
  
  // Now handle the dependencies between instructions: producer/consumer relationships
  for (InstructionNode::iterator i = in->dep_begin(), 
	 e = in->dep_end(); i != e; ++i) {

    InstructionNode *depIn = *i;
    col[0] = 1 + startVariableIndex[in];
    val[0] = 1.0;
    col[1] = 1 + endVariableIndex[depIn];
    val[1] = -1.0;
    add_constraintex(lp, 2, val, col, GE, chaining ? 0.0 : 1.0); // ensure the right ordering or instructions based on dependencies
    // if chaining is permitted, then the instructions can be in the SAME cycle
    // if chaining is NOT permitted, a dependent instruction is moved to a LATER cycle
  }

  for (InstructionNode::iterator i = in->mem_dep_begin(),
	 e = in->mem_dep_end(); i != e; ++i) {

    InstructionNode *memDepIn = *i;
    int latency = 1;
    // ??? janders -- why is it like this?  (copied from original ASAP scheduler)
    // needs INVESTIGATION
    if (isaDummyCall(in->getInst()))
      latency--;
    if (isa<CallInst>(in->getInst()) && isa<LoadInst>(memDepIn->getInst())) 
      latency++;
    col[0] = 1 + startVariableIndex[in];
    val[0] = 1.0;
    col[1] = 1 + startVariableIndex[memDepIn];
    val[1] = -1.0;
    add_constraintex(lp, 2, val, col, GE, (double)latency);
  }
}

void SDCScheduler::addDependencyConstraints(Function *F) {

  // iterate over all BBs
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
    
    // iterate over the instructions in a BB
    for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {

      addDependencyConstraints(dag->getInstructionNode(i));
    }
  }
}

void SDCScheduler::addTimingConstraints(InstructionNode *Root, InstructionNode *Curr, float PartialPathDelay)
{
  int col[2];
  REAL val[2];
  
  // Walk through the dependencies
  for (InstructionNode::iterator i = Curr->dep_begin(),
	 e = Curr->dep_end(); i != e; ++i) {
    
    InstructionNode *depNode = *i;

    //    if (Scheduler::getNumInstructionCycles(depNode->getInst()) > 0)
    //      continue; // dependency has more than 1 cycle latency, so this dependency will already be in another cycle.
    
    float delay = PartialPathDelay + depNode->getDelay();
    unsigned cycleConstraint = ceil(delay / clockPeriodConstraint);
    if (cycleConstraint > 0)
      cycleConstraint--;

    if (cycleConstraint > 0) {
      // if cycleConstraint == 0, we don't need to add the constraint.
      // the reason is that such constraints are ALREADY present in the LP
      // formulation, as they are depedency constraints  -- constraints
      // that express that an operation must happen AFTER the operations
      // producuing results that it depends on
      col[0] = 1 + startVariableIndex[Root];
      val[0] = 1.0;
      col[1] = 1 + endVariableIndex[depNode]; 
      val[1] = -1.0;
      add_constraintex(lp, 2, val, col, GE, cycleConstraint);
      if (SDCdebug) printf("CYCLE CONSTRAINT: %u BETWEEN %d %d (delay: %f period: %f)\n",
                           cycleConstraint, col[1], col[0], delay, clockPeriodConstraint);
    }

    if ((cycleConstraint == 0) && 
	(Scheduler::getNumInstructionCycles(depNode->getInst()) == 0))
      addTimingConstraints(Root, depNode, delay); // recursive call to discover other instructions
    
  }
}

void SDCScheduler::addTimingConstraints(Function *F) {

  // iterate over all BBs
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
    
    // iterate over the instructions in a BB
    for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {

      InstructionNode* iNode = dag->getInstructionNode(i);
      addTimingConstraints(iNode, iNode, iNode->getDelay());

    }
  }

  return;
}


static REAL *myVariables;
static std::map<InstructionNode*, unsigned> *starts;

// used as the compare function when sorting instructions into a list
// according to their ALAP scheduling
// this is used in resource constraint handling
bool ALAPPredicate(InstructionNode* d1, InstructionNode* d2)
{
  int diff = (int)myVariables[((*starts)[d1])] - (int)myVariables[((*starts)[d2])];
  if (diff < 0)
    return true;
  else if (diff == 0.0) { // instructions are in the same cycle in the ALAP schedule
    // in this case we use their variable index to determine the sorted order
    // this way, such "parallel" instructions will be sort-ordered in the same way
    // as they appear in the original basic block (rather than in some arbitrary order)

    // this is needed if there are resource constraints on multiple types of things, say adders and memory ports.
    // otherwise, an unsolveable LP formulation may result
    if (((int)((*starts)[d1]) - (int)((*starts)[d2])) < 0)
      return true;
    else
      return false;
  }
  else
    return false;
}

void SDCScheduler::addResourceConstraint(Function *F, bool
        (*instrTypePredicate)(Instruction*), unsigned constraint) {
  
  myVariables = new REAL[numVars];
  get_variables(lp, myVariables);

  starts = &startVariableIndex;

  std::vector<InstructionNode*> constrainedInstructions;

  // iterate over all BBs
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
    
    constrainedInstructions.clear();

    // iterate over the instructions in a BB, collecting all the resource-constrained instructions in a container
    for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
      
      InstructionNode* iNode = dag->getInstructionNode(i);
      Instruction*     inst = iNode->getInst();

      if (!instrTypePredicate(inst)) continue; // not the type of instruction being constrained
      
      constrainedInstructions.push_back(iNode);

    } // over the instructions

    // sort the resource-constrained instructions based on the ALAP scheduling result, as suggested in Cong's SDC paper
    std::sort(constrainedInstructions.begin(), constrainedInstructions.end(), ALAPPredicate);

    unsigned i;
    int col[2];
    REAL val[2];
    
    // constraints are added only between instructions within the SAME basic block:
    // the reason for this is that instructions in different basic blocks
    // are guaranteed to be scheduled in different cycles by LegUp.

#if 0
    if (constrainedInstructions.size() > 1) {
      printf("*ADD CONSTRAINT FOR ALAP: %d\n", (int)myVariables[startVariableIndex[constrainedInstructions[0]]]);
      printf("%s\n", constrainedInstructions[0]->getInst()->getOpcodeName());
    }
#endif

    for (i = constraint; i < constrainedInstructions.size(); i++) {
      // create the dependency
      InstructionNode *i1 = constrainedInstructions[i];
      InstructionNode *i2 = constrainedInstructions[i-constraint]; 
      // instructions that are "constraint" indices apart in the sorted order will be forced into separate cycles
      // constraint is the # of resources of the given type (e.g. # of memory ports, # of dividers, etc)

      col[0] = 1 + startVariableIndex[i1];
      val[0] = 1.0;
      col[1] = 1 + startVariableIndex[i2];
      val[1] = -1;
      // force the two instructions to be N cycles apart (last parameter) of the function call below,
      // where N is the initiation interval 
      // of the instruction's shared functional unit.  The initiation interval is 1 in 
      // the typical case, however, it can be > 1 for certain types of functional units 
      // (any kind of unit that cannot accept new inputs every cycle, such as a serial adder for example)
      add_constraintex(lp, 2, val, col, GE, Scheduler::getInitiationInterval(i1->getInst())); 
    }
  } // over the BBs of a function

  delete [] myVariables;

  return;
}

static std::map<Instruction*, unsigned> op2vertex;
static std::map<unsigned, Instruction*> vertex2op;
unsigned operationToVertex(Instruction *I) {
    if (op2vertex.find(I) != op2vertex.end()) return op2vertex[I];
    unsigned index = op2vertex.size()+1;
    op2vertex[I] = index;
    vertex2op[index] = I;
    return index;
}
Instruction *vertexToOperation(unsigned index) {
    assert (vertex2op.find(index) != vertex2op.end());
    return vertex2op[index];
}


// test for overlap. ie. Whether there exists a number C in both ranges:
// x1 <= C <= x2
// and
// y1 <= C <= y2
bool test_overlap(int x1, int x2, int y1, int y2) {
    assert(x1 <= x2);
    assert(y1 <= y2);

    return (x1 <= y2 && y1 <= x2);
}

bool overlap_start(int x1, int x2, int y1, int y2) {
    assert(test_overlap(x1, x2, y1, y2));
    return std::min(x1, y1);
}

void SDCScheduler::addMultipumpConstraints(Function *F) {

    // iterate over all BBs
    std::vector<Instruction *> multipliers;
    for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
        // iterate over the instructions in a BB
        for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {

              if (!alloc->useExplicitDSP(i)) continue;

              multipliers.push_back(i);

              //if (asap_control_step[i] == alap_control_step[i]) continue;
              //errs() << "I: " << *i << "\n";
              //errs() << "\tasap: " << asap_control_step[i] << "\n";
              //errs() << "\talap: " << alap_control_step[i] << "\n";
        }
    }

    //errs() << "Found " << multipliers.size() << " multipliers\n";
    EdmondMatching EM;
    for (unsigned i = 0; i < multipliers.size(); i++) {
        Instruction *A = multipliers.at(i);
        //errs() << "A: " << *A << "\n";

        for (unsigned j = i+1; j < multipliers.size(); j++) {
            Instruction *B = multipliers.at(j);
            assert(B != A);

            // are these two multiplier compatible?

            // not in the same basic block
            if (B->getParent() != A->getParent()) continue;

            if (isDependent(dag->getInstructionNode(A),
                              dag->getInstructionNode(B))) continue;
            if (isDependent(dag->getInstructionNode(B),
                              dag->getInstructionNode(A))) continue;

            // do the intervals overlap?
            //errs() << "B: " << *B << "\n";
            if (test_overlap(asap_control_step[A], alap_control_step[A],
                             asap_control_step[B], alap_control_step[B])) {
                //errs() << "overlap\n";
                EM.addEdge(operationToVertex(A), operationToVertex(B));
            }
        }
    }

    EM.solveEdmondMatching();

    // calculate equality constraints
    int col[2];
    REAL val[2];

    unsigned matches = 0;
    for (EdmondMatching::iterator i = EM.begin(), ie = EM.end();
            i != ie; ++i) {
        EdmondMatching::EdgeType edge = *i;
        Instruction *A = vertexToOperation(edge.first);
        Instruction *B = vertexToOperation(edge.second);
        //errs() << "Paired:\n";
        //errs() << "A: " << *A << "\n";
        //errs() << "B: " << *B << "\n";
        /*
        unsigned cycleConstraint =
            overlap_start(asap_control_step[A], alap_control_step[A],
                          asap_control_step[B], alap_control_step[B]);
        */

        matches++;

        // set an equality constraint to put both multipliers in
        // the same state
        col[0] = 1 + startVariableIndex[dag->getInstructionNode(A)];
        val[0] = 1.0;
        col[1] = 1 + startVariableIndex[dag->getInstructionNode(B)];
        val[1] = -1.0;
        add_constraintex(lp, 2, val, col, EQ, 0);

        col[0] = 1 + endVariableIndex[dag->getInstructionNode(A)];
        val[0] = 1.0;
        col[1] = 1 + endVariableIndex[dag->getInstructionNode(B)];
        val[1] = -1.0;
        add_constraintex(lp, 2, val, col, EQ, 0);

        if (SDCdebug) {
            printf("Multipumping. inst: %s (idx: %u) and inst: %s (idx: %u) "
                   "constrained to same cycle\n", A->getOpcodeName(),
                   col[0], B->getOpcodeName(), col[1]);
        }
    }

    //errs() << "Found " << matches << " pairs\n";
}

void SDCScheduler::addALAPConstraints(Function *F) {

  REAL* variables = new REAL[numVars];
  get_variables(lp, variables);

  unsigned* maxCycle = new unsigned[F->size()];

  int BBcount = 0;

  // iterate over all BBs
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
    // iterate over the instructions in a BB

    maxCycle[BBcount] = 0; // initialize max cycle count for BB to 0

    for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
      unsigned stateAssigned = (unsigned)variables[endVariableIndex[dag->getInstructionNode(i)]];
      if (stateAssigned > maxCycle[BBcount])
	maxCycle[BBcount] = stateAssigned;
    }
    BBcount++;
  }

  // now add the constraints
  int col[1];
  REAL val[1];

  BBcount = 0;

  // iterate over all BBs
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
    // iterate over the instructions in a BB
    for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
      int idx = endVariableIndex[dag->getInstructionNode(i)];
      col[0] = 1 + idx;
      val[0] = 1.0;

      if (!i->isTerminator() && 
	  (dag->getInstructionNode(i)->dep_begin() == dag->getInstructionNode(i)->dep_end()) &&
	  ((unsigned)variables[startVariableIndex[dag->getInstructionNode(i)]] == 0)) {
	// this instruction isn't a terminator
	// and it has no dependencies
	add_constraintex(lp, 1, val, col, EQ, (REAL)(0 + endVariableIndex[dag->getInstructionNode(i)] - startVariableIndex[dag->getInstructionNode(i)]));
	if (SDCdebug)
	  printf("INST: %s (IDX: %u) CONSTRAINED TO CYCLE 0.\n",i->getOpcodeName(), col[0]);
      }	
      else {
	add_constraintex(lp, 1, val, col, LE, (REAL)(maxCycle[BBcount]));
	if (SDCdebug)
	  printf("INST: %s (IDX: %u) CONSTRAINED TO CYCLE LEQ: %u\n", i->getOpcodeName(), col[0], maxCycle[BBcount]);
      }
    }
    BBcount++;
  }

    delete [] variables;
  delete [] maxCycle;

  return;
}

void SDCScheduler::depositSchedule(Function *F) {
  REAL* variables = new REAL[numVars];
  get_variables(lp, variables);

  int count = 0;

  // iterate over all BBs
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
    unsigned numStatesInBB = 0;
    int pipelined = getMetadataInt(b->getTerminator(), "legup.pipelined");

    // iterate over the instructions in a BB
    for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
        unsigned idx = startVariableIndex[dag->getInstructionNode(i)];
      unsigned stateAssigned = (unsigned)variables[idx];

      if (SDCdebug)
	printf("BB: %d INSTR OPCODE: %s (IDX: %d) CLOCK CYCLE ASSIGNED: %u\n", count, 
	       i->getOpcodeName(), idx+1, stateAssigned);

      map->setState(dag->getInstructionNode(i), stateAssigned);

      // add extra cycles for multi-cycle instructions
      // except for pipelining where iterative modulo scheduling has already
      // handled multi-cycle instructions
      if (!pipelined) {
          stateAssigned += Scheduler::getNumInstructionCycles(i);
      }

      if (stateAssigned > numStatesInBB) {
          numStatesInBB = stateAssigned;
      }

    }
    count++;

    map->setNumStates(b, numStatesInBB);
    
    // ??? janders -- not sure if the code below is NEEDED 
    // this was borrowed from the previous implementation
    Instruction *inst = b->getTerminator();
    if (isa<ReturnInst>(inst)) {
      InstructionNode *in = dag->getInstructionNode(inst);
      map->setState(in, numStatesInBB);
    }
  }

  delete [] variables;

}

void SDCScheduler::scheduleAXAP(bool ASAP) {

  // In this case, we simply minimize the sum of the starting cycles
  // for all instructions.

  int *variableIndices = new int[numInst];
  REAL *variableCoefficients = new REAL[numInst];

  int count = 0;

  for (std::map<InstructionNode*, unsigned>::iterator i = startVariableIndex.begin(), 
	 e = startVariableIndex.end(); i != e; i++) {
    
    unsigned varIndex = i->second;
    variableIndices[count] = 1 + varIndex;
    variableCoefficients[count] = 1.0;
    count++;
    
  }

  assert(count == numInst);  

  set_obj_fnex(lp, count, variableCoefficients, variableIndices);
  if (ASAP)
    set_minim(lp);
  else
    set_maxim(lp);
  if (SDCdebug) 
    write_LP(lp, stdout);
  
  if (!SDCdebug)
    set_verbose(lp,1);

  int ret = solve(lp);

  if (SDCdebug) {
    printf("SDC solver status: %d\n", ret);
  }

  if (ret != 0) {
      errs() << "LP solver returned: " << ret << "\n";
      report_fatal_error("LP solver could not find an optimal solution");
  }

  delete [] variableCoefficients;
  delete [] variableIndices;

}

void SDCScheduler::add_lp_constraints_for_sdc_multipump(Function *F) {
    addALAPConstraints(F);

    if (SDCdebug) printf("SOLVING ALAP\n");
    scheduleAXAP(false);

    REAL* variables = new REAL[numVars];
    get_variables(lp, variables);
    for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
        for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
            if (!alloc->useExplicitDSP(i)) continue;
            alap_control_step[i] = (unsigned)variables[endVariableIndex[dag->getInstructionNode(i)]];
            //errs() << "I: " << *i << "\n";
            //errs() << "\tstateAssigned: " << alap_control_step[i] << "\n";
        }
    }
    delete [] variables;

    /*
    for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
        for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
            if (!alloc->useExplicitDSP(i)) continue;
            if (asap_control_step[i] == alap_control_step[i]) continue;
            errs() << "I: " << *i << "\n";
            errs() << "\tasap: " << asap_control_step[i] << "\n";
            errs() << "\talap: " << alap_control_step[i] << "\n";
        }
    }
    */

    // todo: refactor this (copied from above)
    delete_lp(lp);
    numVars = 0;
    numInst = 0;
    createLPVariables(F);
    addMulticycleConstraints(F);
    addDependencyConstraints(F);
    if (chaining && clockPeriodConstraint > 0) {
        addTimingConstraints(F);
    }
    //      addResourceConstraint(F); ??? janders: Andrew check if you want to call new res constraints handling code in ur multi-pump stuff

    addMultipumpConstraints(F);
}


SchedulerMapping* SDCScheduler::createMapping(Function *F, SchedulerDAG *dag) {
  map = new SchedulerMapping();
  this->dag = dag;

  // create variables in the LP formulation for
  // each of the instructions to be scheduled in the LLVM IR
  createLPVariables(F);

  // add multi-cycle instruction constraints
  // these are the the math constraints for the instructions
  // that take multiple cycles to complete, for example, the multiply instruction 
  // in the Cyclone II FPGA
  addMulticycleConstraints(F);

  chaining = true;

  if (LEGUP_CONFIG->getParameterInt("SDC_NO_CHAINING")) {
    chaining = false; // no chaining means that the design will be pipelined as much as possible
  }

  // add the constraints to the LP so that instructions
  // are scheduled in cycles >= the cycles where their
  // dependencies are computed
  addDependencyConstraints(F);

  clockPeriodConstraint = 15; // 66 MHz
  if (LEGUP_CONFIG->getParameterInt("SDC_PERIOD")) {
    clockPeriodConstraint = (float)LEGUP_CONFIG->getParameterInt("SDC_PERIOD");
  }

  if (chaining && clockPeriodConstraint > 0) {
    addTimingConstraints(F);
  }

  // do the scheduling
  scheduleAXAP(true);

  REAL* variables = new REAL[numVars];
  get_variables(lp, variables);
  for (Function::iterator b = F->begin(), be = F->end(); b != be; b++) {
      for (BasicBlock::iterator i = b->begin(), ie = b->end(); i != ie; i++) {
          if (!alloc->useExplicitDSP(i)) continue;
          asap_control_step[i] = (unsigned)variables[endVariableIndex[dag->getInstructionNode(i)]];
          //errs() << "I: " << *i << "\n";
          //errs() << "\tstateAssigned: " << asap_control_step[i] << "\n";
      }
  }

  int Nrows = 0; // the number of constraints in the LP formulation before we add constraints for ALAP scheduling

  if (LEGUP_CONFIG->getParameterInt("SDC_RES_CONSTRAINTS")) {

    // ALAP scheduling, if desired, must be done
    // after ASAP scheduling.  The ASAP scheduling
    // is used to derive a MAXIMUM cycle bound
    // on the schedule

    // we do ALAP scheduling in two cases: when the user actually WANTS it, and also when
    // we are doing resource-constrained scheduling

    Nrows = get_Nrows(lp);

    addALAPConstraints(F);

    if (SDCdebug) printf("SOLVING ALAP to determine ordering for resource constraints\n");
    scheduleAXAP(false);

  }

  if (LEGUP_CONFIG->getParameterInt("SDC_RES_CONSTRAINTS")) {

    // delete the ALAP constraints (the most recently added rows of the LP formulation)
    // this returns the LP formulation back to ASAP

    // the reason we are doing is that the resource constraints will (most likely)
    // dilate the schedule making it longer since the original ASAP scheduling
    // was done without considering such constraints.  

    // so we cannot expect the resource-constrained schedule to be as short as the
    // unconstrained schedule.  we therefore must delete the ALAP constraints.
    for (int i = get_Nrows(lp); i > Nrows; i--)
        del_constraint(lp, i);

    unsigned memPorts = 1;
//    if (LEGUP_CONFIG->getParameterInt("NUM_MEM_PORTS") && !LEGUP_CONFIG->numAccelerators()) {
    if (LEGUP_CONFIG->getParameterInt("NUM_MEM_PORTS")) {
        memPorts = LEGUP_CONFIG->getParameterInt("NUM_MEM_PORTS");   
    }

    if (!LEGUP_CONFIG->getParameterInt("PARALLEL_LOCAL_RAMS")) {
        addResourceConstraint(F, isMem, memPorts);
    }

    if (LEGUP_CONFIG->getParameterInt("NUM_DIVIDERS")) {
        unsigned numDividers = LEGUP_CONFIG->getParameterInt("NUM_DIVIDERS");
	addResourceConstraint(F, isUnsignedDivOrRem, numDividers);
	addResourceConstraint(F, isSignedDivOrRem, numDividers);
    }

    // don't constraint multipliers by default
    if (LEGUP_CONFIG->getParameterInt("NUM_MULTIPLIERS")) {
        unsigned numMults = LEGUP_CONFIG->getParameterInt("NUM_MULTIPLIERS");
        addResourceConstraint(F, isMul, numMults);
    }

    // invoke ASAP scheduling (with added resource constraints)
    scheduleAXAP(true);
  }

  // must do ALAP after resource constrained ASAP scheduling because the
  // maximum cycle bound of the schedule might have changed

  // this is only if the user WANTS ALAP scheduling (via TCL file settings)
  if (LEGUP_CONFIG->getParameterInt("SDC_ALAP")) {
    Nrows = get_Nrows(lp);

    addALAPConstraints(F);

    if (SDCdebug) printf("SOLVING ALAP\n");
    scheduleAXAP(false);
  }

  // for multipumping we want to group multipliers into the same cycle
  // if their min (ASAP) and max (ALAP) cycle constraints overlap
  if (LEGUP_CONFIG->getParameterInt("SDC_MULTIPUMP")) {

      add_lp_constraints_for_sdc_multipump(F);

      // already has ALAP constraints so we have to solve as an ALAP schedule
      // or can i...?
      //scheduleAXAP(false);
      scheduleAXAP(true);
  }

  // deposit schedule into the schedule map data struction
  depositSchedule(F);

  delete_lp(lp);

  return map;
}

} // legup namespace
