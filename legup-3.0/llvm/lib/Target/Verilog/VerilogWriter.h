//===-- VerilogWriter.h -----------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// VerilogWriter takes an RTLModule and prints out the corresponding
// Verilog along with necessary memory controllers and avalon signals.
//
//===----------------------------------------------------------------------===//

#ifndef LEGUP_VERILOG_WRITER_H
#define LEGUP_VERILOG_WRITER_H

#include "llvm/Support/raw_ostream.h"
#include "llvm/Instructions.h"
#include "RTL.h"
#include <set>

using namespace llvm;

namespace legup {

class HwModule;
class Allocation;
class RAM;

/// VerilogWriter - Prints the Verilog for a RTLModule.
/// Also handles printing memory controller, test suite, and avalon interface
/// @brief VerilogWriter Class
class VerilogWriter {
public:
    VerilogWriter(raw_ostream &Out, const Allocation *alloc, std::set<const
            Function*> AcceleratedFcts) : Out(Out), alloc(alloc),
            AcceleratedFcts(AcceleratedFcts) {}
    VerilogWriter(raw_ostream &Out, const Allocation *alloc) : Out(Out),
    alloc(alloc) {}
    void print();

    void printRTL(const RTLModule *rtl);

private:
    void printValue(const RTLSignal *sig,unsigned w=0, bool zeroExtend=false);

    bool stripRAM(const Value *R);

    void printComments(const Instruction *I);
    void printSignal(const RTLSignal *signal);
    void printConditions(const RTLSignal *signal, std::string assignOp);
    void printModuleInstance(raw_ostream &Out, const RTLModule *mod);
    void printMemCtrlModuleHeader();
    void printMemCtrlVariablesSignals(std::string postfix);
    void printMemCtrlVariables();
    void printMemCtrlRAMs();
    void printAddrAlignmentCheck(std::string postfix);
    void printPrevAddr(const RAM *R, std::string postfix);
    void printAlwaysTrigger(const RTLSignal *signal, const RTLSignal *driver);
    bool isConst(const RTLSignal *sig);

    void printTop(const Function * F);
    void printRAMModule();
    void printPLLModule();
    void printClkFollowerModule();
    void printMultipumpModule();
    void printMemoryControllerSignals(std::string postfix);
    void printMemoryController();
    void printDE2();
    void printDE4();
    void printHex();
    void printVerilog(raw_ostream &Out, const HwModule *module);
    void printModuleDeclaration(const RTLModule *rtl);
    void printVerilogTestbench();
    void printMemoryVariablesSignals(std::string inputPrefix, 
    std::string outputPrefix, std::string postfix);
    void printMemoryVariables(bool top);
    void printBlankDefaultCase(std::string indent);
    void printRAMTag(const RAM *R, std::string postfix);
    void printRAMSignals(std::string postfix);
    void printPrevTagCase(std::string postfix);
    void printRAMTagCase(std::string postfix);

    void printModuleHeader();
    void printVerilogOperator(const RTLOp *op, unsigned w=0);
    void printDisplay(const RTLOp *op);
    void printVerilogOpcode(RTLOp::Opcode opcode);

	void printTopHybrid(const Function * F, unsigned dataSize);
	//void printMemTag(unsigned dataSize, bool isParallel);
	void printMemTag(unsigned dataSize, bool usesLocks, bool usesBarriers, bool usesOMP);
	void printGlobalTags(const RAM *R);
	void printLocalTags(const RAM *R, unsigned dataSize, unsigned &tag);
	void printHybridTags(bool usesLocks, bool usesBarriers, bool usesOMP);
	void printAvalonInterface(std::string ModuleName, bool isParallel);
	int getAvalonBusWidth(const Function * F);
	void printIODeclarations(int AddressBusWidth, bool isParallel);
    bool printSignalDeclarations(const Function * F, std::vector<int> &arg_bitwidth, bool isParallel);
	void printArgumentSignalDeclarations(const Function * F, std::vector<int> &arg_bitwidth);
	//void printAssignStatements(int NumParams, bool return64, bool isParallel);
	void printAssignStatements(int NumParams, bool return64, bool isParallel, bool usesParallelAPI, bool usesLocks, bool usesBarriers, bool usesOMP);
	void printACCELassignStatements(bool isParallel, bool usesParallelAPI);
	void printMemoryAssignStatements(int NumParams, bool return64, bool isParallel, bool usesParallelAPI);
	void printAPIAssignStatements(bool usesLocks, bool usesBarriers, bool usesOMP);
    void printArgsReceivers(int NumParams, const std::vector<int>
      &arg_bitwidth);
	void printStartDoneSignals();
	void printMemorySignals(bool isParallel);
	bool printReturnValSignals(bool return64, const Function * F, bool isParallel);
	void printMemoryInstance();
    void printAccelInstance(const Function * F, int NumParams, bool
      voidtype);
	std::string parseMIPSdisassembly(const char * disassembly, std::string varName);
	void printModelsimSignals(bool voidtype);
    void printDeclaration(const RTLSignal *signal);
    void printVerilogBitwidthPrefix(const RTLSignal *sig);
    void printRamInstance(const RAM *R);
    void printArbiterInstance(bool usesParallelAPI);
    void printMemoryDataReadySignals(bool usesParallelAPI);
	void printMemoryDataReceivers(bool usesParallelAPI);
	void printMemoryShiftRegisters(bool usesParallelAPI, std::string postfix);
	void printMemoryControllerAssignStatements(bool usesParallelAPI, std::string postfix);
	void printMemoryDataSignals(bool usesParallelAPI);
	void printMemoryStateMachine(bool usesParallelAPI);
	void printMemoryDataReceivers(bool usesParallelAPI, std::string postfix);
	void printMemorySignalDeclarations(bool usesParallelAPI, std::string postfix);
	void printoffChipMemoryFlags(std::string postfix);

    std::string indent, indent0;
    raw_ostream &Out;
    const Allocation *alloc;
    const RTLModule *rtl;
	const std::set<const Function*> AcceleratedFcts;
};

} // End legup namespace

#endif
