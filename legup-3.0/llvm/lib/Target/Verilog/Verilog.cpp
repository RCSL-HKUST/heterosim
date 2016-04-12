//===-- Verilog.cpp - Library for converting LLVM code to Verilog ---------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This library converts LLVM code to Verilog code LLVM calls this pass through
// runOnFunction(Function &F)
//
//===----------------------------------------------------------------------===//

#include "LegupPass.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/PassManager.h"
#include "llvm/Target/TargetRegistry.h"
#include "llvm/Target/TargetRegistry.h"
#include "VerilogTargetMachine.h"
#include "llvm/Analysis/Passes.h"

using namespace llvm;
using namespace legup;

// Register the Verilog target with LLVM
extern "C" void LLVMInitializeVerilogTarget() { 
  RegisterTargetMachine<VerilogTargetMachine> X(TheVerilogTarget);
}

char LegupPass::ID = 0;


//===----------------------------------------------------------------------===//
//                       External Interface declaration
//===----------------------------------------------------------------------===//

bool VerilogTargetMachine::addPassesToEmitFile(PassManagerBase &PM,
                                         formatted_raw_ostream &o,
                                         CodeGenFileType FileType,
                                         CodeGenOpt::Level OptLevel,
                                         bool DisableVerify) {
  if (FileType != TargetMachine::CGFT_AssemblyFile) return true;
  PassRegistry &Registry = *PassRegistry::getPassRegistry();
  initializeBasicAliasAnalysisPass(Registry);
  PM.add(createBasicAliasAnalysisPass());
  PM.add(new LegupPass(o));
  return false;
}

