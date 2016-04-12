//===------ IterativeModuloScheduling.cpp ---------------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// Iterative modulo scheduling
// This implementation was based on the paper:
// B. Ramakrishna Rau, "Iterative Modulo Scheduling", 1995
// and also the M.Sc thesis:
// Tanya Lattner, "An implementation of swing modulo scheduling with extensions
// for superblocks", 2000
//
//===----------------------------------------------------------------------===//

/*
#define DEBUG_TYPE "polly-codegen"

#include "polly/LinkAllPasses.h"
#include "polly/Support/GICHelper.h"
#include "polly/Support/ScopHelper.h"
#include "polly/Cloog.h"
#include "polly/Dependences.h"
#include "polly/ScopInfo.h"
#include "polly/TempScopInfo.h"
*/
#include "llvm/LLVMContext.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Analysis/LoopPass.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/IRBuilder.h"
#include "llvm/Analysis/LoopInfo.h"
#include "llvm/Analysis/ScalarEvolutionExpander.h"
#include "llvm/Target/TargetData.h"
#include "llvm/Module.h"
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/ADT/SetVector.h"
#include "SchedulerDAG.h"
#include "Scheduler.h"
#include "utils.h"
#include "LegupConfig.h"

#define CLOOG_INT_GMP 1
#include "cloog/cloog.h"
#include "cloog/isl/cloog.h"

#include <vector>
#include <utility>

//using namespace polly;
using namespace llvm;
using namespace legup;

struct isl_set;

namespace llvm {
void initializeIterativeModuloSchedulingPass(llvm::PassRegistry&);
}

namespace {
class IterativeModuloScheduling : public LoopPass {
//class IterativeModuloScheduling : public ScopPass {
  //Region *region;
  //Scop *S;
  DominatorTree *DT;
  ScalarEvolution *SE;
  //ScopDetection *SD;
  //CloogInfo *C;
  LoopInfo *LI;
  TargetData *TD;
  //Region *R;

  Allocation *alloc;

  std::vector<std::string> parallelLoops;
    SchedulerDAG *dag;

  LegupConfig::LOOP_PIPELINE PipelineTclInfo;
  std::string loopLabel;
  unsigned tripCount;
  raw_fd_ostream *file;

  public:
  static char ID;

  //IterativeModuloScheduling() : ScopPass(ID) {
  IterativeModuloScheduling() : LoopPass(ID),
        file(NULL) {
      ranAlready = false;
  }


  raw_fd_ostream &File() {
      if (!file) {
          std::string FileError;
          file = new raw_fd_ostream("pipelining.legup.rpt", FileError);
          assert(FileError.empty() && "Error opening log files");
      }

      return *file;
  }


  typedef std::map<Value*, Value*> ValueToValueMapTy;

  // member variables
  //IRBuilder<> *Builder;
  PHINode *inductionVar;
  BasicBlock *loopPreheader;
  Function *F;
  // basic block of the kernel
  BasicBlock *BB;
  Module *M;
  Loop *loop;
  int II;
  std::vector<BasicBlock*> prologue;
  std::vector<BasicBlock*> epilogue;
  bool ranAlready;
  std::map<Instruction*, bool> neverScheduled;
  std::map<Instruction*, int> height;
  std::map<Instruction*, int> schedTime;
  std::map<Instruction*, int> schedStage;
  std::map<Instruction*, int> prevSchedTime;
  std::set<Instruction*> unscheduledInsts;
  // modulo reservation table. The table has II cycles.
  // Issue slots for: memory ops
  std::vector< std::vector <Instruction*> > reservationTable;
  //std::priority_queue<int, std::vector<int, std::allocator<int> >, std::less<int> > pq;

  // greater height = higher priority
  Instruction *getHighestPriorityInst() {
      // this should be reimplemented with a priority queue
      int maxHeight = -1;
      Instruction *highest = NULL;
      for (std::map<Instruction*, int>::iterator i = height.begin(),
              e = height.end(); i != e; ++i) {
          Instruction *I = i->first;
          int height = i->second;
          // already scheduled
          if (unscheduledInsts.find(I) == unscheduledInsts.end()) continue;
          if (height > maxHeight) {
              maxHeight = height;
              highest = I;
          }
      }
      //errs() << "maxHeight: " << maxHeight << "\n";
      assert(highest);
      return highest;
  }


