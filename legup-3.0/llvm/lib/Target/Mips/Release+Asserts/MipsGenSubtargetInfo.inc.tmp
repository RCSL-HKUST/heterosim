//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Subtarget Enumeration Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace Mips {
enum {
  FeatureBitCount =  1ULL << 0,
  FeatureCondMov =  1ULL << 1,
  FeatureEABI =  1ULL << 2,
  FeatureFP64Bit =  1ULL << 3,
  FeatureGP64Bit =  1ULL << 4,
  FeatureMinMax =  1ULL << 5,
  FeatureMips1 =  1ULL << 6,
  FeatureMips2 =  1ULL << 7,
  FeatureMips32 =  1ULL << 8,
  FeatureMips32r2 =  1ULL << 9,
  FeatureMulDivAdd =  1ULL << 10,
  FeatureO32 =  1ULL << 11,
  FeatureSEInReg =  1ULL << 12,
  FeatureSingleFloat =  1ULL << 13,
  FeatureSwap =  1ULL << 14,
  FeatureVFPU =  1ULL << 15
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
llvm::SubtargetFeatureKV MipsFeatureKV[] = {
  { "bitcount", "Enable 'count leading bits' instructions.", Mips::FeatureBitCount, 0ULL },
  { "condmov", "Enable 'conditional move' instructions.", Mips::FeatureCondMov, 0ULL },
  { "eabi", "Enable eabi ABI", Mips::FeatureEABI, 0ULL },
  { "fp64", "Support 64-bit FP registers.", Mips::FeatureFP64Bit, 0ULL },
  { "gp64", "General Purpose Registers are 64-bit wide.", Mips::FeatureGP64Bit, 0ULL },
  { "minmax", "Enable 'min/max' instructions.", Mips::FeatureMinMax, 0ULL },
  { "mips1", "Mips1 ISA Support", Mips::FeatureMips1, 0ULL },
  { "mips2", "Mips2 ISA Support", Mips::FeatureMips2, 0ULL },
  { "mips32", "Mips32 ISA Support", Mips::FeatureMips32, Mips::FeatureCondMov | Mips::FeatureBitCount },
  { "mips32r2", "Mips32r2 ISA Support", Mips::FeatureMips32r2, Mips::FeatureMips32 | Mips::FeatureSEInReg },
  { "muldivadd", "Enable 'multiply add/sub' instructions.", Mips::FeatureMulDivAdd, 0ULL },
  { "o32", "Enable o32 ABI", Mips::FeatureO32, 0ULL },
  { "seinreg", "Enable 'signext in register' instructions.", Mips::FeatureSEInReg, 0ULL },
  { "single-float", "Only supports single precision float", Mips::FeatureSingleFloat, 0ULL },
  { "swap", "Enable 'byte/half swap' instructions.", Mips::FeatureSwap, 0ULL },
  { "vfpu", "Enable vector FPU instructions.", Mips::FeatureVFPU, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
llvm::SubtargetFeatureKV MipsSubTypeKV[] = {
  { "4ke", "Select the 4ke processor", Mips::FeatureMips32r2, 0ULL },
  { "allegrex", "Select the allegrex processor", Mips::FeatureMips2 | Mips::FeatureSingleFloat | Mips::FeatureEABI | Mips::FeatureVFPU | Mips::FeatureSEInReg | Mips::FeatureCondMov | Mips::FeatureMulDivAdd | Mips::FeatureMinMax | Mips::FeatureSwap | Mips::FeatureBitCount, 0ULL },
  { "mips1", "Select the mips1 processor", Mips::FeatureMips1, 0ULL },
  { "mips2", "Select the mips2 processor", Mips::FeatureMips2, 0ULL },
  { "r2000", "Select the r2000 processor", Mips::FeatureMips1, 0ULL },
  { "r3000", "Select the r3000 processor", Mips::FeatureMips1, 0ULL },
  { "r6000", "Select the r6000 processor", Mips::FeatureMips2, 0ULL }
};


// Functional units for itineraries "MipsGenericItineraries"
namespace MipsGenericItinerariesFU {
  const unsigned ALU = 1 << 0;
  const unsigned IMULDIV = 1 << 1;
}

llvm::InstrStage MipsStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 3, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 2, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 17, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 38, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 4, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 7, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 8, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 23, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 36, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 54, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 12, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 5, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 0, 0, 0, llvm::InstrStage::Required } // End itinerary
};
unsigned MipsOperandCycles[] = {
  0, // No itinerary
  0 // End itinerary
};
unsigned MipsForwardingPathes[] = {
  0, // No itinerary
  0 // End itinerary
};

llvm::InstrItinerary MipsGenericItineraries[] = {
  { 1, 1, 2, 0, 0 }, // 0 IIAlu
  { 1, 1, 2, 0, 0 }, // 1 IIBranch
  { 1, 7, 8, 0, 0 }, // 2 IIFadd
  { 1, 2, 3, 0, 0 }, // 3 IIFcmp
  { 1, 1, 2, 0, 0 }, // 4 IIFcvt
  { 1, 11, 12, 0, 0 }, // 5 IIFdivDouble
  { 1, 10, 11, 0, 0 }, // 6 IIFdivSingle
  { 1, 3, 4, 0, 0 }, // 7 IIFmove
  { 1, 9, 10, 0, 0 }, // 8 IIFmulDouble
  { 1, 8, 9, 0, 0 }, // 9 IIFmulSingle
  { 1, 14, 15, 0, 0 }, // 10 IIFrecipFsqrtStep
  { 1, 13, 14, 0, 0 }, // 11 IIFsqrtDouble
  { 1, 12, 13, 0, 0 }, // 12 IIFsqrtSingle
  { 1, 4, 5, 0, 0 }, // 13 IIHiLo
  { 1, 6, 7, 0, 0 }, // 14 IIIdiv
  { 1, 5, 6, 0, 0 }, // 15 IIImul
  { 1, 2, 3, 0, 0 }, // 16 IILoad
  { 1, 0, 0, 0, 0 }, // 17 IIPseudo
  { 1, 1, 2, 0, 0 }, // 18 IIStore
  { 1, 3, 4, 0, 0 }, // 19 IIXfer
  { 1, 0, 0, 0, 0 }, // 20 NoItinerary
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

// Sorted (by key) array of itineraries for CPU subtype.
llvm::SubtargetInfoKV MipsProcItinKV[] = {
  { "4ke", (void *)&MipsGenericItineraries },
  { "allegrex", (void *)&MipsGenericItineraries },
  { "mips1", (void *)&MipsGenericItineraries },
  { "mips2", (void *)&MipsGenericItineraries },
  { "r2000", (void *)&MipsGenericItineraries },
  { "r3000", (void *)&MipsGenericItineraries },
  { "r6000", (void *)&MipsGenericItineraries }
};

static inline void InitMipsMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, MipsFeatureKV, MipsSubTypeKV, MipsProcItinKV, MipsStages, MipsOperandCycles, MipsForwardingPathes, 16, 7);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MipsSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  uint64_t Bits = ReInitMCSubtargetInfo(CPU, FS);
  if ((Bits & Mips::FeatureBitCount) != 0) HasBitCount = true;
  if ((Bits & Mips::FeatureCondMov) != 0) HasCondMov = true;
  if ((Bits & Mips::FeatureEABI) != 0 && MipsABI < EABI) MipsABI = EABI;
  if ((Bits & Mips::FeatureFP64Bit) != 0) IsFP64bit = true;
  if ((Bits & Mips::FeatureGP64Bit) != 0) IsGP64bit = true;
  if ((Bits & Mips::FeatureMinMax) != 0) HasMinMax = true;
  if ((Bits & Mips::FeatureMips1) != 0 && MipsArchVersion < Mips1) MipsArchVersion = Mips1;
  if ((Bits & Mips::FeatureMips2) != 0 && MipsArchVersion < Mips2) MipsArchVersion = Mips2;
  if ((Bits & Mips::FeatureMips32) != 0 && MipsArchVersion < Mips32) MipsArchVersion = Mips32;
  if ((Bits & Mips::FeatureMips32r2) != 0 && MipsArchVersion < Mips32r2) MipsArchVersion = Mips32r2;
  if ((Bits & Mips::FeatureMulDivAdd) != 0) HasMulDivAdd = true;
  if ((Bits & Mips::FeatureO32) != 0 && MipsABI < O32) MipsABI = O32;
  if ((Bits & Mips::FeatureSEInReg) != 0) HasSEInReg = true;
  if ((Bits & Mips::FeatureSingleFloat) != 0) IsSingleFloat = true;
  if ((Bits & Mips::FeatureSwap) != 0) HasSwap = true;
  if ((Bits & Mips::FeatureVFPU) != 0) HasVFPU = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
struct MipsGenSubtargetInfo : public TargetSubtargetInfo {
  explicit MipsGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
namespace llvm {
extern llvm::SubtargetFeatureKV MipsFeatureKV[];
extern llvm::SubtargetFeatureKV MipsSubTypeKV[];
extern llvm::SubtargetInfoKV MipsProcItinKV[];
extern llvm::InstrStage MipsStages[];
extern unsigned MipsOperandCycles[];
extern unsigned MipsForwardingPathes[];
MipsGenSubtargetInfo::MipsGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, MipsFeatureKV, MipsSubTypeKV, MipsProcItinKV, MipsStages, MipsOperandCycles, MipsForwardingPathes, 16, 7);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

