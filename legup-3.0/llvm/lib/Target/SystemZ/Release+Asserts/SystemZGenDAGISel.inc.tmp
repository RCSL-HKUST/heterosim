//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the SystemZ target
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
/*0*/     OPC_SwitchOpcode /*52 cases */, 63|128,2/*319*/,  TARGET_VAL(ISD::ADD),// ->324
/*5*/       OPC_Scope, 35, /*->42*/ // 6 children in Scope
/*7*/         OPC_RecordChild0, // #0 = $src1
/*8*/         OPC_MoveChild, 1,
/*10*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13*/        OPC_RecordMemRef,
/*14*/        OPC_RecordNode, // #1 = 'ld' chained node
/*15*/        OPC_CheckFoldableChainNode,
/*16*/        OPC_RecordChild1, // #2 = $src2
/*17*/        OPC_CheckChild1Type, MVT::i64,
/*19*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*21*/        OPC_CheckPredicate, 1, // Predicate_load
/*23*/        OPC_MoveParent,
/*24*/        OPC_CheckType, MVT::i32,
/*26*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*29*/        OPC_EmitMergeInputChains1_1,
/*30*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (add:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (ADD32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*42*/      /*Scope*/ 35, /*->78*/
/*43*/        OPC_MoveChild, 0,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*48*/        OPC_RecordMemRef,
/*49*/        OPC_RecordNode, // #0 = 'ld' chained node
/*50*/        OPC_CheckFoldableChainNode,
/*51*/        OPC_RecordChild1, // #1 = $src2
/*52*/        OPC_CheckChild1Type, MVT::i64,
/*54*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*56*/        OPC_CheckPredicate, 1, // Predicate_load
/*58*/        OPC_MoveParent,
/*59*/        OPC_RecordChild1, // #2 = $src1
/*60*/        OPC_CheckType, MVT::i32,
/*62*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*65*/        OPC_EmitMergeInputChains1_0,
/*66*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (add:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (ADD32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*78*/      /*Scope*/ 55, /*->134*/
/*79*/        OPC_RecordChild0, // #0 = $src1
/*80*/        OPC_MoveChild, 1,
/*82*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*85*/        OPC_RecordMemRef,
/*86*/        OPC_RecordNode, // #1 = 'ld' chained node
/*87*/        OPC_CheckFoldableChainNode,
/*88*/        OPC_RecordChild1, // #2 = $src2
/*89*/        OPC_CheckChild1Type, MVT::i64,
/*91*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*93*/        OPC_CheckPredicate, 1, // Predicate_load
/*95*/        OPC_MoveParent,
/*96*/        OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->115
/*99*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*102*/         OPC_EmitMergeInputChains1_1,
/*103*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADD32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->133
/*117*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*120*/         OPC_EmitMergeInputChains1_1,
/*121*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADD64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*134*/     /*Scope*/ 55, /*->190*/
/*135*/       OPC_MoveChild, 0,
/*137*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*140*/       OPC_RecordMemRef,
/*141*/       OPC_RecordNode, // #0 = 'ld' chained node
/*142*/       OPC_CheckFoldableChainNode,
/*143*/       OPC_RecordChild1, // #1 = $src2
/*144*/       OPC_CheckChild1Type, MVT::i64,
/*146*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*148*/       OPC_CheckPredicate, 1, // Predicate_load
/*150*/       OPC_MoveParent,
/*151*/       OPC_RecordChild1, // #2 = $src1
/*152*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->171
/*155*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*158*/         OPC_EmitMergeInputChains1_0,
/*159*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (ADD32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->189
/*173*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*176*/         OPC_EmitMergeInputChains1_0,
/*177*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ADD64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*190*/     /*Scope*/ 16, /*->207*/
/*191*/       OPC_RecordNode, // #0 = $src
/*192*/       OPC_CheckType, MVT::i64,
/*194*/       OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*197*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr:i64:$src - Complexity = 13
              // Dst: (LA64r:i64 laaddr:i64:$src)
/*207*/     /*Scope*/ 115, /*->323*/
/*208*/       OPC_RecordChild0, // #0 = $src1
/*209*/       OPC_RecordChild1, // #1 = $src2
/*210*/       OPC_Scope, 84, /*->296*/ // 3 children in Scope
/*212*/         OPC_MoveChild, 1,
/*214*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*217*/         OPC_Scope, 39, /*->258*/ // 3 children in Scope
/*219*/           OPC_CheckPredicate, 2, // Predicate_immSExt16
/*221*/           OPC_MoveParent,
/*222*/           OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->240
/*225*/             OPC_EmitConvertToTarget, 1,
/*227*/             OPC_EmitNodeXForm, 0, 2, // LL16
/*230*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32ri16), 0,
                        2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                    // Dst: (ADD32ri16:i32:i64 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
                  /*SwitchType*/ 15,  MVT::i64,// ->257
/*242*/             OPC_EmitConvertToTarget, 1,
/*244*/             OPC_EmitNodeXForm, 0, 2, // LL16
/*247*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64ri16), 0,
                        2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                    // Dst: (ADD64ri16:i64:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
                  0, // EndSwitchType
/*258*/         /*Scope*/ 20, /*->279*/
/*259*/           OPC_CheckPredicate, 3, // Predicate_immSExt32
/*261*/           OPC_MoveParent,
/*262*/           OPC_CheckType, MVT::i64,
/*264*/           OPC_EmitConvertToTarget, 1,
/*266*/           OPC_EmitNodeXForm, 1, 2, // LO32
/*269*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64ri32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (ADD64ri32:i64:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*279*/         /*Scope*/ 15, /*->295*/
/*280*/           OPC_MoveParent,
/*281*/           OPC_CheckType, MVT::i32,
/*283*/           OPC_EmitConvertToTarget, 1,
/*285*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32ri), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (ADD32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*295*/         0, /*End of Scope*/
/*296*/       /*Scope*/ 12, /*->309*/
/*297*/         OPC_CheckType, MVT::i32,
/*299*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (ADD32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*309*/       /*Scope*/ 12, /*->322*/
/*310*/         OPC_CheckType, MVT::i64,
/*312*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (ADD64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*322*/       0, /*End of Scope*/
/*323*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,3/*411*/,  TARGET_VAL(ISD::AND),// ->739
/*328*/     OPC_Scope, 35, /*->365*/ // 5 children in Scope
/*330*/       OPC_RecordChild0, // #0 = $src1
/*331*/       OPC_MoveChild, 1,
/*333*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*336*/       OPC_RecordMemRef,
/*337*/       OPC_RecordNode, // #1 = 'ld' chained node
/*338*/       OPC_CheckFoldableChainNode,
/*339*/       OPC_RecordChild1, // #2 = $src2
/*340*/       OPC_CheckChild1Type, MVT::i64,
/*342*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*344*/       OPC_CheckPredicate, 1, // Predicate_load
/*346*/       OPC_MoveParent,
/*347*/       OPC_CheckType, MVT::i32,
/*349*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*352*/       OPC_EmitMergeInputChains1_1,
/*353*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (and:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (AND32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*365*/     /*Scope*/ 35, /*->401*/
/*366*/       OPC_MoveChild, 0,
/*368*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*371*/       OPC_RecordMemRef,
/*372*/       OPC_RecordNode, // #0 = 'ld' chained node
/*373*/       OPC_CheckFoldableChainNode,
/*374*/       OPC_RecordChild1, // #1 = $src2
/*375*/       OPC_CheckChild1Type, MVT::i64,
/*377*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*379*/       OPC_CheckPredicate, 1, // Predicate_load
/*381*/       OPC_MoveParent,
/*382*/       OPC_RecordChild1, // #2 = $src1
/*383*/       OPC_CheckType, MVT::i32,
/*385*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*388*/       OPC_EmitMergeInputChains1_0,
/*389*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (and:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (AND32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*401*/     /*Scope*/ 55, /*->457*/
/*402*/       OPC_RecordChild0, // #0 = $src1
/*403*/       OPC_MoveChild, 1,
/*405*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*408*/       OPC_RecordMemRef,
/*409*/       OPC_RecordNode, // #1 = 'ld' chained node
/*410*/       OPC_CheckFoldableChainNode,
/*411*/       OPC_RecordChild1, // #2 = $src2
/*412*/       OPC_CheckChild1Type, MVT::i64,
/*414*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*416*/       OPC_CheckPredicate, 1, // Predicate_load
/*418*/       OPC_MoveParent,
/*419*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->438
/*422*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*425*/         OPC_EmitMergeInputChains1_1,
/*426*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AND32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->456
/*440*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*443*/         OPC_EmitMergeInputChains1_1,
/*444*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AND64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*457*/     /*Scope*/ 55, /*->513*/
/*458*/       OPC_MoveChild, 0,
/*460*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*463*/       OPC_RecordMemRef,
/*464*/       OPC_RecordNode, // #0 = 'ld' chained node
/*465*/       OPC_CheckFoldableChainNode,
/*466*/       OPC_RecordChild1, // #1 = $src2
/*467*/       OPC_CheckChild1Type, MVT::i64,
/*469*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*471*/       OPC_CheckPredicate, 1, // Predicate_load
/*473*/       OPC_MoveParent,
/*474*/       OPC_RecordChild1, // #2 = $src1
/*475*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->494
/*478*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*481*/         OPC_EmitMergeInputChains1_0,
/*482*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (AND32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->512
/*496*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*499*/         OPC_EmitMergeInputChains1_0,
/*500*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (AND64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*513*/     /*Scope*/ 95|128,1/*223*/, /*->738*/
/*515*/       OPC_RecordChild0, // #0 = $src1
/*516*/       OPC_RecordChild1, // #1 = $src2
/*517*/       OPC_Scope, 63|128,1/*191*/, /*->711*/ // 3 children in Scope
/*520*/         OPC_MoveChild, 1,
/*522*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*525*/         OPC_Scope, 20, /*->547*/ // 9 children in Scope
/*527*/           OPC_CheckPredicate, 4, // Predicate_i32ll16c
/*529*/           OPC_MoveParent,
/*530*/           OPC_CheckType, MVT::i32,
/*532*/           OPC_EmitConvertToTarget, 1,
/*534*/           OPC_EmitNodeXForm, 0, 2, // LL16
/*537*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rill16), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32ll16c>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (AND32rill16:i32:i64 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*547*/         /*Scope*/ 20, /*->568*/
/*548*/           OPC_CheckPredicate, 5, // Predicate_i64ll16c
/*550*/           OPC_MoveParent,
/*551*/           OPC_CheckType, MVT::i64,
/*553*/           OPC_EmitConvertToTarget, 1,
/*555*/           OPC_EmitNodeXForm, 0, 2, // LL16
/*558*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rill16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64ll16c>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (AND64rill16:i64:i64 GR64:i64:$src1, (LL16:i32 (imm:i64):$src2))
/*568*/         /*Scope*/ 20, /*->589*/
/*569*/           OPC_CheckPredicate, 6, // Predicate_i32lh16c
/*571*/           OPC_MoveParent,
/*572*/           OPC_CheckType, MVT::i32,
/*574*/           OPC_EmitConvertToTarget, 1,
/*576*/           OPC_EmitNodeXForm, 2, 2, // LH16
/*579*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rilh16), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32lh16c>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (AND32rilh16:i32:i64 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
/*589*/         /*Scope*/ 20, /*->610*/
/*590*/           OPC_CheckPredicate, 7, // Predicate_i64lh16c
/*592*/           OPC_MoveParent,
/*593*/           OPC_CheckType, MVT::i64,
/*595*/           OPC_EmitConvertToTarget, 1,
/*597*/           OPC_EmitNodeXForm, 2, 2, // LH16
/*600*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rilh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lh16c>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (AND64rilh16:i64:i64 GR64:i64:$src1, (LH16:i32 (imm:i64):$src2))
/*610*/         /*Scope*/ 20, /*->631*/
/*611*/           OPC_CheckPredicate, 8, // Predicate_i64hl16c
/*613*/           OPC_MoveParent,
/*614*/           OPC_CheckType, MVT::i64,
/*616*/           OPC_EmitConvertToTarget, 1,
/*618*/           OPC_EmitNodeXForm, 3, 2, // HL16
/*621*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rihl16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hl16c>><<X:HL16>>:$src2) - Complexity = 7
                  // Dst: (AND64rihl16:i64:i64 GR64:i64:$src1, (HL16:i32 (imm:i64):$src2))
/*631*/         /*Scope*/ 20, /*->652*/
/*632*/           OPC_CheckPredicate, 9, // Predicate_i64hh16c
/*634*/           OPC_MoveParent,
/*635*/           OPC_CheckType, MVT::i64,
/*637*/           OPC_EmitConvertToTarget, 1,
/*639*/           OPC_EmitNodeXForm, 4, 2, // HH16
/*642*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rihh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hh16c>><<X:HH16>>:$src2) - Complexity = 7
                  // Dst: (AND64rihh16:i64:i64 GR64:i64:$src1, (HH16:i32 (imm:i64):$src2))
/*652*/         /*Scope*/ 20, /*->673*/
/*653*/           OPC_CheckPredicate, 10, // Predicate_i64lo32c
/*655*/           OPC_MoveParent,
/*656*/           OPC_CheckType, MVT::i64,
/*658*/           OPC_EmitConvertToTarget, 1,
/*660*/           OPC_EmitNodeXForm, 1, 2, // LO32
/*663*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rilo32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lo32c>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (AND64rilo32:i64:i64 GR64:i64:$src1, (LO32:i32 (imm:i64):$src2))
/*673*/         /*Scope*/ 20, /*->694*/
/*674*/           OPC_CheckPredicate, 11, // Predicate_i64hi32c
/*676*/           OPC_MoveParent,
/*677*/           OPC_CheckType, MVT::i64,
/*679*/           OPC_EmitConvertToTarget, 1,
/*681*/           OPC_EmitNodeXForm, 5, 2, // HI32
/*684*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rihi32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hi32c>><<X:HI32>>:$src2) - Complexity = 7
                  // Dst: (AND64rihi32:i64:i64 GR64:i64:$src1, (HI32:i32 (imm:i64):$src2))
/*694*/         /*Scope*/ 15, /*->710*/
/*695*/           OPC_MoveParent,
/*696*/           OPC_CheckType, MVT::i32,
/*698*/           OPC_EmitConvertToTarget, 1,
/*700*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32ri), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (AND32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*710*/         0, /*End of Scope*/
/*711*/       /*Scope*/ 12, /*->724*/
/*712*/         OPC_CheckType, MVT::i32,
/*714*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (AND32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*724*/       /*Scope*/ 12, /*->737*/
/*725*/         OPC_CheckType, MVT::i64,
/*727*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (AND64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*737*/       0, /*End of Scope*/
/*738*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,3/*428*/,  TARGET_VAL(ISD::OR),// ->1171
/*743*/     OPC_Scope, 35, /*->780*/ // 6 children in Scope
/*745*/       OPC_RecordChild0, // #0 = $src1
/*746*/       OPC_MoveChild, 1,
/*748*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*751*/       OPC_RecordMemRef,
/*752*/       OPC_RecordNode, // #1 = 'ld' chained node
/*753*/       OPC_CheckFoldableChainNode,
/*754*/       OPC_RecordChild1, // #2 = $src2
/*755*/       OPC_CheckChild1Type, MVT::i64,
/*757*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*759*/       OPC_CheckPredicate, 1, // Predicate_load
/*761*/       OPC_MoveParent,
/*762*/       OPC_CheckType, MVT::i32,
/*764*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*767*/       OPC_EmitMergeInputChains1_1,
/*768*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (OR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*780*/     /*Scope*/ 35, /*->816*/
/*781*/       OPC_MoveChild, 0,
/*783*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*786*/       OPC_RecordMemRef,
/*787*/       OPC_RecordNode, // #0 = 'ld' chained node
/*788*/       OPC_CheckFoldableChainNode,
/*789*/       OPC_RecordChild1, // #1 = $src2
/*790*/       OPC_CheckChild1Type, MVT::i64,
/*792*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*794*/       OPC_CheckPredicate, 1, // Predicate_load
/*796*/       OPC_MoveParent,
/*797*/       OPC_RecordChild1, // #2 = $src1
/*798*/       OPC_CheckType, MVT::i32,
/*800*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*803*/       OPC_EmitMergeInputChains1_0,
/*804*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (OR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*816*/     /*Scope*/ 55, /*->872*/
/*817*/       OPC_RecordChild0, // #0 = $src1
/*818*/       OPC_MoveChild, 1,
/*820*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*823*/       OPC_RecordMemRef,
/*824*/       OPC_RecordNode, // #1 = 'ld' chained node
/*825*/       OPC_CheckFoldableChainNode,
/*826*/       OPC_RecordChild1, // #2 = $src2
/*827*/       OPC_CheckChild1Type, MVT::i64,
/*829*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*831*/       OPC_CheckPredicate, 1, // Predicate_load
/*833*/       OPC_MoveParent,
/*834*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->853
/*837*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*840*/         OPC_EmitMergeInputChains1_1,
/*841*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (OR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->871
/*855*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*858*/         OPC_EmitMergeInputChains1_1,
/*859*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (OR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*872*/     /*Scope*/ 55, /*->928*/
/*873*/       OPC_MoveChild, 0,
/*875*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*878*/       OPC_RecordMemRef,
/*879*/       OPC_RecordNode, // #0 = 'ld' chained node
/*880*/       OPC_CheckFoldableChainNode,
/*881*/       OPC_RecordChild1, // #1 = $src2
/*882*/       OPC_CheckChild1Type, MVT::i64,
/*884*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*886*/       OPC_CheckPredicate, 1, // Predicate_load
/*888*/       OPC_MoveParent,
/*889*/       OPC_RecordChild1, // #2 = $src1
/*890*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->909
/*893*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*896*/         OPC_EmitMergeInputChains1_0,
/*897*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (OR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->927
/*911*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*914*/         OPC_EmitMergeInputChains1_0,
/*915*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (OR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*928*/     /*Scope*/ 16, /*->945*/
/*929*/       OPC_RecordNode, // #0 = $src
/*930*/       OPC_CheckType, MVT::i64,
/*932*/       OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*935*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr:i64:$src - Complexity = 13
              // Dst: (LA64r:i64 laaddr:i64:$src)
