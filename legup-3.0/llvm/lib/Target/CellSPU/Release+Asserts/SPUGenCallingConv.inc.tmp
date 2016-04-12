//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Calling Convention Implementation Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

static bool CCC_SPU(unsigned ValNo, MVT ValVT,
                    MVT LocVT, CCValAssign::LocInfo LocInfo,
                    ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_SPU(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CCC_SPU(unsigned ValNo, MVT ValVT,
                    MVT LocVT, CCValAssign::LocInfo LocInfo,
                    ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16 ||
      LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::i128 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v2f64) {
    static const unsigned RegList1[] = {
      SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 72)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64) {
    unsigned Offset2 = State.AllocateStack(8, 8);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  if (LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    unsigned Offset3 = State.AllocateStack(16, 16);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset3, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool RetCC_SPU(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16 ||
      LocVT == MVT::i32 ||
      LocVT == MVT::i64 ||
      LocVT == MVT::i128 ||
      LocVT == MVT::f32 ||
      LocVT == MVT::f64 ||
      LocVT == MVT::v16i8 ||
      LocVT == MVT::v8i16 ||
      LocVT == MVT::v4i32 ||
      LocVT == MVT::v2i64 ||
      LocVT == MVT::v4f32 ||
      LocVT == MVT::v2f64) {
    static const unsigned RegList1[] = {
      SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 72)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}
