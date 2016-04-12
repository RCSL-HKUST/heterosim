//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Sparc target
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*43 cases */, 18|128,3/*402*/,  TARGET_VAL(ISD::LOAD),// ->407
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_RecordChild1, // #1 = $addr
/*8*/       OPC_CheckChild1Type, MVT::i32,
/*10*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/      OPC_Scope, 72, /*->86*/ // 6 children in Scope
/*14*/        OPC_CheckPredicate, 1, // Predicate_sextload
/*16*/        OPC_CheckType, MVT::i32,
/*18*/        OPC_Scope, 32, /*->52*/ // 2 children in Scope
/*20*/          OPC_CheckPredicate, 2, // Predicate_sextloadi8
/*22*/          OPC_Scope, 13, /*->37*/ // 2 children in Scope
/*24*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*27*/            OPC_EmitMergeInputChains1_0,
/*28*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBrr:i32 ADDRrr:i32:$addr)
/*37*/          /*Scope*/ 13, /*->51*/
/*38*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*41*/            OPC_EmitMergeInputChains1_0,
/*42*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LDSBri:i32 ADDRri:i32:$addr)
/*51*/          0, /*End of Scope*/
/*52*/        /*Scope*/ 32, /*->85*/
/*53*/          OPC_CheckPredicate, 3, // Predicate_sextloadi16
/*55*/          OPC_Scope, 13, /*->70*/ // 2 children in Scope
/*57*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*60*/            OPC_EmitMergeInputChains1_0,
/*61*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHrr:i32 ADDRrr:i32:$addr)
/*70*/          /*Scope*/ 13, /*->84*/
/*71*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*74*/            OPC_EmitMergeInputChains1_0,
/*75*/            OPC_MorphNodeTo, TARGET_VAL(SP::LDSHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LDSHri:i32 ADDRri:i32:$addr)
/*84*/          0, /*End of Scope*/
/*85*/        0, /*End of Scope*/
/*86*/      /*Scope*/ 72, /*->159*/
/*87*/        OPC_CheckPredicate, 4, // Predicate_zextload
/*89*/        OPC_CheckType, MVT::i32,
/*91*/        OPC_Scope, 32, /*->125*/ // 2 children in Scope
/*93*/          OPC_CheckPredicate, 5, // Predicate_zextloadi8
/*95*/          OPC_Scope, 13, /*->110*/ // 2 children in Scope
/*97*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*100*/           OPC_EmitMergeInputChains1_0,
/*101*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:i32:$addr)
/*110*/         /*Scope*/ 13, /*->124*/
/*111*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*114*/           OPC_EmitMergeInputChains1_0,
/*115*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:i32:$addr)
/*124*/         0, /*End of Scope*/
/*125*/       /*Scope*/ 32, /*->158*/
/*126*/         OPC_CheckPredicate, 6, // Predicate_zextloadi16
/*128*/         OPC_Scope, 13, /*->143*/ // 2 children in Scope
/*130*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*133*/           OPC_EmitMergeInputChains1_0,
/*134*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:i32:$addr)
/*143*/         /*Scope*/ 13, /*->157*/
/*144*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*147*/           OPC_EmitMergeInputChains1_0,
/*148*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:i32:$addr)
/*157*/         0, /*End of Scope*/
/*158*/       0, /*End of Scope*/
/*159*/     /*Scope*/ 34, /*->194*/
/*160*/       OPC_CheckPredicate, 7, // Predicate_load
/*162*/       OPC_CheckType, MVT::i32,
/*164*/       OPC_Scope, 13, /*->179*/ // 2 children in Scope
/*166*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*169*/         OPC_EmitMergeInputChains1_0,
/*170*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDrr:i32 ADDRrr:i32:$addr)
/*179*/       /*Scope*/ 13, /*->193*/
/*180*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*183*/         OPC_EmitMergeInputChains1_0,
/*184*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDri:i32 ADDRri:i32:$addr)
/*193*/       0, /*End of Scope*/
/*194*/     /*Scope*/ 105, /*->300*/
/*195*/       OPC_CheckPredicate, 8, // Predicate_extload
/*197*/       OPC_CheckType, MVT::i32,
/*199*/       OPC_Scope, 32, /*->233*/ // 3 children in Scope
/*201*/         OPC_CheckPredicate, 9, // Predicate_extloadi1
/*203*/         OPC_Scope, 13, /*->218*/ // 2 children in Scope
/*205*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*208*/           OPC_EmitMergeInputChains1_0,
/*209*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:i32:$src)
/*218*/         /*Scope*/ 13, /*->232*/
/*219*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*222*/           OPC_EmitMergeInputChains1_0,
/*223*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:i32:$src)
/*232*/         0, /*End of Scope*/
/*233*/       /*Scope*/ 32, /*->266*/
/*234*/         OPC_CheckPredicate, 10, // Predicate_extloadi8
/*236*/         OPC_Scope, 13, /*->251*/ // 2 children in Scope
/*238*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*241*/           OPC_EmitMergeInputChains1_0,
/*242*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBrr:i32 ADDRrr:i32:$src)
/*251*/         /*Scope*/ 13, /*->265*/
/*252*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*255*/           OPC_EmitMergeInputChains1_0,
/*256*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LDUBri:i32 ADDRri:i32:$src)
/*265*/         0, /*End of Scope*/
/*266*/       /*Scope*/ 32, /*->299*/
/*267*/         OPC_CheckPredicate, 11, // Predicate_extloadi16
/*269*/         OPC_Scope, 13, /*->284*/ // 2 children in Scope
/*271*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*274*/           OPC_EmitMergeInputChains1_0,
/*275*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHrr:i32 ADDRrr:i32:$src)
/*284*/         /*Scope*/ 13, /*->298*/
/*285*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*288*/           OPC_EmitMergeInputChains1_0,
/*289*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDUHri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LDUHri:i32 ADDRri:i32:$src)
/*298*/         0, /*End of Scope*/
/*299*/       0, /*End of Scope*/
/*300*/     /*Scope*/ 36, /*->337*/
/*301*/       OPC_CheckPredicate, 4, // Predicate_zextload
/*303*/       OPC_CheckPredicate, 12, // Predicate_zextloadi1
/*305*/       OPC_CheckType, MVT::i32,
/*307*/       OPC_Scope, 13, /*->322*/ // 2 children in Scope
/*309*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$src #2 #3
/*312*/         OPC_EmitMergeInputChains1_0,
/*313*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBrr), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBrr:i32 ADDRrr:i32:$src)
/*322*/       /*Scope*/ 13, /*->336*/
/*323*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$src #2 #3
/*326*/         OPC_EmitMergeInputChains1_0,
/*327*/         OPC_MorphNodeTo, TARGET_VAL(SP::LDUBri), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDUBri:i32 ADDRri:i32:$src)
/*336*/       0, /*End of Scope*/
/*337*/     /*Scope*/ 68, /*->406*/
/*338*/       OPC_CheckPredicate, 7, // Predicate_load
/*340*/       OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->373
/*343*/         OPC_Scope, 13, /*->358*/ // 2 children in Scope
/*345*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*348*/           OPC_EmitMergeInputChains1_0,
/*349*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFrr:f32 ADDRrr:i32:$addr)
/*358*/         /*Scope*/ 13, /*->372*/
/*359*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*362*/           OPC_EmitMergeInputChains1_0,
/*363*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDFri:f32 ADDRri:i32:$addr)
/*372*/         0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->405
/*375*/         OPC_Scope, 13, /*->390*/ // 2 children in Scope
/*377*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$addr #2 #3
/*380*/           OPC_EmitMergeInputChains1_0,
/*381*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFrr:f64 ADDRrr:i32:$addr)
/*390*/         /*Scope*/ 13, /*->404*/
/*391*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$addr #2 #3
/*394*/           OPC_EmitMergeInputChains1_0,
/*395*/           OPC_MorphNodeTo, TARGET_VAL(SP::LDDFri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDDFri:f64 ADDRri:i32:$addr)
/*404*/         0, /*End of Scope*/
              0, // EndSwitchType