/*945*/     /*Scope*/ 95|128,1/*223*/, /*->1170*/
/*947*/       OPC_RecordChild0, // #0 = $src1
/*948*/       OPC_RecordChild1, // #1 = $src2
/*949*/       OPC_Scope, 63|128,1/*191*/, /*->1143*/ // 3 children in Scope
/*952*/         OPC_MoveChild, 1,
/*954*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*957*/         OPC_Scope, 20, /*->979*/ // 9 children in Scope
/*959*/           OPC_CheckPredicate, 12, // Predicate_i32ll16
/*961*/           OPC_MoveParent,
/*962*/           OPC_CheckType, MVT::i32,
/*964*/           OPC_EmitConvertToTarget, 1,
/*966*/           OPC_EmitNodeXForm, 0, 2, // LL16
/*969*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32ri16), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32ll16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (OR32ri16:i32:i64 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*979*/         /*Scope*/ 20, /*->1000*/
/*980*/           OPC_CheckPredicate, 13, // Predicate_i32lh16
/*982*/           OPC_MoveParent,
/*983*/           OPC_CheckType, MVT::i32,
/*985*/           OPC_EmitConvertToTarget, 1,
/*987*/           OPC_EmitNodeXForm, 2, 2, // LH16
/*990*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32ri16h), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32lh16>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (OR32ri16h:i32:i64 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
/*1000*/        /*Scope*/ 20, /*->1021*/
/*1001*/          OPC_CheckPredicate, 14, // Predicate_i64ll16
/*1003*/          OPC_MoveParent,
/*1004*/          OPC_CheckType, MVT::i64,
/*1006*/          OPC_EmitConvertToTarget, 1,
/*1008*/          OPC_EmitNodeXForm, 0, 2, // LL16
/*1011*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rill16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64ll16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (OR64rill16:i64:i64 GR64:i64:$src1, (LL16:i32 (imm:i64):$src2))
/*1021*/        /*Scope*/ 20, /*->1042*/
/*1022*/          OPC_CheckPredicate, 15, // Predicate_i64lh16
/*1024*/          OPC_MoveParent,
/*1025*/          OPC_CheckType, MVT::i64,
/*1027*/          OPC_EmitConvertToTarget, 1,
/*1029*/          OPC_EmitNodeXForm, 2, 2, // LH16
/*1032*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rilh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lh16>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (OR64rilh16:i64:i64 GR64:i64:$src1, (LH16:i32 (imm:i64):$src2))
/*1042*/        /*Scope*/ 20, /*->1063*/
/*1043*/          OPC_CheckPredicate, 16, // Predicate_i64hl16
/*1045*/          OPC_MoveParent,
/*1046*/          OPC_CheckType, MVT::i64,
/*1048*/          OPC_EmitConvertToTarget, 1,
/*1050*/          OPC_EmitNodeXForm, 3, 2, // HL16
/*1053*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rihl16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hl16>><<X:HL16>>:$src2) - Complexity = 7
                  // Dst: (OR64rihl16:i64:i64 GR64:i64:$src1, (HL16:i32 (imm:i64):$src2))
/*1063*/        /*Scope*/ 20, /*->1084*/
/*1064*/          OPC_CheckPredicate, 17, // Predicate_i64hh16
/*1066*/          OPC_MoveParent,
/*1067*/          OPC_CheckType, MVT::i64,
/*1069*/          OPC_EmitConvertToTarget, 1,
/*1071*/          OPC_EmitNodeXForm, 4, 2, // HH16
/*1074*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rihh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hh16>><<X:HH16>>:$src2) - Complexity = 7
                  // Dst: (OR64rihh16:i64:i64 GR64:i64:$src1, (HH16:i32 (imm:i64):$src2))
/*1084*/        /*Scope*/ 20, /*->1105*/
/*1085*/          OPC_CheckPredicate, 18, // Predicate_i64lo32
/*1087*/          OPC_MoveParent,
/*1088*/          OPC_CheckType, MVT::i64,
/*1090*/          OPC_EmitConvertToTarget, 1,
/*1092*/          OPC_EmitNodeXForm, 1, 2, // LO32
/*1095*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rilo32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lo32>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (OR64rilo32:i64:i64 GR64:i64:$src1, (LO32:i32 (imm:i64):$src2))
/*1105*/        /*Scope*/ 20, /*->1126*/
/*1106*/          OPC_CheckPredicate, 19, // Predicate_i64hi32
/*1108*/          OPC_MoveParent,
/*1109*/          OPC_CheckType, MVT::i64,
/*1111*/          OPC_EmitConvertToTarget, 1,
/*1113*/          OPC_EmitNodeXForm, 5, 2, // HI32
/*1116*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rihi32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hi32>><<X:HI32>>:$src2) - Complexity = 7
                  // Dst: (OR64rihi32:i64:i64 GR64:i64:$src1, (HI32:i32 (imm:i64):$src2))
/*1126*/        /*Scope*/ 15, /*->1142*/
/*1127*/          OPC_MoveParent,
/*1128*/          OPC_CheckType, MVT::i32,
/*1130*/          OPC_EmitConvertToTarget, 1,
/*1132*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32ri), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (OR32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*1142*/        0, /*End of Scope*/
/*1143*/      /*Scope*/ 12, /*->1156*/
/*1144*/        OPC_CheckType, MVT::i32,
/*1146*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (OR32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*1156*/      /*Scope*/ 12, /*->1169*/
/*1157*/        OPC_CheckType, MVT::i64,
/*1159*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (OR64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*1169*/      0, /*End of Scope*/
/*1170*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,1/*179*/,  TARGET_VAL(ISD::SUB),// ->1354
/*1175*/    OPC_Scope, 75, /*->1252*/ // 4 children in Scope
/*1177*/      OPC_RecordChild0, // #0 = $src1
/*1178*/      OPC_MoveChild, 1,
/*1180*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1183*/      OPC_RecordMemRef,
/*1184*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1185*/      OPC_CheckFoldableChainNode,
/*1186*/      OPC_RecordChild1, // #2 = $src2
/*1187*/      OPC_CheckChild1Type, MVT::i64,
/*1189*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1191*/      OPC_CheckPredicate, 1, // Predicate_load
/*1193*/      OPC_MoveParent,
/*1194*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->1233
/*1197*/        OPC_Scope, 16, /*->1215*/ // 2 children in Scope
/*1199*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1202*/          OPC_EmitMergeInputChains1_1,
/*1203*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
                  // Dst: (SUB32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1215*/        /*Scope*/ 16, /*->1232*/
/*1216*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1219*/          OPC_EmitMergeInputChains1_1,
/*1220*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SUB32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
/*1232*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->1251
/*1235*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1238*/        OPC_EmitMergeInputChains1_1,
/*1239*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SUB64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1252*/    /*Scope*/ 16, /*->1269*/
/*1253*/      OPC_RecordNode, // #0 = $src
/*1254*/      OPC_CheckType, MVT::i64,
/*1256*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*1259*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr:i64:$src - Complexity = 13
              // Dst: (LA64r:i64 laaddr:i64:$src)
/*1269*/    /*Scope*/ 54, /*->1324*/
/*1270*/      OPC_MoveChild, 0,
/*1272*/      OPC_CheckInteger, 0, 
/*1274*/      OPC_MoveParent,
/*1275*/      OPC_Scope, 20, /*->1297*/ // 2 children in Scope
/*1277*/        OPC_MoveChild, 1,
/*1279*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*1282*/        OPC_RecordChild0, // #0 = $src
/*1283*/        OPC_CheckChild0Type, MVT::i32,
/*1285*/        OPC_MoveParent,
/*1286*/        OPC_CheckType, MVT::i64,
/*1288*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NEG64rr32), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                // Dst: (NEG64rr32:i64:i64 GR32:i32:$src)
/*1297*/      /*Scope*/ 25, /*->1323*/
/*1298*/        OPC_RecordChild1, // #0 = $src
/*1299*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1311
/*1302*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NEG32rr), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sub:i32 0:i32, GR32:i32:$src) - Complexity = 8
                  // Dst: (NEG32rr:i32:i64 GR32:i32:$src)
                /*SwitchType*/ 9,  MVT::i64,// ->1322
/*1313*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NEG64rr), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sub:i64 0:i64, GR64:i64:$src) - Complexity = 8
                  // Dst: (NEG64rr:i64:i64 GR64:i64:$src)
                0, // EndSwitchType
/*1323*/      0, /*End of Scope*/
/*1324*/    /*Scope*/ 28, /*->1353*/
/*1325*/      OPC_RecordChild0, // #0 = $src1
/*1326*/      OPC_RecordChild1, // #1 = $src2
/*1327*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->1340
/*1330*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (SUB32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 10,  MVT::i64,// ->1352
/*1342*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (SUB64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*1353*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(ISD::XOR),// ->1596
/*1358*/    OPC_Scope, 35, /*->1395*/ // 5 children in Scope
/*1360*/      OPC_RecordChild0, // #0 = $src1
/*1361*/      OPC_MoveChild, 1,
/*1363*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1366*/      OPC_RecordMemRef,
/*1367*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1368*/      OPC_CheckFoldableChainNode,
/*1369*/      OPC_RecordChild1, // #2 = $src2
/*1370*/      OPC_CheckChild1Type, MVT::i64,
/*1372*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1374*/      OPC_CheckPredicate, 1, // Predicate_load
/*1376*/      OPC_MoveParent,
/*1377*/      OPC_CheckType, MVT::i32,
/*1379*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1382*/      OPC_EmitMergeInputChains1_1,
/*1383*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (xor:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (XOR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1395*/    /*Scope*/ 35, /*->1431*/
/*1396*/      OPC_MoveChild, 0,
/*1398*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1401*/      OPC_RecordMemRef,
/*1402*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1403*/      OPC_CheckFoldableChainNode,
/*1404*/      OPC_RecordChild1, // #1 = $src2
/*1405*/      OPC_CheckChild1Type, MVT::i64,
/*1407*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1409*/      OPC_CheckPredicate, 1, // Predicate_load
/*1411*/      OPC_MoveParent,
/*1412*/      OPC_RecordChild1, // #2 = $src1
/*1413*/      OPC_CheckType, MVT::i32,
/*1415*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*1418*/      OPC_EmitMergeInputChains1_0,
/*1419*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (xor:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (XOR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1431*/    /*Scope*/ 55, /*->1487*/
/*1432*/      OPC_RecordChild0, // #0 = $src1
/*1433*/      OPC_MoveChild, 1,
/*1435*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1438*/      OPC_RecordMemRef,
/*1439*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1440*/      OPC_CheckFoldableChainNode,
/*1441*/      OPC_RecordChild1, // #2 = $src2
/*1442*/      OPC_CheckChild1Type, MVT::i64,
/*1444*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1446*/      OPC_CheckPredicate, 1, // Predicate_load
/*1448*/      OPC_MoveParent,
/*1449*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->1468
/*1452*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1455*/        OPC_EmitMergeInputChains1_1,
/*1456*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XOR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->1486
/*1470*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1473*/        OPC_EmitMergeInputChains1_1,
/*1474*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XOR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1487*/    /*Scope*/ 55, /*->1543*/
/*1488*/      OPC_MoveChild, 0,
/*1490*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1493*/      OPC_RecordMemRef,
/*1494*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1495*/      OPC_CheckFoldableChainNode,
/*1496*/      OPC_RecordChild1, // #1 = $src2
/*1497*/      OPC_CheckChild1Type, MVT::i64,
/*1499*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1501*/      OPC_CheckPredicate, 1, // Predicate_load
/*1503*/      OPC_MoveParent,
/*1504*/      OPC_RecordChild1, // #2 = $src1
/*1505*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->1524
/*1508*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1511*/        OPC_EmitMergeInputChains1_0,
/*1512*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (XOR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->1542
/*1526*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1529*/        OPC_EmitMergeInputChains1_0,
/*1530*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (XOR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1543*/    /*Scope*/ 51, /*->1595*/
/*1544*/      OPC_RecordChild0, // #0 = $src1
/*1545*/      OPC_RecordChild1, // #1 = $src2
/*1546*/      OPC_Scope, 20, /*->1568*/ // 3 children in Scope
/*1548*/        OPC_MoveChild, 1,
/*1550*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1553*/        OPC_MoveParent,
/*1554*/        OPC_CheckType, MVT::i32,
/*1556*/        OPC_EmitConvertToTarget, 1,
/*1558*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32ri), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (xor:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                // Dst: (XOR32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*1568*/      /*Scope*/ 12, /*->1581*/
/*1569*/        OPC_CheckType, MVT::i32,
/*1571*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (XOR32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*1581*/      /*Scope*/ 12, /*->1594*/
/*1582*/        OPC_CheckType, MVT::i64,
/*1584*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (XOR64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*1594*/      0, /*End of Scope*/
/*1595*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 86|128,2/*342*/,  TARGET_VAL(ISD::MUL),// ->1942
/*1600*/    OPC_Scope, 34, /*->1636*/ // 7 children in Scope
/*1602*/      OPC_RecordChild0, // #0 = $src1
/*1603*/      OPC_MoveChild, 1,
/*1605*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1608*/      OPC_RecordMemRef,
/*1609*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1610*/      OPC_CheckFoldableChainNode,
/*1611*/      OPC_RecordChild1, // #2 = $src2
/*1612*/      OPC_CheckChild1Type, MVT::i64,
/*1614*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1616*/      OPC_CheckPredicate, 1, // Predicate_load
/*1618*/      OPC_MoveParent,
/*1619*/      OPC_CheckType, MVT::i32,
/*1621*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1624*/      OPC_EmitMergeInputChains1_1,
/*1625*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (mul:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (MUL32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1636*/    /*Scope*/ 34, /*->1671*/
/*1637*/      OPC_MoveChild, 0,
/*1639*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1642*/      OPC_RecordMemRef,
/*1643*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1644*/      OPC_CheckFoldableChainNode,
/*1645*/      OPC_RecordChild1, // #1 = $src2
/*1646*/      OPC_CheckChild1Type, MVT::i64,
/*1648*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1650*/      OPC_CheckPredicate, 1, // Predicate_load
/*1652*/      OPC_MoveParent,
/*1653*/      OPC_RecordChild1, // #2 = $src1
/*1654*/      OPC_CheckType, MVT::i32,
/*1656*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*1659*/      OPC_EmitMergeInputChains1_0,
/*1660*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (mul:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (MUL32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1671*/    /*Scope*/ 53, /*->1725*/
/*1672*/      OPC_RecordChild0, // #0 = $src1
/*1673*/      OPC_MoveChild, 1,
/*1675*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1678*/      OPC_RecordMemRef,
/*1679*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1680*/      OPC_CheckFoldableChainNode,
/*1681*/      OPC_RecordChild1, // #2 = $src2
/*1682*/      OPC_CheckChild1Type, MVT::i64,
/*1684*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1686*/      OPC_CheckPredicate, 1, // Predicate_load
/*1688*/      OPC_MoveParent,
/*1689*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->1707
/*1692*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1695*/        OPC_EmitMergeInputChains1_1,
/*1696*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MUL32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 15,  MVT::i64,// ->1724
/*1709*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1712*/        OPC_EmitMergeInputChains1_1,
/*1713*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MUL64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1725*/    /*Scope*/ 53, /*->1779*/
/*1726*/      OPC_MoveChild, 0,
/*1728*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1731*/      OPC_RecordMemRef,
/*1732*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1733*/      OPC_CheckFoldableChainNode,
/*1734*/      OPC_RecordChild1, // #1 = $src2
/*1735*/      OPC_CheckChild1Type, MVT::i64,
/*1737*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1739*/      OPC_CheckPredicate, 1, // Predicate_load
/*1741*/      OPC_MoveParent,
/*1742*/      OPC_RecordChild1, // #2 = $src1
/*1743*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->1761
/*1746*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1749*/        OPC_EmitMergeInputChains1_0,
/*1750*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (MUL32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 15,  MVT::i64,// ->1778
/*1763*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1766*/        OPC_EmitMergeInputChains1_0,
/*1767*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (MUL64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1779*/    /*Scope*/ 112, /*->1892*/
/*1780*/      OPC_RecordChild0, // #0 = $src1
/*1781*/      OPC_Scope, 87, /*->1870*/ // 2 children in Scope
/*1783*/        OPC_RecordChild1, // #1 = $src2
/*1784*/        OPC_MoveChild, 1,
/*1786*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1789*/        OPC_Scope, 21, /*->1812*/ // 4 children in Scope
/*1791*/          OPC_CheckPredicate, 20, // Predicate_i64immSExt32
/*1793*/          OPC_MoveParent,
/*1794*/          OPC_CheckType, MVT::i64,
/*1796*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*1798*/          OPC_EmitConvertToTarget, 1,
/*1800*/          OPC_EmitNodeXForm, 1, 2, // LO32
/*1803*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64ri32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immSExt32>><<X:LO32>>:$src2) - Complexity = 9
                  // Dst: (MUL64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*1812*/        /*Scope*/ 16, /*->1829*/