  // TODO: fix these numbers to account for chaining
  // the delay of an operation is not actually known
  // but determined by the schedule and depends on chaining
  // delay(I): is the latency of instruction I
  int delay(Instruction* I) {
      if (isa<PHINode>(I)) {
          return 0;
      }

      /*
      if (PHINode *phi = dyn_cast<PHINode>(I)) {
          int index = phi->getBasicBlockIndex(BB);
          if (index == -1) return 0;
          Value *v = phi->getIncomingValue(index);
          if (PHINode *p = dyn_cast<PHINode>(v)) {
              if (p->getParent() == BB) {
                  // push to next cycle
                  return 1;
              }
          }
          return 0;
      }
      */

      // todo: fix this!
      //return SchedulerPass::getNumInstructionCycles(I);
      switch(I->getOpcode()) {
          case (Instruction::UDiv):
          case (Instruction::SDiv):
          case (Instruction::URem):
          case (Instruction::SRem):
              {
                  int pipelineDepth =
                      getBitWidth(I->getType());
                  // binding subtracts 3 due to handle chaining
                  return pipelineDepth;
              }
          case (Instruction::Mul):
              assert(alloc);
              if (alloc->useExplicitDSP(I)) {
                  return LEGUP_CONFIG->getParameterInt("MULTIPLIER_PIPELINE_STAGES");
              } else {
                  return 0;
              }
          case (Instruction::Load):
              return 2;
              if (LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
                  return 1;
              } else {
                  return 2;
              }
          default:
              // assume no chaining
              return 1;
      }
  }


  void updateHeight(Instruction* I, Instruction* child) {

      computeHeight(child);
      assert (height.find(child) != height.end());

      //height[I] = std::max(height[I], height[C] + delay(I));
      height[I] = std::max(height[I],
                          height[child] + delay(I)
                          - this->II * distance(I, child));

      //errs() << "delay=" << delay(I) << "\n";
      //errs() << "height=" << height[I] << ": " << *I << "\n";
  }

  bool noChildren(Instruction *I) {
      return (I->use_begin() == I->use_end());
  }

  void computeHeight(Instruction* I) {
      if (height.find(I) != height.end()) {
          // already calculated height
          return;
      }

      // no children ?
      if (noChildren(I)) {
          //op->mem_use_begin() == op->mem_use_end()) {
          File() << "No children (height=0): " << *I << "\n";
          height[I] = 0;
      } else {
          //errs() << "children of: " << *I << "\n";
          for (Value::use_iterator use = I->use_begin(), e = I->use_end(); use != e;
                  ++use) {
              if (Instruction *child = dyn_cast<Instruction>(*use)) {
                  updateHeight(I, child);
              }
          }

          InstructionNode *op = dag->getInstructionNode(I);
          for (InstructionNode::iterator i = op->mem_use_begin(),
                  e = op->mem_use_end(); i != e; ++i) {
              InstructionNode *child = *i;
              updateHeight(I, child->getInst());
          }
      }
  }

  void computeHeights() {
      //errs() << "Loop:\n";
      for (BasicBlock::iterator instr = BB->begin(), ie = BB->end();
              instr != ie; ++instr) {
          computeHeight(instr);
      }
  }

  int numMemPorts() {
      return 1;
      return LEGUP_CONFIG->getParameterInt("NUM_MEM_PORTS");
  }

  bool resourceConflict(Instruction *I, int timeSlot) {
      int moduloTimeSlot = timeSlot % this->II;

      // only loads and stores can have resource conflicts
      // we assume a 1 port memory controller
      if (!LEGUP_CONFIG->getParameterInt("PARALLEL_LOCAL_RAMS")) {
          if (isa<LoadInst>(I) || isa<StoreInst>(I)) {
              for (int i = 0; i < numMemPorts(); i++) {
                  if (reservationTable[i][moduloTimeSlot] == NULL) {
                      // found a free slot
                      return false;
                  }
              }
              return true;
          }
      }

      return false;
  }

  // select time where operation should be scheduled
  int findTimeSlot(Instruction *I, int minTime, int maxTime) {
      int curTime = minTime;
      int schedSlot = 0;
      bool found = false;
      while (!found && curTime <= maxTime) {
          if (resourceConflict(I, curTime)) {
              // try the next time slot
              curTime++;
          } else {
              // no resource conflicts. Select this time slot.
              // Dependence constraints due to predecessors were honoured in the
              // computation of minTime
              schedSlot = curTime;
              found = true;
          }
      }

      // if a legal slot was not found, then pick the first option from the
      // following:
      // 1) minTime - if this is the first time the operation is being scheduled
      // or if minTime is greater than the time the operation was last scheduled
      // 2) previously scheduled time + 1
      if (!found) {
          if (neverScheduled[I] || minTime > prevSchedTime[I]) {
              schedSlot = minTime;
          } else {
              schedSlot = prevSchedTime[I] + 1;
          }
      }

      return schedSlot;
  }

