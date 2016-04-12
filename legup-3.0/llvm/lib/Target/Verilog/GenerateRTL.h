//===-- GenerateRTL.h -------------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// GenerateRTL uses the Scheduling and Binding to construct a circuit
// out of the RTL data structure.
//
//===----------------------------------------------------------------------===//

#ifndef LEGUP_GENERATERTL_H
#define LEGUP_GENERATERTL_H

#include "llvm/Constants.h"
#include "llvm/DerivedTypes.h"
#include "llvm/Module.h"
#include "llvm/Instructions.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/CallSite.h"
#include "llvm/Support/GetElementPtrTypeIterator.h"
#include "llvm/ADT/SmallString.h"
#include "llvm/Support/InstVisitor.h"
#include "llvm/Support/raw_ostream.h"
#include "Graph.h"
#include <map>
#include <queue>
#include <sstream>
#include <stack>


using namespace llvm;


namespace legup {

class Binding;
class Scheduler;
class SchedulerDAG;
class FiniteStateMachine;
class RTLModule;
class RTLSignal;
class RTLConst;
class RTLOp;
class State;
class LegupPass;
class Allocation;
class RAM;
class MinimizeBitwidth;

/// GenerateRTL generates an RTLModule for a Verilog module, which has a
/// one-to-one mapping with an LLVM function
/// @brief Legup Hardware Module Representation
class GenerateRTL : public InstVisitor<GenerateRTL> {
public:
    GenerateRTL(Allocation *alloc, Function* F) :
        sched(0), binding(0), fsm(0), alloc(alloc), Fp(F), rtl(0) {}

    ~GenerateRTL();

    /// generateRTL - generate the RTLModule required to implement this
    /// hardware module
    RTLModule* generateRTL();

    Function *getFunction() { return Fp; }

    // Instruction visitation functions
    // These are called by visit() in generateDatapath()
    // Make sure to set 'state' variable before calling visit()
    void visitReturnInst(ReturnInst &I);
    void visitBranchInst(BranchInst &I);
    void visitSwitchInst(SwitchInst &I);
    void visitInvokeInst(InvokeInst &I) {
      llvm_unreachable("Lowerinvoke pass didn't work!");
    }

    void visitUnwindInst(UnwindInst &I) {
      llvm_unreachable("Lowerinvoke pass didn't work!");
    }
    void visitUnreachableInst(UnreachableInst &I);

    void visitPHINode(PHINode &I);

    RTLSignal *getLeftHandSide(Instruction *instr);

    void visitBinaryOperator(Instruction &I);
    void visitICmpInst(ICmpInst &I) {
        visitBinaryOperator(I);
    }
    void visitFCmpInst(FCmpInst &I) {
        visitBinaryOperator(I);
    }
    void visitFCastInst (CastInst &I);
    void visitFPTruncInst (FPTruncInst &I){
        visitFCastInst(I);
    }
    void visitFPExtInst (FPExtInst &I){
        visitFCastInst(I);
    }
    void visitCastInst (CastInst &I);
    void visitFPCastInst (CastInst &I);
    void visitSelectInst(SelectInst &I);

    void visitCallInst (CallInst &I);

    void visitAllocaInst(AllocaInst &I);
    int connectedToPortB(Instruction *instr);
    void visitLoadInst  (LoadInst   &I);
    void visitStoreInst (StoreInst  &I);
    void loadStoreCommon (Instruction *instr, Value *addr);

    void visitGetElementPtrInst(GetElementPtrInst &I);

    void visitInstruction(Instruction &I) {
      errs() << "Verilog Writer does not know about " << I;
      llvm_unreachable(0);
    }

    void scheduleOperations();

    /// updateOperationUsage - updates the global OperationUsage map
    void updateOperationUsage (std::map <std::string, int> &_OperationUsage);

    FiniteStateMachine *getFSM() { return fsm; }
    unsigned thisCount;

private:
    /// generatePHICopiesForSuccessor - output any assignments necessary to
    /// execute in CurBlock state due to a phi instruction in Successor state
    void generatePHICopiesForSuccessor (RTLSignal* condition, State *CurBlock,
            State *Successor);

    /// allocateRAM - create a RAM object for value I
    RAM* allocateRAM(const Value *I);

    /// verilogName - return the verilog variable name of a LLVM value
    std::string verilogName(const Value *val);
    std::string verilogName(const Value &val);

    /// setOperationUsageFunction - updates the local OperationUsage map
    void setOperationUsageFunction(Instruction *instr);

    RTLSignal *getConstantSignal(const ConstantInt *c);
    RTLSignal *getFloatingPointConstantSignal(const ConstantFP *c);
    void generateAllCallInsts();
    void updateStatesAfterCallInsts();
    RTLSignal* getOpConstant(State *state, Constant *c);
    RTLSignal* getOpNonConstant(State *state, Value *op0);
    void connectState(RTLSignal *signal, State *state, RTLSignal
            *driver, const Instruction *instr=0);
    RTLOp *getPipelineStateCondition(RTLSignal *signal, const Instruction
            *instr=0);
    RAM* getRam(Value *op);
    RAM* getLocalRam(Value *op);

    // for basic blocks that should be reading from a ram
    std::set<Function*> calledModules;
    unsigned numStates;
    void generateModuleDeclarationSignals(State *wait, 
    std::string postfix);
    void generateModuleDeclaration();
    void generateVariableDeclarationsSignals(RTLModule *t, 
        std::string fctName, std::string postfix);
    void generateVariableDeclarations(Function *F);
    void generateDatapath();
    void generateAllLoopPipelines();
    void generateLoopPipeline(BasicBlock *BB);
    void modifyFSMForLoopPipeline (BasicBlock *BB);