/*1813*/          OPC_MoveParent,
/*1814*/          OPC_CheckType, MVT::i32,
/*1816*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*1818*/          OPC_EmitConvertToTarget, 1,
/*1820*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32ri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 8
                  // Dst: (MUL32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
/*1829*/        /*Scope*/ 19, /*->1849*/
/*1830*/          OPC_CheckPredicate, 21, // Predicate_i32immSExt16
/*1832*/          OPC_MoveParent,
/*1833*/          OPC_CheckType, MVT::i32,
/*1835*/          OPC_EmitConvertToTarget, 1,
/*1837*/          OPC_EmitNodeXForm, 0, 2, // LL16
/*1840*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32ri16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (MUL32ri16:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*1849*/        /*Scope*/ 19, /*->1869*/
/*1850*/          OPC_CheckPredicate, 2, // Predicate_immSExt16
/*1852*/          OPC_MoveParent,
/*1853*/          OPC_CheckType, MVT::i64,
/*1855*/          OPC_EmitConvertToTarget, 1,
/*1857*/          OPC_EmitNodeXForm, 0, 2, // LL16
/*1860*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64ri16), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (MUL64ri16:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
/*1869*/        0, /*End of Scope*/
/*1870*/      /*Scope*/ 20, /*->1891*/
/*1871*/        OPC_MoveChild, 1,
/*1873*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*1876*/        OPC_RecordChild0, // #1 = $src2
/*1877*/        OPC_CheckChild0Type, MVT::i32,
/*1879*/        OPC_MoveParent,
/*1880*/        OPC_CheckType, MVT::i64,
/*1882*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MULSX64rr32), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (MULSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
/*1891*/      0, /*End of Scope*/
/*1892*/    /*Scope*/ 21, /*->1914*/
/*1893*/      OPC_MoveChild, 0,
/*1895*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*1898*/      OPC_RecordChild0, // #0 = $src2
/*1899*/      OPC_CheckChild0Type, MVT::i32,
/*1901*/      OPC_MoveParent,
/*1902*/      OPC_RecordChild1, // #1 = $src1
/*1903*/      OPC_CheckType, MVT::i64,
/*1905*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MULSX64rr32), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (MULSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
/*1914*/    /*Scope*/ 26, /*->1941*/
/*1915*/      OPC_RecordChild0, // #0 = $src1
/*1916*/      OPC_RecordChild1, // #1 = $src2
/*1917*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1929
/*1920*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (MUL32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->1940
/*1931*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (MUL64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*1941*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,2/*261*/,  TARGET_VAL(SystemZISD::CMP),// ->2207
/*1946*/    OPC_RecordChild0, // #0 = $src1
/*1947*/    OPC_Scope, 87, /*->2036*/ // 4 children in Scope
/*1949*/      OPC_CheckChild0Type, MVT::i32,
/*1951*/      OPC_Scope, 50, /*->2003*/ // 2 children in Scope
/*1953*/        OPC_MoveChild, 1,
/*1955*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1958*/        OPC_RecordMemRef,
/*1959*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1960*/        OPC_CheckFoldableChainNode,
/*1961*/        OPC_RecordChild1, // #2 = $src2
/*1962*/        OPC_CheckChild1Type, MVT::i64,
/*1964*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1966*/        OPC_CheckPredicate, 1, // Predicate_load
/*1968*/        OPC_MoveParent,
/*1969*/        OPC_Scope, 15, /*->1986*/ // 2 children in Scope
/*1971*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1974*/          OPC_EmitMergeInputChains1_1,
/*1975*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
                  // Dst: (CMP32rm:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1986*/        /*Scope*/ 15, /*->2002*/
/*1987*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1990*/          OPC_EmitMergeInputChains1_1,
/*1991*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CMP32rmy:i64 GR32:i32:$src1, rriaddr:i64:$src2)
/*2002*/        0, /*End of Scope*/
/*2003*/      /*Scope*/ 31, /*->2035*/
/*2004*/        OPC_RecordChild1, // #1 = $src2
/*2005*/        OPC_Scope, 17, /*->2024*/ // 2 children in Scope
/*2007*/          OPC_MoveChild, 1,
/*2009*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2012*/          OPC_MoveParent,
/*2013*/          OPC_EmitConvertToTarget, 1,
/*2015*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32ri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (CMP32ri:i64 GR32:i32:$src1, (imm:i32):$src2)
/*2024*/        /*Scope*/ 9, /*->2034*/
/*2025*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                  // Dst: (CMP32rr:i64 GR32:i32:$src1, GR32:i32:$src2)
/*2034*/        0, /*End of Scope*/
/*2035*/      0, /*End of Scope*/
/*2036*/    /*Scope*/ 73, /*->2110*/
/*2037*/      OPC_CheckChild0Type, MVT::i64,
/*2039*/      OPC_Scope, 31, /*->2072*/ // 2 children in Scope
/*2041*/        OPC_MoveChild, 1,
/*2043*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2046*/        OPC_RecordMemRef,
/*2047*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2048*/        OPC_CheckFoldableChainNode,
/*2049*/        OPC_RecordChild1, // #2 = $src2
/*2050*/        OPC_CheckChild1Type, MVT::i64,
/*2052*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2054*/        OPC_CheckPredicate, 1, // Predicate_load
/*2056*/        OPC_MoveParent,
/*2057*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2060*/        OPC_EmitMergeInputChains1_1,
/*2061*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (SystemZcmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (CMP64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2072*/      /*Scope*/ 36, /*->2109*/
/*2073*/        OPC_RecordChild1, // #1 = $src2
/*2074*/        OPC_Scope, 22, /*->2098*/ // 2 children in Scope
/*2076*/          OPC_MoveChild, 1,
/*2078*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2081*/          OPC_CheckPredicate, 20, // Predicate_i64immSExt32
/*2083*/          OPC_MoveParent,
/*2084*/          OPC_EmitConvertToTarget, 1,
/*2086*/          OPC_EmitNodeXForm, 1, 2, // LO32
/*2089*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP64ri32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (SystemZcmp:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (CMP64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*2098*/        /*Scope*/ 9, /*->2108*/
/*2099*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP64rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZcmp:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                  // Dst: (CMP64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
/*2108*/        0, /*End of Scope*/
/*2109*/      0, /*End of Scope*/
/*2110*/    /*Scope*/ 47, /*->2158*/
/*2111*/      OPC_CheckChild0Type, MVT::f32,
/*2113*/      OPC_Scope, 31, /*->2146*/ // 2 children in Scope
/*2115*/        OPC_MoveChild, 1,
/*2117*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2120*/        OPC_RecordMemRef,
/*2121*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2122*/        OPC_CheckFoldableChainNode,
/*2123*/        OPC_RecordChild1, // #2 = $src2
/*2124*/        OPC_CheckChild1Type, MVT::i64,
/*2126*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2128*/        OPC_CheckPredicate, 1, // Predicate_load
/*2130*/        OPC_MoveParent,
/*2131*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*2134*/        OPC_EmitMergeInputChains1_1,
/*2135*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (SystemZcmp:i64 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FCMP32rm:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
/*2146*/      /*Scope*/ 10, /*->2157*/
/*2147*/        OPC_RecordChild1, // #1 = $src2
/*2148*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP32rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (SystemZcmp:i64 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FCMP32rr:i64 FP32:f32:$src1, FP32:f32:$src2)
/*2157*/      0, /*End of Scope*/
/*2158*/    /*Scope*/ 47, /*->2206*/
/*2159*/      OPC_CheckChild0Type, MVT::f64,
/*2161*/      OPC_Scope, 31, /*->2194*/ // 2 children in Scope
/*2163*/        OPC_MoveChild, 1,
/*2165*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2168*/        OPC_RecordMemRef,
/*2169*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2170*/        OPC_CheckFoldableChainNode,
/*2171*/        OPC_RecordChild1, // #2 = $src2
/*2172*/        OPC_CheckChild1Type, MVT::i64,
/*2174*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2176*/        OPC_CheckPredicate, 1, // Predicate_load
/*2178*/        OPC_MoveParent,
/*2179*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*2182*/        OPC_EmitMergeInputChains1_1,
/*2183*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (SystemZcmp:i64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FCMP64rm:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
/*2194*/      /*Scope*/ 10, /*->2205*/
/*2195*/        OPC_RecordChild1, // #1 = $src2
/*2196*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP64rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (SystemZcmp:i64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FCMP64rr:i64 FP64:f64:$src1, FP64:f64:$src2)
/*2205*/      0, /*End of Scope*/
/*2206*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 118|128,1/*246*/,  TARGET_VAL(SystemZISD::UCMP),// ->2457
/*2211*/    OPC_RecordChild0, // #0 = $src1
/*2212*/    OPC_Scope, 87, /*->2301*/ // 2 children in Scope
/*2214*/      OPC_CheckChild0Type, MVT::i32,
/*2216*/      OPC_Scope, 50, /*->2268*/ // 2 children in Scope
/*2218*/        OPC_MoveChild, 1,
/*2220*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2223*/        OPC_RecordMemRef,
/*2224*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2225*/        OPC_CheckFoldableChainNode,
/*2226*/        OPC_RecordChild1, // #2 = $src2
/*2227*/        OPC_CheckChild1Type, MVT::i64,
/*2229*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2231*/        OPC_CheckPredicate, 1, // Predicate_load
/*2233*/        OPC_MoveParent,
/*2234*/        OPC_Scope, 15, /*->2251*/ // 2 children in Scope
/*2236*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*2239*/          OPC_EmitMergeInputChains1_1,
/*2240*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
                  // Dst: (UCMP32rm:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*2251*/        /*Scope*/ 15, /*->2267*/
/*2252*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2255*/          OPC_EmitMergeInputChains1_1,
/*2256*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (UCMP32rmy:i64 GR32:i32:$src1, rriaddr:i64:$src2)
/*2267*/        0, /*End of Scope*/
/*2268*/      /*Scope*/ 31, /*->2300*/
/*2269*/        OPC_RecordChild1, // #1 = $src2
/*2270*/        OPC_Scope, 17, /*->2289*/ // 2 children in Scope
/*2272*/          OPC_MoveChild, 1,
/*2274*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2277*/          OPC_MoveParent,
/*2278*/          OPC_EmitConvertToTarget, 1,
/*2280*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32ri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (UCMP32ri:i64 GR32:i32:$src1, (imm:i32):$src2)
/*2289*/        /*Scope*/ 9, /*->2299*/
/*2290*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                  // Dst: (UCMP32rr:i64 GR32:i32:$src1, GR32:i32:$src2)
/*2299*/        0, /*End of Scope*/
/*2300*/      0, /*End of Scope*/
/*2301*/    /*Scope*/ 25|128,1/*153*/, /*->2456*/
/*2303*/      OPC_CheckChild0Type, MVT::i64,
/*2305*/      OPC_Scope, 76, /*->2383*/ // 4 children in Scope
/*2307*/        OPC_MoveChild, 1,
/*2309*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2312*/        OPC_RecordMemRef,
/*2313*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2314*/        OPC_CheckFoldableChainNode,
/*2315*/        OPC_RecordChild1, // #2 = $src2
/*2316*/        OPC_CheckChild1Type, MVT::i64,
/*2318*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2320*/        OPC_Scope, 18, /*->2340*/ // 3 children in Scope
/*2322*/          OPC_CheckPredicate, 1, // Predicate_load
/*2324*/          OPC_MoveParent,
/*2325*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2328*/          OPC_EmitMergeInputChains1_1,
/*2329*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (UCMP64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2340*/        /*Scope*/ 20, /*->2361*/
/*2341*/          OPC_CheckPredicate, 22, // Predicate_sextload
/*2343*/          OPC_CheckPredicate, 23, // Predicate_sextloadi32
/*2345*/          OPC_MoveParent,
/*2346*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2349*/          OPC_EmitMergeInputChains1_1,
/*2350*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMPSX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                  // Dst: (CMPSX64rm32:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2361*/        /*Scope*/ 20, /*->2382*/
/*2362*/          OPC_CheckPredicate, 24, // Predicate_zextload
/*2364*/          OPC_CheckPredicate, 25, // Predicate_zextloadi32
/*2366*/          OPC_MoveParent,
/*2367*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2370*/          OPC_EmitMergeInputChains1_1,
/*2371*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMPZX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                  // Dst: (UCMPZX64rm32:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2382*/        0, /*End of Scope*/
/*2383*/      /*Scope*/ 23, /*->2407*/
/*2384*/        OPC_RecordChild1, // #1 = $src2
/*2385*/        OPC_MoveChild, 1,
/*2387*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2390*/        OPC_CheckPredicate, 26, // Predicate_i64immZExt32
/*2392*/        OPC_MoveParent,
/*2393*/        OPC_EmitConvertToTarget, 1,
/*2395*/        OPC_EmitNodeXForm, 1, 2, // LO32
/*2398*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP64ri32), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (SystemZucmp:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immZExt32>><<X:LO32>>:$src2) - Complexity = 7
                // Dst: (UCMP64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*2407*/      /*Scope*/ 36, /*->2444*/
/*2408*/        OPC_MoveChild, 1,
/*2410*/        OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->2427
/*2414*/          OPC_RecordChild0, // #1 = $src2
/*2415*/          OPC_CheckChild0Type, MVT::i32,
/*2417*/          OPC_MoveParent,
/*2418*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMPSX64rr32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (CMPSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::ZERO_EXTEND),// ->2443
/*2430*/          OPC_RecordChild0, // #1 = $src2
/*2431*/          OPC_CheckChild0Type, MVT::i32,
/*2433*/          OPC_MoveParent,
/*2434*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMPZX64rr32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (UCMPZX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
                0, // EndSwitchOpcode
/*2444*/      /*Scope*/ 10, /*->2455*/
/*2445*/        OPC_RecordChild1, // #1 = $src2
/*2446*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP64rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (SystemZucmp:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (UCMP64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
/*2455*/      0, /*End of Scope*/
/*2456*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,5/*670*/,  TARGET_VAL(ISD::STORE),// ->3131
/*2461*/    OPC_RecordMemRef,
/*2462*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2463*/    OPC_Scope, 108, /*->2573*/ // 3 children in Scope
/*2465*/      OPC_RecordChild1, // #1 = $src
/*2466*/      OPC_MoveChild, 1,
/*2468*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2471*/      OPC_Scope, 34, /*->2507*/ // 2 children in Scope
/*2473*/        OPC_CheckPredicate, 21, // Predicate_i32immSExt16
/*2475*/        OPC_CheckType, MVT::i32,
/*2477*/        OPC_MoveParent,
/*2478*/        OPC_RecordChild2, // #2 = $dst
/*2479*/        OPC_CheckChild2Type, MVT::i64,
/*2481*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2483*/        OPC_CheckPredicate, 28, // Predicate_truncstore
/*2485*/        OPC_CheckPredicate, 29, // Predicate_truncstorei16
/*2487*/        OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*2489*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*2492*/        OPC_EmitMergeInputChains1_0,
/*2493*/        OPC_EmitConvertToTarget, 1,
/*2495*/        OPC_EmitNodeXForm, 0, 5, // LL16
/*2498*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (st (imm:i32)<<P:Predicate_i32immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 19
                // Dst: (MOV16mi riaddr12:i64:$dst, (LL16:i32 (imm:i32):$src))
/*2507*/      /*Scope*/ 64, /*->2572*/
/*2508*/        OPC_CheckPredicate, 2, // Predicate_immSExt16
/*2510*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->2541
/*2513*/          OPC_MoveParent,
/*2514*/          OPC_RecordChild2, // #2 = $dst
/*2515*/          OPC_CheckChild2Type, MVT::i64,
/*2517*/          OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2519*/          OPC_CheckPredicate, 30, // Predicate_store
/*2521*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*2523*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*2526*/          OPC_EmitMergeInputChains1_0,
/*2527*/          OPC_EmitConvertToTarget, 1,
/*2529*/          OPC_EmitNodeXForm, 0, 5, // LL16
/*2532*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32mi16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (MOV32mi16 riaddr12:i64:$dst, (LL16:i32 (imm:i32):$src))
                /*SwitchType*/ 28,  MVT::i64,// ->2571
/*2543*/          OPC_MoveParent,
/*2544*/          OPC_RecordChild2, // #2 = $dst
/*2545*/          OPC_CheckChild2Type, MVT::i64,
/*2547*/          OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2549*/          OPC_CheckPredicate, 30, // Predicate_store
/*2551*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*2553*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*2556*/          OPC_EmitMergeInputChains1_0,
/*2557*/          OPC_EmitConvertToTarget, 1,
/*2559*/          OPC_EmitNodeXForm, 0, 5, // LL16
/*2562*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64mi16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (MOV64mi16 riaddr12:i64:$dst, (LL16:i64 (imm:i64):$src))
                0, // EndSwitchType
/*2572*/      0, /*End of Scope*/
/*2573*/    /*Scope*/ 56, /*->2630*/
/*2574*/      OPC_MoveChild, 1,
/*2576*/      OPC_CheckOpcode, TARGET_VAL(ISD::BSWAP),
/*2579*/      OPC_RecordChild0, // #1 = $src
/*2580*/      OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->2605
/*2583*/        OPC_MoveParent,
/*2584*/        OPC_RecordChild2, // #2 = $dst
/*2585*/        OPC_CheckChild2Type, MVT::i64,
/*2587*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2589*/        OPC_CheckPredicate, 30, // Predicate_store
/*2591*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2594*/        OPC_EmitMergeInputChains1_0,
/*2595*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP32mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st (bswap:i32 GR32:i32:$src), rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                // Dst: (BSWAP32mr rriaddr:i64:$dst, GR32:i32:$src)
              /*SwitchType*/ 22,  MVT::i64,// ->2629
