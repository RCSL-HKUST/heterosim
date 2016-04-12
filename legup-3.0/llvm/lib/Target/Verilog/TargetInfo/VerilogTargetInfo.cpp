//===-- VerilogBackendTargetInfo.cpp --------------------------------------===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// Verilog Backend Target Implementation
//
//===----------------------------------------------------------------------===//

#include "VerilogTargetMachine.h"
#include "llvm/Module.h"
#include "llvm/Target/TargetRegistry.h"
using namespace llvm;

Target llvm::TheVerilogTarget;

// Look in Target/TargetSelect.h to see how this is called
extern "C" void LLVMInitializeVerilogTargetInfo() { 
  RegisterTarget<> X(TheVerilogTarget, "v", "Verilog Backend");
}

extern "C" void LLVMInitializeVerilogTargetMC() {}