  void printReservationTable() {
      // we only account for memory operations for now
      for (int i = 0; i < this->II; i++) {
          File() << "time slot: " << i << "\n";
          for (int j = 0; j < numMemPorts(); j++) {
              File() << "   issue slot: " << j << " instr: " <<
                  *reservationTable[j][i] << "\n";
          }
      }
  }

  void unschedule(Instruction *I) {
      assert(I);

      unscheduledInsts.insert(I);
      schedTime.erase(I);

      // remove from reservation table
      bool found = false;

      for (int i = 0; i < numMemPorts(); i++) {
          for (int j = 0; j < this->II; j++) {
              Instruction *prev = reservationTable[i][j];
              if (I == prev) {
                 // shouldn't exist in the reservation table twice
                  assert(!found);
                  found = true;
                  reservationTable[i][j] = NULL;
              }
          }
      }
  }

  // schedule operation at time timeSlot. Displace previous scheduled
  // operations that conflict with it either due to resource conflicts or
  // dependence constraints
  void schedule(Instruction *I, int timeSlot) {

      schedTime[I] = timeSlot;

      if (!LEGUP_CONFIG->getParameterInt("PARALLEL_LOCAL_RAMS")) {
          if (isa<LoadInst>(I) || isa<StoreInst>(I)) {
              int moduloTimeSlot = timeSlot % this->II;

              bool resourceConflict = true;
              for (int i = 0; i < numMemPorts(); i++) {
                  // the instruction shouldn't already be in the table
                  assert(I != reservationTable[i][moduloTimeSlot]);
                  // find an empty slot
                  if (reservationTable[i][moduloTimeSlot] == NULL) {
                      reservationTable[i][moduloTimeSlot] = I;
                      resourceConflict = false;
                      break;
                  }
              }

              if (resourceConflict) {
                  // unschedule *all* potential resource conflicts
                  for (int i = 0; i < numMemPorts(); i++) {
                      Instruction *prev = reservationTable[i][moduloTimeSlot];
                      assert(I != prev);
                      if (prev) {
                          unschedule(prev);
                      }
                  }
                  // use the first issue slot (arbitrary)
                  reservationTable[0][moduloTimeSlot] = I;
              }
          }
      }

      // loop over successors and displace previous scheduled operations that
      // have a dependency conflict
      for (Value::use_iterator use = I->use_begin(), e = I->use_end(); use != e;
              ++use) {
          Instruction *succ = dyn_cast<Instruction>(*use);
          if (!succ) continue;

          // successor has been scheduled
          if (schedTime.find(succ) != schedTime.end()) {
              int min = schedTime[I] + delay(I) - this->II*distance(I,succ);
              if (schedTime[succ] < min) {
                  assert(succ != I);
                  unschedule(succ);
              }
          }
      }

      InstructionNode *op = dag->getInstructionNode(I);
      for (InstructionNode::iterator use = op->mem_use_begin(),
              e = op->mem_use_end(); use != e; ++use) {
          Instruction *succ = (*use)->getInst();
          assert(succ);

          // successor has been scheduled
          if (schedTime.find(succ) != schedTime.end()) {
              int min = schedTime[I] + delay(I) - this->II*distance(I,succ);
              if (schedTime[succ] < min) {
                  assert(succ != I);
                  unschedule(succ);
              }
          }
      }


      neverScheduled[I] = false;
      unscheduledInsts.erase(I);
      prevSchedTime[I] = timeSlot;
  }

  int predecessorStart(Instruction *I, Instruction *pred) {
      if (schedTime.find(pred) == schedTime.end()) {
          // unscheduled
          return 0;
      } else {
          // immediate early start (estart)
          int start = schedTime[pred] + delay(pred) - this->II*distance(pred,I);
          return std::max(0, start);
      }
  }

  // calculate the earliest start time based on the immediate predecessors
  // that have been scheduled already
  int calcEarlyStart(Instruction *I) {

      // if the branch depends on this state it should try be scheduled
      // in stage 0. this is to allow branching without predication
      Instruction *branch = I->getParent()->getTerminator();
      for (User::op_iterator i = branch->op_begin(), e = branch->op_end(); i !=
              e; ++i) {
          Value *op = *i;
          if (op == I) {
              return 0;
          }
      }

      InstructionNode *branchNode = dag->getInstructionNode(branch);
      for (InstructionNode::iterator dep = branchNode->mem_dep_begin(),
              e = branchNode->mem_dep_end(); dep != e; ++dep) {
          if ((*dep)->getInst() == I) {
              return 0;
          }
      }

      int earlyStart = 0;
      for (User::op_iterator i = I->op_begin(), e = I->op_end(); i != e; ++i) {
          Instruction *pred = dyn_cast<Instruction>(i);
          if (!pred) continue;
          earlyStart = std::max(earlyStart, predecessorStart(I, pred));
      }

      InstructionNode *iNode = dag->getInstructionNode(I);
      for (InstructionNode::iterator dep = iNode->mem_dep_begin(),
              e = iNode->mem_dep_end(); dep != e; ++dep) {
          earlyStart = std::max(earlyStart, predecessorStart(I, (*dep)->getInst()));
      }

      return earlyStart;
  }