/*2607*/        OPC_MoveParent,
/*2608*/        OPC_RecordChild2, // #2 = $dst
/*2609*/        OPC_CheckChild2Type, MVT::i64,
/*2611*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2613*/        OPC_CheckPredicate, 30, // Predicate_store
/*2615*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2618*/        OPC_EmitMergeInputChains1_0,
/*2619*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP64mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st (bswap:i64 GR64:i64:$src), rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                // Dst: (BSWAP64mr rriaddr:i64:$dst, GR64:i64:$src)
              0, // EndSwitchType
/*2630*/    /*Scope*/ 114|128,3/*498*/, /*->3130*/
/*2632*/      OPC_RecordChild1, // #1 = $src
/*2633*/      OPC_Scope, 37, /*->2672*/ // 9 children in Scope
/*2635*/        OPC_MoveChild, 1,
/*2637*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2640*/        OPC_CheckPredicate, 31, // Predicate_i32immSExt8
/*2642*/        OPC_CheckType, MVT::i32,
/*2644*/        OPC_MoveParent,
/*2645*/        OPC_RecordChild2, // #2 = $dst
/*2646*/        OPC_CheckChild2Type, MVT::i64,
/*2648*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2650*/        OPC_CheckPredicate, 28, // Predicate_truncstore
/*2652*/        OPC_CheckPredicate, 32, // Predicate_truncstorei8
/*2654*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*2657*/        OPC_EmitMergeInputChains1_0,
/*2658*/        OPC_EmitConvertToTarget, 1,
/*2660*/        OPC_EmitNodeXForm, 6, 5, // LO8
/*2663*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV8mi), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (st (imm:i32)<<P:Predicate_i32immSExt8>><<X:LO8>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 18
                // Dst: (MOV8mi riaddr12:i64:$dst, (LO8:i32 (imm:i32):$src))
/*2672*/      /*Scope*/ 23, /*->2696*/
/*2673*/        OPC_CheckChild1Type, MVT::i32,
/*2675*/        OPC_RecordChild2, // #2 = $dst
/*2676*/        OPC_CheckChild2Type, MVT::i64,
/*2678*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2680*/        OPC_CheckPredicate, 30, // Predicate_store
/*2682*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*2685*/        OPC_EmitMergeInputChains1_0,
/*2686*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                // Dst: (MOV32mr rriaddr12:i64:$dst, GR32:i32:$src)
/*2696*/      /*Scope*/ 37, /*->2734*/
/*2697*/        OPC_MoveChild, 1,
/*2699*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2702*/        OPC_CheckPredicate, 31, // Predicate_i32immSExt8
/*2704*/        OPC_CheckType, MVT::i32,
/*2706*/        OPC_MoveParent,
/*2707*/        OPC_RecordChild2, // #2 = $dst
/*2708*/        OPC_CheckChild2Type, MVT::i64,
/*2710*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2712*/        OPC_CheckPredicate, 28, // Predicate_truncstore
/*2714*/        OPC_CheckPredicate, 32, // Predicate_truncstorei8
/*2716*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectAddrRI:$dst #3 #4
/*2719*/        OPC_EmitMergeInputChains1_0,
/*2720*/        OPC_EmitConvertToTarget, 1,
/*2722*/        OPC_EmitNodeXForm, 6, 5, // LO8
/*2725*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV8miy), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (st (imm:i32)<<P:Predicate_i32immSExt8>><<X:LO8>>:$src, riaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 17
                // Dst: (MOV8miy riaddr:i64:$dst, (LO8:i32 (imm:i32):$src))
/*2734*/      /*Scope*/ 104, /*->2839*/
/*2735*/        OPC_CheckChild1Type, MVT::i32,
/*2737*/        OPC_RecordChild2, // #2 = $dst
/*2738*/        OPC_CheckChild2Type, MVT::i64,
/*2740*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2742*/        OPC_Scope, 38, /*->2782*/ // 3 children in Scope
/*2744*/          OPC_CheckPredicate, 28, // Predicate_truncstore
/*2746*/          OPC_Scope, 16, /*->2764*/ // 2 children in Scope
/*2748*/            OPC_CheckPredicate, 32, // Predicate_truncstorei8
/*2750*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*2753*/            OPC_EmitMergeInputChains1_0,
/*2754*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m8r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 17
                    // Dst: (MOV32m8r rriaddr12:i64:$dst, GR32:i32:$src)
/*2764*/          /*Scope*/ 16, /*->2781*/
/*2765*/            OPC_CheckPredicate, 29, // Predicate_truncstorei16
/*2767*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*2770*/            OPC_EmitMergeInputChains1_0,
/*2771*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m16r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 17
                    // Dst: (MOV32m16r rriaddr12:i64:$dst, GR32:i32:$src)
/*2781*/          0, /*End of Scope*/
/*2782*/        /*Scope*/ 16, /*->2799*/
/*2783*/          OPC_CheckPredicate, 30, // Predicate_store
/*2785*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2788*/          OPC_EmitMergeInputChains1_0,
/*2789*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32mry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV32mry rriaddr:i64:$dst, GR32:i32:$src)
/*2799*/        /*Scope*/ 38, /*->2838*/
/*2800*/          OPC_CheckPredicate, 28, // Predicate_truncstore
/*2802*/          OPC_Scope, 16, /*->2820*/ // 2 children in Scope
/*2804*/            OPC_CheckPredicate, 32, // Predicate_truncstorei8
/*2806*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2809*/            OPC_EmitMergeInputChains1_0,
/*2810*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m8ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MOV32m8ry rriaddr:i64:$dst, GR32:i32:$src)
/*2820*/          /*Scope*/ 16, /*->2837*/
/*2821*/            OPC_CheckPredicate, 29, // Predicate_truncstorei16
/*2823*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2826*/            OPC_EmitMergeInputChains1_0,
/*2827*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m16ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (MOV32m16ry rriaddr:i64:$dst, GR32:i32:$src)
/*2837*/          0, /*End of Scope*/
/*2838*/        0, /*End of Scope*/
/*2839*/      /*Scope*/ 10|128,1/*138*/, /*->2979*/
/*2841*/        OPC_CheckChild1Type, MVT::i64,
/*2843*/        OPC_RecordChild2, // #2 = $dst
/*2844*/        OPC_CheckChild2Type, MVT::i64,
/*2846*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2848*/        OPC_Scope, 55, /*->2905*/ // 3 children in Scope
/*2850*/          OPC_CheckPredicate, 28, // Predicate_truncstore
/*2852*/          OPC_Scope, 16, /*->2870*/ // 3 children in Scope
/*2854*/            OPC_CheckPredicate, 32, // Predicate_truncstorei8
/*2856*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*2859*/            OPC_EmitMergeInputChains1_0,
/*2860*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m8r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 17
                    // Dst: (MOV64m8r rriaddr12:i64:$dst, GR64:i64:$src)
/*2870*/          /*Scope*/ 16, /*->2887*/
/*2871*/            OPC_CheckPredicate, 29, // Predicate_truncstorei16
/*2873*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*2876*/            OPC_EmitMergeInputChains1_0,
/*2877*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m16r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 17
                    // Dst: (MOV64m16r rriaddr12:i64:$dst, GR64:i64:$src)
/*2887*/          /*Scope*/ 16, /*->2904*/
/*2888*/            OPC_CheckPredicate, 33, // Predicate_truncstorei32
/*2890*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*2893*/            OPC_EmitMergeInputChains1_0,
/*2894*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m32r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 17
                    // Dst: (MOV64m32r rriaddr12:i64:$dst, GR64:i64:$src)
/*2904*/          0, /*End of Scope*/
/*2905*/        /*Scope*/ 16, /*->2922*/
/*2906*/          OPC_CheckPredicate, 30, // Predicate_store
/*2908*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2911*/          OPC_EmitMergeInputChains1_0,
/*2912*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64mr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV64mr rriaddr:i64:$dst, GR64:i64:$src)
/*2922*/        /*Scope*/ 55, /*->2978*/
/*2923*/          OPC_CheckPredicate, 28, // Predicate_truncstore
/*2925*/          OPC_Scope, 16, /*->2943*/ // 3 children in Scope
/*2927*/            OPC_CheckPredicate, 32, // Predicate_truncstorei8
/*2929*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2932*/            OPC_EmitMergeInputChains1_0,
/*2933*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m8ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MOV64m8ry rriaddr:i64:$dst, GR64:i64:$src)
/*2943*/          /*Scope*/ 16, /*->2960*/
/*2944*/            OPC_CheckPredicate, 29, // Predicate_truncstorei16
/*2946*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2949*/            OPC_EmitMergeInputChains1_0,
/*2950*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m16ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (MOV64m16ry rriaddr:i64:$dst, GR64:i64:$src)
/*2960*/          /*Scope*/ 16, /*->2977*/
/*2961*/            OPC_CheckPredicate, 33, // Predicate_truncstorei32
/*2963*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*2966*/            OPC_EmitMergeInputChains1_0,
/*2967*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m32ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (MOV64m32ry rriaddr:i64:$dst, GR64:i64:$src)
/*2977*/          0, /*End of Scope*/
/*2978*/        0, /*End of Scope*/
/*2979*/      /*Scope*/ 41, /*->3021*/
/*2980*/        OPC_CheckChild1Type, MVT::v2i32,
/*2982*/        OPC_RecordChild2, // #2 = $dst
/*2983*/        OPC_CheckChild2Type, MVT::i64,
/*2985*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*2987*/        OPC_CheckPredicate, 30, // Predicate_store
/*2989*/        OPC_Scope, 14, /*->3005*/ // 2 children in Scope
/*2991*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*2994*/          OPC_EmitMergeInputChains1_0,
/*2995*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Pmr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR64P:v2i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV64Pmr rriaddr12:i64:$dst, GR64P:v2i32:$src)
/*3005*/        /*Scope*/ 14, /*->3020*/
/*3006*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*3009*/          OPC_EmitMergeInputChains1_0,
/*3010*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Pmry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR64P:v2i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV64Pmry rriaddr:i64:$dst, GR64P:v2i32:$src)
/*3020*/        0, /*End of Scope*/
/*3021*/      /*Scope*/ 23, /*->3045*/
/*3022*/        OPC_CheckChild1Type, MVT::v2i64,
/*3024*/        OPC_RecordChild2, // #2 = $dst
/*3025*/        OPC_CheckChild2Type, MVT::i64,
/*3027*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*3029*/        OPC_CheckPredicate, 30, // Predicate_store
/*3031*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*3034*/        OPC_EmitMergeInputChains1_0,
/*3035*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV128mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st GR128:v2i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (MOV128mr rriaddr:i64:$dst, GR128:v2i64:$src)
/*3045*/      /*Scope*/ 41, /*->3087*/
/*3046*/        OPC_CheckChild1Type, MVT::f32,
/*3048*/        OPC_RecordChild2, // #2 = $dst
/*3049*/        OPC_CheckChild2Type, MVT::i64,
/*3051*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*3053*/        OPC_CheckPredicate, 30, // Predicate_store
/*3055*/        OPC_Scope, 14, /*->3071*/ // 2 children in Scope
/*3057*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*3060*/          OPC_EmitMergeInputChains1_0,
/*3061*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32mr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP32:f32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV32mr rriaddr12:i64:$dst, FP32:f32:$src)
/*3071*/        /*Scope*/ 14, /*->3086*/
/*3072*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*3075*/          OPC_EmitMergeInputChains1_0,
/*3076*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32mry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP32:f32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV32mry rriaddr:i64:$dst, FP32:f32:$src)
/*3086*/        0, /*End of Scope*/
/*3087*/      /*Scope*/ 41, /*->3129*/
/*3088*/        OPC_CheckChild1Type, MVT::f64,
/*3090*/        OPC_RecordChild2, // #2 = $dst
/*3091*/        OPC_CheckChild2Type, MVT::i64,
/*3093*/        OPC_CheckPredicate, 27, // Predicate_unindexedstore
/*3095*/        OPC_CheckPredicate, 30, // Predicate_store
/*3097*/        OPC_Scope, 14, /*->3113*/ // 2 children in Scope
/*3099*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*3102*/          OPC_EmitMergeInputChains1_0,
/*3103*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64mr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP64:f64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV64mr rriaddr12:i64:$dst, FP64:f64:$src)
/*3113*/        /*Scope*/ 14, /*->3128*/
/*3114*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*3117*/          OPC_EmitMergeInputChains1_0,
/*3118*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64mry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP64:f64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV64mry rriaddr:i64:$dst, FP64:f64:$src)
/*3128*/        0, /*End of Scope*/
/*3129*/      0, /*End of Scope*/
/*3130*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 76,  TARGET_VAL(ISD::BSWAP),// ->3210
/*3134*/    OPC_Scope, 49, /*->3185*/ // 2 children in Scope
/*3136*/      OPC_MoveChild, 0,
/*3138*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3141*/      OPC_RecordMemRef,
/*3142*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3143*/      OPC_RecordChild1, // #1 = $src
/*3144*/      OPC_CheckChild1Type, MVT::i64,
/*3146*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3148*/      OPC_CheckPredicate, 1, // Predicate_load
/*3150*/      OPC_MoveParent,
/*3151*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3168
/*3154*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3157*/        OPC_EmitMergeInputChains1_0,
/*3158*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i32 (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (BSWAP32rm:i32 rriaddr:i64:$src)
              /*SwitchType*/ 14,  MVT::i64,// ->3184
/*3170*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3173*/        OPC_EmitMergeInputChains1_0,
/*3174*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i64 (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (BSWAP64rm:i64 rriaddr:i64:$src)
              0, // EndSwitchType
/*3185*/    /*Scope*/ 23, /*->3209*/
/*3186*/      OPC_RecordChild0, // #0 = $src
/*3187*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->3198
/*3190*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP32rr), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (bswap:i32 GR32:i32:$src) - Complexity = 3
                // Dst: (BSWAP32rr:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->3208
/*3200*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP64rr), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:i64 GR64:i64:$src) - Complexity = 3
                // Dst: (BSWAP64rr:i64 GR64:i64:$src)
              0, // EndSwitchType
/*3209*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,3/*503*/,  TARGET_VAL(ISD::LOAD),// ->3717
/*3214*/    OPC_RecordMemRef,
/*3215*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*3216*/    OPC_RecordChild1, // #1 = $src
/*3217*/    OPC_CheckChild1Type, MVT::i64,
/*3219*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3221*/    OPC_Scope, 18, /*->3241*/ // 7 children in Scope
/*3223*/      OPC_CheckPredicate, 1, // Predicate_load
/*3225*/      OPC_CheckType, MVT::i32,
/*3227*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*3230*/      OPC_EmitMergeInputChains1_0,
/*3231*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (ld:i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 17
              // Dst: (MOV32rm:i32 rriaddr12:i64:$src)
/*3241*/    /*Scope*/ 20, /*->3262*/
/*3242*/      OPC_CheckPredicate, 22, // Predicate_sextload
/*3244*/      OPC_CheckPredicate, 34, // Predicate_sextloadi16
/*3246*/      OPC_CheckType, MVT::i32,
/*3248*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*3251*/      OPC_EmitMergeInputChains1_0,
/*3252*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rm16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (ld:i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 17
              // Dst: (MOVSX32rm16:i32 rriaddr12:i64:$src)
/*3262*/    /*Scope*/ 36, /*->3299*/
/*3263*/      OPC_CheckPredicate, 1, // Predicate_load
/*3265*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3282
/*3268*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3271*/        OPC_EmitMergeInputChains1_0,
/*3272*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (MOV32rmy:i32 rriaddr:i64:$src)
              /*SwitchType*/ 14,  MVT::i64,// ->3298
/*3284*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3287*/        OPC_EmitMergeInputChains1_0,
/*3288*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (MOV64rm:i64 rriaddr:i64:$src)
              0, // EndSwitchType
/*3299*/    /*Scope*/ 97, /*->3397*/
/*3300*/      OPC_CheckPredicate, 22, // Predicate_sextload
/*3302*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->3341
/*3305*/        OPC_Scope, 16, /*->3323*/ // 2 children in Scope
/*3307*/          OPC_CheckPredicate, 35, // Predicate_sextloadi8
/*3309*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3312*/          OPC_EmitMergeInputChains1_0,
/*3313*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (MOVSX32rm8:i32 rriaddr:i64:$src)
/*3323*/        /*Scope*/ 16, /*->3340*/
/*3324*/          OPC_CheckPredicate, 34, // Predicate_sextloadi16
/*3326*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3329*/          OPC_EmitMergeInputChains1_0,
/*3330*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rm16y), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (MOVSX32rm16y:i32 rriaddr:i64:$src)
/*3340*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->3396
/*3343*/        OPC_Scope, 16, /*->3361*/ // 3 children in Scope
/*3345*/          OPC_CheckPredicate, 35, // Predicate_sextloadi8
/*3347*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3350*/          OPC_EmitMergeInputChains1_0,
/*3351*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (MOVSX64rm8:i64 rriaddr:i64:$src)
/*3361*/        /*Scope*/ 16, /*->3378*/
/*3362*/          OPC_CheckPredicate, 34, // Predicate_sextloadi16
/*3364*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3367*/          OPC_EmitMergeInputChains1_0,
/*3368*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (MOVSX64rm16:i64 rriaddr:i64:$src)
/*3378*/        /*Scope*/ 16, /*->3395*/
/*3379*/          OPC_CheckPredicate, 23, // Predicate_sextloadi32
/*3381*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3384*/          OPC_EmitMergeInputChains1_0,
/*3385*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                  // Dst: (MOVSX64rm32:i64 rriaddr:i64:$src)
/*3395*/        0, /*End of Scope*/
              0, // EndSwitchType
