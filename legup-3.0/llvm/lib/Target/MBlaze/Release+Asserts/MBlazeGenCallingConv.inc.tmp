//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Calling Convention Implementation Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

static bool CC_MBlaze(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_MBlaze(unsigned ValNo, MVT ValVT,
                         MVT LocVT, CCValAssign::LocInfo LocInfo,
                         ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_MBlaze(unsigned ValNo, MVT ValVT,
                      MVT LocVT, CCValAssign::LocInfo LocInfo,
                      ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    if (CC_MBlaze_AssignReg(ValNo, ValVT, LocVT, LocInfo, ArgFlags, State))
        return false;
  }

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    unsigned Offset1 = State.AllocateStack(4, 4);
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset1, LocVT, LocInfo));
    return false;
  }

  return true;  // CC didn't match.
}


static bool RetCC_MBlaze(unsigned ValNo, MVT ValVT,
                         MVT LocVT, CCValAssign::LocInfo LocInfo,
                         ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32 ||
      LocVT == MVT::f32) {
    static const unsigned RegList1[] = {
      MBlaze::R3, MBlaze::R4
    };
    if (unsigned Reg = State.AllocateReg(RegList1, 2)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  return true;  // CC didn't match.
}