/*406*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 71|128,1/*199*/,  TARGET_VAL(ISD::STORE),// ->610
/*411*/     OPC_RecordMemRef,
/*412*/     OPC_RecordNode,   // #0 = 'st' chained node
/*413*/     OPC_RecordChild1, // #1 = $src
/*414*/     OPC_Scope, 113, /*->529*/ // 3 children in Scope
/*416*/       OPC_CheckChild1Type, MVT::i32,
/*418*/       OPC_RecordChild2, // #2 = $addr
/*419*/       OPC_CheckChild2Type, MVT::i32,
/*421*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*423*/       OPC_Scope, 70, /*->495*/ // 2 children in Scope
/*425*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*427*/         OPC_Scope, 32, /*->461*/ // 2 children in Scope
/*429*/           OPC_CheckPredicate, 15, // Predicate_truncstorei8
/*431*/           OPC_Scope, 13, /*->446*/ // 2 children in Scope
/*433*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*436*/             OPC_EmitMergeInputChains1_0,
/*437*/             OPC_MorphNodeTo, TARGET_VAL(SP::STBrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st IntRegs:i32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBrr ADDRrr:i32:$addr, IntRegs:i32:$src)
/*446*/           /*Scope*/ 13, /*->460*/
/*447*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*450*/             OPC_EmitMergeInputChains1_0,
/*451*/             OPC_MorphNodeTo, TARGET_VAL(SP::STBri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st IntRegs:i32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBri ADDRri:i32:$addr, IntRegs:i32:$src)
/*460*/           0, /*End of Scope*/
/*461*/         /*Scope*/ 32, /*->494*/
/*462*/           OPC_CheckPredicate, 16, // Predicate_truncstorei16
/*464*/           OPC_Scope, 13, /*->479*/ // 2 children in Scope
/*466*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*469*/             OPC_EmitMergeInputChains1_0,
/*470*/             OPC_MorphNodeTo, TARGET_VAL(SP::STHrr), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st IntRegs:i32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHrr ADDRrr:i32:$addr, IntRegs:i32:$src)
/*479*/           /*Scope*/ 13, /*->493*/
/*480*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*483*/             OPC_EmitMergeInputChains1_0,
/*484*/             OPC_MorphNodeTo, TARGET_VAL(SP::STHri), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st IntRegs:i32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHri ADDRri:i32:$addr, IntRegs:i32:$src)
/*493*/           0, /*End of Scope*/
/*494*/         0, /*End of Scope*/
/*495*/       /*Scope*/ 32, /*->528*/
/*496*/         OPC_CheckPredicate, 17, // Predicate_store
/*498*/         OPC_Scope, 13, /*->513*/ // 2 children in Scope
/*500*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*503*/           OPC_EmitMergeInputChains1_0,
/*504*/           OPC_MorphNodeTo, TARGET_VAL(SP::STrr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st IntRegs:i32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STrr ADDRrr:i32:$addr, IntRegs:i32:$src)
/*513*/         /*Scope*/ 13, /*->527*/
/*514*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*517*/           OPC_EmitMergeInputChains1_0,
/*518*/           OPC_MorphNodeTo, TARGET_VAL(SP::STri), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st IntRegs:i32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STri ADDRri:i32:$addr, IntRegs:i32:$src)
/*527*/         0, /*End of Scope*/
/*528*/       0, /*End of Scope*/
/*529*/     /*Scope*/ 39, /*->569*/
/*530*/       OPC_CheckChild1Type, MVT::f32,
/*532*/       OPC_RecordChild2, // #2 = $addr
/*533*/       OPC_CheckChild2Type, MVT::i32,
/*535*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*537*/       OPC_CheckPredicate, 17, // Predicate_store
/*539*/       OPC_Scope, 13, /*->554*/ // 2 children in Scope
/*541*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*544*/         OPC_EmitMergeInputChains1_0,
/*545*/         OPC_MorphNodeTo, TARGET_VAL(SP::STFrr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st FPRegs:f32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STFrr ADDRrr:i32:$addr, FPRegs:f32:$src)
/*554*/       /*Scope*/ 13, /*->568*/
/*555*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*558*/         OPC_EmitMergeInputChains1_0,
/*559*/         OPC_MorphNodeTo, TARGET_VAL(SP::STFri), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st FPRegs:f32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STFri ADDRri:i32:$addr, FPRegs:f32:$src)
/*568*/       0, /*End of Scope*/
/*569*/     /*Scope*/ 39, /*->609*/
/*570*/       OPC_CheckChild1Type, MVT::f64,
/*572*/       OPC_RecordChild2, // #2 = $addr
/*573*/       OPC_CheckChild2Type, MVT::i32,
/*575*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*577*/       OPC_CheckPredicate, 17, // Predicate_store
/*579*/       OPC_Scope, 13, /*->594*/ // 2 children in Scope
/*581*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$addr #3 #4
/*584*/         OPC_EmitMergeInputChains1_0,
/*585*/         OPC_MorphNodeTo, TARGET_VAL(SP::STDFrr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st DFPRegs:f64:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STDFrr ADDRrr:i32:$addr, DFPRegs:f64:$src)
/*594*/       /*Scope*/ 13, /*->608*/
/*595*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$addr #3 #4
/*598*/         OPC_EmitMergeInputChains1_0,
/*599*/         OPC_MorphNodeTo, TARGET_VAL(SP::STDFri), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st DFPRegs:f64:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STDFri ADDRri:i32:$addr, DFPRegs:f64:$src)
/*608*/       0, /*End of Scope*/
/*609*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 64,  TARGET_VAL(SPISD::CALL),// ->677
/*613*/     OPC_RecordNode,   // #0 = 'call' chained node
/*614*/     OPC_CaptureGlueInput,
/*615*/     OPC_RecordChild1, // #1 = $ptr
/*616*/     OPC_Scope, 13, /*->631*/ // 3 children in Scope
/*618*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$ptr #2 #3
/*621*/       OPC_EmitMergeInputChains1_0,
/*622*/       OPC_MorphNodeTo, TARGET_VAL(SP::JMPLrr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRrr:i32:$ptr) - Complexity = 12
              // Dst: (JMPLrr:i32 ADDRrr:i32:$ptr)