/*3397*/    /*Scope*/ 97, /*->3495*/
/*3398*/      OPC_CheckPredicate, 24, // Predicate_zextload
/*3400*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->3439
/*3403*/        OPC_Scope, 16, /*->3421*/ // 2 children in Scope
/*3405*/          OPC_CheckPredicate, 36, // Predicate_zextloadi8
/*3407*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3410*/          OPC_EmitMergeInputChains1_0,
/*3411*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (MOVZX32rm8:i32 rriaddr:i64:$src)
/*3421*/        /*Scope*/ 16, /*->3438*/
/*3422*/          OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*3424*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3427*/          OPC_EmitMergeInputChains1_0,
/*3428*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (MOVZX32rm16:i32 rriaddr:i64:$src)
/*3438*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->3494
/*3441*/        OPC_Scope, 16, /*->3459*/ // 3 children in Scope
/*3443*/          OPC_CheckPredicate, 36, // Predicate_zextloadi8
/*3445*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3448*/          OPC_EmitMergeInputChains1_0,
/*3449*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (MOVZX64rm8:i64 rriaddr:i64:$src)
/*3459*/        /*Scope*/ 16, /*->3476*/
/*3460*/          OPC_CheckPredicate, 37, // Predicate_zextloadi16
/*3462*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3465*/          OPC_EmitMergeInputChains1_0,
/*3466*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (MOVZX64rm16:i64 rriaddr:i64:$src)
/*3476*/        /*Scope*/ 16, /*->3493*/
/*3477*/          OPC_CheckPredicate, 25, // Predicate_zextloadi32
/*3479*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3482*/          OPC_EmitMergeInputChains1_0,
/*3483*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (MOVZX64rm32:i64 rriaddr:i64:$src)
/*3493*/        0, /*End of Scope*/
              0, // EndSwitchType
/*3495*/    /*Scope*/ 97, /*->3593*/
/*3496*/      OPC_CheckPredicate, 38, // Predicate_extload
/*3498*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->3537
/*3501*/        OPC_Scope, 16, /*->3519*/ // 2 children in Scope
/*3503*/          OPC_CheckPredicate, 39, // Predicate_extloadi8
/*3505*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3508*/          OPC_EmitMergeInputChains1_0,
/*3509*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (MOVZX32rm8:i32 rriaddr:i64:$src)
/*3519*/        /*Scope*/ 16, /*->3536*/
/*3520*/          OPC_CheckPredicate, 40, // Predicate_extloadi16
/*3522*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3525*/          OPC_EmitMergeInputChains1_0,
/*3526*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (MOVZX32rm16:i32 rriaddr:i64:$src)
/*3536*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->3592
/*3539*/        OPC_Scope, 16, /*->3557*/ // 3 children in Scope
/*3541*/          OPC_CheckPredicate, 39, // Predicate_extloadi8
/*3543*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3546*/          OPC_EmitMergeInputChains1_0,
/*3547*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (MOVZX64rm8:i64 rriaddr:i64:$src)
/*3557*/        /*Scope*/ 16, /*->3574*/
/*3558*/          OPC_CheckPredicate, 40, // Predicate_extloadi16
/*3560*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3563*/          OPC_EmitMergeInputChains1_0,
/*3564*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (MOVZX64rm16:i64 rriaddr:i64:$src)
/*3574*/        /*Scope*/ 16, /*->3591*/
/*3575*/          OPC_CheckPredicate, 41, // Predicate_extloadi32
/*3577*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3580*/          OPC_EmitMergeInputChains1_0,
/*3581*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 16
                  // Dst: (MOVZX64rm32:i64 rriaddr:i64:$src)
/*3591*/        0, /*End of Scope*/
              0, // EndSwitchType
/*3593*/    /*Scope*/ 122, /*->3716*/
/*3594*/      OPC_CheckPredicate, 1, // Predicate_load
/*3596*/      OPC_SwitchType /*4 cases */, 32,  MVT::f32,// ->3631
/*3599*/        OPC_Scope, 14, /*->3615*/ // 2 children in Scope
/*3601*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*3604*/          OPC_EmitMergeInputChains1_0,
/*3605*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV32rm:f32 rriaddr12:i64:$src)
/*3615*/        /*Scope*/ 14, /*->3630*/
/*3616*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3619*/          OPC_EmitMergeInputChains1_0,
/*3620*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV32rmy:f32 rriaddr:i64:$src)
/*3630*/        0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f64,// ->3665
/*3633*/        OPC_Scope, 14, /*->3649*/ // 2 children in Scope
/*3635*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*3638*/          OPC_EmitMergeInputChains1_0,
/*3639*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV64rm:f64 rriaddr12:i64:$src)
/*3649*/        /*Scope*/ 14, /*->3664*/
/*3650*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3653*/          OPC_EmitMergeInputChains1_0,
/*3654*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV64rmy:f64 rriaddr:i64:$src)
/*3664*/        0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::v2i32,// ->3699
/*3667*/        OPC_Scope, 14, /*->3683*/ // 2 children in Scope
/*3669*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*3672*/          OPC_EmitMergeInputChains1_0,
/*3673*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Prm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:v2i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (MOV64Prm:v2i32 rriaddr12:i64:$src)
/*3683*/        /*Scope*/ 14, /*->3698*/
/*3684*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3687*/          OPC_EmitMergeInputChains1_0,
/*3688*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Prmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:v2i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (MOV64Prmy:v2i32 rriaddr:i64:$src)
/*3698*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::v2i64,// ->3715
/*3701*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3704*/        OPC_EmitMergeInputChains1_0,
/*3705*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV128rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v2i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:v2i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (MOV128rm:v2i64 rriaddr:i64:$src)
              0, // EndSwitchType
/*3716*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::FrameIndex),// ->3736
/*3720*/    OPC_RecordNode,   // #0 = $src
/*3721*/    OPC_CheckType, MVT::i64,
/*3723*/    OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*3726*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
            // Src: laaddr:i64:$src - Complexity = 13
            // Dst: (LA64r:i64 laaddr:i64:$src)
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRL),// ->3775
/*3739*/    OPC_RecordChild0, // #0 = $src
/*3740*/    OPC_RecordChild1, // #1 = $amt
/*3741*/    OPC_CheckChild1Type, MVT::i64,
/*3743*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3759
/*3746*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3749*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL32rri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 13
              // Dst: (SRL32rri:i32 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 13,  MVT::i64,// ->3774
/*3761*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3764*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL64rri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (SRL64rri:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SHL),// ->3814
/*3778*/    OPC_RecordChild0, // #0 = $src
/*3779*/    OPC_RecordChild1, // #1 = $amt
/*3780*/    OPC_CheckChild1Type, MVT::i64,
/*3782*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3798
/*3785*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3788*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHL32rri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 13
              // Dst: (SHL32rri:i32 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 13,  MVT::i64,// ->3813
/*3800*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3803*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHL64rri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (SHL64rri:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::SRA),// ->3855
/*3817*/    OPC_RecordChild0, // #0 = $src
/*3818*/    OPC_RecordChild1, // #1 = $amt
/*3819*/    OPC_CheckChild1Type, MVT::i64,
/*3821*/    OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3838
/*3824*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3827*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA32rri), 0,
                  2/*#VTs*/, MVT::i32, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 13
              // Dst: (SRA32rri:i32:i64 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 14,  MVT::i64,// ->3854
/*3840*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3843*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA64rri), 0,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (SRA64rri:i64:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ROTL),// ->3894
/*3858*/    OPC_RecordChild0, // #0 = $src
/*3859*/    OPC_RecordChild1, // #1 = $amt
/*3860*/    OPC_CheckChild1Type, MVT::i64,
/*3862*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3878
/*3865*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3868*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ROTL32rri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 12
              // Dst: (ROTL32rri:i32 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 13,  MVT::i64,// ->3893
/*3880*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3883*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ROTL64rri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (ROTL64rri:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->3922
/*3897*/    OPC_RecordNode,   // #0 = 'SystemZcallseq_end' chained node
/*3898*/    OPC_CaptureGlueInput,
/*3899*/    OPC_RecordChild1, // #1 = $amt1
/*3900*/    OPC_MoveChild, 1,
/*3902*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3905*/    OPC_MoveParent,
/*3906*/    OPC_RecordChild2, // #2 = $amt2
/*3907*/    OPC_MoveChild, 2,
/*3909*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3912*/    OPC_MoveParent,
/*3913*/    OPC_EmitMergeInputChains1_0,
/*3914*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (SystemZcallseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
          /*SwitchOpcode*/ 108|128,1/*236*/,  TARGET_VAL(SystemZISD::BRCOND),// ->4162
/*3926*/    OPC_RecordNode,   // #0 = 'SystemZbrcond' chained node
/*3927*/    OPC_RecordChild1, // #1 = $dst
/*3928*/    OPC_MoveChild, 1,
/*3930*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3933*/    OPC_MoveParent,
/*3934*/    OPC_MoveChild, 2,
/*3936*/    OPC_Scope, 15, /*->3953*/ // 14 children in Scope
/*3938*/      OPC_CheckInteger, 0, 
/*3940*/      OPC_MoveParent,
/*3941*/      OPC_RecordChild3, // #2 = physreg input PSW
/*3942*/      OPC_EmitMergeInputChains1_0,
/*3943*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*3946*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JO), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 0:i8, PSW:i64) - Complexity = 8
              // Dst: (JO (bb:Other):$dst)
/*3953*/    /*Scope*/ 15, /*->3969*/
/*3954*/      OPC_CheckInteger, 1, 
/*3956*/      OPC_MoveParent,
/*3957*/      OPC_RecordChild3, // #2 = physreg input PSW
/*3958*/      OPC_EmitMergeInputChains1_0,
/*3959*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*3962*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 1:i8, PSW:i64) - Complexity = 8
              // Dst: (JH (bb:Other):$dst)
/*3969*/    /*Scope*/ 15, /*->3985*/
/*3970*/      OPC_CheckInteger, 2, 
/*3972*/      OPC_MoveParent,
/*3973*/      OPC_RecordChild3, // #2 = physreg input PSW
/*3974*/      OPC_EmitMergeInputChains1_0,
/*3975*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*3978*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNLE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 2:i8, PSW:i64) - Complexity = 8
              // Dst: (JNLE (bb:Other):$dst)
/*3985*/    /*Scope*/ 15, /*->4001*/
/*3986*/      OPC_CheckInteger, 3, 
/*3988*/      OPC_MoveParent,
/*3989*/      OPC_RecordChild3, // #2 = physreg input PSW
/*3990*/      OPC_EmitMergeInputChains1_0,
/*3991*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*3994*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 3:i8, PSW:i64) - Complexity = 8
              // Dst: (JL (bb:Other):$dst)
/*4001*/    /*Scope*/ 15, /*->4017*/
/*4002*/      OPC_CheckInteger, 4, 
/*4004*/      OPC_MoveParent,
/*4005*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4006*/      OPC_EmitMergeInputChains1_0,
/*4007*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4010*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNHE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 4:i8, PSW:i64) - Complexity = 8
              // Dst: (JNHE (bb:Other):$dst)
/*4017*/    /*Scope*/ 15, /*->4033*/
/*4018*/      OPC_CheckInteger, 5, 
/*4020*/      OPC_MoveParent,
/*4021*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4022*/      OPC_EmitMergeInputChains1_0,
/*4023*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4026*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JLH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 5:i8, PSW:i64) - Complexity = 8
              // Dst: (JLH (bb:Other):$dst)
/*4033*/    /*Scope*/ 15, /*->4049*/
/*4034*/      OPC_CheckInteger, 6, 
/*4036*/      OPC_MoveParent,
/*4037*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4038*/      OPC_EmitMergeInputChains1_0,
/*4039*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4042*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 6:i8, PSW:i64) - Complexity = 8
              // Dst: (JNE (bb:Other):$dst)
/*4049*/    /*Scope*/ 15, /*->4065*/
/*4050*/      OPC_CheckInteger, 7, 
/*4052*/      OPC_MoveParent,
/*4053*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4054*/      OPC_EmitMergeInputChains1_0,
/*4055*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4058*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 7:i8, PSW:i64) - Complexity = 8
              // Dst: (JE (bb:Other):$dst)
/*4065*/    /*Scope*/ 15, /*->4081*/
/*4066*/      OPC_CheckInteger, 8, 
/*4068*/      OPC_MoveParent,
/*4069*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4070*/      OPC_EmitMergeInputChains1_0,
/*4071*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4074*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNLH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 8:i8, PSW:i64) - Complexity = 8
              // Dst: (JNLH (bb:Other):$dst)
/*4081*/    /*Scope*/ 15, /*->4097*/
/*4082*/      OPC_CheckInteger, 9, 
/*4084*/      OPC_MoveParent,
/*4085*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4086*/      OPC_EmitMergeInputChains1_0,
/*4087*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4090*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JHE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 9:i8, PSW:i64) - Complexity = 8
              // Dst: (JHE (bb:Other):$dst)
/*4097*/    /*Scope*/ 15, /*->4113*/
/*4098*/      OPC_CheckInteger, 10, 
/*4100*/      OPC_MoveParent,
/*4101*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4102*/      OPC_EmitMergeInputChains1_0,
/*4103*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4106*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 10:i8, PSW:i64) - Complexity = 8
              // Dst: (JNL (bb:Other):$dst)
/*4113*/    /*Scope*/ 15, /*->4129*/
/*4114*/      OPC_CheckInteger, 11, 
/*4116*/      OPC_MoveParent,
/*4117*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4118*/      OPC_EmitMergeInputChains1_0,
/*4119*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4122*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JLE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 11:i8, PSW:i64) - Complexity = 8
              // Dst: (JLE (bb:Other):$dst)
/*4129*/    /*Scope*/ 15, /*->4145*/
/*4130*/      OPC_CheckInteger, 12, 
/*4132*/      OPC_MoveParent,
/*4133*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4134*/      OPC_EmitMergeInputChains1_0,
/*4135*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4138*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 12:i8, PSW:i64) - Complexity = 8
              // Dst: (JNH (bb:Other):$dst)
/*4145*/    /*Scope*/ 15, /*->4161*/
/*4146*/      OPC_CheckInteger, 13, 
/*4148*/      OPC_MoveParent,
/*4149*/      OPC_RecordChild3, // #2 = physreg input PSW
/*4150*/      OPC_EmitMergeInputChains1_0,
/*4151*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*4154*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNO), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 13:i8, PSW:i64) - Complexity = 8
              // Dst: (JNO (bb:Other):$dst)
/*4161*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::ADDC),// ->4240
/*4165*/    OPC_RecordChild0, // #0 = $src1
/*4166*/    OPC_RecordChild1, // #1 = $src2
/*4167*/    OPC_Scope, 44, /*->4213*/ // 3 children in Scope
/*4169*/      OPC_MoveChild, 1,
/*4171*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4174*/      OPC_Scope, 20, /*->4196*/ // 2 children in Scope
/*4176*/        OPC_CheckPredicate, 3, // Predicate_immSExt32
/*4178*/        OPC_MoveParent,
/*4179*/        OPC_CheckType, MVT::i64,
/*4181*/        OPC_EmitConvertToTarget, 1,
/*4183*/        OPC_EmitNodeXForm, 1, 2, // LO32
/*4186*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC64ri32), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (addc:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                // Dst: (ADC64ri32:i64:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*4196*/      /*Scope*/ 15, /*->4212*/
/*4197*/        OPC_MoveParent,
/*4198*/        OPC_CheckType, MVT::i32,
/*4200*/        OPC_EmitConvertToTarget, 1,
/*4202*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC32ri), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                // Dst: (ADC32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*4212*/      0, /*End of Scope*/
/*4213*/    /*Scope*/ 12, /*->4226*/
/*4214*/      OPC_CheckType, MVT::i32,
/*4216*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC32rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (ADC32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*4226*/    /*Scope*/ 12, /*->4239*/
/*4227*/      OPC_CheckType, MVT::i64,
/*4229*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC64rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (ADC64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*4239*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::SUBC),// ->4318
/*4243*/    OPC_RecordChild0, // #0 = $src1
/*4244*/    OPC_RecordChild1, // #1 = $src2
/*4245*/    OPC_Scope, 44, /*->4291*/ // 3 children in Scope
/*4247*/      OPC_MoveChild, 1,
/*4249*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4252*/      OPC_Scope, 20, /*->4274*/ // 2 children in Scope
/*4254*/        OPC_CheckPredicate, 3, // Predicate_immSExt32
/*4256*/        OPC_MoveParent,
/*4257*/        OPC_CheckType, MVT::i64,
/*4259*/        OPC_EmitConvertToTarget, 1,
/*4261*/        OPC_EmitNodeXForm, 1, 2, // LO32
/*4264*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC64ri32), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (subc:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                // Dst: (SBC64ri32:i64:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*4274*/      /*Scope*/ 15, /*->4290*/
/*4275*/        OPC_MoveParent,
/*4276*/        OPC_CheckType, MVT::i32,
/*4278*/        OPC_EmitConvertToTarget, 1,
/*4280*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC32ri), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (subc:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                // Dst: (SBC32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*4290*/      0, /*End of Scope*/
/*4291*/    /*Scope*/ 12, /*->4304*/
/*4292*/      OPC_CheckType, MVT::i32,
/*4294*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC32rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (SBC32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*4304*/    /*Scope*/ 12, /*->4317*/
/*4305*/      OPC_CheckType, MVT::i64,
/*4307*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC64rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (SBC64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*4317*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(SystemZISD::PCRelativeWrapper),// ->4368
/*4321*/    OPC_RecordChild0, // #0 = $src
/*4322*/    OPC_MoveChild, 0,
/*4324*/    OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->4339
/*4328*/      OPC_MoveParent,
/*4329*/      OPC_CheckType, MVT::i64,
/*4331*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64rm), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (SystemZpcrelwrapper:i64 (tglobaladdr:i64):$src) - Complexity = 6
              // Dst: (LA64rm:i64 (tglobaladdr:i64):$src)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetJumpTable),// ->4353
/*4342*/      OPC_MoveParent,
/*4343*/      OPC_CheckType, MVT::i64,
/*4345*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64rm), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (SystemZpcrelwrapper:i64 (tjumptable:i64):$src) - Complexity = 6
              // Dst: (LA64rm:i64 (tjumptable:i64):$src)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->4367
/*4356*/      OPC_MoveParent,
/*4357*/      OPC_CheckType, MVT::i64,
/*4359*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64rm), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (SystemZpcrelwrapper:i64 (tconstpool:i64):$src) - Complexity = 6
              // Dst: (LA64rm:i64 (tconstpool:i64):$src)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 80,  TARGET_VAL(SystemZISD::SELECT),// ->4451
/*4371*/    OPC_RecordChild0, // #0 = $src1
/*4372*/    OPC_RecordChild1, // #1 = $src2
/*4373*/    OPC_RecordChild2, // #2 = $cc
/*4374*/    OPC_MoveChild, 2,
/*4376*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4379*/    OPC_MoveParent,
/*4380*/    OPC_RecordChild3, // #3 = physreg input PSW
/*4381*/    OPC_SwitchType /*4 cases */, 15,  MVT::i32,// ->4399
/*4384*/      OPC_EmitConvertToTarget, 2,
/*4386*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*4389*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (Select32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 15,  MVT::i64,// ->4416
/*4401*/      OPC_EmitConvertToTarget, 2,
/*4403*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*4406*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (Select64:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc)
            /*SwitchType*/ 15,  MVT::f32,// ->4433
