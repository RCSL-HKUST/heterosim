//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Intrinsic Function Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// VisualStudio defines setjmp as _setjmp
#if defined(_MSC_VER) && defined(setjmp) && \
                         !defined(setjmp_undefined_for_msvc)
#  pragma push_macro("setjmp")
#  undef setjmp
#  define setjmp_undefined_for_msvc
#endif

// Enum values for Intrinsics.h
#ifdef GET_INTRINSIC_ENUM_VALUES
    mblaze_fsl_aget,                          // llvm.mblaze.fsl.aget
    mblaze_fsl_aput,                          // llvm.mblaze.fsl.aput
    mblaze_fsl_caget,                         // llvm.mblaze.fsl.caget
    mblaze_fsl_caput,                         // llvm.mblaze.fsl.caput
    mblaze_fsl_cget,                          // llvm.mblaze.fsl.cget
    mblaze_fsl_cput,                          // llvm.mblaze.fsl.cput
    mblaze_fsl_eaget,                         // llvm.mblaze.fsl.eaget
    mblaze_fsl_ecaget,                        // llvm.mblaze.fsl.ecaget
    mblaze_fsl_ecget,                         // llvm.mblaze.fsl.ecget
    mblaze_fsl_eget,                          // llvm.mblaze.fsl.eget
    mblaze_fsl_get,                           // llvm.mblaze.fsl.get
    mblaze_fsl_naget,                         // llvm.mblaze.fsl.naget
    mblaze_fsl_naput,                         // llvm.mblaze.fsl.naput
    mblaze_fsl_ncaget,                        // llvm.mblaze.fsl.ncaget
    mblaze_fsl_ncaput,                        // llvm.mblaze.fsl.ncaput
    mblaze_fsl_ncget,                         // llvm.mblaze.fsl.ncget
    mblaze_fsl_ncput,                         // llvm.mblaze.fsl.ncput
    mblaze_fsl_neaget,                        // llvm.mblaze.fsl.neaget
    mblaze_fsl_necaget,                       // llvm.mblaze.fsl.necaget
    mblaze_fsl_necget,                        // llvm.mblaze.fsl.necget
    mblaze_fsl_neget,                         // llvm.mblaze.fsl.neget
    mblaze_fsl_nget,                          // llvm.mblaze.fsl.nget
    mblaze_fsl_nput,                          // llvm.mblaze.fsl.nput
    mblaze_fsl_put,                           // llvm.mblaze.fsl.put
    mblaze_fsl_taget,                         // llvm.mblaze.fsl.taget
    mblaze_fsl_taput,                         // llvm.mblaze.fsl.taput
    mblaze_fsl_tcaget,                        // llvm.mblaze.fsl.tcaget
    mblaze_fsl_tcaput,                        // llvm.mblaze.fsl.tcaput
    mblaze_fsl_tcget,                         // llvm.mblaze.fsl.tcget
    mblaze_fsl_tcput,                         // llvm.mblaze.fsl.tcput
    mblaze_fsl_teaget,                        // llvm.mblaze.fsl.teaget
    mblaze_fsl_tecaget,                       // llvm.mblaze.fsl.tecaget
    mblaze_fsl_tecget,                        // llvm.mblaze.fsl.tecget
    mblaze_fsl_teget,                         // llvm.mblaze.fsl.teget
    mblaze_fsl_tget,                          // llvm.mblaze.fsl.tget
    mblaze_fsl_tnaget,                        // llvm.mblaze.fsl.tnaget
    mblaze_fsl_tnaput,                        // llvm.mblaze.fsl.tnaput
    mblaze_fsl_tncaget,                       // llvm.mblaze.fsl.tncaget
    mblaze_fsl_tncaput,                       // llvm.mblaze.fsl.tncaput
    mblaze_fsl_tncget,                        // llvm.mblaze.fsl.tncget
    mblaze_fsl_tncput,                        // llvm.mblaze.fsl.tncput
    mblaze_fsl_tneaget,                       // llvm.mblaze.fsl.tneaget
    mblaze_fsl_tnecaget,                      // llvm.mblaze.fsl.tnecaget
    mblaze_fsl_tnecget,                       // llvm.mblaze.fsl.tnecget
    mblaze_fsl_tneget,                        // llvm.mblaze.fsl.tneget
    mblaze_fsl_tnget,                         // llvm.mblaze.fsl.tnget
    mblaze_fsl_tnput,                         // llvm.mblaze.fsl.tnput
    mblaze_fsl_tput                           // llvm.mblaze.fsl.tput
#endif

// Intrinsic ID to name table
#ifdef GET_INTRINSIC_NAME_TABLE
  // Note that entry #0 is the invalid intrinsic!
  "llvm.mblaze.fsl.aget",
  "llvm.mblaze.fsl.aput",
  "llvm.mblaze.fsl.caget",
  "llvm.mblaze.fsl.caput",
  "llvm.mblaze.fsl.cget",
  "llvm.mblaze.fsl.cput",
  "llvm.mblaze.fsl.eaget",
  "llvm.mblaze.fsl.ecaget",
  "llvm.mblaze.fsl.ecget",
  "llvm.mblaze.fsl.eget",
  "llvm.mblaze.fsl.get",
  "llvm.mblaze.fsl.naget",
  "llvm.mblaze.fsl.naput",
  "llvm.mblaze.fsl.ncaget",
  "llvm.mblaze.fsl.ncaput",
  "llvm.mblaze.fsl.ncget",
  "llvm.mblaze.fsl.ncput",
  "llvm.mblaze.fsl.neaget",
  "llvm.mblaze.fsl.necaget",
  "llvm.mblaze.fsl.necget",
  "llvm.mblaze.fsl.neget",
  "llvm.mblaze.fsl.nget",
  "llvm.mblaze.fsl.nput",
  "llvm.mblaze.fsl.put",
  "llvm.mblaze.fsl.taget",
  "llvm.mblaze.fsl.taput",
  "llvm.mblaze.fsl.tcaget",
  "llvm.mblaze.fsl.tcaput",
  "llvm.mblaze.fsl.tcget",
  "llvm.mblaze.fsl.tcput",
  "llvm.mblaze.fsl.teaget",
  "llvm.mblaze.fsl.tecaget",
  "llvm.mblaze.fsl.tecget",
  "llvm.mblaze.fsl.teget",
  "llvm.mblaze.fsl.tget",
  "llvm.mblaze.fsl.tnaget",
  "llvm.mblaze.fsl.tnaput",
  "llvm.mblaze.fsl.tncaget",
  "llvm.mblaze.fsl.tncaput",
  "llvm.mblaze.fsl.tncget",
  "llvm.mblaze.fsl.tncput",
  "llvm.mblaze.fsl.tneaget",
  "llvm.mblaze.fsl.tnecaget",
  "llvm.mblaze.fsl.tnecget",
  "llvm.mblaze.fsl.tneget",
  "llvm.mblaze.fsl.tnget",
  "llvm.mblaze.fsl.tnput",
  "llvm.mblaze.fsl.tput",