    void generateTransition(RTLSignal *condition, State* s);
    RTLSignal *getTransitionOp(State *s);

    RTLSignal *getOp(State *state, Value *op);
    RTLSignal *getGEP(State *state, User *GEP);
    RTLSignal *getByteOffset(State *state, Value *Op, gep_type_iterator GTI);
    RTLSignal *getGEPOffset(State *state, User *GEP);
    void functionHandshaking(FiniteStateMachine *fsm);

    bool usedAcrossStates(Value *instr, State *state);
    bool usedSameState(Value *instr, State *state);
    bool fromOtherState(Value *v, State *state);
    bool fromSameState(Value *v, State *state);
    void createPHISignals(PHINode *instr, State *state);
    RTLSignal *getOpReg(Value *v, State* state);
    void operatorAssignment();
    RTLSignal *createFU(Instruction *Instruction, RTLSignal *op0, RTLSignal
            *op1);
    RTLSignal *createBindingFU(Instruction *instr, RTLSignal *op0, RTLSignal
            *op1);
    void create_fu_enable_signals(Instruction *instr);
    void create_pattern_fu(std::string name1, Node *node1, Node *node2);
    void createBindingSignals();
    void createMultipumpSignals();
    void shareRegistersFromBinding();
    void updateRTLWithPatterns();
    void create_functional_units_for_pairs();
    void visitPrintf (CallInst *CI, Function *called);
    void createFunctionMemorySignals(State *state1, CallInst *CI, 
        std::string name, std::string postfix);
    void createFunction (CallInst &I);
    RTLSignal* createMulFU(Instruction *instr, RTLSignal *op0, RTLSignal *op1);
    RTLSignal* createDivFU(Instruction *instr, RTLSignal *op0, RTLSignal *op1);
    RTLSignal *createSerialDivFU(Instruction *instr, RTLSignal *op0, RTLSignal *op1);
    RTLSignal *createSerialDivLegUpFU(Instruction *instr, RTLSignal *op0, RTLSignal *op1);
    RTLSignal* createFPFU(Instruction *instr, RTLSignal *op0, RTLSignal *op1, unsigned opCode);
    RTLSignal* createFCmpFU(Instruction *instr, RTLSignal *op0, RTLSignal *op1);
    RTLSignal* createFCastFU(Instruction *instr, RTLSignal *op0);
    RTLSignal* createSIToFPFU(Instruction *instr, RTLSignal *op0, int width);
    RTLSignal* createFPToSIFU(Instruction *instr, RTLSignal *op0, int width);
    void createMultiPumpMultiplierFU(Instruction *AxB, Instruction *CxD);
    void createRTLSignals();
    void connectRegistersToWires();
    void printSchedulingInfo();
    void printSchedulingDFGDot(SchedulerDAG &dag);
    void printScheduleGanttChart();
    typedef struct _GanttBar {
        Instruction *inst;
        int x, y;
        int duration;
    } GanttBar;
    void printGantt(raw_fd_ostream &file, std::vector<GanttBar> &gantt,
            std::map<Instruction *, GanttBar> &instructions, int stateNum);
    void shareRegistersForFU(
        std::set<Instruction *> &Instructions,
        std::map<Instruction*, std::set<Instruction*> >
        &IndependentInstructions);
    void setup_multipumping();

    raw_fd_ostream &pipeRTLFile();

    Scheduler *sched;
    Binding *binding;
    FiniteStateMachine *fsm;
    Allocation *alloc;
    Function *Fp;
    RTLModule *rtl;
    typedef std::map<const Value*, RAM*>::iterator ram_iterator;
    std::map <std::string, int> OperationUsageFunction;
    State *state;
    int stage;
    int time;
    std::map <State*, RTLSignal*> stateSignals;
    bool found;
    void connectPatternFU(Graph::GraphNodes_iterator &GNi, int PairNumber);
    std::string getPatternFUName(Graph::GraphNodes_iterator &GNi, int PairNumber);
    unsigned getInstrMemSize (Instruction *instr);
    State *getFirstState(BasicBlock *BB);
    void printFSMDot();

    // this table gives the RTL signal holding the given LLVM value on each time
    // step of the pipeline. NULL if the value isn't available/calculated yet
    std::map<const Value*, std::vector<RTLSignal*> > pipelineSignalAvailableTable;

    // all pairs of Graph objects to share
    std::map<Graph*, Graph*> GraphPairs;

    // a set of all instructions in Graphs, used in visitInstruction 
    std::set<Instruction*> InstructionsInGraphs;

    std::map<std::string, std::set<Instruction *> > instructionsAssignedToFU;
    // From Binding, all pairs of instructions which are shared
    std::map<const Value*, const Value*> AllBindingPairs;

    RTLConst *ZERO, *ONE;
    MinimizeBitwidth *MBW;
    bool EXPLICIT_LPM_MULTS;
    bool MULTIPUMPING;
    bool USE_MB;

    std::map<Instruction*, std::string> multipumping_pairs;
    std::map<Instruction*, std::string> multipumping_pairs_out;
    std::map<Instruction*, std::string> multipumping_pairs_op0;
    std::map<Instruction*, std::string> multipumping_pairs_op1;

};

} // End legup namespace

#endif