/*4418*/      OPC_EmitConvertToTarget, 2,
/*4420*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*4423*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (SelectF32:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 15,  MVT::f64,// ->4450
/*4435*/      OPC_EmitConvertToTarget, 2,
/*4437*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*4440*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (SelectF64:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc)
            0, // EndSwitchType
          /*SwitchOpcode*/ 95|128,1/*223*/,  TARGET_VAL(ISD::Constant),// ->4678
/*4455*/    OPC_RecordNode,   // #0 = $src
/*4456*/    OPC_Scope, 34, /*->4492*/ // 10 children in Scope
/*4458*/      OPC_CheckPredicate, 2, // Predicate_immSExt16
/*4460*/      OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->4476
/*4463*/        OPC_EmitConvertToTarget, 0,
/*4465*/        OPC_EmitNodeXForm, 0, 1, // LL16
/*4468*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32ri16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (MOV32ri16:i32 (LL16:i32 (imm:i32):$src))
              /*SwitchType*/ 13,  MVT::i64,// ->4491
/*4478*/        OPC_EmitConvertToTarget, 0,
/*4480*/        OPC_EmitNodeXForm, 0, 1, // LL16
/*4483*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64ri16), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (MOV64ri16:i64 (LL16:i64 (imm:i64):$src))
              0, // EndSwitchType
/*4492*/    /*Scope*/ 17, /*->4510*/
/*4493*/      OPC_CheckPredicate, 14, // Predicate_i64ll16
/*4495*/      OPC_CheckType, MVT::i64,
/*4497*/      OPC_EmitConvertToTarget, 0,
/*4499*/      OPC_EmitNodeXForm, 0, 1, // LL16
/*4502*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rill16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64ll16>><<X:LL16>>:$src - Complexity = 4
              // Dst: (MOV64rill16:i64 (LL16:i32 (imm:i64):$src))
/*4510*/    /*Scope*/ 17, /*->4528*/
/*4511*/      OPC_CheckPredicate, 15, // Predicate_i64lh16
/*4513*/      OPC_CheckType, MVT::i64,
/*4515*/      OPC_EmitConvertToTarget, 0,
/*4517*/      OPC_EmitNodeXForm, 2, 1, // LH16
/*4520*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rilh16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64lh16>><<X:LH16>>:$src - Complexity = 4
              // Dst: (MOV64rilh16:i64 (LH16:i32 (imm:i64):$src))
/*4528*/    /*Scope*/ 17, /*->4546*/
/*4529*/      OPC_CheckPredicate, 16, // Predicate_i64hl16
/*4531*/      OPC_CheckType, MVT::i64,
/*4533*/      OPC_EmitConvertToTarget, 0,
/*4535*/      OPC_EmitNodeXForm, 3, 1, // HL16
/*4538*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rihl16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64hl16>><<X:HL16>>:$src - Complexity = 4
              // Dst: (MOV64rihl16:i64 (HL16:i32 (imm:i64):$src))
/*4546*/    /*Scope*/ 17, /*->4564*/
/*4547*/      OPC_CheckPredicate, 17, // Predicate_i64hh16
/*4549*/      OPC_CheckType, MVT::i64,
/*4551*/      OPC_EmitConvertToTarget, 0,
/*4553*/      OPC_EmitNodeXForm, 4, 1, // HH16
/*4556*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rihh16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64hh16>><<X:HH16>>:$src - Complexity = 4
              // Dst: (MOV64rihh16:i64 (HH16:i32 (imm:i64):$src))
/*4564*/    /*Scope*/ 17, /*->4582*/
/*4565*/      OPC_CheckPredicate, 3, // Predicate_immSExt32
/*4567*/      OPC_CheckType, MVT::i64,
/*4569*/      OPC_EmitConvertToTarget, 0,
/*4571*/      OPC_EmitNodeXForm, 1, 1, // LO32
/*4574*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64ri32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src - Complexity = 4
              // Dst: (MOV64ri32:i64 (LO32:i64 (imm:i64):$src))
/*4582*/    /*Scope*/ 17, /*->4600*/
/*4583*/      OPC_CheckPredicate, 18, // Predicate_i64lo32
/*4585*/      OPC_CheckType, MVT::i64,
/*4587*/      OPC_EmitConvertToTarget, 0,
/*4589*/      OPC_EmitNodeXForm, 1, 1, // LO32
/*4592*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rilo32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64lo32>><<X:LO32>>:$src - Complexity = 4
              // Dst: (MOV64rilo32:i64 (LO32:i32 (imm:i64):$src))
/*4600*/    /*Scope*/ 17, /*->4618*/
/*4601*/      OPC_CheckPredicate, 19, // Predicate_i64hi32
/*4603*/      OPC_CheckType, MVT::i64,
/*4605*/      OPC_EmitConvertToTarget, 0,
/*4607*/      OPC_EmitNodeXForm, 5, 1, // HI32
/*4610*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rihi32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64hi32>><<X:HI32>>:$src - Complexity = 4
              // Dst: (MOV64rihi32:i64 (HI32:i32 (imm:i64):$src))
/*4618*/    /*Scope*/ 27, /*->4646*/
/*4619*/      OPC_CheckType, MVT::i32,
/*4621*/      OPC_EmitConvertToTarget, 0,
/*4623*/      OPC_EmitNodeXForm, 7, 1, // GetI64FromI32
/*4626*/      OPC_EmitNode, TARGET_VAL(SystemZ::MOV64ri32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3 
/*4634*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4637*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
              // Src: (imm:i32):$src - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i32 (MOV64ri32:i64 (GetI64FromI32:i64 (imm:i32):$src)), subreg_32bit:i32)
/*4646*/    /*Scope*/ 30, /*->4677*/
/*4647*/      OPC_CheckType, MVT::i64,
/*4649*/      OPC_EmitConvertToTarget, 0,
/*4651*/      OPC_EmitNodeXForm, 5, 1, // HI32
/*4654*/      OPC_EmitNode, TARGET_VAL(SystemZ::MOV64rihi32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3 
/*4662*/      OPC_EmitConvertToTarget, 0,
/*4664*/      OPC_EmitNodeXForm, 1, 4, // LO32
/*4667*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rilo32), 0,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i64):$imm - Complexity = 3
              // Dst: (OR64rilo32:i64:i64 (MOV64rihi32:i64 (HI32:i32 (imm:i64):$imm)), (LO32:i32 (imm:i64):$imm))
/*4677*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->4694
/*4681*/    OPC_RecordChild0, // #0 = $src
/*4682*/    OPC_CheckChild0Type, MVT::i32,
/*4684*/    OPC_CheckType, MVT::i64,
/*4686*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (MOVSX64rr32:i64 GR32:i32:$src)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::ZERO_EXTEND),// ->4710
/*4697*/    OPC_RecordChild0, // #0 = $src
/*4698*/    OPC_CheckChild0Type, MVT::i32,
/*4700*/    OPC_CheckType, MVT::i64,
/*4702*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rr32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (zext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (MOVZX64rr32:i64 GR32:i32:$src)
          /*SwitchOpcode*/ 81,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4794
/*4713*/    OPC_RecordChild0, // #0 = $src
/*4714*/    OPC_MoveChild, 1,
/*4716*/    OPC_Scope, 25, /*->4743*/ // 3 children in Scope
/*4718*/      OPC_CheckValueType, MVT::i8,
/*4720*/      OPC_MoveParent,
/*4721*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4732
/*4724*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rr8), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$src, i8:Other) - Complexity = 3
                // Dst: (MOVSX32rr8:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->4742
/*4734*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$src, i8:Other) - Complexity = 3
                // Dst: (MOVSX64rr8:i64 GR64:i64:$src)
              0, // EndSwitchType
/*4743*/    /*Scope*/ 25, /*->4769*/
/*4744*/      OPC_CheckValueType, MVT::i16,
/*4746*/      OPC_MoveParent,
/*4747*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4758
/*4750*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rr16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$src, i16:Other) - Complexity = 3
                // Dst: (MOVSX32rr16:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->4768
/*4760*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr16), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$src, i16:Other) - Complexity = 3
                // Dst: (MOVSX64rr16:i64 GR64:i64:$src)
              0, // EndSwitchType
/*4769*/    /*Scope*/ 23, /*->4793*/
/*4770*/      OPC_CheckValueType, MVT::i32,
/*4772*/      OPC_MoveParent,
/*4773*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4776*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*4785*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (MOVSX64rr32:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*4793*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::ADDE),// ->4826
/*4797*/    OPC_CaptureGlueInput,
/*4798*/    OPC_RecordChild0, // #0 = $src1
/*4799*/    OPC_RecordChild1, // #1 = $src2
/*4800*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->4813
/*4803*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADDE32rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (ADDE32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
            /*SwitchType*/ 10,  MVT::i64,// ->4825
/*4815*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADDE64rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (ADDE64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SUBE),// ->4858
/*4829*/    OPC_CaptureGlueInput,
/*4830*/    OPC_RecordChild0, // #0 = $src1
/*4831*/    OPC_RecordChild1, // #1 = $src2
/*4832*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->4845
/*4835*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUBE32rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (SUBE32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
            /*SwitchType*/ 10,  MVT::i64,// ->4857
/*4847*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUBE64rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (SUBE64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->4876
/*4861*/    OPC_RecordChild0, // #0 = $src
/*4862*/    OPC_CheckType, MVT::i32,
/*4864*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4867*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 57,  TARGET_VAL(ISD::FP_TO_SINT),// ->4936
/*4879*/    OPC_RecordChild0, // #0 = $src
/*4880*/    OPC_Scope, 26, /*->4908*/ // 2 children in Scope
/*4882*/      OPC_CheckChild0Type, MVT::f32,
/*4884*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4896
/*4887*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR32), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                // Dst: (FCONVGR32:i32:i64 FP32:f32:$src)
              /*SwitchType*/ 9,  MVT::i64,// ->4907
/*4898*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR64r32), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                // Dst: (FCONVGR64r32:i64:i64 FP32:f32:$src)
              0, // EndSwitchType
/*4908*/    /*Scope*/ 26, /*->4935*/
/*4909*/      OPC_CheckChild0Type, MVT::f64,
/*4911*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4923
/*4914*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR32r64), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                // Dst: (FCONVGR32r64:i32:i64 FP64:f64:$src)
              /*SwitchType*/ 9,  MVT::i64,// ->4934
/*4925*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR64), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                // Dst: (FCONVGR64:i64:i64 FP64:f64:$src)
              0, // EndSwitchType
/*4935*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->4966
/*4939*/    OPC_RecordChild0, // #0 = $src
/*4940*/    OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->4953
/*4943*/      OPC_CheckChild0Type, MVT::f64,
/*4945*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FBCONVG64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FP64:f64:$src) - Complexity = 3
              // Dst: (FBCONVG64:i64 FP64:f64:$src)
            /*SwitchType*/ 10,  MVT::f64,// ->4965
/*4955*/      OPC_CheckChild0Type, MVT::i64,
/*4957*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FBCONVF64), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GR64:i64:$src) - Complexity = 3
              // Dst: (FBCONVF64:f64 GR64:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->4994
/*4969*/    OPC_RecordChild0, // #0 = $src
/*4970*/    OPC_CheckChild0Type, MVT::i32,
/*4972*/    OPC_CheckType, MVT::i64,
/*4974*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1 
/*4981*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4984*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::CTLZ),// ->5021
/*4997*/    OPC_RecordChild0, // #0 = $src
/*4998*/    OPC_CheckType, MVT::i64,
/*5000*/    OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR64), 0,
                2/*#VTs*/, MVT::v2i64, MVT::i64, 1/*#Ops*/, 0,  // Results = #1 #2 
/*5009*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_even,
/*5012*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
            // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i64 (FLOGR64:v2i64:i64 GR64:i64:$src), subreg_even:i32)
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::MULHS),// ->5069
/*5024*/    OPC_RecordChild0, // #0 = $src1
/*5025*/    OPC_RecordChild1, // #1 = $src2
/*5026*/    OPC_CheckType, MVT::i32,
/*5028*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::v2i32, 0/*#Ops*/,  // Results = #2 
/*5035*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_odd32,
/*5038*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4 
/*5048*/    OPC_EmitNode, TARGET_VAL(SystemZ::MUL64rrP), 0,
                1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 4, 1,  // Results = #5 
/*5057*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5060*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6, 
            // Src: (mulhs:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 (MUL64rrP:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), GR32:i32:$src1, subreg_odd32:i32), GR32:i32:$src2), subreg_32bit:i32)
          /*SwitchOpcode*/ 90,  TARGET_VAL(ISD::MULHU),// ->5162
/*5072*/    OPC_RecordChild0, // #0 = $src1
/*5073*/    OPC_RecordChild1, // #1 = $src2
/*5074*/    OPC_SwitchType /*2 cases */, 41,  MVT::i32,// ->5118
/*5077*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v2i32, 0/*#Ops*/,  // Results = #2 
/*5084*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_odd32,
/*5087*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4 
/*5097*/      OPC_EmitNode, TARGET_VAL(SystemZ::UMUL64rrP), 0,
                  1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 4, 1,  // Results = #5 
/*5106*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5109*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6, 
              // Src: (mulhu:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i32 (UMUL64rrP:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), GR32:i32:$src1, subreg_odd32:i32), GR32:i32:$src2), subreg_32bit:i32)
            /*SwitchType*/ 41,  MVT::i64,// ->5161
/*5120*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v2i64, 0/*#Ops*/,  // Results = #2 
/*5127*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_odd,
/*5130*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v2i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4 
/*5140*/      OPC_EmitNode, TARGET_VAL(SystemZ::UMUL128rrP), 0,
                  1/*#VTs*/, MVT::v2i64, 2/*#Ops*/, 4, 1,  // Results = #5 
/*5149*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_even,
/*5152*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 6, 
              // Src: (mulhu:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i64 (UMUL128rrP:v2i64 (INSERT_SUBREG:v2i64 (IMPLICIT_DEF:v2i64), GR64:i64:$src1, subreg_odd:i32), GR64:i64:$src2), subreg_even:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 20|128,4/*532*/,  TARGET_VAL(ISD::FADD),// ->5698
/*5166*/    OPC_Scope, 103, /*->5271*/ // 6 children in Scope
/*5168*/      OPC_MoveChild, 0,
/*5170*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*5173*/      OPC_Scope, 57, /*->5232*/ // 2 children in Scope
/*5175*/        OPC_MoveChild, 0,
/*5177*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5180*/        OPC_RecordMemRef,
/*5181*/        OPC_RecordNode, // #0 = 'ld' chained node
/*5182*/        OPC_CheckFoldableChainNode,
/*5183*/        OPC_RecordChild1, // #1 = $src2
/*5184*/        OPC_CheckChild1Type, MVT::i64,
/*5186*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5188*/        OPC_CheckPredicate, 1, // Predicate_load
/*5190*/        OPC_MoveParent,
/*5191*/        OPC_RecordChild1, // #2 = $src3
/*5192*/        OPC_MoveParent,
/*5193*/        OPC_RecordChild1, // #3 = $src1
/*5194*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->5213
/*5197*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*5200*/          OPC_EmitMergeInputChains1_0,
/*5201*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fadd:f32 (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 22
                  // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->5231
/*5215*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*5218*/          OPC_EmitMergeInputChains1_0,
/*5219*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fadd:f64 (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 22
                  // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*5232*/      /*Scope*/ 37, /*->5270*/
/*5233*/        OPC_RecordChild0, // #0 = $src3
/*5234*/        OPC_MoveChild, 1,
/*5236*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5239*/        OPC_RecordMemRef,
/*5240*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5241*/        OPC_CheckFoldableChainNode,
/*5242*/        OPC_RecordChild1, // #2 = $src2
/*5243*/        OPC_CheckChild1Type, MVT::i64,
/*5245*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5247*/        OPC_CheckPredicate, 1, // Predicate_load
/*5249*/        OPC_MoveParent,
/*5250*/        OPC_MoveParent,
/*5251*/        OPC_RecordChild1, // #3 = $src1
/*5252*/        OPC_CheckType, MVT::f32,
/*5254*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*5257*/        OPC_EmitMergeInputChains1_1,
/*5258*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 0, 
                // Src: (fadd:f32 (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP32:f32:$src1) - Complexity = 22
                // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
/*5270*/      0, /*End of Scope*/
/*5271*/    /*Scope*/ 84, /*->5356*/
/*5272*/      OPC_RecordChild0, // #0 = $src1
/*5273*/      OPC_MoveChild, 1,
/*5275*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*5278*/      OPC_Scope, 36, /*->5316*/ // 2 children in Scope
/*5280*/        OPC_MoveChild, 0,
/*5282*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5285*/        OPC_RecordMemRef,
/*5286*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5287*/        OPC_CheckFoldableChainNode,
/*5288*/        OPC_RecordChild1, // #2 = $src2
/*5289*/        OPC_CheckChild1Type, MVT::i64,
/*5291*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5293*/        OPC_CheckPredicate, 1, // Predicate_load
/*5295*/        OPC_MoveParent,
/*5296*/        OPC_RecordChild1, // #3 = $src3
/*5297*/        OPC_MoveParent,
/*5298*/        OPC_CheckType, MVT::f32,
/*5300*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*5303*/        OPC_EmitMergeInputChains1_1,
/*5304*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 5/*#Ops*/, 0, 4, 5, 6, 3, 
                // Src: (fadd:f32 FP32:f32:$src1, (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3)) - Complexity = 22
                // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
/*5316*/      /*Scope*/ 38, /*->5355*/
/*5317*/        OPC_RecordChild0, // #1 = $src3
/*5318*/        OPC_MoveChild, 1,
/*5320*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5323*/        OPC_RecordMemRef,
/*5324*/        OPC_RecordNode, // #2 = 'ld' chained node
/*5325*/        OPC_CheckFoldableChainNode,
/*5326*/        OPC_RecordChild1, // #3 = $src2
/*5327*/        OPC_CheckChild1Type, MVT::i64,
/*5329*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5331*/        OPC_CheckPredicate, 1, // Predicate_load
/*5333*/        OPC_MoveParent,
/*5334*/        OPC_MoveParent,
/*5335*/        OPC_CheckType, MVT::f32,
/*5337*/        OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddrRRI12:$src2 #4 #5 #6
/*5340*/        OPC_EmitMergeInputChains, 1, 2, 
/*5343*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 5/*#Ops*/, 0, 4, 5, 6, 1, 
                // Src: (fadd:f32 FP32:f32:$src1, (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)) - Complexity = 22
                // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
/*5355*/      0, /*End of Scope*/
/*5356*/    /*Scope*/ 42, /*->5399*/
/*5357*/      OPC_MoveChild, 0,
/*5359*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*5362*/      OPC_RecordChild0, // #0 = $src3
/*5363*/      OPC_MoveChild, 1,
/*5365*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5368*/      OPC_RecordMemRef,
/*5369*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5370*/      OPC_CheckFoldableChainNode,
/*5371*/      OPC_RecordChild1, // #2 = $src2
/*5372*/      OPC_CheckChild1Type, MVT::i64,
/*5374*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5376*/      OPC_CheckPredicate, 1, // Predicate_load
/*5378*/      OPC_MoveParent,
/*5379*/      OPC_MoveParent,
/*5380*/      OPC_RecordChild1, // #3 = $src1
/*5381*/      OPC_CheckType, MVT::f64,
/*5383*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*5386*/      OPC_EmitMergeInputChains1_1,
/*5387*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 0, 
              // Src: (fadd:f64 (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP64:f64:$src1) - Complexity = 22
              // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
/*5399*/    /*Scope*/ 10|128,1/*138*/, /*->5539*/
/*5401*/      OPC_RecordChild0, // #0 = $src1
/*5402*/      OPC_MoveChild, 1,
/*5404*/      OPC_SwitchOpcode /*2 cases */, 78,  TARGET_VAL(ISD::FMUL),// ->5486
/*5408*/        OPC_Scope, 36, /*->5446*/ // 2 children in Scope
/*5410*/          OPC_MoveChild, 0,
/*5412*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5415*/          OPC_RecordMemRef,
/*5416*/          OPC_RecordNode, // #1 = 'ld' chained node
/*5417*/          OPC_CheckFoldableChainNode,
/*5418*/          OPC_RecordChild1, // #2 = $src2
/*5419*/          OPC_CheckChild1Type, MVT::i64,
/*5421*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5423*/          OPC_CheckPredicate, 1, // Predicate_load
/*5425*/          OPC_MoveParent,
/*5426*/          OPC_RecordChild1, // #3 = $src3
/*5427*/          OPC_MoveParent,
/*5428*/          OPC_CheckType, MVT::f64,
/*5430*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*5433*/          OPC_EmitMergeInputChains1_1,
/*5434*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 0, 4, 5, 6, 3, 
                  // Src: (fadd:f64 FP64:f64:$src1, (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3)) - Complexity = 22
                  // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
/*5446*/        /*Scope*/ 38, /*->5485*/
/*5447*/          OPC_RecordChild0, // #1 = $src3
/*5448*/          OPC_MoveChild, 1,
/*5450*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5453*/          OPC_RecordMemRef,
/*5454*/          OPC_RecordNode, // #2 = 'ld' chained node
/*5455*/          OPC_CheckFoldableChainNode,
/*5456*/          OPC_RecordChild1, // #3 = $src2
/*5457*/          OPC_CheckChild1Type, MVT::i64,
/*5459*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5461*/          OPC_CheckPredicate, 1, // Predicate_load
/*5463*/          OPC_MoveParent,
/*5464*/          OPC_MoveParent,
/*5465*/          OPC_CheckType, MVT::f64,
/*5467*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddrRRI12:$src2 #4 #5 #6
/*5470*/          OPC_EmitMergeInputChains, 1, 2, 
/*5473*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 0, 4, 5, 6, 1, 
                  // Src: (fadd:f64 FP64:f64:$src1, (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)) - Complexity = 22
                  // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
/*5485*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 49,  TARGET_VAL(ISD::LOAD),// ->5538
/*5489*/        OPC_RecordMemRef,
/*5490*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5491*/        OPC_CheckFoldableChainNode,
/*5492*/        OPC_RecordChild1, // #2 = $src2
/*5493*/        OPC_CheckChild1Type, MVT::i64,
/*5495*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5497*/        OPC_CheckPredicate, 1, // Predicate_load
/*5499*/        OPC_MoveParent,
/*5500*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->5519
/*5503*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5506*/          OPC_EmitMergeInputChains1_1,
/*5507*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fadd:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (FADD32rm:f32:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
                /*SwitchType*/ 16,  MVT::f64,// ->5537
/*5521*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5524*/          OPC_EmitMergeInputChains1_1,
/*5525*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fadd:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (FADD64rm:f64:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*5539*/    /*Scope*/ 90, /*->5630*/
/*5540*/      OPC_MoveChild, 0,
/*5542*/      OPC_SwitchOpcode /*2 cases */, 50,  TARGET_VAL(ISD::LOAD),// ->5596
/*5546*/        OPC_RecordMemRef,
/*5547*/        OPC_RecordNode, // #0 = 'ld' chained node
/*5548*/        OPC_CheckFoldableChainNode,
/*5549*/        OPC_RecordChild1, // #1 = $src2
/*5550*/        OPC_CheckChild1Type, MVT::i64,
/*5552*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5554*/        OPC_CheckPredicate, 1, // Predicate_load
/*5556*/        OPC_MoveParent,
/*5557*/        OPC_RecordChild1, // #2 = $src1
/*5558*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->5577
/*5561*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*5564*/          OPC_EmitMergeInputChains1_0,
/*5565*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fadd:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1) - Complexity = 19
                  // Dst: (FADD32rm:f32:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
                /*SwitchType*/ 16,  MVT::f64,// ->5595
/*5579*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*5582*/          OPC_EmitMergeInputChains1_0,
/*5583*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fadd:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1) - Complexity = 19
                  // Dst: (FADD64rm:f64:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::FMUL),// ->5629
/*5599*/        OPC_RecordChild0, // #0 = $src2
/*5600*/        OPC_RecordChild1, // #1 = $src3
/*5601*/        OPC_MoveParent,
/*5602*/        OPC_RecordChild1, // #2 = $src1
/*5603*/        OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->5616
/*5606*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rr), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f32 (fmul:f32 FP32:f32:$src2, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 6
                  // Dst: (FMADD32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
                /*SwitchType*/ 10,  MVT::f64,// ->5628
/*5618*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rr), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FP64:f64:$src2, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 6
                  // Dst: (FMADD64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*5630*/    /*Scope*/ 66, /*->5697*/
/*5631*/      OPC_RecordChild0, // #0 = $src1
/*5632*/      OPC_Scope, 34, /*->5668*/ // 2 children in Scope
/*5634*/        OPC_MoveChild, 1,
/*5636*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*5639*/        OPC_RecordChild0, // #1 = $src2
/*5640*/        OPC_RecordChild1, // #2 = $src3
/*5641*/        OPC_MoveParent,
/*5642*/        OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->5655
/*5645*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rr), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FP32:f32:$src1, (fmul:f32 FP32:f32:$src2, FP32:f32:$src3)) - Complexity = 6
                  // Dst: (FMADD32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
                /*SwitchType*/ 10,  MVT::f64,// ->5667
/*5657*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rr), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f64 FP64:f64:$src1, (fmul:f64 FP64:f64:$src2, FP64:f64:$src3)) - Complexity = 6
                  // Dst: (FMADD64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*5668*/      /*Scope*/ 27, /*->5696*/
/*5669*/        OPC_RecordChild1, // #1 = $src2
/*5670*/        OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->5683
/*5673*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD32rr), 0,
                      2/*#VTs*/, MVT::f32, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                  // Dst: (FADD32rr:f32:i64 FP32:f32:$src1, FP32:f32:$src2)
                /*SwitchType*/ 10,  MVT::f64,// ->5695
/*5685*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD64rr), 0,
                      2/*#VTs*/, MVT::f64, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                  // Dst: (FADD64rr:f64:i64 FP64:f64:$src1, FP64:f64:$src2)
                0, // EndSwitchType
/*5696*/      0, /*End of Scope*/
/*5697*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,1/*247*/,  TARGET_VAL(ISD::FSUB),// ->5949
/*5702*/    OPC_Scope, 123, /*->5827*/ // 4 children in Scope
/*5704*/      OPC_MoveChild, 0,
/*5706*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*5709*/      OPC_Scope, 57, /*->5768*/ // 2 children in Scope
/*5711*/        OPC_MoveChild, 0,
/*5713*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5716*/        OPC_RecordMemRef,
/*5717*/        OPC_RecordNode, // #0 = 'ld' chained node
/*5718*/        OPC_CheckFoldableChainNode,
/*5719*/        OPC_RecordChild1, // #1 = $src2
/*5720*/        OPC_CheckChild1Type, MVT::i64,
/*5722*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5724*/        OPC_CheckPredicate, 1, // Predicate_load
/*5726*/        OPC_MoveParent,
/*5727*/        OPC_RecordChild1, // #2 = $src3
/*5728*/        OPC_MoveParent,
/*5729*/        OPC_RecordChild1, // #3 = $src1
/*5730*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->5749
/*5733*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*5736*/          OPC_EmitMergeInputChains1_0,
/*5737*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fsub:f32 (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 22
                  // Dst: (FMSUB32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->5767
/*5751*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*5754*/          OPC_EmitMergeInputChains1_0,
/*5755*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fsub:f64 (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 22
                  // Dst: (FMSUB64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*5768*/      /*Scope*/ 57, /*->5826*/
/*5769*/        OPC_RecordChild0, // #0 = $src3
/*5770*/        OPC_MoveChild, 1,
/*5772*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5775*/        OPC_RecordMemRef,
/*5776*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5777*/        OPC_CheckFoldableChainNode,
/*5778*/        OPC_RecordChild1, // #2 = $src2
/*5779*/        OPC_CheckChild1Type, MVT::i64,
/*5781*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5783*/        OPC_CheckPredicate, 1, // Predicate_load
/*5785*/        OPC_MoveParent,
/*5786*/        OPC_MoveParent,
/*5787*/        OPC_RecordChild1, // #3 = $src1
/*5788*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->5807
/*5791*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*5794*/          OPC_EmitMergeInputChains1_1,
/*5795*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 0, 
                  // Src: (fsub:f32 (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP32:f32:$src1) - Complexity = 22
                  // Dst: (FMSUB32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->5825
/*5809*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*5812*/          OPC_EmitMergeInputChains1_1,
/*5813*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 0, 
                  // Src: (fsub:f64 (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP64:f64:$src1) - Complexity = 22
                  // Dst: (FMSUB64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*5826*/      0, /*End of Scope*/
/*5827*/    /*Scope*/ 55, /*->5883*/
/*5828*/      OPC_RecordChild0, // #0 = $src1
/*5829*/      OPC_MoveChild, 1,
/*5831*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5834*/      OPC_RecordMemRef,
/*5835*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5836*/      OPC_CheckFoldableChainNode,
/*5837*/      OPC_RecordChild1, // #2 = $src2
/*5838*/      OPC_CheckChild1Type, MVT::i64,
/*5840*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5842*/      OPC_CheckPredicate, 1, // Predicate_load
/*5844*/      OPC_MoveParent,
/*5845*/      OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->5864
/*5848*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5851*/        OPC_EmitMergeInputChains1_1,
/*5852*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSUB32rm:f32:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 16,  MVT::f64,// ->5882
/*5866*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5869*/        OPC_EmitMergeInputChains1_1,
/*5870*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSUB64rm:f64:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*5883*/    /*Scope*/ 35, /*->5919*/
/*5884*/      OPC_MoveChild, 0,
/*5886*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*5889*/      OPC_RecordChild0, // #0 = $src2
/*5890*/      OPC_RecordChild1, // #1 = $src3
/*5891*/      OPC_MoveParent,
/*5892*/      OPC_RecordChild1, // #2 = $src1
/*5893*/      OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->5906
/*5896*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB32rr), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fsub:f32 (fmul:f32 FP32:f32:$src2, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 6
                // Dst: (FMSUB32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
              /*SwitchType*/ 10,  MVT::f64,// ->5918
/*5908*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB64rr), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fsub:f64 (fmul:f64 FP64:f64:$src2, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 6
                // Dst: (FMSUB64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
              0, // EndSwitchType
/*5919*/    /*Scope*/ 28, /*->5948*/
/*5920*/      OPC_RecordChild0, // #0 = $src1
/*5921*/      OPC_RecordChild1, // #1 = $src2
/*5922*/      OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->5935
/*5925*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FSUB32rr:f32:i64 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 10,  MVT::f64,// ->5947
/*5937*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FSUB64rr:f64:i64 FP64:f64:$src1, FP64:f64:$src2)
              0, // EndSwitchType
/*5948*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,1/*137*/,  TARGET_VAL(ISD::FMUL),// ->6090
/*5953*/    OPC_Scope, 53, /*->6008*/ // 3 children in Scope
/*5955*/      OPC_RecordChild0, // #0 = $src1
/*5956*/      OPC_MoveChild, 1,
/*5958*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5961*/      OPC_RecordMemRef,
/*5962*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5963*/      OPC_CheckFoldableChainNode,
/*5964*/      OPC_RecordChild1, // #2 = $src2
/*5965*/      OPC_CheckChild1Type, MVT::i64,
/*5967*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5969*/      OPC_CheckPredicate, 1, // Predicate_load
/*5971*/      OPC_MoveParent,
/*5972*/      OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->5990
/*5975*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5978*/        OPC_EmitMergeInputChains1_1,
/*5979*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FMUL32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->6007
/*5992*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5995*/        OPC_EmitMergeInputChains1_1,
/*5996*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FMUL64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*6008*/    /*Scope*/ 53, /*->6062*/
/*6009*/      OPC_MoveChild, 0,
/*6011*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6014*/      OPC_RecordMemRef,
/*6015*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6016*/      OPC_CheckFoldableChainNode,
/*6017*/      OPC_RecordChild1, // #1 = $src2
/*6018*/      OPC_CheckChild1Type, MVT::i64,
/*6020*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6022*/      OPC_CheckPredicate, 1, // Predicate_load
/*6024*/      OPC_MoveParent,
/*6025*/      OPC_RecordChild1, // #2 = $src1
/*6026*/      OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->6044
/*6029*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*6032*/        OPC_EmitMergeInputChains1_0,
/*6033*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1) - Complexity = 19
                // Dst: (FMUL32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->6061
/*6046*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*6049*/        OPC_EmitMergeInputChains1_0,
/*6050*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1) - Complexity = 19
                // Dst: (FMUL64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*6062*/    /*Scope*/ 26, /*->6089*/
/*6063*/      OPC_RecordChild0, // #0 = $src1
/*6064*/      OPC_RecordChild1, // #1 = $src2
/*6065*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6077
/*6068*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL32rr), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FMUL32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->6088
/*6079*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL64rr), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FMUL64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
              0, // EndSwitchType
/*6089*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::FDIV),// ->6175
/*6093*/    OPC_RecordChild0, // #0 = $src1
/*6094*/    OPC_Scope, 52, /*->6148*/ // 2 children in Scope
/*6096*/      OPC_MoveChild, 1,
/*6098*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6101*/      OPC_RecordMemRef,
/*6102*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6103*/      OPC_CheckFoldableChainNode,
/*6104*/      OPC_RecordChild1, // #2 = $src2
/*6105*/      OPC_CheckChild1Type, MVT::i64,
/*6107*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6109*/      OPC_CheckPredicate, 1, // Predicate_load
/*6111*/      OPC_MoveParent,
/*6112*/      OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->6130
/*6115*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*6118*/        OPC_EmitMergeInputChains1_1,
/*6119*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FDIV32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->6147
/*6132*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*6135*/        OPC_EmitMergeInputChains1_1,
/*6136*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FDIV64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*6148*/    /*Scope*/ 25, /*->6174*/
/*6149*/      OPC_RecordChild1, // #1 = $src2
/*6150*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6162
/*6153*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV32rr), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FDIV32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->6173
/*6164*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV64rr), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FDIV64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
              0, // EndSwitchType
/*6174*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 76,  TARGET_VAL(ISD::FSQRT),// ->6254
/*6178*/    OPC_Scope, 49, /*->6229*/ // 2 children in Scope
/*6180*/      OPC_MoveChild, 0,
/*6182*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6185*/      OPC_RecordMemRef,
/*6186*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6187*/      OPC_RecordChild1, // #1 = $src
/*6188*/      OPC_CheckChild1Type, MVT::i64,
/*6190*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6192*/      OPC_CheckPredicate, 1, // Predicate_load
/*6194*/      OPC_MoveParent,
/*6195*/      OPC_SwitchType /*2 cases */, 14,  MVT::f32,// ->6212
/*6198*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*6201*/        OPC_EmitMergeInputChains1_0,
/*6202*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f32 (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSQRT32rm:f32 rriaddr12:i64:$src)
              /*SwitchType*/ 14,  MVT::f64,// ->6228
/*6214*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*6217*/        OPC_EmitMergeInputChains1_0,
/*6218*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f64 (ld:f64 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSQRT64rm:f64 rriaddr12:i64:$src)
              0, // EndSwitchType
/*6229*/    /*Scope*/ 23, /*->6253*/
/*6230*/      OPC_RecordChild0, // #0 = $src
/*6231*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->6242
/*6234*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT32rr), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FSQRT32rr:f32 FP32:f32:$src)
              /*SwitchType*/ 8,  MVT::f64,// ->6252
/*6244*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT64rr), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FSQRT64rr:f64 FP64:f64:$src)
              0, // EndSwitchType
/*6253*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::FP_EXTEND),// ->6299
/*6257*/    OPC_Scope, 29, /*->6288*/ // 2 children in Scope
/*6259*/      OPC_MoveChild, 0,
/*6261*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6264*/      OPC_RecordMemRef,
/*6265*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6266*/      OPC_RecordChild1, // #1 = $src
/*6267*/      OPC_CheckChild1Type, MVT::i64,
/*6269*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6271*/      OPC_CheckPredicate, 1, // Predicate_load
/*6273*/      OPC_MoveParent,
/*6274*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*6277*/      OPC_EmitMergeInputChains1_0,
/*6278*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FEXT32m64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
              // Src: (fextend:f64 (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (FEXT32m64:f64 rriaddr12:i64:$src)
/*6288*/    /*Scope*/ 9, /*->6298*/
/*6289*/      OPC_RecordChild0, // #0 = $src
/*6290*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FEXT32r64), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FP32:f32:$src) - Complexity = 3
              // Dst: (FEXT32r64:f64 FP32:f32:$src)
/*6298*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->6318
/*6302*/    OPC_RecordNode,   // #0 = 'SystemZcallseq_start' chained node
/*6303*/    OPC_RecordChild1, // #1 = $amt
/*6304*/    OPC_MoveChild, 1,
/*6306*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6309*/    OPC_MoveParent,
/*6310*/    OPC_EmitMergeInputChains1_0,
/*6311*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (SystemZcallseq_start (timm:i64):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
          /*SwitchOpcode*/ 67,  TARGET_VAL(SystemZISD::CALL),// ->6388
/*6321*/    OPC_RecordNode,   // #0 = 'SystemZcall' chained node
/*6322*/    OPC_CaptureGlueInput,
/*6323*/    OPC_RecordChild1, // #1 = $dst
/*6324*/    OPC_Scope, 49, /*->6375*/ // 2 children in Scope
/*6326*/      OPC_MoveChild, 1,
/*6328*/      OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::Constant),// ->6344
/*6332*/        OPC_MoveParent,
/*6333*/        OPC_EmitMergeInputChains1_0,
/*6334*/        OPC_EmitConvertToTarget, 1,
/*6336*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (SystemZcall (imm:iPTR):$dst) - Complexity = 6
                // Dst: (CALLi:i64 (imm:i64):$dst)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->6359
/*6347*/        OPC_CheckType, MVT::i64,
/*6349*/        OPC_MoveParent,
/*6350*/        OPC_EmitMergeInputChains1_0,
/*6351*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (SystemZcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (CALLi:i64 (tglobaladdr:i64):$dst)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->6374
/*6362*/        OPC_CheckType, MVT::i64,
/*6364*/        OPC_MoveParent,
/*6365*/        OPC_EmitMergeInputChains1_0,
/*6366*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (SystemZcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (CALLi:i64 (texternalsym:i64):$dst)
              0, // EndSwitchOpcode
/*6375*/    /*Scope*/ 11, /*->6387*/
/*6376*/      OPC_CheckChild1Type, MVT::i64,
/*6378*/      OPC_EmitMergeInputChains1_0,
/*6379*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (SystemZcall ADDR64:i64:$dst) - Complexity = 3
              // Dst: (CALLr:i64 ADDR64:i64:$dst)
/*6387*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60,  TARGET_VAL(ISD::FNEG),// ->6451
/*6391*/    OPC_Scope, 31, /*->6424*/ // 2 children in Scope
/*6393*/      OPC_MoveChild, 0,
/*6395*/      OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*6398*/      OPC_RecordChild0, // #0 = $src
/*6399*/      OPC_MoveParent,
/*6400*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6412
/*6403*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNABS32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 (fabs:f32 FP32:f32:$src)) - Complexity = 6
                // Dst: (FNABS32rr:f32:i64 FP32:f32:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6423
/*6414*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNABS64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 (fabs:f64 FP64:f64:$src)) - Complexity = 6
                // Dst: (FNABS64rr:f64:i64 FP64:f64:$src)
              0, // EndSwitchType
/*6424*/    /*Scope*/ 25, /*->6450*/
/*6425*/      OPC_RecordChild0, // #0 = $src
/*6426*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6438
/*6429*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FNEG32rr:f32:i64 FP32:f32:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6449
/*6440*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FNEG64rr:f64:i64 FP64:f64:$src)
              0, // EndSwitchType
/*6450*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 66,  TARGET_VAL(ISD::ConstantFP),// ->6520
/*6454*/    OPC_Scope, 22, /*->6478*/ // 2 children in Scope
/*6456*/      OPC_CheckPredicate, 42, // Predicate_fpimm0
/*6458*/      OPC_SwitchType /*2 cases */, 7,  MVT::f32,// ->6468
/*6461*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD_Fp032), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LD_Fp032:f32)
              /*SwitchType*/ 7,  MVT::f64,// ->6477