/*631*/     /*Scope*/ 13, /*->645*/
/*632*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$ptr #2 #3
/*635*/       OPC_EmitMergeInputChains1_0,
/*636*/       OPC_MorphNodeTo, TARGET_VAL(SP::JMPLri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (call ADDRri:i32:$ptr) - Complexity = 12
              // Dst: (JMPLri:i32 ADDRri:i32:$ptr)
/*645*/     /*Scope*/ 30, /*->676*/
/*646*/       OPC_MoveChild, 1,
/*648*/       OPC_SwitchOpcode /*2 cases */, 10,  TARGET_VAL(ISD::TargetGlobalAddress),// ->662
/*652*/         OPC_MoveParent,
/*653*/         OPC_EmitMergeInputChains1_0,
/*654*/         OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (CALL:i32 (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetExternalSymbol),// ->675
/*665*/         OPC_MoveParent,
/*666*/         OPC_EmitMergeInputChains1_0,
/*667*/         OPC_MorphNodeTo, TARGET_VAL(SP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (CALL:i32 (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*676*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 101,  TARGET_VAL(ISD::AND),// ->781
/*680*/     OPC_Scope, 31, /*->713*/ // 3 children in Scope
/*682*/       OPC_RecordChild0, // #0 = $b
/*683*/       OPC_MoveChild, 1,
/*685*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*688*/       OPC_RecordChild0, // #1 = $c
/*689*/       OPC_MoveChild, 1,
/*691*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*702*/       OPC_MoveParent,
/*703*/       OPC_MoveParent,
/*704*/       OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 IntRegs:i32:$b, (xor:i32 IntRegs:i32:$c, -1:i32)) - Complexity = 11
              // Dst: (ANDNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*713*/     /*Scope*/ 31, /*->745*/
/*714*/       OPC_MoveChild, 0,
/*716*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*719*/       OPC_RecordChild0, // #0 = $c
/*720*/       OPC_MoveChild, 1,
/*722*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*733*/       OPC_MoveParent,
/*734*/       OPC_MoveParent,
/*735*/       OPC_RecordChild1, // #1 = $b
/*736*/       OPC_MorphNodeTo, TARGET_VAL(SP::ANDNrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 IntRegs:i32:$c, -1:i32), IntRegs:i32:$b) - Complexity = 11
              // Dst: (ANDNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*745*/     /*Scope*/ 34, /*->780*/
/*746*/       OPC_RecordChild0, // #0 = $b
/*747*/       OPC_RecordChild1, // #1 = $c
/*748*/       OPC_Scope, 19, /*->769*/ // 2 children in Scope
/*750*/         OPC_MoveChild, 1,
/*752*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*755*/         OPC_CheckPredicate, 18, // Predicate_simm13
/*757*/         OPC_MoveParent,
/*758*/         OPC_EmitConvertToTarget, 1,
/*760*/         OPC_MorphNodeTo, TARGET_VAL(SP::ANDri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (and:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (ANDri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*769*/       /*Scope*/ 9, /*->779*/
/*770*/         OPC_MorphNodeTo, TARGET_VAL(SP::ANDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
                // Dst: (ANDrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*779*/       0, /*End of Scope*/
/*780*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 101,  TARGET_VAL(ISD::OR),// ->885
/*784*/     OPC_Scope, 31, /*->817*/ // 3 children in Scope
/*786*/       OPC_RecordChild0, // #0 = $b
/*787*/       OPC_MoveChild, 1,
/*789*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*792*/       OPC_RecordChild0, // #1 = $c
/*793*/       OPC_MoveChild, 1,
/*795*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*806*/       OPC_MoveParent,
/*807*/       OPC_MoveParent,
/*808*/       OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 IntRegs:i32:$b, (xor:i32 IntRegs:i32:$c, -1:i32)) - Complexity = 11
              // Dst: (ORNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*817*/     /*Scope*/ 31, /*->849*/
/*818*/       OPC_MoveChild, 0,
/*820*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*823*/       OPC_RecordChild0, // #0 = $c
/*824*/       OPC_MoveChild, 1,
/*826*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*837*/       OPC_MoveParent,
/*838*/       OPC_MoveParent,
/*839*/       OPC_RecordChild1, // #1 = $b
/*840*/       OPC_MorphNodeTo, TARGET_VAL(SP::ORNrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (or:i32 (xor:i32 IntRegs:i32:$c, -1:i32), IntRegs:i32:$b) - Complexity = 11
              // Dst: (ORNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*849*/     /*Scope*/ 34, /*->884*/
/*850*/       OPC_RecordChild0, // #0 = $b
/*851*/       OPC_RecordChild1, // #1 = $c
/*852*/       OPC_Scope, 19, /*->873*/ // 2 children in Scope
/*854*/         OPC_MoveChild, 1,
/*856*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*859*/         OPC_CheckPredicate, 18, // Predicate_simm13
/*861*/         OPC_MoveParent,
/*862*/         OPC_EmitConvertToTarget, 1,
/*864*/         OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (or:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (ORri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*873*/       /*Scope*/ 9, /*->883*/
/*874*/         OPC_MorphNodeTo, TARGET_VAL(SP::ORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
                // Dst: (ORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*883*/       0, /*End of Scope*/
/*884*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::XOR),// ->1021
/*889*/     OPC_Scope, 60, /*->951*/ // 2 children in Scope
/*891*/       OPC_MoveChild, 0,
/*893*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*896*/       OPC_RecordChild0, // #0 = $b
/*897*/       OPC_Scope, 25, /*->924*/ // 2 children in Scope
/*899*/         OPC_RecordChild1, // #1 = $c
/*900*/         OPC_MoveParent,
/*901*/         OPC_MoveChild, 1,
/*903*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*914*/         OPC_MoveParent,
/*915*/         OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (xor:i32 IntRegs:i32:$b, IntRegs:i32:$c), -1:i32) - Complexity = 11
                // Dst: (XNORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*924*/       /*Scope*/ 25, /*->950*/
/*925*/         OPC_MoveChild, 1,
/*927*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*938*/         OPC_MoveParent,
/*939*/         OPC_MoveParent,
/*940*/         OPC_RecordChild1, // #1 = $c
/*941*/         OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (xor:i32 IntRegs:i32:$b, -1:i32), IntRegs:i32:$c) - Complexity = 11
                // Dst: (XNORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*950*/       0, /*End of Scope*/
/*951*/     /*Scope*/ 68, /*->1020*/
/*952*/       OPC_RecordChild0, // #0 = $c
/*953*/       OPC_Scope, 30, /*->985*/ // 2 children in Scope
/*955*/         OPC_MoveChild, 1,
/*957*/         OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*960*/         OPC_RecordChild0, // #1 = $b
/*961*/         OPC_MoveChild, 1,
/*963*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*974*/         OPC_MoveParent,
/*975*/         OPC_MoveParent,
/*976*/         OPC_MorphNodeTo, TARGET_VAL(SP::XNORrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (xor:i32 IntRegs:i32:$c, (xor:i32 IntRegs:i32:$b, -1:i32)) - Complexity = 11
                // Dst: (XNORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*985*/       /*Scope*/ 33, /*->1019*/
/*986*/         OPC_RecordChild1, // #1 = $c
/*987*/         OPC_Scope, 19, /*->1008*/ // 2 children in Scope
/*989*/           OPC_MoveChild, 1,
/*991*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*994*/           OPC_CheckPredicate, 18, // Predicate_simm13
/*996*/           OPC_MoveParent,
/*997*/           OPC_EmitConvertToTarget, 1,
/*999*/           OPC_MorphNodeTo, TARGET_VAL(SP::XORri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                  // Dst: (XORri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1008*/        /*Scope*/ 9, /*->1018*/
/*1009*/          OPC_MorphNodeTo, TARGET_VAL(SP::XORrr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
                  // Dst: (XORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1018*/        0, /*End of Scope*/
/*1019*/      0, /*End of Scope*/
/*1020*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16|128,1/*144*/,  TARGET_VAL(SPISD::SELECT_ICC),// ->1169
/*1025*/    OPC_CaptureGlueInput,
/*1026*/    OPC_RecordChild0, // #0 = $F
/*1027*/    OPC_Scope, 32, /*->1061*/ // 2 children in Scope
/*1029*/      OPC_MoveChild, 0,
/*1031*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1034*/      OPC_CheckPredicate, 19, // Predicate_simm11
/*1036*/      OPC_MoveParent,
/*1037*/      OPC_RecordChild1, // #1 = $T
/*1038*/      OPC_RecordChild2, // #2 = $cc
/*1039*/      OPC_MoveChild, 2,
/*1041*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1044*/      OPC_MoveParent,
/*1045*/      OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1047*/      OPC_EmitConvertToTarget, 0,
/*1049*/      OPC_EmitConvertToTarget, 2,
/*1051*/      OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCri), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$F, IntRegs:i32:$T, (imm:i32):$cc) - Complexity = 10
              // Dst: (MOVICCri:i32 IntRegs:i32:$T, (imm:i32):$F, (imm:i32):$cc)
/*1061*/    /*Scope*/ 106, /*->1168*/
/*1062*/      OPC_RecordChild1, // #1 = $T
/*1063*/      OPC_RecordChild2, // #2 = $cc
/*1064*/      OPC_MoveChild, 2,
/*1066*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1069*/      OPC_MoveParent,
/*1070*/      OPC_SwitchType /*3 cases */, 30,  MVT::i32,// ->1103
/*1073*/        OPC_Scope, 14, /*->1089*/ // 2 children in Scope
/*1075*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1077*/          OPC_EmitConvertToTarget, 2,
/*1079*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVICCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselecticc:i32 IntRegs:i32:$F, IntRegs:i32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVICCrr:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$cc)
/*1089*/        /*Scope*/ 12, /*->1102*/
/*1090*/          OPC_EmitConvertToTarget, 2,
/*1092*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_ICC:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond)
/*1102*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f32,// ->1135
/*1105*/        OPC_Scope, 14, /*->1121*/ // 2 children in Scope
/*1107*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1109*/          OPC_EmitConvertToTarget, 2,
/*1111*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselecticc:f32 FPRegs:f32:$F, FPRegs:f32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_ICC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$cc)
/*1121*/        /*Scope*/ 12, /*->1134*/
/*1122*/          OPC_EmitConvertToTarget, 2,
/*1124*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_ICC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond)
/*1134*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->1167
/*1137*/        OPC_Scope, 14, /*->1153*/ // 2 children in Scope
/*1139*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1141*/          OPC_EmitConvertToTarget, 2,
/*1143*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselecticc:f64 DFPRegs:f64:$F, DFPRegs:f64:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_ICC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$cc)
/*1153*/        /*Scope*/ 12, /*->1166*/
/*1154*/          OPC_EmitConvertToTarget, 2,
/*1156*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_ICC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselecticc:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_ICC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond)
/*1166*/        0, /*End of Scope*/
              0, // EndSwitchType
/*1168*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16|128,1/*144*/,  TARGET_VAL(SPISD::SELECT_FCC),// ->1317
/*1173*/    OPC_CaptureGlueInput,
/*1174*/    OPC_RecordChild0, // #0 = $F
/*1175*/    OPC_Scope, 32, /*->1209*/ // 2 children in Scope
/*1177*/      OPC_MoveChild, 0,
/*1179*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1182*/      OPC_CheckPredicate, 19, // Predicate_simm11
/*1184*/      OPC_MoveParent,
/*1185*/      OPC_RecordChild1, // #1 = $T
/*1186*/      OPC_RecordChild2, // #2 = $cc
/*1187*/      OPC_MoveChild, 2,
/*1189*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1192*/      OPC_MoveParent,
/*1193*/      OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1195*/      OPC_EmitConvertToTarget, 0,
/*1197*/      OPC_EmitConvertToTarget, 2,
/*1199*/      OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCri), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$F, IntRegs:i32:$T, (imm:i32):$cc) - Complexity = 10
              // Dst: (MOVFCCri:i32 IntRegs:i32:$T, (imm:i32):$F, (imm:i32):$cc)
/*1209*/    /*Scope*/ 106, /*->1316*/
/*1210*/      OPC_RecordChild1, // #1 = $T
/*1211*/      OPC_RecordChild2, // #2 = $cc
/*1212*/      OPC_MoveChild, 2,
/*1214*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1217*/      OPC_MoveParent,
/*1218*/      OPC_SwitchType /*3 cases */, 30,  MVT::i32,// ->1251
/*1221*/        OPC_Scope, 14, /*->1237*/ // 2 children in Scope
/*1223*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1225*/          OPC_EmitConvertToTarget, 2,
/*1227*/          OPC_MorphNodeTo, TARGET_VAL(SP::MOVFCCrr), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselectfcc:i32 IntRegs:i32:$F, IntRegs:i32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (MOVFCCrr:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$cc)
/*1237*/        /*Scope*/ 12, /*->1250*/
/*1238*/          OPC_EmitConvertToTarget, 2,
/*1240*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_Int_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_Int_FCC:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond)
/*1250*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f32,// ->1283
/*1253*/        OPC_Scope, 14, /*->1269*/ // 2 children in Scope
/*1255*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1257*/          OPC_EmitConvertToTarget, 2,
/*1259*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVS_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselectfcc:f32 FPRegs:f32:$F, FPRegs:f32:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVS_FCC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$cc)
/*1269*/        /*Scope*/ 12, /*->1282*/
/*1270*/          OPC_EmitConvertToTarget, 2,
/*1272*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_FP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_FP_FCC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond)
/*1282*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->1315
/*1285*/        OPC_Scope, 14, /*->1301*/ // 2 children in Scope
/*1287*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*1289*/          OPC_EmitConvertToTarget, 2,
/*1291*/          OPC_MorphNodeTo, TARGET_VAL(SP::FMOVD_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 3, 
                  // Src: (SPselectfcc:f64 DFPRegs:f64:$F, DFPRegs:f64:$T, (imm:i32):$cc) - Complexity = 6
                  // Dst: (FMOVD_FCC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$cc)
/*1301*/        /*Scope*/ 12, /*->1314*/
/*1302*/          OPC_EmitConvertToTarget, 2,
/*1304*/          OPC_MorphNodeTo, TARGET_VAL(SP::SELECT_CC_DFP_FCC), 0|OPFL_GlueInput,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (SPselectfcc:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond) - Complexity = 6
                  // Dst: (SELECT_CC_DFP_FCC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond)
/*1314*/        0, /*End of Scope*/
              0, // EndSwitchType
/*1316*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->1346
/*1320*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*1321*/    OPC_CaptureGlueInput,
/*1322*/    OPC_RecordChild1, // #1 = $amt1
/*1323*/    OPC_MoveChild, 1,
/*1325*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1328*/    OPC_MoveParent,
/*1329*/    OPC_RecordChild2, // #2 = $amt2
/*1330*/    OPC_MoveChild, 2,
/*1332*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1335*/    OPC_MoveParent,
/*1336*/    OPC_EmitMergeInputChains1_0,
/*1337*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->1364
/*1349*/    OPC_RecordNode,   // #0 = $addr
/*1350*/    OPC_CheckType, MVT::i32,
/*1352*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRri:$addr #1 #2
/*1355*/    OPC_MorphNodeTo, TARGET_VAL(SP::LEA_ADDri), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRri:i32:$addr - Complexity = 9
            // Dst: (LEA_ADDri:i32 ADDRri:i32:$addr)
          /*SwitchOpcode*/ 118,  TARGET_VAL(ISD::ADD),// ->1485
/*1367*/    OPC_Scope, 39, /*->1408*/ // 3 children in Scope
/*1369*/      OPC_RecordChild0, // #0 = $r
/*1370*/      OPC_MoveChild, 1,
/*1372*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*1375*/      OPC_RecordChild0, // #1 = $in
/*1376*/      OPC_MoveChild, 0,
/*1378*/      OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1393
/*1382*/        OPC_MoveParent,
/*1383*/        OPC_MoveParent,
/*1384*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 IntRegs:i32:$r, (SPlo:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                // Dst: (ADDri:i32 IntRegs:i32:$r, (tglobaladdr:i32):$in)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->1407
/*1396*/        OPC_MoveParent,
/*1397*/        OPC_MoveParent,
/*1398*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 IntRegs:i32:$r, (SPlo:i32 (tconstpool:i32):$in)) - Complexity = 9
                // Dst: (ADDri:i32 IntRegs:i32:$r, (tconstpool:i32):$in)
              0, // EndSwitchOpcode
/*1408*/    /*Scope*/ 40, /*->1449*/
/*1409*/      OPC_MoveChild, 0,
/*1411*/      OPC_CheckOpcode, TARGET_VAL(SPISD::Lo),
/*1414*/      OPC_RecordChild0, // #0 = $in
/*1415*/      OPC_MoveChild, 0,
/*1417*/      OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::TargetConstantPool),// ->1433
/*1421*/        OPC_MoveParent,
/*1422*/        OPC_MoveParent,
/*1423*/        OPC_RecordChild1, // #1 = $r
/*1424*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (SPlo:i32 (tconstpool:i32):$in), IntRegs:i32:$r) - Complexity = 9
                // Dst: (ADDri:i32 IntRegs:i32:$r, (tconstpool:i32):$in)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1448
/*1436*/        OPC_MoveParent,
/*1437*/        OPC_MoveParent,
/*1438*/        OPC_RecordChild1, // #1 = $r
/*1439*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (SPlo:i32 (tglobaladdr:i32):$in), IntRegs:i32:$r) - Complexity = 9
                // Dst: (ADDri:i32 IntRegs:i32:$r, (tglobaladdr:i32):$in)
              0, // EndSwitchOpcode
/*1449*/    /*Scope*/ 34, /*->1484*/
/*1450*/      OPC_RecordChild0, // #0 = $b
/*1451*/      OPC_RecordChild1, // #1 = $c
/*1452*/      OPC_Scope, 19, /*->1473*/ // 2 children in Scope
/*1454*/        OPC_MoveChild, 1,
/*1456*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1459*/        OPC_CheckPredicate, 18, // Predicate_simm13
/*1461*/        OPC_MoveParent,
/*1462*/        OPC_EmitConvertToTarget, 1,
/*1464*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (add:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
                // Dst: (ADDri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1473*/      /*Scope*/ 9, /*->1483*/
/*1474*/        OPC_MorphNodeTo, TARGET_VAL(SP::ADDrr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
                // Dst: (ADDrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1483*/      0, /*End of Scope*/
/*1484*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::RET_FLAG),// ->1509
/*1488*/    OPC_RecordNode,   // #0 = 'retflag' chained node
/*1489*/    OPC_CaptureGlueInput,
/*1490*/    OPC_RecordChild1, // #1 = $val
/*1491*/    OPC_MoveChild, 1,
/*1493*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1496*/    OPC_CheckPredicate, 18, // Predicate_simm13
/*1498*/    OPC_MoveParent,
/*1499*/    OPC_EmitMergeInputChains1_0,
/*1500*/    OPC_EmitConvertToTarget, 1,
/*1502*/    OPC_MorphNodeTo, TARGET_VAL(SP::RETL), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (retflag (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
            // Dst: (RETL (imm:i32):$val)
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->1546
/*1512*/    OPC_RecordChild0, // #0 = $b
/*1513*/    OPC_RecordChild1, // #1 = $c
/*1514*/    OPC_Scope, 19, /*->1535*/ // 2 children in Scope
/*1516*/      OPC_MoveChild, 1,
/*1518*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1521*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1523*/      OPC_MoveParent,
/*1524*/      OPC_EmitConvertToTarget, 1,
/*1526*/      OPC_MorphNodeTo, TARGET_VAL(SP::SLLri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SLLri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1535*/    /*Scope*/ 9, /*->1545*/
/*1536*/      OPC_MorphNodeTo, TARGET_VAL(SP::SLLrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SLLrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1545*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->1583
/*1549*/    OPC_RecordChild0, // #0 = $b
/*1550*/    OPC_RecordChild1, // #1 = $c
/*1551*/    OPC_Scope, 19, /*->1572*/ // 2 children in Scope
/*1553*/      OPC_MoveChild, 1,
/*1555*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1558*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1560*/      OPC_MoveParent,
/*1561*/      OPC_EmitConvertToTarget, 1,
/*1563*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRLri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SRLri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1572*/    /*Scope*/ 9, /*->1582*/
/*1573*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRLrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SRLrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1582*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRA),// ->1620
/*1586*/    OPC_RecordChild0, // #0 = $b
/*1587*/    OPC_RecordChild1, // #1 = $c
/*1588*/    OPC_Scope, 19, /*->1609*/ // 2 children in Scope
/*1590*/      OPC_MoveChild, 1,
/*1592*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1595*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1597*/      OPC_MoveParent,
/*1598*/      OPC_EmitConvertToTarget, 1,
/*1600*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRAri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sra:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SRAri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1609*/    /*Scope*/ 9, /*->1619*/
/*1610*/      OPC_MorphNodeTo, TARGET_VAL(SP::SRArr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SRArr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1619*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::ADDC),// ->1657
/*1623*/    OPC_RecordChild0, // #0 = $b
/*1624*/    OPC_RecordChild1, // #1 = $c
/*1625*/    OPC_Scope, 19, /*->1646*/ // 2 children in Scope
/*1627*/      OPC_MoveChild, 1,
/*1629*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1632*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1634*/      OPC_MoveParent,
/*1635*/      OPC_EmitConvertToTarget, 1,
/*1637*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDCCri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1646*/    /*Scope*/ 9, /*->1656*/
/*1647*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (ADDCCrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1656*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::ADDE),// ->1695
/*1660*/    OPC_CaptureGlueInput,
/*1661*/    OPC_RecordChild0, // #0 = $b
/*1662*/    OPC_RecordChild1, // #1 = $c
/*1663*/    OPC_Scope, 19, /*->1684*/ // 2 children in Scope
/*1665*/      OPC_MoveChild, 1,
/*1667*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1670*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1672*/      OPC_MoveParent,
/*1673*/      OPC_EmitConvertToTarget, 1,
/*1675*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (ADDXri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1684*/    /*Scope*/ 9, /*->1694*/
/*1685*/      OPC_MorphNodeTo, TARGET_VAL(SP::ADDXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (ADDXrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1694*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SUB),// ->1732
/*1698*/    OPC_RecordChild0, // #0 = $b
/*1699*/    OPC_RecordChild1, // #1 = $c
/*1700*/    OPC_Scope, 19, /*->1721*/ // 2 children in Scope
/*1702*/      OPC_MoveChild, 1,
/*1704*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1707*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1709*/      OPC_MoveParent,
/*1710*/      OPC_EmitConvertToTarget, 1,
/*1712*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sub:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1721*/    /*Scope*/ 9, /*->1731*/
/*1722*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SUBrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1731*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::SUBE),// ->1770
/*1735*/    OPC_CaptureGlueInput,
/*1736*/    OPC_RecordChild0, // #0 = $b
/*1737*/    OPC_RecordChild1, // #1 = $c
/*1738*/    OPC_Scope, 19, /*->1759*/ // 2 children in Scope
/*1740*/      OPC_MoveChild, 1,
/*1742*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1745*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1747*/      OPC_MoveParent,
/*1748*/      OPC_EmitConvertToTarget, 1,
/*1750*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sube:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBXri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1759*/    /*Scope*/ 9, /*->1769*/
/*1760*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBXrr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SUBXrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1769*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(SPISD::CMPICC),// ->1807
/*1773*/    OPC_RecordChild0, // #0 = $b
/*1774*/    OPC_RecordChild1, // #1 = $c
/*1775*/    OPC_Scope, 19, /*->1796*/ // 2 children in Scope
/*1777*/      OPC_MoveChild, 1,
/*1779*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1782*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1784*/      OPC_MoveParent,
/*1785*/      OPC_EmitConvertToTarget, 1,
/*1787*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (SPcmpicc:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SUBCCri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1796*/    /*Scope*/ 9, /*->1806*/
/*1797*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpicc:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1806*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::MUL),// ->1844
/*1810*/    OPC_RecordChild0, // #0 = $b
/*1811*/    OPC_RecordChild1, // #1 = $c
/*1812*/    OPC_Scope, 19, /*->1833*/ // 2 children in Scope
/*1814*/      OPC_MoveChild, 1,
/*1816*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1819*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1821*/      OPC_MoveParent,
/*1822*/      OPC_EmitConvertToTarget, 1,
/*1824*/      OPC_MorphNodeTo, TARGET_VAL(SP::SMULri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c) - Complexity = 7
              // Dst: (SMULri:i32 IntRegs:i32:$b, (imm:i32):$c)
/*1833*/    /*Scope*/ 9, /*->1843*/
/*1834*/      OPC_MorphNodeTo, TARGET_VAL(SP::SMULrr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SMULrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1843*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SUBC),// ->1881
/*1847*/    OPC_RecordChild0, // #0 = $b
/*1848*/    OPC_RecordChild1, // #1 = $val
/*1849*/    OPC_Scope, 19, /*->1870*/ // 2 children in Scope
/*1851*/      OPC_MoveChild, 1,
/*1853*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1856*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*1858*/      OPC_MoveParent,
/*1859*/      OPC_EmitConvertToTarget, 1,
/*1861*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCri), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (subc:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$val) - Complexity = 7
              // Dst: (SUBCCri:i32 IntRegs:i32:$b, (imm:i32):$val)
/*1870*/    /*Scope*/ 9, /*->1880*/
/*1871*/      OPC_MorphNodeTo, TARGET_VAL(SP::SUBCCrr), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 IntRegs:i32:$b, IntRegs:i32:$c) - Complexity = 3
              // Dst: (SUBCCrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
/*1880*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->1901
/*1884*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*1885*/    OPC_RecordChild1, // #1 = $amt
/*1886*/    OPC_MoveChild, 1,
/*1888*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1891*/    OPC_MoveParent,
/*1892*/    OPC_EmitMergeInputChains1_0,
/*1893*/    OPC_MorphNodeTo, TARGET_VAL(SP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRICC),// ->1931
/*1904*/    OPC_RecordNode,   // #0 = 'SPbricc' chained node
/*1905*/    OPC_CaptureGlueInput,
/*1906*/    OPC_RecordChild1, // #1 = $dst
/*1907*/    OPC_MoveChild, 1,
/*1909*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1912*/    OPC_MoveParent,
/*1913*/    OPC_RecordChild2, // #2 = $cc
/*1914*/    OPC_MoveChild, 2,
/*1916*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1919*/    OPC_MoveParent,
/*1920*/    OPC_EmitMergeInputChains1_0,
/*1921*/    OPC_EmitConvertToTarget, 2,
/*1923*/    OPC_MorphNodeTo, TARGET_VAL(SP::BCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbricc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (BCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::BRFCC),// ->1961
/*1934*/    OPC_RecordNode,   // #0 = 'SPbrfcc' chained node
/*1935*/    OPC_CaptureGlueInput,
/*1936*/    OPC_RecordChild1, // #1 = $dst
/*1937*/    OPC_MoveChild, 1,
/*1939*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1942*/    OPC_MoveParent,
/*1943*/    OPC_RecordChild2, // #2 = $cc
/*1944*/    OPC_MoveChild, 2,
/*1946*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1949*/    OPC_MoveParent,
/*1950*/    OPC_EmitMergeInputChains1_0,
/*1951*/    OPC_EmitConvertToTarget, 2,
/*1953*/    OPC_MorphNodeTo, TARGET_VAL(SP::FBCOND), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (SPbrfcc (bb:Other):$dst, (imm:i32):$cc) - Complexity = 6
            // Dst: (FBCOND (bb:Other):$dst, (imm:i32):$cc)
          /*SwitchOpcode*/ 29,  TARGET_VAL(SPISD::Hi),// ->1993
/*1964*/    OPC_RecordChild0, // #0 = $in
/*1965*/    OPC_MoveChild, 0,
/*1967*/    OPC_SwitchOpcode /*2 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1980
/*1971*/      OPC_MoveParent,
/*1972*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (SPhi:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (SETHIi:i32 (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetConstantPool),// ->1992
/*1983*/      OPC_MoveParent,
/*1984*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (SPhi:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (SETHIi:i32 (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 37,  TARGET_VAL(SPISD::Lo),// ->2033
/*1996*/    OPC_RecordChild0, // #0 = $in
/*1997*/    OPC_MoveChild, 0,
/*1999*/    OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2016
/*2003*/      OPC_MoveParent,
/*2004*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*2007*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (ORri:i32 G0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->2032
/*2019*/      OPC_MoveParent,
/*2020*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*2023*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (SPlo:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (ORri:i32 G0:i32, (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 64,  TARGET_VAL(ISD::Constant),// ->2100
/*2036*/    OPC_RecordNode,   // #0 = $src
/*2037*/    OPC_Scope, 15, /*->2054*/ // 3 children in Scope
/*2039*/      OPC_CheckPredicate, 20, // Predicate_SETHIimm
/*2041*/      OPC_EmitConvertToTarget, 0,
/*2043*/      OPC_EmitNodeXForm, 0, 1, // HI22
/*2046*/      OPC_MorphNodeTo, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$src - Complexity = 4
              // Dst: (SETHIi:i32 (HI22:i32 (imm:i32):$src))
/*2054*/    /*Scope*/ 16, /*->2071*/
/*2055*/      OPC_CheckPredicate, 18, // Predicate_simm13
/*2057*/      OPC_EmitRegister, MVT::i32, SP::G0,
/*2060*/      OPC_EmitConvertToTarget, 0,
/*2062*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_simm13>>:$val - Complexity = 4
              // Dst: (ORri:i32 G0:i32, (imm:i32):$val)
/*2071*/    /*Scope*/ 27, /*->2099*/
/*2072*/      OPC_EmitConvertToTarget, 0,
/*2074*/      OPC_EmitNodeXForm, 0, 1, // HI22
/*2077*/      OPC_EmitNode, TARGET_VAL(SP::SETHIi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*2085*/      OPC_EmitConvertToTarget, 0,
/*2087*/      OPC_EmitNodeXForm, 1, 4, // LO10
/*2090*/      OPC_MorphNodeTo, TARGET_VAL(SP::ORri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i32):$val - Complexity = 3
              // Dst: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
/*2099*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(SPISD::FLUSHW),// ->2124
/*2103*/    OPC_RecordNode,   // #0 = 'flushw' chained node
/*2104*/    OPC_Scope, 9, /*->2115*/ // 2 children in Scope
/*2106*/      OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*2108*/      OPC_EmitMergeInputChains1_0,
/*2109*/      OPC_MorphNodeTo, TARGET_VAL(SP::FLUSHW), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (FLUSHW)
/*2115*/    /*Scope*/ 7, /*->2123*/
/*2116*/      OPC_EmitMergeInputChains1_0,
/*2117*/      OPC_MorphNodeTo, TARGET_VAL(SP::TA3), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (flushw) - Complexity = 3
              // Dst: (TA3)
/*2123*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->2143
/*2127*/    OPC_RecordNode,   // #0 = 'br' chained node
/*2128*/    OPC_RecordChild1, // #1 = $dst
/*2129*/    OPC_MoveChild, 1,
/*2131*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2134*/    OPC_MoveParent,
/*2135*/    OPC_EmitMergeInputChains1_0,
/*2136*/    OPC_MorphNodeTo, TARGET_VAL(SP::BA), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (BA (bb:Other):$dst)
          /*SwitchOpcode*/ 21,  TARGET_VAL(ISD::CTPOP),// ->2167
/*2146*/    OPC_RecordChild0, // #0 = $src
/*2147*/    OPC_EmitInteger, MVT::i32, 0, 
/*2150*/    OPC_EmitNode, TARGET_VAL(SP::SLLri), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*2159*/    OPC_MorphNodeTo, TARGET_VAL(SP::POPCrr), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
            // Src: (ctpop:i32 IntRegs:i32:$src) - Complexity = 3
            // Dst: (POPCrr:i32 (SLLri:i32 IntRegs:i32:$src, 0:i32))
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::FMUL),// ->2223
/*2170*/    OPC_Scope, 23, /*->2195*/ // 2 children in Scope
/*2172*/      OPC_MoveChild, 0,
/*2174*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*2177*/      OPC_RecordChild0, // #0 = $src1
/*2178*/      OPC_MoveParent,
/*2179*/      OPC_MoveChild, 1,
/*2181*/      OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*2184*/      OPC_RecordChild0, // #1 = $src2
/*2185*/      OPC_MoveParent,
/*2186*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSMULD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 (fextend:f64 FPRegs:f32:$src1), (fextend:f64 FPRegs:f32:$src2)) - Complexity = 9
              // Dst: (FSMULD:f64 FPRegs:f32:$src1, FPRegs:f32:$src2)
/*2195*/    /*Scope*/ 26, /*->2222*/
/*2196*/      OPC_RecordChild0, // #0 = $src1
/*2197*/      OPC_RecordChild1, // #1 = $src2
/*2198*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->2210
/*2201*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULS), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FPRegs:f32:$src1, FPRegs:f32:$src2) - Complexity = 3
                // Dst: (FMULS:f32 FPRegs:f32:$src1, FPRegs:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->2221
/*2212*/        OPC_MorphNodeTo, TARGET_VAL(SP::FMULD), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2) - Complexity = 3
                // Dst: (FMULD:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2)
              0, // EndSwitchType
/*2222*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->2265
/*2226*/    OPC_RecordChild0, // #0 = $src
/*2227*/    OPC_SwitchType /*2 cases */, 24,  MVT::f64,// ->2254
/*2230*/      OPC_Scope, 10, /*->2242*/ // 2 children in Scope
/*2232*/        OPC_CheckPatternPredicate, 1, // (!Subtarget.isV9())
/*2234*/        OPC_MorphNodeTo, TARGET_VAL(SP::FpNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 DFPRegs:f64:$src) - Complexity = 3
                // Dst: (FpNEGD:f64 DFPRegs:f64:$src)
/*2242*/      /*Scope*/ 10, /*->2253*/
/*2243*/        OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*2245*/        OPC_MorphNodeTo, TARGET_VAL(SP::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 DFPRegs:f64:$src) - Complexity = 3
                // Dst: (FNEGD:f64 DFPRegs:f64:$src)
/*2253*/      0, /*End of Scope*/
            /*SwitchType*/ 8,  MVT::f32,// ->2264
/*2256*/      OPC_MorphNodeTo, TARGET_VAL(SP::FNEGS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FNEGS:f32 FPRegs:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->2307
/*2268*/    OPC_RecordChild0, // #0 = $src
/*2269*/    OPC_SwitchType /*2 cases */, 24,  MVT::f64,// ->2296
/*2272*/      OPC_Scope, 10, /*->2284*/ // 2 children in Scope
/*2274*/        OPC_CheckPatternPredicate, 1, // (!Subtarget.isV9())
/*2276*/        OPC_MorphNodeTo, TARGET_VAL(SP::FpABSD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 DFPRegs:f64:$src) - Complexity = 3
                // Dst: (FpABSD:f64 DFPRegs:f64:$src)
/*2284*/      /*Scope*/ 10, /*->2295*/
/*2285*/        OPC_CheckPatternPredicate, 0, // (Subtarget.isV9())
/*2287*/        OPC_MorphNodeTo, TARGET_VAL(SP::FABSD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 DFPRegs:f64:$src) - Complexity = 3
                // Dst: (FABSD:f64 DFPRegs:f64:$src)
/*2295*/      0, /*End of Scope*/
            /*SwitchType*/ 8,  MVT::f32,// ->2306
/*2298*/      OPC_MorphNodeTo, TARGET_VAL(SP::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FABSS:f32 FPRegs:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(SPISD::ITOF),// ->2333
/*2310*/    OPC_RecordChild0, // #0 = $src
/*2311*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->2322
/*2314*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPitof:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOS:f32 FPRegs:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->2332
/*2324*/      OPC_MorphNodeTo, TARGET_VAL(SP::FITOD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (SPitof:f64 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FITOD:f64 FPRegs:f32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(SPISD::FTOI),// ->2361
/*2336*/    OPC_RecordChild0, // #0 = $src
/*2337*/    OPC_Scope, 10, /*->2349*/ // 2 children in Scope
/*2339*/      OPC_CheckChild0Type, MVT::f32,
/*2341*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FSTOI:f32 FPRegs:f32:$src)
/*2349*/    /*Scope*/ 10, /*->2360*/
/*2350*/      OPC_CheckChild0Type, MVT::f64,
/*2352*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDTOI), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (SPftoi:f32 DFPRegs:f64:$src) - Complexity = 3
              // Dst: (FDTOI:f32 DFPRegs:f64:$src)
/*2360*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_EXTEND),// ->2373
/*2364*/    OPC_RecordChild0, // #0 = $src
/*2365*/    OPC_MorphNodeTo, TARGET_VAL(SP::FSTOD), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 FPRegs:f32:$src) - Complexity = 3
            // Dst: (FSTOD:f64 FPRegs:f32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->2385
/*2376*/    OPC_RecordChild0, // #0 = $src
/*2377*/    OPC_MorphNodeTo, TARGET_VAL(SP::FDTOS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 DFPRegs:f64:$src) - Complexity = 3
            // Dst: (FDTOS:f32 DFPRegs:f64:$src)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->2411
/*2388*/    OPC_RecordChild0, // #0 = $src
/*2389*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->2400
/*2392*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FPRegs:f32:$src) - Complexity = 3
              // Dst: (FSQRTS:f32 FPRegs:f32:$src)
            /*SwitchType*/ 8,  MVT::f64,// ->2410
/*2402*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSQRTD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 DFPRegs:f64:$src) - Complexity = 3
              // Dst: (FSQRTD:f64 DFPRegs:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FADD),// ->2440
/*2414*/    OPC_RecordChild0, // #0 = $src1
/*2415*/    OPC_RecordChild1, // #1 = $src2
/*2416*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->2428
/*2419*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 FPRegs:f32:$src1, FPRegs:f32:$src2) - Complexity = 3
              // Dst: (FADDS:f32 FPRegs:f32:$src1, FPRegs:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->2439
/*2430*/      OPC_MorphNodeTo, TARGET_VAL(SP::FADDD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2) - Complexity = 3
              // Dst: (FADDD:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FSUB),// ->2469
/*2443*/    OPC_RecordChild0, // #0 = $src1
/*2444*/    OPC_RecordChild1, // #1 = $src2
/*2445*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->2457
/*2448*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 FPRegs:f32:$src1, FPRegs:f32:$src2) - Complexity = 3
              // Dst: (FSUBS:f32 FPRegs:f32:$src1, FPRegs:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->2468
/*2459*/      OPC_MorphNodeTo, TARGET_VAL(SP::FSUBD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2) - Complexity = 3
              // Dst: (FSUBD:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->2498
/*2472*/    OPC_RecordChild0, // #0 = $src1
/*2473*/    OPC_RecordChild1, // #1 = $src2
/*2474*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->2486
/*2477*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FPRegs:f32:$src1, FPRegs:f32:$src2) - Complexity = 3
              // Dst: (FDIVS:f32 FPRegs:f32:$src1, FPRegs:f32:$src2)
            /*SwitchType*/ 9,  MVT::f64,// ->2497
/*2488*/      OPC_MorphNodeTo, TARGET_VAL(SP::FDIVD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2) - Complexity = 3
              // Dst: (FDIVD:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 27,  TARGET_VAL(SPISD::CMPFCC),// ->2528
/*2501*/    OPC_RecordChild0, // #0 = $src1
/*2502*/    OPC_Scope, 11, /*->2515*/ // 2 children in Scope
/*2504*/      OPC_CheckChild0Type, MVT::f32,
/*2506*/      OPC_RecordChild1, // #1 = $src2
/*2507*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPS), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc FPRegs:f32:$src1, FPRegs:f32:$src2) - Complexity = 3
              // Dst: (FCMPS FPRegs:f32:$src1, FPRegs:f32:$src2)
/*2515*/    /*Scope*/ 11, /*->2527*/
/*2516*/      OPC_CheckChild0Type, MVT::f64,
/*2518*/      OPC_RecordChild1, // #1 = $src2
/*2519*/      OPC_MorphNodeTo, TARGET_VAL(SP::FCMPD), 0|OPFL_GlueOutput,
                  0/*#VTs*/, 2/*#Ops*/, 0, 1, 
              // Src: (SPcmpfcc DFPRegs:f64:$src1, DFPRegs:f64:$src2) - Complexity = 3
              // Dst: (FCMPD DFPRegs:f64:$src1, DFPRegs:f64:$src2)
/*2527*/    0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 2530 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 59
  // #OPC_RecordNode                     = 12
  // #OPC_RecordChild                    = 93
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 9
  // #OPC_MoveChild                      = 51
  // #OPC_MoveParent                     = 59
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 13
  // #OPC_CheckPredicate                 = 43
  // #OPC_CheckOpcode                    = 39
  // #OPC_SwitchOpcode                   = 6
  // #OPC_CheckType                      = 6
  // #OPC_SwitchType                     = 11
  // #OPC_CheckChildType                 = 11
  // #OPC_CheckInteger                   = 7
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 35
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 1
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 3
  // #OPC_EmitConvertToTarget            = 37
  // #OPC_EmitMergeInputChains           = 44
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 2
  // #OPC_EmitNodeXForm                  = 3
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 131

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (Subtarget.isV9());
  case 1: return (!Subtarget.isV9());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 2: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 4: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 5: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 11: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 13: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 14: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 16: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 17: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 18: { // Predicate_simm13
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<13>(N->getSExtValue()); 
  }
  case 19: { // Predicate_simm11
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 20: { // Predicate_SETHIimm
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (((unsigned)N->getZExtValue() >> 10) << 10) ==
         (unsigned)N->getZExtValue();

  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent, SDValue N,
                         unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: assert(0 && "Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // HI22
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, MVT::i32);

  }
  case 1: {  // LO10
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023,
                                   MVT::i32);

  }
  }
}

