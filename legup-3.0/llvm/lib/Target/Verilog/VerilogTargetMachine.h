//===-- VerilogTargetMachine.h - Verilog backend ----------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the TargetMachine that is used by the Verilog backend.
//
//===----------------------------------------------------------------------===//

#ifndef VERILOGTARGETMACHINE_H
#define VERILOGTARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetData.h"

namespace llvm {

struct VerilogTargetMachine : public TargetMachine {
  VerilogTargetMachine(const Target &T, StringRef TT,
                   StringRef CPU, StringRef FS,
                   Reloc::Model RM, CodeModel::Model CM)
    : TargetMachine(T, TT, CPU, FS) {}
  

  virtual bool addPassesToEmitFile(PassManagerBase &PM,
                                   formatted_raw_ostream &Out,
                                   CodeGenFileType FileType,
                                   CodeGenOpt::Level OptLevel,
                                   bool DisableVerify);
  
  virtual const TargetData *getTargetData() const { return 0; }
};

extern Target TheVerilogTarget;

} // End llvm namespace


#endif