/*6470*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD_Fp064), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LD_Fp064:f64)
              0, // EndSwitchType
/*6478*/    /*Scope*/ 40, /*->6519*/
/*6479*/      OPC_CheckPredicate, 43, // Predicate_fpimmneg0
/*6481*/      OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->6500
/*6484*/        OPC_EmitNode, TARGET_VAL(SystemZ::LD_Fp032), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0 
/*6491*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (FNEG32rr:f32:i64 (LD_Fp032:f32))
              /*SwitchType*/ 16,  MVT::f64,// ->6518
/*6502*/        OPC_EmitNode, TARGET_VAL(SystemZ::LD_Fp064), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0 
/*6509*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (FNEG64rr:f64:i64 (LD_Fp064:f64))
              0, // EndSwitchType
/*6519*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(SystemZISD::RET_FLAG),// ->6532
/*6523*/    OPC_RecordNode,   // #0 = 'SystemZretflag' chained node
/*6524*/    OPC_CaptureGlueInput,
/*6525*/    OPC_EmitMergeInputChains1_0,
/*6526*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::RET), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (SystemZretflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->6551
/*6535*/    OPC_RecordNode,   // #0 = 'br' chained node
/*6536*/    OPC_RecordChild1, // #1 = $dst
/*6537*/    OPC_MoveChild, 1,
/*6539*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6542*/    OPC_MoveParent,
/*6543*/    OPC_EmitMergeInputChains1_0,
/*6544*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::JMP), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (JMP (bb:Other):$dst)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->6566
/*6554*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*6555*/    OPC_RecordChild1, // #1 = $dst
/*6556*/    OPC_CheckChild1Type, MVT::i64,
/*6558*/    OPC_EmitMergeInputChains1_0,
/*6559*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::JMPr), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind GR64:i64:$dst) - Complexity = 3
            // Dst: (JMPr GR64:i64:$dst)
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::FCOPYSIGN),// ->6599
/*6569*/    OPC_RecordChild0, // #0 = $src1
/*6570*/    OPC_RecordChild1, // #1 = $src2
/*6571*/    OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->6585
/*6574*/      OPC_CheckChild1Type, MVT::f32,
/*6576*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCOPYSIGN32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fcopysign:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
              // Dst: (FCOPYSIGN32:f32 FP32:f32:$src1, FP32:f32:$src2)
            /*SwitchType*/ 11,  MVT::f64,// ->6598