#endif

// Intrinsic ID to overload table
#ifdef GET_INTRINSIC_OVERLOAD_TABLE
  // Note that entry #0 is the invalid intrinsic!
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
  false,
#endif

// Function name -> enum value recognizer code.
#ifdef GET_FUNCTION_RECOGNIZER
  StringRef NameR(Name+6, Len-6);   // Skip over 'llvm.'
  switch (Name[5]) {                  // Dispatch on first letter.
  default: break;
  case 'm':
    switch (NameR.size()) {
    default: break;
    case 13:	 // 2 strings to match.
      if (NameR.substr(0, 10) != "blaze.fsl.")
        break;
      switch (NameR[10]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (NameR.substr(11, 2) != "et")
          break;
        return mblazeIntrinsic::mblaze_fsl_get;	 // "blaze.fsl.get"
      case 'p':	 // 1 string to match.
        if (NameR.substr(11, 2) != "ut")
          break;
        return mblazeIntrinsic::mblaze_fsl_put;	 // "blaze.fsl.put"
      }
      break;
    case 14:	 // 9 strings to match.
      if (NameR.substr(0, 10) != "blaze.fsl.")
        break;
      switch (NameR[10]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (NameR.substr(12, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_aget;	 // "blaze.fsl.aget"
        case 'p':	 // 1 string to match.
          if (NameR.substr(12, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_aput;	 // "blaze.fsl.aput"
        }
        break;
      case 'c':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (NameR.substr(12, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_cget;	 // "blaze.fsl.cget"
        case 'p':	 // 1 string to match.
          if (NameR.substr(12, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_cput;	 // "blaze.fsl.cput"
        }
        break;
      case 'e':	 // 1 string to match.
        if (NameR.substr(11, 3) != "get")
          break;
        return mblazeIntrinsic::mblaze_fsl_eget;	 // "blaze.fsl.eget"
      case 'n':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (NameR.substr(12, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_nget;	 // "blaze.fsl.nget"
        case 'p':	 // 1 string to match.
          if (NameR.substr(12, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_nput;	 // "blaze.fsl.nput"
        }
        break;
      case 't':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (NameR.substr(12, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_tget;	 // "blaze.fsl.tget"
        case 'p':	 // 1 string to match.
          if (NameR.substr(12, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_tput;	 // "blaze.fsl.tput"
        }
        break;
      }
      break;
    case 15:	 // 16 strings to match.
      if (NameR.substr(0, 10) != "blaze.fsl.")
        break;
      switch (NameR[10]) {
      default: break;
      case 'c':	 // 2 strings to match.
        if (NameR[11] != 'a')
          break;
        switch (NameR[12]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (NameR.substr(13, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_caget;	 // "blaze.fsl.caget"
        case 'p':	 // 1 string to match.
          if (NameR.substr(13, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_caput;	 // "blaze.fsl.caput"
        }
        break;
      case 'e':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (NameR.substr(12, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_eaget;	 // "blaze.fsl.eaget"
        case 'c':	 // 1 string to match.
          if (NameR.substr(12, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_ecget;	 // "blaze.fsl.ecget"
        }
        break;
      case 'n':	 // 5 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (NameR.substr(13, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_naget;	 // "blaze.fsl.naget"
          case 'p':	 // 1 string to match.
            if (NameR.substr(13, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_naput;	 // "blaze.fsl.naput"
          }
          break;
        case 'c':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (NameR.substr(13, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_ncget;	 // "blaze.fsl.ncget"
          case 'p':	 // 1 string to match.
            if (NameR.substr(13, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_ncput;	 // "blaze.fsl.ncput"
          }
          break;
        case 'e':	 // 1 string to match.
          if (NameR.substr(12, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_neget;	 // "blaze.fsl.neget"
        }
        break;
      case 't':	 // 7 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (NameR.substr(13, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_taget;	 // "blaze.fsl.taget"
          case 'p':	 // 1 string to match.
            if (NameR.substr(13, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_taput;	 // "blaze.fsl.taput"
          }
          break;
        case 'c':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (NameR.substr(13, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_tcget;	 // "blaze.fsl.tcget"
          case 'p':	 // 1 string to match.
            if (NameR.substr(13, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_tcput;	 // "blaze.fsl.tcput"
          }
          break;
        case 'e':	 // 1 string to match.
          if (NameR.substr(12, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_teget;	 // "blaze.fsl.teget"
        case 'n':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (NameR.substr(13, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_tnget;	 // "blaze.fsl.tnget"
          case 'p':	 // 1 string to match.
            if (NameR.substr(13, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_tnput;	 // "blaze.fsl.tnput"
          }
          break;
        }
        break;
      }
      break;
    case 16:	 // 14 strings to match.
      if (NameR.substr(0, 10) != "blaze.fsl.")
        break;
      switch (NameR[10]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (NameR.substr(11, 5) != "caget")
          break;
        return mblazeIntrinsic::mblaze_fsl_ecaget;	 // "blaze.fsl.ecaget"
      case 'n':	 // 4 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'c':	 // 2 strings to match.
          if (NameR[12] != 'a')
            break;
          switch (NameR[13]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (NameR.substr(14, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_ncaget;	 // "blaze.fsl.ncaget"
          case 'p':	 // 1 string to match.
            if (NameR.substr(14, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_ncaput;	 // "blaze.fsl.ncaput"
          }
          break;
        case 'e':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (NameR.substr(13, 3) != "get")
              break;
            return mblazeIntrinsic::mblaze_fsl_neaget;	 // "blaze.fsl.neaget"
          case 'c':	 // 1 string to match.
            if (NameR.substr(13, 3) != "get")
              break;
            return mblazeIntrinsic::mblaze_fsl_necget;	 // "blaze.fsl.necget"
          }
          break;
        }
        break;
      case 't':	 // 9 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'c':	 // 2 strings to match.
          if (NameR[12] != 'a')
            break;
          switch (NameR[13]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (NameR.substr(14, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_tcaget;	 // "blaze.fsl.tcaget"
          case 'p':	 // 1 string to match.
            if (NameR.substr(14, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_tcaput;	 // "blaze.fsl.tcaput"
          }
          break;
        case 'e':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (NameR.substr(13, 3) != "get")
              break;
            return mblazeIntrinsic::mblaze_fsl_teaget;	 // "blaze.fsl.teaget"
          case 'c':	 // 1 string to match.
            if (NameR.substr(13, 3) != "get")
              break;
            return mblazeIntrinsic::mblaze_fsl_tecget;	 // "blaze.fsl.tecget"
          }
          break;
        case 'n':	 // 5 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'a':	 // 2 strings to match.
            switch (NameR[13]) {
            default: break;
            case 'g':	 // 1 string to match.
              if (NameR.substr(14, 2) != "et")
                break;
              return mblazeIntrinsic::mblaze_fsl_tnaget;	 // "blaze.fsl.tnaget"
            case 'p':	 // 1 string to match.
              if (NameR.substr(14, 2) != "ut")
                break;
              return mblazeIntrinsic::mblaze_fsl_tnaput;	 // "blaze.fsl.tnaput"
            }
            break;
          case 'c':	 // 2 strings to match.
            switch (NameR[13]) {
            default: break;
            case 'g':	 // 1 string to match.
              if (NameR.substr(14, 2) != "et")
                break;
              return mblazeIntrinsic::mblaze_fsl_tncget;	 // "blaze.fsl.tncget"
            case 'p':	 // 1 string to match.
              if (NameR.substr(14, 2) != "ut")
                break;
              return mblazeIntrinsic::mblaze_fsl_tncput;	 // "blaze.fsl.tncput"
            }
            break;
          case 'e':	 // 1 string to match.
            if (NameR.substr(13, 3) != "get")
              break;
            return mblazeIntrinsic::mblaze_fsl_tneget;	 // "blaze.fsl.tneget"
          }
          break;
        }
        break;
      }
      break;
    case 17:	 // 6 strings to match.
      if (NameR.substr(0, 10) != "blaze.fsl.")
        break;
      switch (NameR[10]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (NameR.substr(11, 6) != "ecaget")
          break;
        return mblazeIntrinsic::mblaze_fsl_necaget;	 // "blaze.fsl.necaget"
      case 't':	 // 5 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (NameR.substr(12, 5) != "caget")
            break;
          return mblazeIntrinsic::mblaze_fsl_tecaget;	 // "blaze.fsl.tecaget"
        case 'n':	 // 4 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'c':	 // 2 strings to match.
            if (NameR[13] != 'a')
              break;
            switch (NameR[14]) {
            default: break;
            case 'g':	 // 1 string to match.
              if (NameR.substr(15, 2) != "et")
                break;
              return mblazeIntrinsic::mblaze_fsl_tncaget;	 // "blaze.fsl.tncaget"
            case 'p':	 // 1 string to match.
              if (NameR.substr(15, 2) != "ut")
                break;
              return mblazeIntrinsic::mblaze_fsl_tncaput;	 // "blaze.fsl.tncaput"
            }
            break;
          case 'e':	 // 2 strings to match.
            switch (NameR[13]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (NameR.substr(14, 3) != "get")
                break;
              return mblazeIntrinsic::mblaze_fsl_tneaget;	 // "blaze.fsl.tneaget"
            case 'c':	 // 1 string to match.
              if (NameR.substr(14, 3) != "get")
                break;
              return mblazeIntrinsic::mblaze_fsl_tnecget;	 // "blaze.fsl.tnecget"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 18:	 // 1 string to match.
      if (NameR.substr(0, 18) != "blaze.fsl.tnecaget")
        break;
      return mblazeIntrinsic::mblaze_fsl_tnecaget;	 // "blaze.fsl.tnecaget"
    }
    break;  // end of 'm' case.
  }
#endif

// Verifier::visitIntrinsicFunctionCall code.
#ifdef GET_INTRINSIC_VERIFIER
  switch (ID) {
  default: assert(0 && "Invalid intrinsic!");
  case Intrinsic::mblaze_fsl_taput:		// llvm.mblaze.fsl.taput
  case Intrinsic::mblaze_fsl_tcaput:		// llvm.mblaze.fsl.tcaput
  case Intrinsic::mblaze_fsl_tcput:		// llvm.mblaze.fsl.tcput
  case Intrinsic::mblaze_fsl_tnaput:		// llvm.mblaze.fsl.tnaput
  case Intrinsic::mblaze_fsl_tncaput:		// llvm.mblaze.fsl.tncaput
  case Intrinsic::mblaze_fsl_tncput:		// llvm.mblaze.fsl.tncput
  case Intrinsic::mblaze_fsl_tnput:		// llvm.mblaze.fsl.tnput
  case Intrinsic::mblaze_fsl_tput:		// llvm.mblaze.fsl.tput
    VerifyIntrinsicPrototype(ID, IF, 0, 1, MVT::i32);
    break;
  case Intrinsic::mblaze_fsl_aput:		// llvm.mblaze.fsl.aput
  case Intrinsic::mblaze_fsl_caput:		// llvm.mblaze.fsl.caput
  case Intrinsic::mblaze_fsl_cput:		// llvm.mblaze.fsl.cput
  case Intrinsic::mblaze_fsl_naput:		// llvm.mblaze.fsl.naput
  case Intrinsic::mblaze_fsl_ncaput:		// llvm.mblaze.fsl.ncaput
  case Intrinsic::mblaze_fsl_ncput:		// llvm.mblaze.fsl.ncput
  case Intrinsic::mblaze_fsl_nput:		// llvm.mblaze.fsl.nput
  case Intrinsic::mblaze_fsl_put:		// llvm.mblaze.fsl.put
    VerifyIntrinsicPrototype(ID, IF, 0, 2, MVT::i32, MVT::i32);
    break;
  case Intrinsic::mblaze_fsl_aget:		// llvm.mblaze.fsl.aget
  case Intrinsic::mblaze_fsl_caget:		// llvm.mblaze.fsl.caget
  case Intrinsic::mblaze_fsl_cget:		// llvm.mblaze.fsl.cget
  case Intrinsic::mblaze_fsl_eaget:		// llvm.mblaze.fsl.eaget
  case Intrinsic::mblaze_fsl_ecaget:		// llvm.mblaze.fsl.ecaget
  case Intrinsic::mblaze_fsl_ecget:		// llvm.mblaze.fsl.ecget
  case Intrinsic::mblaze_fsl_eget:		// llvm.mblaze.fsl.eget
  case Intrinsic::mblaze_fsl_get:		// llvm.mblaze.fsl.get
  case Intrinsic::mblaze_fsl_naget:		// llvm.mblaze.fsl.naget
  case Intrinsic::mblaze_fsl_ncaget:		// llvm.mblaze.fsl.ncaget
  case Intrinsic::mblaze_fsl_ncget:		// llvm.mblaze.fsl.ncget
  case Intrinsic::mblaze_fsl_neaget:		// llvm.mblaze.fsl.neaget
  case Intrinsic::mblaze_fsl_necaget:		// llvm.mblaze.fsl.necaget
  case Intrinsic::mblaze_fsl_necget:		// llvm.mblaze.fsl.necget
  case Intrinsic::mblaze_fsl_neget:		// llvm.mblaze.fsl.neget
  case Intrinsic::mblaze_fsl_nget:		// llvm.mblaze.fsl.nget
  case Intrinsic::mblaze_fsl_taget:		// llvm.mblaze.fsl.taget
  case Intrinsic::mblaze_fsl_tcaget:		// llvm.mblaze.fsl.tcaget
  case Intrinsic::mblaze_fsl_tcget:		// llvm.mblaze.fsl.tcget
  case Intrinsic::mblaze_fsl_teaget:		// llvm.mblaze.fsl.teaget
  case Intrinsic::mblaze_fsl_tecaget:		// llvm.mblaze.fsl.tecaget
  case Intrinsic::mblaze_fsl_tecget:		// llvm.mblaze.fsl.tecget
  case Intrinsic::mblaze_fsl_teget:		// llvm.mblaze.fsl.teget
  case Intrinsic::mblaze_fsl_tget:		// llvm.mblaze.fsl.tget
  case Intrinsic::mblaze_fsl_tnaget:		// llvm.mblaze.fsl.tnaget
  case Intrinsic::mblaze_fsl_tncaget:		// llvm.mblaze.fsl.tncaget
  case Intrinsic::mblaze_fsl_tncget:		// llvm.mblaze.fsl.tncget
  case Intrinsic::mblaze_fsl_tneaget:		// llvm.mblaze.fsl.tneaget
  case Intrinsic::mblaze_fsl_tnecaget:		// llvm.mblaze.fsl.tnecaget
  case Intrinsic::mblaze_fsl_tnecget:		// llvm.mblaze.fsl.tnecget
  case Intrinsic::mblaze_fsl_tneget:		// llvm.mblaze.fsl.tneget
  case Intrinsic::mblaze_fsl_tnget:		// llvm.mblaze.fsl.tnget
    VerifyIntrinsicPrototype(ID, IF, 1, 1, MVT::i32, MVT::i32);
    break;
  }
#endif

// Code for generating Intrinsic function declarations.
#ifdef GET_INTRINSIC_GENERATOR
  switch (id) {
  default: assert(0 && "Invalid intrinsic!");
  case mblazeIntrinsic::mblaze_fsl_taput:		// llvm.mblaze.fsl.taput
  case mblazeIntrinsic::mblaze_fsl_tcaput:		// llvm.mblaze.fsl.tcaput
  case mblazeIntrinsic::mblaze_fsl_tcput:		// llvm.mblaze.fsl.tcput
  case mblazeIntrinsic::mblaze_fsl_tnaput:		// llvm.mblaze.fsl.tnaput
  case mblazeIntrinsic::mblaze_fsl_tncaput:		// llvm.mblaze.fsl.tncaput
  case mblazeIntrinsic::mblaze_fsl_tncput:		// llvm.mblaze.fsl.tncput
  case mblazeIntrinsic::mblaze_fsl_tnput:		// llvm.mblaze.fsl.tnput
  case mblazeIntrinsic::mblaze_fsl_tput:		// llvm.mblaze.fsl.tput
    ResultTy = Type::getVoidTy(Context);
    ArgTys.push_back(IntegerType::get(Context, 32));
    break;
  case mblazeIntrinsic::mblaze_fsl_aput:		// llvm.mblaze.fsl.aput
  case mblazeIntrinsic::mblaze_fsl_caput:		// llvm.mblaze.fsl.caput
  case mblazeIntrinsic::mblaze_fsl_cput:		// llvm.mblaze.fsl.cput
  case mblazeIntrinsic::mblaze_fsl_naput:		// llvm.mblaze.fsl.naput
  case mblazeIntrinsic::mblaze_fsl_ncaput:		// llvm.mblaze.fsl.ncaput
  case mblazeIntrinsic::mblaze_fsl_ncput:		// llvm.mblaze.fsl.ncput
  case mblazeIntrinsic::mblaze_fsl_nput:		// llvm.mblaze.fsl.nput
  case mblazeIntrinsic::mblaze_fsl_put:		// llvm.mblaze.fsl.put
    ResultTy = Type::getVoidTy(Context);
    ArgTys.push_back(IntegerType::get(Context, 32));
    ArgTys.push_back(IntegerType::get(Context, 32));
    break;
  case mblazeIntrinsic::mblaze_fsl_aget:		// llvm.mblaze.fsl.aget
  case mblazeIntrinsic::mblaze_fsl_caget:		// llvm.mblaze.fsl.caget
  case mblazeIntrinsic::mblaze_fsl_cget:		// llvm.mblaze.fsl.cget
  case mblazeIntrinsic::mblaze_fsl_eaget:		// llvm.mblaze.fsl.eaget
  case mblazeIntrinsic::mblaze_fsl_ecaget:		// llvm.mblaze.fsl.ecaget
  case mblazeIntrinsic::mblaze_fsl_ecget:		// llvm.mblaze.fsl.ecget
  case mblazeIntrinsic::mblaze_fsl_eget:		// llvm.mblaze.fsl.eget
  case mblazeIntrinsic::mblaze_fsl_get:		// llvm.mblaze.fsl.get
  case mblazeIntrinsic::mblaze_fsl_naget:		// llvm.mblaze.fsl.naget
  case mblazeIntrinsic::mblaze_fsl_ncaget:		// llvm.mblaze.fsl.ncaget
  case mblazeIntrinsic::mblaze_fsl_ncget:		// llvm.mblaze.fsl.ncget
  case mblazeIntrinsic::mblaze_fsl_neaget:		// llvm.mblaze.fsl.neaget
  case mblazeIntrinsic::mblaze_fsl_necaget:		// llvm.mblaze.fsl.necaget
  case mblazeIntrinsic::mblaze_fsl_necget:		// llvm.mblaze.fsl.necget
  case mblazeIntrinsic::mblaze_fsl_neget:		// llvm.mblaze.fsl.neget
  case mblazeIntrinsic::mblaze_fsl_nget:		// llvm.mblaze.fsl.nget
  case mblazeIntrinsic::mblaze_fsl_taget:		// llvm.mblaze.fsl.taget
  case mblazeIntrinsic::mblaze_fsl_tcaget:		// llvm.mblaze.fsl.tcaget
  case mblazeIntrinsic::mblaze_fsl_tcget:		// llvm.mblaze.fsl.tcget
  case mblazeIntrinsic::mblaze_fsl_teaget:		// llvm.mblaze.fsl.teaget
  case mblazeIntrinsic::mblaze_fsl_tecaget:		// llvm.mblaze.fsl.tecaget
  case mblazeIntrinsic::mblaze_fsl_tecget:		// llvm.mblaze.fsl.tecget
  case mblazeIntrinsic::mblaze_fsl_teget:		// llvm.mblaze.fsl.teget
  case mblazeIntrinsic::mblaze_fsl_tget:		// llvm.mblaze.fsl.tget
  case mblazeIntrinsic::mblaze_fsl_tnaget:		// llvm.mblaze.fsl.tnaget
  case mblazeIntrinsic::mblaze_fsl_tncaget:		// llvm.mblaze.fsl.tncaget
  case mblazeIntrinsic::mblaze_fsl_tncget:		// llvm.mblaze.fsl.tncget
  case mblazeIntrinsic::mblaze_fsl_tneaget:		// llvm.mblaze.fsl.tneaget
  case mblazeIntrinsic::mblaze_fsl_tnecaget:		// llvm.mblaze.fsl.tnecaget
  case mblazeIntrinsic::mblaze_fsl_tnecget:		// llvm.mblaze.fsl.tnecget
  case mblazeIntrinsic::mblaze_fsl_tneget:		// llvm.mblaze.fsl.tneget
  case mblazeIntrinsic::mblaze_fsl_tnget:		// llvm.mblaze.fsl.tnget
    ResultTy = IntegerType::get(Context, 32);
    ArgTys.push_back(IntegerType::get(Context, 32));
    break;
  }
#endif

// Add parameter attributes that are not common to all intrinsics.
#ifdef GET_INTRINSIC_ATTRIBUTES
static AttrListPtr getAttributes(mblazeIntrinsic::ID id) {
  AttributeWithIndex AWI[1];
  unsigned NumAttrs = 0;
  switch (id) {
    default: break;
  case mblazeIntrinsic::mblaze_fsl_aget:
  case mblazeIntrinsic::mblaze_fsl_aput:
  case mblazeIntrinsic::mblaze_fsl_caget:
  case mblazeIntrinsic::mblaze_fsl_caput:
  case mblazeIntrinsic::mblaze_fsl_cget:
  case mblazeIntrinsic::mblaze_fsl_cput:
  case mblazeIntrinsic::mblaze_fsl_eaget:
  case mblazeIntrinsic::mblaze_fsl_ecaget:
  case mblazeIntrinsic::mblaze_fsl_ecget:
  case mblazeIntrinsic::mblaze_fsl_eget:
  case mblazeIntrinsic::mblaze_fsl_get:
  case mblazeIntrinsic::mblaze_fsl_naget:
  case mblazeIntrinsic::mblaze_fsl_naput:
  case mblazeIntrinsic::mblaze_fsl_ncaget:
  case mblazeIntrinsic::mblaze_fsl_ncaput:
  case mblazeIntrinsic::mblaze_fsl_ncget:
  case mblazeIntrinsic::mblaze_fsl_ncput:
  case mblazeIntrinsic::mblaze_fsl_neaget:
  case mblazeIntrinsic::mblaze_fsl_necaget:
  case mblazeIntrinsic::mblaze_fsl_necget:
  case mblazeIntrinsic::mblaze_fsl_neget:
  case mblazeIntrinsic::mblaze_fsl_nget:
  case mblazeIntrinsic::mblaze_fsl_nput:
  case mblazeIntrinsic::mblaze_fsl_put:
  case mblazeIntrinsic::mblaze_fsl_taget:
  case mblazeIntrinsic::mblaze_fsl_taput:
  case mblazeIntrinsic::mblaze_fsl_tcaget:
  case mblazeIntrinsic::mblaze_fsl_tcaput:
  case mblazeIntrinsic::mblaze_fsl_tcget:
  case mblazeIntrinsic::mblaze_fsl_tcput:
  case mblazeIntrinsic::mblaze_fsl_teaget:
  case mblazeIntrinsic::mblaze_fsl_tecaget:
  case mblazeIntrinsic::mblaze_fsl_tecget:
  case mblazeIntrinsic::mblaze_fsl_teget:
  case mblazeIntrinsic::mblaze_fsl_tget:
  case mblazeIntrinsic::mblaze_fsl_tnaget:
  case mblazeIntrinsic::mblaze_fsl_tnaput:
  case mblazeIntrinsic::mblaze_fsl_tncaget:
  case mblazeIntrinsic::mblaze_fsl_tncaput:
  case mblazeIntrinsic::mblaze_fsl_tncget:
  case mblazeIntrinsic::mblaze_fsl_tncput:
  case mblazeIntrinsic::mblaze_fsl_tneaget:
  case mblazeIntrinsic::mblaze_fsl_tnecaget:
  case mblazeIntrinsic::mblaze_fsl_tnecget:
  case mblazeIntrinsic::mblaze_fsl_tneget:
  case mblazeIntrinsic::mblaze_fsl_tnget:
  case mblazeIntrinsic::mblaze_fsl_tnput:
  case mblazeIntrinsic::mblaze_fsl_tput:
    AWI[0] = AttributeWithIndex::get(~0, Attribute::NoUnwind);
    NumAttrs = 1;
    break;
  }
  return AttrListPtr::get(AWI, NumAttrs);
}
#endif // GET_INTRINSIC_ATTRIBUTES

// Determine intrinsic alias analysis mod/ref behavior.
#ifdef GET_INTRINSIC_MODREF_BEHAVIOR
switch (iid) {
default:
    return UnknownModRefBehavior;
}
#endif // GET_INTRINSIC_MODREF_BEHAVIOR

// Get the GCC builtin that corresponds to an LLVM intrinsic.
#ifdef GET_GCC_BUILTIN_NAME
  switch (F->getIntrinsicID()) {
  default: BuiltinName = ""; break;
  case Intrinsic::mblaze_fsl_aget: BuiltinName = "__builtin_mblaze_fsl_aget"; break;
  case Intrinsic::mblaze_fsl_aput: BuiltinName = "__builtin_mblaze_fsl_aput"; break;
  case Intrinsic::mblaze_fsl_caget: BuiltinName = "__builtin_mblaze_fsl_caget"; break;
  case Intrinsic::mblaze_fsl_caput: BuiltinName = "__builtin_mblaze_fsl_caput"; break;
  case Intrinsic::mblaze_fsl_cget: BuiltinName = "__builtin_mblaze_fsl_cget"; break;
  case Intrinsic::mblaze_fsl_cput: BuiltinName = "__builtin_mblaze_fsl_cput"; break;
  case Intrinsic::mblaze_fsl_eaget: BuiltinName = "__builtin_mblaze_fsl_eaget"; break;
  case Intrinsic::mblaze_fsl_ecaget: BuiltinName = "__builtin_mblaze_fsl_ecaget"; break;
  case Intrinsic::mblaze_fsl_ecget: BuiltinName = "__builtin_mblaze_fsl_ecget"; break;
  case Intrinsic::mblaze_fsl_eget: BuiltinName = "__builtin_mblaze_fsl_eget"; break;
  case Intrinsic::mblaze_fsl_get: BuiltinName = "__builtin_mblaze_fsl_get"; break;
  case Intrinsic::mblaze_fsl_naget: BuiltinName = "__builtin_mblaze_fsl_naget"; break;
  case Intrinsic::mblaze_fsl_naput: BuiltinName = "__builtin_mblaze_fsl_naput"; break;
  case Intrinsic::mblaze_fsl_ncaget: BuiltinName = "__builtin_mblaze_fsl_ncaget"; break;
  case Intrinsic::mblaze_fsl_ncaput: BuiltinName = "__builtin_mblaze_fsl_ncaput"; break;
  case Intrinsic::mblaze_fsl_ncget: BuiltinName = "__builtin_mblaze_fsl_ncget"; break;
  case Intrinsic::mblaze_fsl_ncput: BuiltinName = "__builtin_mblaze_fsl_ncput"; break;
  case Intrinsic::mblaze_fsl_neaget: BuiltinName = "__builtin_mblaze_fsl_neaget"; break;
  case Intrinsic::mblaze_fsl_necaget: BuiltinName = "__builtin_mblaze_fsl_necaget"; break;
  case Intrinsic::mblaze_fsl_necget: BuiltinName = "__builtin_mblaze_fsl_necget"; break;
  case Intrinsic::mblaze_fsl_neget: BuiltinName = "__builtin_mblaze_fsl_neget"; break;
  case Intrinsic::mblaze_fsl_nget: BuiltinName = "__builtin_mblaze_fsl_nget"; break;
  case Intrinsic::mblaze_fsl_nput: BuiltinName = "__builtin_mblaze_fsl_nput"; break;
  case Intrinsic::mblaze_fsl_put: BuiltinName = "__builtin_mblaze_fsl_put"; break;
  case Intrinsic::mblaze_fsl_taget: BuiltinName = "__builtin_mblaze_fsl_taget"; break;
  case Intrinsic::mblaze_fsl_taput: BuiltinName = "__builtin_mblaze_fsl_taput"; break;
  case Intrinsic::mblaze_fsl_tcaget: BuiltinName = "__builtin_mblaze_fsl_tcaget"; break;
  case Intrinsic::mblaze_fsl_tcaput: BuiltinName = "__builtin_mblaze_fsl_tcaput"; break;
  case Intrinsic::mblaze_fsl_tcget: BuiltinName = "__builtin_mblaze_fsl_tcget"; break;
  case Intrinsic::mblaze_fsl_tcput: BuiltinName = "__builtin_mblaze_fsl_tcput"; break;
  case Intrinsic::mblaze_fsl_teaget: BuiltinName = "__builtin_mblaze_fsl_teaget"; break;
  case Intrinsic::mblaze_fsl_tecaget: BuiltinName = "__builtin_mblaze_fsl_tecaget"; break;
  case Intrinsic::mblaze_fsl_tecget: BuiltinName = "__builtin_mblaze_fsl_tecget"; break;
  case Intrinsic::mblaze_fsl_teget: BuiltinName = "__builtin_mblaze_fsl_teget"; break;
  case Intrinsic::mblaze_fsl_tget: BuiltinName = "__builtin_mblaze_fsl_tget"; break;
  case Intrinsic::mblaze_fsl_tnaget: BuiltinName = "__builtin_mblaze_fsl_tnaget"; break;
  case Intrinsic::mblaze_fsl_tnaput: BuiltinName = "__builtin_mblaze_fsl_tnaput"; break;
  case Intrinsic::mblaze_fsl_tncaget: BuiltinName = "__builtin_mblaze_fsl_tncaget"; break;
  case Intrinsic::mblaze_fsl_tncaput: BuiltinName = "__builtin_mblaze_fsl_tncaput"; break;
  case Intrinsic::mblaze_fsl_tncget: BuiltinName = "__builtin_mblaze_fsl_tncget"; break;
  case Intrinsic::mblaze_fsl_tncput: BuiltinName = "__builtin_mblaze_fsl_tncput"; break;
  case Intrinsic::mblaze_fsl_tneaget: BuiltinName = "__builtin_mblaze_fsl_tneaget"; break;
  case Intrinsic::mblaze_fsl_tnecaget: BuiltinName = "__builtin_mblaze_fsl_tnecaget"; break;
  case Intrinsic::mblaze_fsl_tnecget: BuiltinName = "__builtin_mblaze_fsl_tnecget"; break;
  case Intrinsic::mblaze_fsl_tneget: BuiltinName = "__builtin_mblaze_fsl_tneget"; break;
  case Intrinsic::mblaze_fsl_tnget: BuiltinName = "__builtin_mblaze_fsl_tnget"; break;
  case Intrinsic::mblaze_fsl_tnput: BuiltinName = "__builtin_mblaze_fsl_tnput"; break;
  case Intrinsic::mblaze_fsl_tput: BuiltinName = "__builtin_mblaze_fsl_tput"; break;
  }
#endif

// Get the LLVM intrinsic that corresponds to a GCC builtin.
// This is used by the C front-end.  The GCC builtin name is passed
// in as BuiltinName, and a target prefix (e.g. 'ppc') is passed
// in as TargetPrefix.  The result is assigned to 'IntrinsicID'.
#ifdef GET_LLVM_INTRINSIC_FOR_GCC_BUILTIN
static mblazeIntrinsic::ID getIntrinsicForGCCBuiltin(const char *TargetPrefixStr, const char *BuiltinNameStr) {
  StringRef BuiltinName(BuiltinNameStr);
  StringRef TargetPrefix(TargetPrefixStr);

  if (TargetPrefix == "mblaze") {
  switch (BuiltinName.size()) {
  default: break;
  case 24:	 // 2 strings to match.
    if (BuiltinName.substr(0, 21) != "__builtin_mblaze_fsl_")
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'g':	 // 1 string to match.
      if (BuiltinName.substr(22, 2) != "et")
        break;
      return mblazeIntrinsic::mblaze_fsl_get;	 // "__builtin_mblaze_fsl_get"
    case 'p':	 // 1 string to match.
      if (BuiltinName.substr(22, 2) != "ut")
        break;
      return mblazeIntrinsic::mblaze_fsl_put;	 // "__builtin_mblaze_fsl_put"
    }
    break;
  case 25:	 // 9 strings to match.
    if (BuiltinName.substr(0, 21) != "__builtin_mblaze_fsl_")
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'a':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "et")
          break;
        return mblazeIntrinsic::mblaze_fsl_aget;	 // "__builtin_mblaze_fsl_aget"
      case 'p':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "ut")
          break;
        return mblazeIntrinsic::mblaze_fsl_aput;	 // "__builtin_mblaze_fsl_aput"
      }
      break;
    case 'c':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "et")
          break;
        return mblazeIntrinsic::mblaze_fsl_cget;	 // "__builtin_mblaze_fsl_cget"
      case 'p':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "ut")
          break;
        return mblazeIntrinsic::mblaze_fsl_cput;	 // "__builtin_mblaze_fsl_cput"
      }
      break;
    case 'e':	 // 1 string to match.
      if (BuiltinName.substr(22, 3) != "get")
        break;
      return mblazeIntrinsic::mblaze_fsl_eget;	 // "__builtin_mblaze_fsl_eget"
    case 'n':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "et")
          break;
        return mblazeIntrinsic::mblaze_fsl_nget;	 // "__builtin_mblaze_fsl_nget"
      case 'p':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "ut")
          break;
        return mblazeIntrinsic::mblaze_fsl_nput;	 // "__builtin_mblaze_fsl_nput"
      }
      break;
    case 't':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "et")
          break;
        return mblazeIntrinsic::mblaze_fsl_tget;	 // "__builtin_mblaze_fsl_tget"
      case 'p':	 // 1 string to match.
        if (BuiltinName.substr(23, 2) != "ut")
          break;
        return mblazeIntrinsic::mblaze_fsl_tput;	 // "__builtin_mblaze_fsl_tput"
      }
      break;
    }
    break;
  case 26:	 // 16 strings to match.
    if (BuiltinName.substr(0, 21) != "__builtin_mblaze_fsl_")
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (BuiltinName[22] != 'a')
        break;
      switch (BuiltinName[23]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (BuiltinName.substr(24, 2) != "et")
          break;
        return mblazeIntrinsic::mblaze_fsl_caget;	 // "__builtin_mblaze_fsl_caget"
      case 'p':	 // 1 string to match.
        if (BuiltinName.substr(24, 2) != "ut")
          break;
        return mblazeIntrinsic::mblaze_fsl_caput;	 // "__builtin_mblaze_fsl_caput"
      }
      break;
    case 'e':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (BuiltinName.substr(23, 3) != "get")
          break;
        return mblazeIntrinsic::mblaze_fsl_eaget;	 // "__builtin_mblaze_fsl_eaget"
      case 'c':	 // 1 string to match.
        if (BuiltinName.substr(23, 3) != "get")
          break;
        return mblazeIntrinsic::mblaze_fsl_ecget;	 // "__builtin_mblaze_fsl_ecget"
      }
      break;
    case 'n':	 // 5 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_naget;	 // "__builtin_mblaze_fsl_naget"
        case 'p':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_naput;	 // "__builtin_mblaze_fsl_naput"
        }
        break;
      case 'c':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_ncget;	 // "__builtin_mblaze_fsl_ncget"
        case 'p':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_ncput;	 // "__builtin_mblaze_fsl_ncput"
        }
        break;
      case 'e':	 // 1 string to match.
        if (BuiltinName.substr(23, 3) != "get")
          break;
        return mblazeIntrinsic::mblaze_fsl_neget;	 // "__builtin_mblaze_fsl_neget"
      }
      break;
    case 't':	 // 7 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_taget;	 // "__builtin_mblaze_fsl_taget"
        case 'p':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_taput;	 // "__builtin_mblaze_fsl_taput"
        }
        break;
      case 'c':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_tcget;	 // "__builtin_mblaze_fsl_tcget"
        case 'p':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_tcput;	 // "__builtin_mblaze_fsl_tcput"
        }
        break;
      case 'e':	 // 1 string to match.
        if (BuiltinName.substr(23, 3) != "get")
          break;
        return mblazeIntrinsic::mblaze_fsl_teget;	 // "__builtin_mblaze_fsl_teget"
      case 'n':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_tnget;	 // "__builtin_mblaze_fsl_tnget"
        case 'p':	 // 1 string to match.
          if (BuiltinName.substr(24, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_tnput;	 // "__builtin_mblaze_fsl_tnput"
        }
        break;
      }
      break;
    }
    break;
  case 27:	 // 14 strings to match.
    if (BuiltinName.substr(0, 21) != "__builtin_mblaze_fsl_")
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (BuiltinName.substr(22, 5) != "caget")
        break;
      return mblazeIntrinsic::mblaze_fsl_ecaget;	 // "__builtin_mblaze_fsl_ecaget"
    case 'n':	 // 4 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'c':	 // 2 strings to match.
        if (BuiltinName[23] != 'a')
          break;
        switch (BuiltinName[24]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (BuiltinName.substr(25, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_ncaget;	 // "__builtin_mblaze_fsl_ncaget"
        case 'p':	 // 1 string to match.
          if (BuiltinName.substr(25, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_ncaput;	 // "__builtin_mblaze_fsl_ncaput"
        }
        break;
      case 'e':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (BuiltinName.substr(24, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_neaget;	 // "__builtin_mblaze_fsl_neaget"
        case 'c':	 // 1 string to match.
          if (BuiltinName.substr(24, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_necget;	 // "__builtin_mblaze_fsl_necget"
        }
        break;
      }
      break;
    case 't':	 // 9 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'c':	 // 2 strings to match.
        if (BuiltinName[23] != 'a')
          break;
        switch (BuiltinName[24]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (BuiltinName.substr(25, 2) != "et")
            break;
          return mblazeIntrinsic::mblaze_fsl_tcaget;	 // "__builtin_mblaze_fsl_tcaget"
        case 'p':	 // 1 string to match.
          if (BuiltinName.substr(25, 2) != "ut")
            break;
          return mblazeIntrinsic::mblaze_fsl_tcaput;	 // "__builtin_mblaze_fsl_tcaput"
        }
        break;
      case 'e':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (BuiltinName.substr(24, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_teaget;	 // "__builtin_mblaze_fsl_teaget"
        case 'c':	 // 1 string to match.
          if (BuiltinName.substr(24, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_tecget;	 // "__builtin_mblaze_fsl_tecget"
        }
        break;
      case 'n':	 // 5 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (BuiltinName[24]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (BuiltinName.substr(25, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_tnaget;	 // "__builtin_mblaze_fsl_tnaget"
          case 'p':	 // 1 string to match.
            if (BuiltinName.substr(25, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_tnaput;	 // "__builtin_mblaze_fsl_tnaput"
          }
          break;
        case 'c':	 // 2 strings to match.
          switch (BuiltinName[24]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (BuiltinName.substr(25, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_tncget;	 // "__builtin_mblaze_fsl_tncget"
          case 'p':	 // 1 string to match.
            if (BuiltinName.substr(25, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_tncput;	 // "__builtin_mblaze_fsl_tncput"
          }
          break;
        case 'e':	 // 1 string to match.
          if (BuiltinName.substr(24, 3) != "get")
            break;
          return mblazeIntrinsic::mblaze_fsl_tneget;	 // "__builtin_mblaze_fsl_tneget"
        }
        break;
      }
      break;
    }
    break;
  case 28:	 // 6 strings to match.
    if (BuiltinName.substr(0, 21) != "__builtin_mblaze_fsl_")
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'n':	 // 1 string to match.
      if (BuiltinName.substr(22, 6) != "ecaget")
        break;
      return mblazeIntrinsic::mblaze_fsl_necaget;	 // "__builtin_mblaze_fsl_necaget"
    case 't':	 // 5 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (BuiltinName.substr(23, 5) != "caget")
          break;
        return mblazeIntrinsic::mblaze_fsl_tecaget;	 // "__builtin_mblaze_fsl_tecaget"
      case 'n':	 // 4 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'c':	 // 2 strings to match.
          if (BuiltinName[24] != 'a')
            break;
          switch (BuiltinName[25]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (BuiltinName.substr(26, 2) != "et")
              break;
            return mblazeIntrinsic::mblaze_fsl_tncaget;	 // "__builtin_mblaze_fsl_tncaget"
          case 'p':	 // 1 string to match.
            if (BuiltinName.substr(26, 2) != "ut")
              break;
            return mblazeIntrinsic::mblaze_fsl_tncaput;	 // "__builtin_mblaze_fsl_tncaput"
          }
          break;
        case 'e':	 // 2 strings to match.
          switch (BuiltinName[24]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (BuiltinName.substr(25, 3) != "get")
              break;
            return mblazeIntrinsic::mblaze_fsl_tneaget;	 // "__builtin_mblaze_fsl_tneaget"
          case 'c':	 // 1 string to match.
            if (BuiltinName.substr(25, 3) != "get")
              break;
            return mblazeIntrinsic::mblaze_fsl_tnecget;	 // "__builtin_mblaze_fsl_tnecget"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 29:	 // 1 string to match.
    if (BuiltinName.substr(0, 29) != "__builtin_mblaze_fsl_tnecaget")
      break;
    return mblazeIntrinsic::mblaze_fsl_tnecaget;	 // "__builtin_mblaze_fsl_tnecaget"
  }
  }
  return (mblazeIntrinsic::ID)Intrinsic::not_intrinsic;
}
#endif

#if defined(_MSC_VER) && defined(setjmp_undefined_for_msvc)
// let's return it to _setjmp state
#  pragma pop_macro("setjmp")
#  undef setjmp_undefined_for_msvc
#endif