  void init() {
      neverScheduled.clear();
      height.clear();
      schedTime.clear();
      prevSchedTime.clear();
      unscheduledInsts.clear();
      initReservationTable();
  }

  void initReservationTable() {
      reservationTable.clear();
      // we only account for memory operations for now
      for (int i = 0; i < numMemPorts(); i++) {
          std::vector <Instruction*> timeSlots;
          for (int j = 0; j < this->II; j++) {
              timeSlots.push_back(NULL);
          }
          reservationTable.push_back(timeSlots);
      }
  }

  // budget - max num of operations to be scheduled before giving up
  // II - current initiation interval to attempt
  bool iterativeSchedule(int budget) {
      init();

      // calculate height priority
      computeHeights();

      // mark all operations as never scheduled
      // add all operations into unscheduled list
      for (BasicBlock::iterator instr = BB->begin(), ie = BB->end(); instr !=
              ie; ++instr) {
          neverScheduled[instr] = true;
          unscheduledInsts.insert(instr);
          File() << "Height: " << height[instr] << ": " << *instr << "\n";
      }

      budget--;

      while(!unscheduledInsts.empty() && budget > 0) {
          Instruction *I = getHighestPriorityInst();
          File() << "Scheduling: " << *I << "\n";

          int earlyStart = calcEarlyStart(I);

          int minTime = earlyStart;
          int maxTime = minTime + this->II - 1;

          int timeSlot = findTimeSlot(I, minTime, maxTime);

          File() << "minTime: " << minTime << "\n";
          File() << "maxTime: " << maxTime << "\n";
          File() << "timeSlot: " << timeSlot << "\n";

          schedule(I, timeSlot);

          budget--;

      }
      return unscheduledInsts.empty();
  }

  static void printNodeLabel(raw_ostream &out, Instruction *I) {
      out << *I;
  }


  void printMinDistDot(int II) {
      std::string FileError;
      std::string FileName = "mindist." + utostr(II) + ".dot";
      raw_fd_ostream moduloDotFile(FileName.c_str(), FileError);
      assert(FileError.empty() && "Error opening log files");
      formatted_raw_ostream out(moduloDotFile);

      dotGraph<Instruction> graph(out, printNodeLabel);
      graph.setLabelLimit(20);

      for (BasicBlock::iterator i = BB->begin(), ie = BB->end(); i != ie; ++i) {
          for (BasicBlock::iterator j = BB->begin(), je = BB->end(); j != je; ++j) {
              // -inf: no path from i to j in dependency graph
              if (minDist[i][j] < -1000) continue;

              std::string str;
              raw_string_ostream stream(str);
              stream << minDist[i][j];

              std::string label = "label=\"" + stream.str();
              if (dependent(i,j)) {
                  assert(distance(i,j) >= 0);
                  label += " (" + utostr(distance(i,j)) + ")";
              }
              label += "\"";
              if ((i == j) && (minDist[i][j] > 0)) {
                  label += ",color=red";
              } else if (minDist[i][j] < 0) {
                  label += ",color=green";
              } else if (minDist[i][j] > 0) {
                  label += ",color=orange";
              }

              graph.connectDot(out, i, j, label);
          }
      }

  }

  // computing recMII is slightly expensive O(N^3) for N operations in the loop
  // so start II = resourceMII
  // to make this more efficient double the recMII after each failure,
  // then upon success binary search backwards to find the lowest integer.
  int recurrenceMII(int resourceMII) {
      int recMII = resourceMII;
      // find smallest II with no positive cycle
      bool positiveCycle;
      do {
          File() << "Trying recMII = " << recMII << "\n";
          positiveCycle = computeMinDist(recMII);
          printMinDistDot(recMII);
          if (!positiveCycle) {
              break;
          } else {
              File() << "Positive cycle detected. Incrementing recMII\n";
              recMII++;
              sanityCheckII(recMII);
          }
      } while (1);

      return recMII;
  }

  // is there a data dependence from i to j
  // ie. does j depend on i
  bool dependent(Instruction *i, Instruction *j) {
      bool debug = false;
      if (debug) errs() << "dependent(" << *i << ", " << *j << ") = ";
      // can't use SchedulerDAG here because it doesn't include phi nodes
      for (User::op_iterator dep = j->op_begin(), e = j->op_end(); dep != e;
              ++dep) {
          Instruction *pred = dyn_cast<Instruction>(dep);
          if (!pred) continue;
          if (pred == i) {
              if (debug) errs() << "true\n";
              return true;
          }
      }

      InstructionNode *op = dag->getInstructionNode(j);
      for (InstructionNode::iterator dep = op->mem_dep_begin(),
              e = op->mem_dep_end(); dep != e; ++dep) {
          if ((*dep)->getInst() == i) {
              if (debug) errs() << "true (memory)\n";
              return true;
          }
      }

      if (debug) errs() << "false\n";
      return false;
  }