/*6587*/      OPC_CheckChild1Type, MVT::f64,
/*6589*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCOPYSIGN64), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fcopysign:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
              // Dst: (FCOPYSIGN64:f64 FP64:f64:$src1, FP64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FABS),// ->6627
/*6602*/    OPC_RecordChild0, // #0 = $src
/*6603*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6615
/*6606*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FABS32rr), 0,
                  2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FABS32rr:f32:i64 FP32:f32:$src)
            /*SwitchType*/ 9,  MVT::f64,// ->6626
/*6617*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FABS64rr), 0,
                  2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FABS64rr:f64:i64 FP64:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->6639
/*6630*/    OPC_RecordChild0, // #0 = $src
/*6631*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::FROUND64r32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 FP64:f64:$src) - Complexity = 3
            // Dst: (FROUND64r32:f32 FP64:f64:$src)
          /*SwitchOpcode*/ 57,  TARGET_VAL(ISD::SINT_TO_FP),// ->6699
/*6642*/    OPC_RecordChild0, // #0 = $src
/*6643*/    OPC_Scope, 26, /*->6671*/ // 2 children in Scope
/*6645*/      OPC_CheckChild0Type, MVT::i32,
/*6647*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6659
/*6650*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP32), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR32:i32:$src) - Complexity = 3
                // Dst: (FCONVFP32:f32:i64 GR32:i32:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6670
/*6661*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP64r32), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR32:i32:$src) - Complexity = 3
                // Dst: (FCONVFP64r32:f64:i64 GR32:i32:$src)
              0, // EndSwitchType
/*6671*/    /*Scope*/ 26, /*->6698*/
/*6672*/      OPC_CheckChild0Type, MVT::i64,
/*6674*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6686
/*6677*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP32r64), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR64:i64:$src) - Complexity = 3
                // Dst: (FCONVFP32r64:f32:i64 GR64:i64:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6697
/*6688*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP64), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR64:i64:$src) - Complexity = 3
                // Dst: (FCONVFP64:f64:i64 GR64:i64:$src)
              0, // EndSwitchType
/*6698*/    0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 6701 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 77
  // #OPC_RecordNode                     = 59
  // #OPC_RecordChild                    = 214
  // #OPC_RecordMemRef                   = 47
  // #OPC_CaptureGlueInput               = 5
  // #OPC_MoveChild                      = 82
  // #OPC_MoveParent                     = 136
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 5
  // #OPC_CheckPredicate                 = 202
  // #OPC_CheckOpcode                    = 74
  // #OPC_SwitchOpcode                   = 6
  // #OPC_CheckType                      = 89
  // #OPC_SwitchType                     = 64
  // #OPC_CheckChildType                 = 95
  // #OPC_CheckInteger                   = 15
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 137
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 42
  // #OPC_EmitInteger                    = 0
  // #OPC_EmitStringInteger              = 11
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 57
  // #OPC_EmitMergeInputChains           = 148
  // #OPC_EmitCopyToReg                  = 18
  // #OPC_EmitNode                       = 16
  // #OPC_EmitNodeXForm                  = 43
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 301

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (Subtarget.isZ10());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - true if the immediate fits in a 16-bit sign extended
  // field.
  if (N->getValueType(0) == MVT::i64) {
    uint64_t val = N->getZExtValue();
    return ((int64_t)val == (int16_t)val);
  } else if (N->getValueType(0) == MVT::i32) {
    uint32_t val = N->getZExtValue();
    return ((int32_t)val == (int16_t)val);
  }

  return false;

  }
  case 3: { // Predicate_immSExt32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt32 predicate - true if the immediate fits in a 32-bit sign extended
  // field.
  uint64_t val = N->getZExtValue();
  return ((int64_t)val == (int32_t)val);

  }
  case 4: { // Predicate_i32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32ll16c predicate - true if the 32-bit immediate has all bits 16-31 set.
  return ((N->getZExtValue() | 0x00000000FFFF0000ULL) == N->getZExtValue());

  }
  case 5: { // Predicate_i64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64ll16c predicate - true if the 64-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() | 0xFFFFFFFFFFFF0000ULL) == N->getZExtValue());

  }
  case 6: { // Predicate_i32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32lh16c predicate - true if the 32-bit immediate has all rightmost 16
  //  bits set.
  return ((N->getZExtValue() | 0x000000000000FFFFULL) == N->getZExtValue());

  }
  case 7: { // Predicate_i64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64lh16c predicate - true if the 64-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() | 0xFFFFFFFF0000FFFFULL) == N->getZExtValue());

  }
  case 8: { // Predicate_i64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hl16c predicate - true if the 64-bit immediate has only bits 32-47 set.
  return ((N->getZExtValue() | 0xFFFF0000FFFFFFFFULL) == N->getZExtValue());

  }
  case 9: { // Predicate_i64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hh16c predicate - true if the 64-bit immediate has only bits 48-63 set.
  return ((N->getZExtValue() | 0x0000FFFFFFFFFFFFULL) == N->getZExtValue());

  }
  case 10: { // Predicate_i64lo32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64lo32 predicate - true if the 64-bit immediate has only rightmost 32
  // bits set.
  return ((N->getZExtValue() | 0xFFFFFFFF00000000ULL) == N->getZExtValue());

  }
  case 11: { // Predicate_i64hi32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64hi32 predicate - true if the 64-bit immediate has only bits 32-63 set.
  return ((N->getZExtValue() | 0x00000000FFFFFFFFULL) == N->getZExtValue());

  }
  case 12: { // Predicate_i32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32ll16 predicate - true if the 32-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() & 0x000000000000FFFFULL) == N->getZExtValue());

  }
  case 13: { // Predicate_i32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32lh16 predicate - true if the 32-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() & 0x00000000FFFF0000ULL) == N->getZExtValue());

  }
  case 14: { // Predicate_i64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64ll16 predicate - true if the 64-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() & 0x000000000000FFFFULL) == N->getZExtValue());

  }
  case 15: { // Predicate_i64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64lh16 predicate - true if the 64-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() & 0x00000000FFFF0000ULL) == N->getZExtValue());

  }
  case 16: { // Predicate_i64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hl16 predicate - true if the 64-bit immediate has only bits 32-47 set.
  return ((N->getZExtValue() & 0x0000FFFF00000000ULL) == N->getZExtValue());

  }
  case 17: { // Predicate_i64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hh16 predicate - true if the 64-bit immediate has only bits 48-63 set.
  return ((N->getZExtValue() & 0xFFFF000000000000ULL) == N->getZExtValue());

  }
  case 18: { // Predicate_i64lo32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64lo32 predicate - true if the 64-bit immediate has only rightmost 32
  // bits set.
  return ((N->getZExtValue() & 0x00000000FFFFFFFFULL) == N->getZExtValue());

  }
  case 19: { // Predicate_i64hi32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64hi32 predicate - true if the 64-bit immediate has only bits 32-63 set.
  return ((N->getZExtValue() & 0xFFFFFFFF00000000ULL) == N->getZExtValue());

  }
  case 20: { // Predicate_i64immSExt32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64immSExt32 predicate - True if the 64-bit immediate fits in a 32-bit
  // sign extended field.
  return (int64_t)N->getZExtValue() == (int32_t)N->getZExtValue();

  }
  case 21: { // Predicate_i32immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32immSExt16 predicate - True if the 32-bit immediate fits in a 16-bit
  // sign extended field.
  return (int32_t)N->getZExtValue() == (int16_t)N->getZExtValue();

  }
  case 22: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 23: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 24: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 25: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 26: { // Predicate_i64immZExt32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64immZExt32 predicate - True if the 64-bit immediate fits in a 32-bit
  // zero extended field.
  return (uint64_t)N->getZExtValue() == (uint32_t)N->getZExtValue();

  }
  case 27: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 28: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 29: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 30: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 31: { // Predicate_i32immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32immSExt8 predicate - True if the 32-bit immediate fits in a 8-bit
  // sign extended field.
  return (int32_t)N->getZExtValue() == (int8_t)N->getZExtValue();

  }
  case 32: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 33: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 34: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 35: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 36: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 37: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 38: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 39: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 40: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 41: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 42: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 43: { // Predicate_fpimmneg0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

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
    Result.resize(NextRes+3);
    return SelectAddrRRI12(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+3);
    return SelectAddrRRI20(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+3);
    return SelectLAAddr(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrRI12(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return SelectAddrRI(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectAddrRI12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return low 16 bits.
  return getI16Imm(N->getZExtValue() & 0x000000000000FFFFULL);

  }
  case 1: {  // LO32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return low 32 bits.
  return getI32Imm(N->getZExtValue() & 0x00000000FFFFFFFFULL);

  }
  case 2: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 16-31.
  return getI16Imm((N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16);

  }
  case 3: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 32-47.
  return getI16Imm((N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32);

  }
  case 4: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 48-63.
  return getI16Imm((N->getZExtValue() & 0xFFFF000000000000ULL) >> 48);

  }
  case 5: {  // HI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 32-63.
  return getI32Imm(N->getZExtValue() >> 32);

  }
  case 6: {  // LO8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return low 8 bits.
  return getI8Imm(N->getZExtValue() & 0x00000000000000FFULL);

  }
  case 7: {  // GetI64FromI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i64);

  }
  }
}