  // distance(i, j) is the number of iterations separating dependent operations
  // i and j
  int distance(Instruction *i, Instruction *j) {
      assert(dependent(i,j));

      // if j is a phi that has an incoming value of i for the loop's basic
      // block then we have a distance of 1
      if (PHINode *phi = dyn_cast<PHINode>(j)) {
          int index = phi->getBasicBlockIndex(BB);
          if (index == -1) return 0;
          Value *v = phi->getIncomingValue(index);
          if (v == i) {
              File() << "distance 1 from: " << *i << " to " << *phi << "\n";
              return 1;
          }
      }
      return 0;
  }


  // compute the longest path between every pair of vertices
  // return true if there is a positive cycle
  map<Instruction *, map<Instruction *, int> > minDist;
  // heightR[P] is equal to MinDist[P][STOP] where STOP
  // is a psuedo node that all the leaf operations without successors connect to
  map<Instruction *, int > heightR;

  // initialize minDist for all pairs of operations that have a dependence
  // between them
  void initMinDist(int II) {
      int negInf = -100000;

      for (BasicBlock::iterator i = BB->begin(), ie = BB->end(); i != ie; ++i) {
          for (BasicBlock::iterator j = BB->begin(), je = BB->end(); j != je; ++j) {
              minDist[i][j] = negInf;
              if (!dependent(i,j)) continue;
              minDist[i][j] = max(minDist[i][j],
                                  delay(i) - II * distance(i, j));
              if (i == j) assert (minDist[i][j] <= 0);
          }
          // if i has no children then it connects to the STOP pseudo node
          heightR[i] = negInf;
          if (noChildren(i)) {
              // minDist[i][STOP]
              heightR[i] = 0;
          }
      }
  }

  // Calculate the minimum number of cycles: minDist(i,j) between scheduling
  // instruction i and j.
  // ie. if instruction i was a load with latency 2 and instruction j used the
  // newly loaded value, then minDist(i,j) would be 2 (assuming i and j are in
  // the same iteration, that their dependency distance = 0)
  bool computeMinDist(int II) {

      initMinDist(II);

      // now consider all paths via vertex k as well: O(n^3)
      for (BasicBlock::iterator k = BB->begin(), ke = BB->end(); k != ke; ++k) {
          for (BasicBlock::iterator i = BB->begin(), ie = BB->end(); i != ie; ++i) {
              for (BasicBlock::iterator j = BB->begin(), je = BB->end(); j != je; ++j) {
                  int dist = minDist[i][k] + minDist[k][j];
                  if (dist > minDist[i][j]) {
                      minDist[i][j] = dist;
                      if ((i == j) && (dist > 0)) {
                          // i must be scheduled after itself - impossible
                          // positive cycle detected
                          File() << "Positive Cycle Detected\n";
                          File() << "minDist[i][k]: " << minDist[i][k] << "\n";
                          File() << "minDist[k][j]: " << minDist[k][j] << "\n";
                          File() << "i: " << *i << "\n";
                          File() << "k: " << *k << "\n";
                          File() << "j (== i): " << *j << "\n";
                          File() << "dist: " << dist << "\n";
                          File() << "Instruction i must be scheduled " <<
                                    "after itself. Impossible!\n";
                          File() << "Check the mindist." << utostr(II) <<
                                    ".dot graph for the red connection\n";
                          return true;
                      }
                  }
              }
          }
      }

      // no positive cycle
      return false;
  }


  int resourceMII() {
      File() << "Loop:\n";

      int resMII = 1;
      if (!LEGUP_CONFIG->getParameterInt("PARALLEL_LOCAL_RAMS")) {
          int memOps = 0;
          for (BasicBlock::iterator instr = BB->begin(), ie = BB->end(); instr !=
                  ie; ++instr) {
              if (isa<LoadInst>(instr) || isa<StoreInst>(instr)) {
                  File() << "-" << *instr << "\n";
                  memOps++;
              }
          }
          resMII = max(resMII, memOps / numMemPorts());
          File() << "resMII (due to mem ports): " << resMII << "\n";
      }

      int numMultipliers = LEGUP_CONFIG->getParameterInt("NUM_MULTIPLIERS");
      if (numMultipliers) {
          int mulOps = 0;
          for (BasicBlock::iterator instr = BB->begin(), ie = BB->end(); instr !=
                  ie; ++instr) {
              if (isMul(instr)) {
                  File() << "-" << *instr << "\n";
                  mulOps++;
              }
          }
          resMII = max(resMII, mulOps / numMultipliers);
          File() << "resMII (due to multipliers): " << resMII << "\n";
      }

      sanityCheckII(resMII);

      File() << "resMII: " << resMII << "\n";
      return resMII;
  }


  // Taken from LoopUnroll.cpp
  /// RemapInstruction - Convert the instruction operands from referencing the
  /// current values into those specified by VMap.
  void RemapInstruction(Instruction *I, ValueToValueMapTy &VMap) {
      assert(I);
      for (unsigned op = 0, E = I->getNumOperands(); op != E; ++op) {
          Value *Op = I->getOperand(op);
          assert(Op);
          ValueToValueMapTy::iterator It = VMap.find(Op);
          if (It != VMap.end()) {
              assert(It->second);
              //errs() << "Changing op " << op << " to " << *It->second << "\n";
              I->setOperand(op, It->second);
          }
      }
  }

  void printMap( map< int, ValueToValueMapTy > &valueMapIter, Value *v, int iter) {
      for (int j = 0; j <= iter; j++) {
          File() << "i=" << j << ": " << *v << " -> " << *valueMapIter[j][v] << "\n";
      }
  }

  // check for a call to __legup_label(label) in this basic block
  // with a label that matches a loop pipeline label
  bool check_for_legup_label(BasicBlock *bb) {
      for (BasicBlock::iterator instr = bb->begin(), ie =
              bb->end(); instr != ie; ++instr) {
          const CallInst *ci = dyn_cast<CallInst>(instr);
          if (!ci) continue;

          Function *calledFunc = ci->getCalledFunction();
          // ignore indirect function invocations
          if (!calledFunc) continue;

          if (calledFunc->getName() == "__legup_label") {

              //errs() << "Found label: " << *ci << "\n";
              Value *str = *ci->op_begin();
              // handle getelementptr
              if (const User *U = dyn_cast<User>(str)) {
                  if (U->getNumOperands() > 1) {
                      str = U->getOperand(0);
                  }
              }
              GlobalVariable *G = dyn_cast<GlobalVariable>(str);
              assert(G);
              Constant *C = G->getInitializer();
              assert(C);
              ConstantArray *CA = dyn_cast<ConstantArray>(C);
              assert(CA);
              std::string label = arrayToString(CA);

              //errs() << "label name: " << label << "\n";
              if (LEGUP_CONFIG->isLoopPipelined(label)) {
                  this->PipelineTclInfo = LEGUP_CONFIG->getLoopPipeline(label);
                  return true;
              }
          }
      }
      return false;
  }

    bool doInitialization(Loop *L, LPPassManager &LPM) {
        return false;
    }

  void set_llvm_metadata() {

      int maxStage = 0;

      int totalTime = 0;
      for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I !=
              ie; ++I) {

          assert(schedTime.find(I) != schedTime.end());

          int time = schedTime[I];
          schedStage[I] = time / this->II;
          totalTime = std::max(totalTime, time);
          maxStage = std::max(maxStage, schedStage[I]);
          File() << "Time: " << time << " Stage: " << schedStage[I] << " instr: " << *I
              << "\n";

      }
      // time is indexed at 0
      totalTime++;

      // mark original/prologue/epilogue basic blocks as "loop.pipelined"
      setMetadataInt(BB->getTerminator(), "legup.pipelined", 1);
      setMetadataInt(BB->getTerminator(), "legup.II", this->II);
      setMetadataInt(BB->getTerminator(), "legup.totalTime", totalTime);
      setMetadataInt(BB->getTerminator(), "legup.maxStage", maxStage);
      setMetadataInt(BB->getTerminator(), "legup.tripCount", this->tripCount);
      setMetadataStr(BB->getTerminator(), "legup.label", this->PipelineTclInfo.label);

      for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I !=
              ie; ++I) {
          assert(schedTime.find(I) != schedTime.end());
          assert(schedStage.find(I) != schedStage.end());
          setMetadataInt(I, "legup.pipeline.time", schedTime[I]);
          setMetadataInt(I, "legup.pipeline.stage", schedStage[I]);
      }
  }

  BasicBlock *find_pipelined_bb() {
      BasicBlock *BB = NULL;
      for (Loop::block_iterator bb = loop->block_begin(), e =
              loop->block_end(); bb != e; ++bb) {
          assert(!BB);

          if (check_for_legup_label(*bb)) {
              BB = *bb;
              break;
          }

      }
      return BB;
  }

  // sanity check - make sure the II is less than the maximum possible II
  void sanityCheckII(int II) {
      static int largestPossibleII = 0;
      if (!largestPossibleII) {
          // assume every instruction is dependent and executed sequentially
          for (BasicBlock::iterator instr = BB->begin(), ie = BB->end();
                  instr != ie; ++instr) {
              largestPossibleII += delay(instr);
          }
          File() << "largestPossibleII: " << largestPossibleII << "\n";
      }

      assert(II <= largestPossibleII &&
          "Error: II should never be this large");
  }

  static void printNodeLabel(raw_ostream &out, InstructionNode *I) {
      out << *I->getInst();
  }

  // print a dot graph representing the dependency information (both normal and
  // memory) for the loop
  void printDependencyDot(formatted_raw_ostream &out) {

      dotGraph<InstructionNode> graph(out, printNodeLabel);
      graph.setLabelLimit(40);

      bool ignoreDummyCalls = true;
      for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I != ie; ++I) {
          InstructionNode *op = dag->getInstructionNode(I);
          if (ignoreDummyCalls && isaDummyCall(I)) continue;

          for (Value::use_iterator use = I->use_begin(), e = I->use_end(); use != e;
                  ++use) {
              if (Instruction *child = dyn_cast<Instruction>(*use)) {
                  if (ignoreDummyCalls && isaDummyCall(child)) continue;
                  std::string label = "label=\"" + utostr(delay(I));
                  int d = distance(I, child);
                  if (d) label += "[" + utostr(d) + "]";
                  label += "\",color=blue";

                  graph.connectDot(out, op, dag->getInstructionNode(child), label);
              }
          }

          for (InstructionNode::iterator use = op->mem_use_begin(),
                  e = op->mem_use_end(); use != e; ++use) {
              Instruction *child = (*use)->getInst();
              if (ignoreDummyCalls && isaDummyCall(child)) continue;

              std::string label = "label=\"" + utostr(delay(I));
              int d = distance(I, child);
              if (d) label += "[" + utostr(d) + "]";
              label += "\",color=red";

              graph.connectDot(out, op, *use, label);
          }

      }

  }

  //bool runOnScop(Scop &scop) {
  bool runOnLoop(Loop *L, LPPassManager &LPM) {
      // skip pipelining for now
      if (LEGUP_CONFIG->getParameterInt("NO_LOOP_PIPELINING")) {
          return false;
      }

      loop = L;

      if (loop->getBlocks().size() > 1) {
          // ignore loops with more than one basic block for now
          return false;
      }

      BB = find_pipelined_bb();
      if (!BB) {
          // didn't find the loop
          return false;
      }
      //errs() << "BB: " << *BB << "\n";

      //Dependences *DP = &getAnalysis<Dependences>();
      //DP->printScop(errs());

      LI = &getAnalysis<LoopInfo>();
      loopPreheader = loop->getLoopPreheader();
      assert(loopPreheader);
      F = loopPreheader->getParent();
      M = F->getParent();

      //errs() << "Depth: " << loop->getLoopDepth() << "\n";
      // only handle loops with one BB?
      //assert(loop->getLoopDepth() == 1);

      /*
         DT = &getAnalysis<DominatorTree>();
         C = &getAnalysis<CloogInfo>();
         SD = &getAnalysis<ScopDetection>();
         TD = &getAnalysis<TargetData>();
         */

      /*
      S = &scop;
      region = &S->getRegion();
      R = region;

      F = R->getEntry()->getParent();
      BB = R->getEntry();
      //loop = LI->getLoopFor(BB);
      */

      AliasAnalysis *AA = &getAnalysis<AliasAnalysis>();

      alloc = new Allocation(M);
      alloc->addAA(&getAnalysis<AliasAnalysis>());

      if (!ranAlready) {
        File() << getFileHeader();
      }
      ranAlready = true;

      File() << "Found Loop: " << *loop << "\n";
      this->tripCount = L->getSmallConstantTripCount();
      assert(this->tripCount);
      File() << "Trip count: " << this->tripCount << "\n";

      /*
      BasicBlock *LatchBlock = L->getLoopLatch();
      if (LatchBlock) {
          SE = &getAnalysis<ScalarEvolution>();
          unsigned TripCount = SE->getSmallConstantTripCount(L, LatchBlock);
          unsigned TripMultiple = SE->getSmallConstantTripMultiple(L, LatchBlock);
          File() << "Trip count: " << TripCount << "\n";
          File() << "Trip multiple: " << TripMultiple << "\n";
      }
      */

      PHINode *induction = L->getCanonicalInductionVariable();
      assert(induction);

      //  canonical induction variable: an integer recurrence that starts at 0
      //  and increments by one each time through the loop.
      File() << "Induction variable: " << *induction << "\n";
      setMetadataInt(induction, "legup.canonical_induction", 1);

      // the loop body should only have a single predecessor
      assert(loopPreheader);

      dag = new SchedulerDAG;
      dag->runOnFunction(*F, AA, alloc);

      { // Need to go out of scope to write to file properly
          std::string FileError;
          // print out the dependence graph
          raw_fd_ostream pipelineDFG("pipelineDFG.dot", FileError);
          assert(FileError.empty() && "Error opening log files");
          formatted_raw_ostream out(pipelineDFG);
          printDependencyDot(out);
      }

      // canonical induction variable starts at 0 and increments by 1
      inductionVar = loop->getCanonicalInductionVariable();
      assert(inductionVar);

      File() << "Loop preheader: " << loopPreheader->getName() << "\n";

      //int MII = std::max(resourceMII(), recurrenceMII());
      int resMII = resourceMII();
      // recurrenceMII starts from resourceII
      int MII = recurrenceMII(resMII);

      // ModuloSchedulo
      this->II = MII;

      int userII = PipelineTclInfo.II;
      if (PipelineTclInfo.user_II) {
          File() << "user II = " << userII << "\n";
          if (userII < this->II) {
              errs() << "ERROR: user specified II couldn't be achieved!\n";
              return false;
          }
          this->II = userII;
      }

      int budgetRatio = 100;
      int numOps = BB->size();
      while (!iterativeSchedule(budgetRatio * numOps)) {
          if (PipelineTclInfo.user_II) {
              errs() << "ERROR: user specified II couldn't be achieved!\n";
              return false;
          }
          this->II++;
          sanityCheckII(this->II);
      }

      File() << "Scheduled.\n";
      File() << "MII = " << MII << "\n";
      File() << "II = " << this->II << "\n";

      Value *Elts[] = {
        MDString::get(M->getContext(), "II"),
        MDString::get(M->getContext(), utostr(this->II)),
        //MDString::get(M->getContext(), "BB"),
        //BB,
      };
      MDNode *Node = MDNode::get(M->getContext(), Elts);

      M->getOrInsertNamedMetadata("legup.pipeline")->addOperand(Node);

      assert(this->II > 0 && "II must be > 0");
      File() << "Final Reservation Table:\n";
      printReservationTable();

      set_llvm_metadata();

      return true;
  }

  virtual void getAnalysisUsage(AnalysisUsage &AU) const {
      AU.addRequired<LoopInfo>();
      AU.addRequired<AliasAnalysis>();
      AU.addRequired<ScalarEvolution>();
      //AU.setPreservesAll();
      // does not preserve loopinfo?
      //AU.addPreserved<MemoryDependenceAnalysis>();
      //AU.addPreserved<AliasAnalysis>();

      /*
      AU.addRequired<CloogInfo>();
      AU.addRequired<Dependences>();
      AU.addRequired<DominatorTree>();
      AU.addRequired<RegionInfo>();
      AU.addRequired<ScopDetection>();
      AU.addRequired<ScopInfo>();
      AU.addRequired<TargetData>();

      AU.addPreserved<CloogInfo>();
      AU.addPreserved<Dependences>();
      AU.addPreserved<DominatorTree>();
      AU.addPreserved<PostDominatorTree>();
      AU.addPreserved<ScopDetection>();
      AU.addPreserved<ScalarEvolution>();
      AU.addPreserved<RegionInfo>();
      AU.addPreserved<TempScopInfo>();
      AU.addPreserved<ScopInfo>();
      AU.addPreservedID(IndependentBlocksID);
      */
  }
  };
}



/*
*/
char IterativeModuloScheduling::ID = 1;

INITIALIZE_PASS_BEGIN(IterativeModuloScheduling, "modulo-schedule", "LegUp Iterative Modulo Scheduling PrePass", false, false)
//INITIALIZE_PASS_DEPENDENCY(SchedulerDAG)
INITIALIZE_PASS_END(IterativeModuloScheduling, "modulo-schedule", "LegUp Iterative Modulo Scheduling PrePass", false, false)


static RegisterPass<IterativeModuloScheduling>
Z("modulo-schedule", "LegUp Iterative Modulo Scheduling PrePass");

/*
using namespace llvm;
char IterativeModuloScheduling::ID = 0;
INITIALIZE_PASS(IterativeModuloScheduling, "modulo-schedule",
                "LegUp Iterative Modulo Scheduling PrePass",
                false, false)
namespace llvm {

LoopPass *createIterativeModuloSchedulingPass() {
  return new IterativeModuloScheduling();
}
*/

//}
/*
namespace polly {
Pass* createModuloSchedulePass() {
    //return 0;
  return new IterativeModuloScheduling();
}
}
*/
