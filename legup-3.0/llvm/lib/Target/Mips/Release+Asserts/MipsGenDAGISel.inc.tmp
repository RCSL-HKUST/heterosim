//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Mips target
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
/*0*/     OPC_SwitchOpcode /*67 cases */, 12|128,1/*140*/,  TARGET_VAL(ISD::STORE),// ->145
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 26, /*->35*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $dst
/*15*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*17*/        OPC_CheckPredicate, 1, // Predicate_store
/*19*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*22*/        OPC_EmitMergeInputChains1_0,
/*23*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*26*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
              // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
              // Dst: (SW ZERO:i32, addr:i32:$dst)
/*35*/      /*Scope*/ 108, /*->144*/
/*36*/        OPC_RecordChild1, // #1 = $dst
/*37*/        OPC_Scope, 60, /*->99*/ // 3 children in Scope
/*39*/          OPC_CheckChild1Type, MVT::i32,
/*41*/          OPC_RecordChild2, // #2 = $addr
/*42*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*44*/          OPC_Scope, 36, /*->82*/ // 2 children in Scope
/*46*/            OPC_CheckPredicate, 2, // Predicate_truncstore
/*48*/            OPC_Scope, 15, /*->65*/ // 2 children in Scope
/*50*/              OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*52*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*55*/              OPC_EmitMergeInputChains1_0,
/*56*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$dst, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SB CPURegs:i32:$dst, addr:i32:$addr)
/*65*/            /*Scope*/ 15, /*->81*/
/*66*/              OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*68*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*71*/              OPC_EmitMergeInputChains1_0,
/*72*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$dst, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SH CPURegs:i32:$dst, addr:i32:$addr)
/*81*/            0, /*End of Scope*/
/*82*/          /*Scope*/ 15, /*->98*/
/*83*/            OPC_CheckPredicate, 1, // Predicate_store
/*85*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*88*/            OPC_EmitMergeInputChains1_0,
/*89*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st CPURegs:i32:$dst, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SW CPURegs:i32:$dst, addr:i32:$addr)
/*98*/          0, /*End of Scope*/
/*99*/        /*Scope*/ 22, /*->122*/
/*100*/         OPC_CheckChild1Type, MVT::f64,
/*102*/         OPC_RecordChild2, // #2 = $addr
/*103*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*105*/         OPC_CheckPredicate, 1, // Predicate_store
/*107*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isSingleFloat()) && (!Subtarget.isMips1())
/*109*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*112*/         OPC_EmitMergeInputChains1_0,
/*113*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st AFGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SDC1 AFGR64:f64:$ft, addr:i32:$addr)
/*122*/       /*Scope*/ 20, /*->143*/
/*123*/         OPC_CheckChild1Type, MVT::f32,
/*125*/         OPC_RecordChild2, // #2 = $addr
/*126*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*128*/         OPC_CheckPredicate, 1, // Predicate_store
/*130*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*133*/         OPC_EmitMergeInputChains1_0,
/*134*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st FGR32:f32:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SWC1 FGR32:f32:$ft, addr:i32:$addr)
/*143*/       0, /*End of Scope*/
/*144*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::LOAD),// ->346
/*149*/     OPC_RecordMemRef,
/*150*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*151*/     OPC_RecordChild1, // #1 = $addr
/*152*/     OPC_CheckPredicate, 5, // Predicate_unindexedload
/*154*/     OPC_Scope, 19, /*->175*/ // 7 children in Scope
/*156*/       OPC_CheckPredicate, 6, // Predicate_sextload
/*158*/       OPC_CheckPredicate, 7, // Predicate_sextloadi8
/*160*/       OPC_CheckType, MVT::i32,
/*162*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*165*/       OPC_EmitMergeInputChains1_0,
/*166*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
              // Dst: (LB:i32 addr:i32:$addr)
/*175*/     /*Scope*/ 19, /*->195*/
/*176*/       OPC_CheckPredicate, 8, // Predicate_zextload
/*178*/       OPC_CheckPredicate, 9, // Predicate_zextloadi8
/*180*/       OPC_CheckType, MVT::i32,
/*182*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*185*/       OPC_EmitMergeInputChains1_0,
/*186*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBu:i32 addr:i32:$addr)
/*195*/     /*Scope*/ 19, /*->215*/
/*196*/       OPC_CheckPredicate, 6, // Predicate_sextload
/*198*/       OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*200*/       OPC_CheckType, MVT::i32,
/*202*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*205*/       OPC_EmitMergeInputChains1_0,
/*206*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LH:i32 addr:i32:$addr)
/*215*/     /*Scope*/ 19, /*->235*/
/*216*/       OPC_CheckPredicate, 8, // Predicate_zextload
/*218*/       OPC_CheckPredicate, 11, // Predicate_zextloadi16
/*220*/       OPC_CheckType, MVT::i32,
/*222*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*225*/       OPC_EmitMergeInputChains1_0,
/*226*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHu:i32 addr:i32:$addr)
/*235*/     /*Scope*/ 17, /*->253*/
/*236*/       OPC_CheckPredicate, 12, // Predicate_load
/*238*/       OPC_CheckType, MVT::i32,
/*240*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*243*/       OPC_EmitMergeInputChains1_0,
/*244*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LW:i32 addr:i32:$addr)
/*253*/     /*Scope*/ 54, /*->308*/
/*254*/       OPC_CheckPredicate, 13, // Predicate_extload
/*256*/       OPC_CheckType, MVT::i32,
/*258*/       OPC_Scope, 15, /*->275*/ // 3 children in Scope
/*260*/         OPC_CheckPredicate, 14, // Predicate_extloadi1
/*262*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*265*/         OPC_EmitMergeInputChains1_0,
/*266*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                // Dst: (LBu:i32 addr:i32:$src)
/*275*/       /*Scope*/ 15, /*->291*/
/*276*/         OPC_CheckPredicate, 15, // Predicate_extloadi8
/*278*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*281*/         OPC_EmitMergeInputChains1_0,
/*282*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LBu:i32 addr:i32:$src)
/*291*/       /*Scope*/ 15, /*->307*/
/*292*/         OPC_CheckPredicate, 16, // Predicate_extloadi16
/*294*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*297*/         OPC_EmitMergeInputChains1_0,
/*298*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LHu:i32 addr:i32:$src)
/*307*/       0, /*End of Scope*/
/*308*/     /*Scope*/ 36, /*->345*/
/*309*/       OPC_CheckPredicate, 12, // Predicate_load
/*311*/       OPC_SwitchType /*2 cases */, 15,  MVT::f64,// ->329
/*314*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isSingleFloat()) && (!Subtarget.isMips1())
/*316*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*319*/         OPC_EmitMergeInputChains1_0,
/*320*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDC1:f64 addr:i32:$addr)
              /*SwitchType*/ 13,  MVT::f32,// ->344
/*331*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*334*/         OPC_EmitMergeInputChains1_0,
/*335*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWC1:f32 addr:i32:$addr)
              0, // EndSwitchType
/*345*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(MipsISD::DynAlloc),// ->368
/*349*/     OPC_RecordNode,   // #0 = 'MipsDynAlloc' chained node
/*350*/     OPC_CaptureGlueInput,
/*351*/     OPC_RecordChild1, // #1 = $f
/*352*/     OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$f #2 #3
/*355*/     OPC_EmitMergeInputChains1_0,
/*356*/     OPC_EmitNode, TARGET_VAL(Mips::DynAlloc), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*365*/     OPC_CompleteMatch, 1, 4, 
            // Src: (MipsDynAlloc:i32 addr:iPTR:$f) - Complexity = 12
            // Dst: (DynAlloc:i32 addr:i32:$f)
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::XOR),// ->473
/*371*/     OPC_Scope, 31, /*->404*/ // 2 children in Scope
/*373*/       OPC_MoveChild, 0,
/*375*/       OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*378*/       OPC_RecordChild0, // #0 = $b
/*379*/       OPC_RecordChild1, // #1 = $c
/*380*/       OPC_MoveParent,
/*381*/       OPC_MoveChild, 1,
/*383*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*394*/       OPC_MoveParent,
/*395*/       OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (or:i32 CPURegs:i32:$b, CPURegs:i32:$c), -1:i32) - Complexity = 11
              // Dst: (NOR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*404*/     /*Scope*/ 67, /*->472*/
/*405*/       OPC_RecordChild0, // #0 = $in
/*406*/       OPC_Scope, 26, /*->434*/ // 2 children in Scope
/*408*/         OPC_MoveChild, 1,
/*410*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*421*/         OPC_MoveParent,
/*422*/         OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*425*/         OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 CPURegs:i32:$in, ZERO:i32)
/*434*/       /*Scope*/ 36, /*->471*/
/*435*/         OPC_RecordChild1, // #1 = $c
/*436*/         OPC_Scope, 22, /*->460*/ // 2 children in Scope
/*438*/           OPC_MoveChild, 1,
/*440*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*443*/           OPC_CheckPredicate, 17, // Predicate_immZExt16
/*445*/           OPC_MoveParent,
/*446*/           OPC_EmitConvertToTarget, 1,
/*448*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*451*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c) - Complexity = 7
                  // Dst: (XORi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
/*460*/         /*Scope*/ 9, /*->470*/
/*461*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
                  // Dst: (XOR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*470*/         0, /*End of Scope*/
/*471*/       0, /*End of Scope*/
/*472*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 71|128,3/*455*/,  TARGET_VAL(ISD::BRCOND),// ->932
/*477*/     OPC_RecordNode,   // #0 = 'brcond' chained node
/*478*/     OPC_Scope, 44|128,3/*428*/, /*->909*/ // 2 children in Scope
/*481*/       OPC_MoveChild, 1,
/*483*/       OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*486*/       OPC_RecordChild0, // #1 = $src
/*487*/       OPC_Scope, 15|128,1/*143*/, /*->633*/ // 3 children in Scope
/*490*/         OPC_MoveChild, 1,
/*492*/         OPC_CheckInteger, 0, 
/*494*/         OPC_MoveParent,
/*495*/         OPC_MoveChild, 2,
/*497*/         OPC_Scope, 20, /*->519*/ // 6 children in Scope
/*499*/           OPC_CheckCondCode, ISD::SETGE,
/*501*/           OPC_MoveParent,
/*502*/           OPC_MoveParent,
/*503*/           OPC_RecordChild2, // #2 = $offset
/*504*/           OPC_MoveChild, 2,
/*506*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*509*/           OPC_MoveParent,
/*510*/           OPC_EmitMergeInputChains1_0,
/*511*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BGEZ CPURegs:i32:$src, (bb:Other):$offset)
/*519*/         /*Scope*/ 20, /*->540*/
/*520*/           OPC_CheckCondCode, ISD::SETGT,
/*522*/           OPC_MoveParent,
/*523*/           OPC_MoveParent,
/*524*/           OPC_RecordChild2, // #2 = $offset
/*525*/           OPC_MoveChild, 2,
/*527*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*530*/           OPC_MoveParent,
/*531*/           OPC_EmitMergeInputChains1_0,
/*532*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BGTZ CPURegs:i32:$src, (bb:Other):$offset)
/*540*/         /*Scope*/ 20, /*->561*/
/*541*/           OPC_CheckCondCode, ISD::SETLE,
/*543*/           OPC_MoveParent,
/*544*/           OPC_MoveParent,
/*545*/           OPC_RecordChild2, // #2 = $offset
/*546*/           OPC_MoveChild, 2,
/*548*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*551*/           OPC_MoveParent,
/*552*/           OPC_EmitMergeInputChains1_0,
/*553*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BLEZ CPURegs:i32:$src, (bb:Other):$offset)
/*561*/         /*Scope*/ 20, /*->582*/
/*562*/           OPC_CheckCondCode, ISD::SETLT,
/*564*/           OPC_MoveParent,
/*565*/           OPC_MoveParent,
/*566*/           OPC_RecordChild2, // #2 = $offset
/*567*/           OPC_MoveChild, 2,
/*569*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*572*/           OPC_MoveParent,
/*573*/           OPC_EmitMergeInputChains1_0,
/*574*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BLTZ CPURegs:i32:$src, (bb:Other):$offset)
/*582*/         /*Scope*/ 24, /*->607*/
/*583*/           OPC_CheckCondCode, ISD::SETNE,
/*585*/           OPC_MoveParent,
/*586*/           OPC_MoveParent,
/*587*/           OPC_RecordChild2, // #2 = $dst
/*588*/           OPC_MoveChild, 2,
/*590*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*593*/           OPC_MoveParent,
/*594*/           OPC_EmitMergeInputChains1_0,
/*595*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*607*/         /*Scope*/ 24, /*->632*/
/*608*/           OPC_CheckCondCode, ISD::SETEQ,
/*610*/           OPC_MoveParent,
/*611*/           OPC_MoveParent,
/*612*/           OPC_RecordChild2, // #2 = $dst
/*613*/           OPC_MoveChild, 2,
/*615*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*618*/           OPC_MoveParent,
/*619*/           OPC_EmitMergeInputChains1_0,
/*620*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*623*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*632*/         0, /*End of Scope*/
/*633*/       /*Scope*/ 85, /*->719*/
/*634*/         OPC_RecordChild1, // #2 = $rhs
/*635*/         OPC_MoveChild, 1,
/*637*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*640*/         OPC_CheckPredicate, 18, // Predicate_immSExt16
/*642*/         OPC_MoveParent,
/*643*/         OPC_MoveChild, 2,
/*645*/         OPC_Scope, 35, /*->682*/ // 2 children in Scope
/*647*/           OPC_CheckCondCode, ISD::SETGE,
/*649*/           OPC_MoveParent,
/*650*/           OPC_MoveParent,
/*651*/           OPC_RecordChild2, // #3 = $dst
/*652*/           OPC_MoveChild, 2,
/*654*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*657*/           OPC_MoveParent,
/*658*/           OPC_EmitMergeInputChains1_0,
/*659*/           OPC_EmitConvertToTarget, 2,
/*661*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*670*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*673*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                  // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*682*/         /*Scope*/ 35, /*->718*/
/*683*/           OPC_CheckCondCode, ISD::SETUGE,
/*685*/           OPC_MoveParent,
/*686*/           OPC_MoveParent,
/*687*/           OPC_RecordChild2, // #3 = $dst
/*688*/           OPC_MoveChild, 2,
/*690*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*693*/           OPC_MoveParent,
/*694*/           OPC_EmitMergeInputChains1_0,
/*695*/           OPC_EmitConvertToTarget, 2,
/*697*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*706*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*709*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                  // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*718*/         0, /*End of Scope*/
/*719*/       /*Scope*/ 59|128,1/*187*/, /*->908*/
/*721*/         OPC_CheckChild0Type, MVT::i32,
/*723*/         OPC_RecordChild1, // #2 = $b
/*724*/         OPC_MoveChild, 2,
/*726*/         OPC_Scope, 21, /*->749*/ // 6 children in Scope
/*728*/           OPC_CheckCondCode, ISD::SETEQ,
/*730*/           OPC_MoveParent,
/*731*/           OPC_MoveParent,
/*732*/           OPC_RecordChild2, // #3 = $offset
/*733*/           OPC_MoveChild, 2,
/*735*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*738*/           OPC_MoveParent,
/*739*/           OPC_EmitMergeInputChains1_0,
/*740*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$a, CPURegs:i32:$b, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                  // Dst: (BEQ CPURegs:i32:$a, CPURegs:i32:$b, (bb:Other):$offset)
/*749*/         /*Scope*/ 21, /*->771*/
/*750*/           OPC_CheckCondCode, ISD::SETNE,
/*752*/           OPC_MoveParent,
/*753*/           OPC_MoveParent,
/*754*/           OPC_RecordChild2, // #3 = $offset
/*755*/           OPC_MoveChild, 2,
/*757*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*760*/           OPC_MoveParent,
/*761*/           OPC_EmitMergeInputChains1_0,
/*762*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$a, CPURegs:i32:$b, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                  // Dst: (BNE CPURegs:i32:$a, CPURegs:i32:$b, (bb:Other):$offset)
/*771*/         /*Scope*/ 33, /*->805*/
/*772*/           OPC_CheckCondCode, ISD::SETGE,
/*774*/           OPC_MoveParent,
/*775*/           OPC_MoveParent,
/*776*/           OPC_RecordChild2, // #3 = $dst
/*777*/           OPC_MoveChild, 2,
/*779*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*782*/           OPC_MoveParent,
/*783*/           OPC_EmitMergeInputChains1_0,
/*784*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*793*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*796*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*805*/         /*Scope*/ 33, /*->839*/
/*806*/           OPC_CheckCondCode, ISD::SETUGE,
/*808*/           OPC_MoveParent,
/*809*/           OPC_MoveParent,
/*810*/           OPC_RecordChild2, // #3 = $dst
/*811*/           OPC_MoveChild, 2,
/*813*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*816*/           OPC_MoveParent,
/*817*/           OPC_EmitMergeInputChains1_0,
/*818*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*827*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*830*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*839*/         /*Scope*/ 33, /*->873*/
/*840*/           OPC_CheckCondCode, ISD::SETLE,
/*842*/           OPC_MoveParent,
/*843*/           OPC_MoveParent,
/*844*/           OPC_RecordChild2, // #3 = $dst
/*845*/           OPC_MoveChild, 2,
/*847*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*850*/           OPC_MoveParent,
/*851*/           OPC_EmitMergeInputChains1_0,
/*852*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*861*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*864*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*873*/         /*Scope*/ 33, /*->907*/
/*874*/           OPC_CheckCondCode, ISD::SETULE,
/*876*/           OPC_MoveParent,
/*877*/           OPC_MoveParent,
/*878*/           OPC_RecordChild2, // #3 = $dst
/*879*/           OPC_MoveChild, 2,
/*881*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*884*/           OPC_MoveParent,
/*885*/           OPC_EmitMergeInputChains1_0,
/*886*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*895*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*898*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*907*/         0, /*End of Scope*/
/*908*/       0, /*End of Scope*/
/*909*/     /*Scope*/ 21, /*->931*/
/*910*/       OPC_RecordChild1, // #1 = $cond
/*911*/       OPC_RecordChild2, // #2 = $dst
/*912*/       OPC_MoveChild, 2,
/*914*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*917*/       OPC_MoveParent,
/*918*/       OPC_EmitMergeInputChains1_0,
/*919*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*922*/       OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
              // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
              // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*931*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::CTLZ),// ->981
/*935*/     OPC_Scope, 31, /*->968*/ // 2 children in Scope
/*937*/       OPC_MoveChild, 0,
/*939*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*942*/       OPC_RecordChild0, // #0 = $src
/*943*/       OPC_MoveChild, 1,
/*945*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*956*/       OPC_MoveParent,
/*957*/       OPC_MoveParent,
/*958*/       OPC_CheckPatternPredicate, 1, // (Subtarget.hasBitCount())
/*960*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 (xor:i32 CPURegs:i32:$src, -1:i32)) - Complexity = 11
              // Dst: (CLO:i32 CPURegs:i32:$src)
/*968*/     /*Scope*/ 11, /*->980*/
/*969*/       OPC_RecordChild0, // #0 = $src
/*970*/       OPC_CheckPatternPredicate, 1, // (Subtarget.hasBitCount())
/*972*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 CPURegs:i32:$src) - Complexity = 3
              // Dst: (CLZ:i32 CPURegs:i32:$src)
/*980*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,7/*951*/,  TARGET_VAL(ISD::SELECT),// ->1936
/*985*/     OPC_Scope, 24|128,4/*536*/, /*->1524*/ // 4 children in Scope
/*988*/       OPC_MoveChild, 0,
/*990*/       OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*993*/       OPC_RecordChild0, // #0 = $lhs
/*994*/       OPC_Scope, 47, /*->1043*/ // 5 children in Scope
/*996*/         OPC_MoveChild, 1,
/*998*/         OPC_CheckInteger, 0, 
/*1000*/        OPC_MoveParent,
/*1001*/        OPC_MoveChild, 2,
/*1003*/        OPC_Scope, 18, /*->1023*/ // 2 children in Scope
/*1005*/          OPC_CheckCondCode, ISD::SETEQ,
/*1007*/          OPC_MoveParent,
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_RecordChild1, // #1 = $T
/*1010*/          OPC_RecordChild2, // #2 = $F
/*1011*/          OPC_CheckType, MVT::i32,
/*1013*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
/*1023*/        /*Scope*/ 18, /*->1042*/
/*1024*/          OPC_CheckCondCode, ISD::SETNE,
/*1026*/          OPC_MoveParent,
/*1027*/          OPC_MoveParent,
/*1028*/          OPC_RecordChild1, // #1 = $T
/*1029*/          OPC_RecordChild2, // #2 = $F
/*1030*/          OPC_CheckType, MVT::i32,
/*1032*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                  // Dst: (MOVN_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
/*1042*/        0, /*End of Scope*/
/*1043*/      /*Scope*/ 73, /*->1117*/
/*1044*/        OPC_RecordChild1, // #1 = $rhs
/*1045*/        OPC_MoveChild, 1,
/*1047*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1050*/        OPC_CheckPredicate, 18, // Predicate_immSExt16
/*1052*/        OPC_MoveParent,
/*1053*/        OPC_MoveChild, 2,
/*1055*/        OPC_Scope, 29, /*->1086*/ // 2 children in Scope
/*1057*/          OPC_CheckCondCode, ISD::SETGE,
/*1059*/          OPC_MoveParent,
/*1060*/          OPC_MoveParent,
/*1061*/          OPC_RecordChild1, // #2 = $T
/*1062*/          OPC_RecordChild2, // #3 = $F
/*1063*/          OPC_CheckType, MVT::i32,
/*1065*/          OPC_EmitConvertToTarget, 1,
/*1067*/          OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1076*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*1086*/        /*Scope*/ 29, /*->1116*/
/*1087*/          OPC_CheckCondCode, ISD::SETUGE,
/*1089*/          OPC_MoveParent,
/*1090*/          OPC_MoveParent,
/*1091*/          OPC_RecordChild1, // #2 = $T
/*1092*/          OPC_RecordChild2, // #3 = $F
/*1093*/          OPC_CheckType, MVT::i32,
/*1095*/          OPC_EmitConvertToTarget, 1,
/*1097*/          OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1106*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*1116*/        0, /*End of Scope*/
/*1117*/      /*Scope*/ 89, /*->1207*/
/*1118*/        OPC_MoveChild, 1,
/*1120*/        OPC_CheckInteger, 0, 
/*1122*/        OPC_MoveParent,
/*1123*/        OPC_MoveChild, 2,
/*1125*/        OPC_Scope, 18, /*->1145*/ // 4 children in Scope
/*1127*/          OPC_CheckCondCode, ISD::SETEQ,
/*1129*/          OPC_MoveParent,
/*1130*/          OPC_MoveParent,
/*1131*/          OPC_RecordChild1, // #1 = $T
/*1132*/          OPC_RecordChild2, // #2 = $F
/*1133*/          OPC_CheckType, MVT::f32,
/*1135*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                  // Dst: (MOVZ_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*1145*/        /*Scope*/ 18, /*->1164*/
/*1146*/          OPC_CheckCondCode, ISD::SETNE,
/*1148*/          OPC_MoveParent,
/*1149*/          OPC_MoveParent,
/*1150*/          OPC_RecordChild1, // #1 = $T
/*1151*/          OPC_RecordChild2, // #2 = $F
/*1152*/          OPC_CheckType, MVT::f32,
/*1154*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                  // Dst: (MOVN_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*1164*/        /*Scope*/ 20, /*->1185*/
/*1165*/          OPC_CheckCondCode, ISD::SETEQ,
/*1167*/          OPC_MoveParent,
/*1168*/          OPC_MoveParent,
/*1169*/          OPC_RecordChild1, // #1 = $T
/*1170*/          OPC_RecordChild2, // #2 = $F
/*1171*/          OPC_CheckType, MVT::f64,
/*1173*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1175*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                  // Dst: (MOVZ_D:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*1185*/        /*Scope*/ 20, /*->1206*/
/*1186*/          OPC_CheckCondCode, ISD::SETNE,
/*1188*/          OPC_MoveParent,
/*1189*/          OPC_MoveParent,
/*1190*/          OPC_RecordChild1, // #1 = $T
/*1191*/          OPC_RecordChild2, // #2 = $F
/*1192*/          OPC_CheckType, MVT::f64,
/*1194*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1196*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_D), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                  // Dst: (MOVN_D:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*1206*/        0, /*End of Scope*/
/*1207*/      /*Scope*/ 9|128,1/*137*/, /*->1346*/
/*1209*/        OPC_RecordChild1, // #1 = $rhs
/*1210*/        OPC_MoveChild, 1,
/*1212*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1215*/        OPC_CheckPredicate, 18, // Predicate_immSExt16
/*1217*/        OPC_MoveParent,
/*1218*/        OPC_MoveChild, 2,
/*1220*/        OPC_Scope, 29, /*->1251*/ // 4 children in Scope
/*1222*/          OPC_CheckCondCode, ISD::SETGE,
/*1224*/          OPC_MoveParent,
/*1225*/          OPC_MoveParent,
/*1226*/          OPC_RecordChild1, // #2 = $T
/*1227*/          OPC_RecordChild2, // #3 = $F
/*1228*/          OPC_CheckType, MVT::f32,
/*1230*/          OPC_EmitConvertToTarget, 1,
/*1232*/          OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1241*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                  // Dst: (MOVZ_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*1251*/        /*Scope*/ 29, /*->1281*/
/*1252*/          OPC_CheckCondCode, ISD::SETUGE,
/*1254*/          OPC_MoveParent,
/*1255*/          OPC_MoveParent,
/*1256*/          OPC_RecordChild1, // #2 = $T
/*1257*/          OPC_RecordChild2, // #3 = $F
/*1258*/          OPC_CheckType, MVT::f32,
/*1260*/          OPC_EmitConvertToTarget, 1,
/*1262*/          OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1271*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                  // Dst: (MOVZ_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*1281*/        /*Scope*/ 31, /*->1313*/
/*1282*/          OPC_CheckCondCode, ISD::SETGE,
/*1284*/          OPC_MoveParent,
/*1285*/          OPC_MoveParent,
/*1286*/          OPC_RecordChild1, // #2 = $T
/*1287*/          OPC_RecordChild2, // #3 = $F
/*1288*/          OPC_CheckType, MVT::f64,
/*1290*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1292*/          OPC_EmitConvertToTarget, 1,
/*1294*/          OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1303*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                  // Dst: (MOVZ_D:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*1313*/        /*Scope*/ 31, /*->1345*/
/*1314*/          OPC_CheckCondCode, ISD::SETUGE,
/*1316*/          OPC_MoveParent,
/*1317*/          OPC_MoveParent,
/*1318*/          OPC_RecordChild1, // #2 = $T
/*1319*/          OPC_RecordChild2, // #3 = $F
/*1320*/          OPC_CheckType, MVT::f64,
/*1322*/          OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1324*/          OPC_EmitConvertToTarget, 1,
/*1326*/          OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1335*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                  // Dst: (MOVZ_D:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*1345*/        0, /*End of Scope*/
/*1346*/      /*Scope*/ 47|128,1/*175*/, /*->1523*/
/*1348*/        OPC_CheckChild0Type, MVT::i32,
/*1350*/        OPC_RecordChild1, // #1 = $rhs
/*1351*/        OPC_MoveChild, 2,
/*1353*/        OPC_Scope, 27, /*->1382*/ // 6 children in Scope
/*1355*/          OPC_CheckCondCode, ISD::SETGE,
/*1357*/          OPC_MoveParent,
/*1358*/          OPC_MoveParent,
/*1359*/          OPC_RecordChild1, // #2 = $T
/*1360*/          OPC_RecordChild2, // #3 = $F
/*1361*/          OPC_CheckType, MVT::i32,
/*1363*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1372*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*1382*/        /*Scope*/ 27, /*->1410*/
/*1383*/          OPC_CheckCondCode, ISD::SETUGE,
/*1385*/          OPC_MoveParent,
/*1386*/          OPC_MoveParent,
/*1387*/          OPC_RecordChild1, // #2 = $T
/*1388*/          OPC_RecordChild2, // #3 = $F
/*1389*/          OPC_CheckType, MVT::i32,
/*1391*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1400*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*1410*/        /*Scope*/ 27, /*->1438*/
/*1411*/          OPC_CheckCondCode, ISD::SETLE,
/*1413*/          OPC_MoveParent,
/*1414*/          OPC_MoveParent,
/*1415*/          OPC_RecordChild1, // #2 = $T
/*1416*/          OPC_RecordChild2, // #3 = $F
/*1417*/          OPC_CheckType, MVT::i32,
/*1419*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1428*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*1438*/        /*Scope*/ 27, /*->1466*/
/*1439*/          OPC_CheckCondCode, ISD::SETULE,
/*1441*/          OPC_MoveParent,
/*1442*/          OPC_MoveParent,
/*1443*/          OPC_RecordChild1, // #2 = $T
/*1444*/          OPC_RecordChild2, // #3 = $F
/*1445*/          OPC_CheckType, MVT::i32,
/*1447*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1456*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*1466*/        /*Scope*/ 27, /*->1494*/
/*1467*/          OPC_CheckCondCode, ISD::SETEQ,
/*1469*/          OPC_MoveParent,
/*1470*/          OPC_MoveParent,
/*1471*/          OPC_RecordChild1, // #2 = $T
/*1472*/          OPC_RecordChild2, // #3 = $F
/*1473*/          OPC_CheckType, MVT::i32,
/*1475*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1484*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*1494*/        /*Scope*/ 27, /*->1522*/
/*1495*/          OPC_CheckCondCode, ISD::SETNE,
/*1497*/          OPC_MoveParent,
/*1498*/          OPC_MoveParent,
/*1499*/          OPC_RecordChild1, // #2 = $T
/*1500*/          OPC_RecordChild2, // #3 = $F
/*1501*/          OPC_CheckType, MVT::i32,
/*1503*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1512*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVN_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*1522*/        0, /*End of Scope*/
/*1523*/      0, /*End of Scope*/
/*1524*/    /*Scope*/ 15, /*->1540*/
/*1525*/      OPC_RecordChild0, // #0 = $cond
/*1526*/      OPC_RecordChild1, // #1 = $T
/*1527*/      OPC_RecordChild2, // #2 = $F
/*1528*/      OPC_CheckType, MVT::i32,
/*1530*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
              // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVN_I:i32 CPURegs:i32:$T, CPURegs:i32:$cond, CPURegs:i32:$F)
/*1540*/    /*Scope*/ 105|128,2/*361*/, /*->1903*/
/*1542*/      OPC_MoveChild, 0,
/*1544*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*1547*/      OPC_RecordChild0, // #0 = $lhs
/*1548*/      OPC_CheckChild0Type, MVT::i32,
/*1550*/      OPC_RecordChild1, // #1 = $rhs
/*1551*/      OPC_MoveChild, 2,
/*1553*/      OPC_Scope, 27, /*->1582*/ // 12 children in Scope
/*1555*/        OPC_CheckCondCode, ISD::SETGE,
/*1557*/        OPC_MoveParent,
/*1558*/        OPC_MoveParent,
/*1559*/        OPC_RecordChild1, // #2 = $T
/*1560*/        OPC_RecordChild2, // #3 = $F
/*1561*/        OPC_CheckType, MVT::f32,
/*1563*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1572*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                // Dst: (MOVZ_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*1582*/      /*Scope*/ 27, /*->1610*/
/*1583*/        OPC_CheckCondCode, ISD::SETUGE,
/*1585*/        OPC_MoveParent,
/*1586*/        OPC_MoveParent,
/*1587*/        OPC_RecordChild1, // #2 = $T
/*1588*/        OPC_RecordChild2, // #3 = $F
/*1589*/        OPC_CheckType, MVT::f32,
/*1591*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1600*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                // Dst: (MOVZ_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*1610*/      /*Scope*/ 27, /*->1638*/
/*1611*/        OPC_CheckCondCode, ISD::SETLE,
/*1613*/        OPC_MoveParent,
/*1614*/        OPC_MoveParent,
/*1615*/        OPC_RecordChild1, // #2 = $T
/*1616*/        OPC_RecordChild2, // #3 = $F
/*1617*/        OPC_CheckType, MVT::f32,
/*1619*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1628*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                // Dst: (MOVZ_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*1638*/      /*Scope*/ 27, /*->1666*/
/*1639*/        OPC_CheckCondCode, ISD::SETULE,
/*1641*/        OPC_MoveParent,
/*1642*/        OPC_MoveParent,
/*1643*/        OPC_RecordChild1, // #2 = $T
/*1644*/        OPC_RecordChild2, // #3 = $F
/*1645*/        OPC_CheckType, MVT::f32,
/*1647*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1656*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                // Dst: (MOVZ_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*1666*/      /*Scope*/ 27, /*->1694*/
/*1667*/        OPC_CheckCondCode, ISD::SETEQ,
/*1669*/        OPC_MoveParent,
/*1670*/        OPC_MoveParent,
/*1671*/        OPC_RecordChild1, // #2 = $T
/*1672*/        OPC_RecordChild2, // #3 = $F
/*1673*/        OPC_CheckType, MVT::f32,
/*1675*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1684*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                // Dst: (MOVZ_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*1694*/      /*Scope*/ 27, /*->1722*/
/*1695*/        OPC_CheckCondCode, ISD::SETNE,
/*1697*/        OPC_MoveParent,
/*1698*/        OPC_MoveParent,
/*1699*/        OPC_RecordChild1, // #2 = $T
/*1700*/        OPC_RecordChild2, // #3 = $F
/*1701*/        OPC_CheckType, MVT::f32,
/*1703*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1712*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                // Dst: (MOVN_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*1722*/      /*Scope*/ 29, /*->1752*/
/*1723*/        OPC_CheckCondCode, ISD::SETGE,
/*1725*/        OPC_MoveParent,
/*1726*/        OPC_MoveParent,
/*1727*/        OPC_RecordChild1, // #2 = $T
/*1728*/        OPC_RecordChild2, // #3 = $F
/*1729*/        OPC_CheckType, MVT::f64,
/*1731*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1733*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1742*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                // Dst: (MOVZ_D:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*1752*/      /*Scope*/ 29, /*->1782*/
/*1753*/        OPC_CheckCondCode, ISD::SETUGE,
/*1755*/        OPC_MoveParent,
/*1756*/        OPC_MoveParent,
/*1757*/        OPC_RecordChild1, // #2 = $T
/*1758*/        OPC_RecordChild2, // #3 = $F
/*1759*/        OPC_CheckType, MVT::f64,
/*1761*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1763*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1772*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                // Dst: (MOVZ_D:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*1782*/      /*Scope*/ 29, /*->1812*/
/*1783*/        OPC_CheckCondCode, ISD::SETLE,
/*1785*/        OPC_MoveParent,
/*1786*/        OPC_MoveParent,
/*1787*/        OPC_RecordChild1, // #2 = $T
/*1788*/        OPC_RecordChild2, // #3 = $F
/*1789*/        OPC_CheckType, MVT::f64,
/*1791*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1793*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1802*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                // Dst: (MOVZ_D:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*1812*/      /*Scope*/ 29, /*->1842*/
/*1813*/        OPC_CheckCondCode, ISD::SETULE,
/*1815*/        OPC_MoveParent,
/*1816*/        OPC_MoveParent,
/*1817*/        OPC_RecordChild1, // #2 = $T
/*1818*/        OPC_RecordChild2, // #3 = $F
/*1819*/        OPC_CheckType, MVT::f64,
/*1821*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1823*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1832*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                // Dst: (MOVZ_D:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*1842*/      /*Scope*/ 29, /*->1872*/
/*1843*/        OPC_CheckCondCode, ISD::SETEQ,
/*1845*/        OPC_MoveParent,
/*1846*/        OPC_MoveParent,
/*1847*/        OPC_RecordChild1, // #2 = $T
/*1848*/        OPC_RecordChild2, // #3 = $F
/*1849*/        OPC_CheckType, MVT::f64,
/*1851*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1853*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1862*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_D), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                // Dst: (MOVZ_D:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*1872*/      /*Scope*/ 29, /*->1902*/
/*1873*/        OPC_CheckCondCode, ISD::SETNE,
/*1875*/        OPC_MoveParent,
/*1876*/        OPC_MoveParent,
/*1877*/        OPC_RecordChild1, // #2 = $T
/*1878*/        OPC_RecordChild2, // #3 = $F
/*1879*/        OPC_CheckType, MVT::f64,
/*1881*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1883*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1892*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_D), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                // Dst: (MOVN_D:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*1902*/      0, /*End of Scope*/
/*1903*/    /*Scope*/ 31, /*->1935*/
/*1904*/      OPC_RecordChild0, // #0 = $cond
/*1905*/      OPC_RecordChild1, // #1 = $T
/*1906*/      OPC_RecordChild2, // #2 = $F
/*1907*/      OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->1920
/*1910*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                // Src: (select:f32 CPURegs:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                // Dst: (MOVN_S:f32 FGR32:f32:$T, CPURegs:i32:$cond, FGR32:f32:$F)
              /*SwitchType*/ 12,  MVT::f64,// ->1934
/*1922*/        OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*1924*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_D), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                // Src: (select:f64 CPURegs:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVN_D:f64 AFGR64:f64:$T, CPURegs:i32:$cond, AFGR64:f64:$F)
              0, // EndSwitchType
/*1935*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->1965
/*1939*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*1940*/    OPC_CaptureGlueInput,
/*1941*/    OPC_RecordChild1, // #1 = $amt1
/*1942*/    OPC_MoveChild, 1,
/*1944*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1947*/    OPC_MoveParent,
/*1948*/    OPC_RecordChild2, // #2 = $amt2
/*1949*/    OPC_MoveChild, 2,
/*1951*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1954*/    OPC_MoveParent,
/*1955*/    OPC_EmitMergeInputChains1_0,
/*1956*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FrameIndex),// ->1996
/*1968*/    OPC_RecordNode,   // #0 = $addr
/*1969*/    OPC_CheckType, MVT::i32,
/*1971*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*1974*/    OPC_Scope, 9, /*->1985*/ // 2 children in Scope
/*1976*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: addr:i32:$addr - Complexity = 9
              // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*1985*/    /*Scope*/ 9, /*->1995*/
/*1986*/      OPC_MorphNodeTo, TARGET_VAL(Mips::DynAlloc), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: addr:i32:$addr - Complexity = 9
              // Dst: (DynAlloc:i32 addr:i32:$addr)
/*1995*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82|128,2/*338*/,  TARGET_VAL(ISD::ADD),// ->2338
/*2000*/    OPC_Scope, 17|128,1/*145*/, /*->2148*/ // 3 children in Scope
/*2003*/      OPC_RecordChild0, // #0 = $hi
/*2004*/      OPC_MoveChild, 1,
/*2006*/      OPC_SwitchOpcode /*4 cases */, 61,  TARGET_VAL(MipsISD::Lo),// ->2071
/*2010*/        OPC_RecordChild0, // #1 = $lo
/*2011*/        OPC_MoveChild, 0,
/*2013*/        OPC_SwitchOpcode /*4 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2028
/*2017*/          OPC_MoveParent,
/*2018*/          OPC_MoveParent,
/*2019*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->2042
/*2031*/          OPC_MoveParent,
/*2032*/          OPC_MoveParent,
/*2033*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetJumpTable),// ->2056
/*2045*/          OPC_MoveParent,
/*2046*/          OPC_MoveParent,
/*2047*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->2070
/*2059*/          OPC_MoveParent,
/*2060*/          OPC_MoveParent,
/*2061*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::GPRel),// ->2107
/*2074*/        OPC_RecordChild0, // #1 = $in
/*2075*/        OPC_MoveChild, 0,
/*2077*/        OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2092
/*2081*/          OPC_MoveParent,
/*2082*/          OPC_MoveParent,
/*2083*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->2106
/*2095*/          OPC_MoveParent,
/*2096*/          OPC_MoveParent,
/*2097*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::TlsGd),// ->2127
/*2110*/        OPC_RecordChild0, // #1 = $in
/*2111*/        OPC_MoveChild, 0,
/*2113*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*2116*/        OPC_MoveParent,
/*2117*/        OPC_MoveParent,
/*2118*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 CPURegs:i32:$gp, (MipsTlsGd:i32 (tglobaltlsaddr:i32):$in)) - Complexity = 9
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
              /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::TprelLo),// ->2147
/*2130*/        OPC_RecordChild0, // #1 = $lo
/*2131*/        OPC_MoveChild, 0,
/*2133*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*2136*/        OPC_MoveParent,
/*2137*/        OPC_MoveParent,
/*2138*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 CPURegs:i32:$hi, (MipsTprelLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
              0, // EndSwitchOpcode
/*2148*/    /*Scope*/ 24|128,1/*152*/, /*->2302*/
/*2150*/      OPC_MoveChild, 0,
/*2152*/      OPC_SwitchOpcode /*4 cases */, 65,  TARGET_VAL(MipsISD::Lo),// ->2221
/*2156*/        OPC_RecordChild0, // #0 = $lo
/*2157*/        OPC_MoveChild, 0,
/*2159*/        OPC_SwitchOpcode /*4 cases */, 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2175
/*2163*/          OPC_MoveParent,
/*2164*/          OPC_MoveParent,
/*2165*/          OPC_RecordChild1, // #1 = $hi
/*2166*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetBlockAddress),// ->2190
/*2178*/          OPC_MoveParent,
/*2179*/          OPC_MoveParent,
/*2180*/          OPC_RecordChild1, // #1 = $hi
/*2181*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetJumpTable),// ->2205
/*2193*/          OPC_MoveParent,
/*2194*/          OPC_MoveParent,
/*2195*/          OPC_RecordChild1, // #1 = $hi
/*2196*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetConstantPool),// ->2220
/*2208*/          OPC_MoveParent,
/*2209*/          OPC_MoveParent,
/*2210*/          OPC_RecordChild1, // #1 = $hi
/*2211*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::GPRel),// ->2259
/*2224*/        OPC_RecordChild0, // #0 = $in
/*2225*/        OPC_MoveChild, 0,
/*2227*/        OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2243
/*2231*/          OPC_MoveParent,
/*2232*/          OPC_MoveParent,
/*2233*/          OPC_RecordChild1, // #1 = $gp
/*2234*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetConstantPool),// ->2258
/*2246*/          OPC_MoveParent,
/*2247*/          OPC_MoveParent,
/*2248*/          OPC_RecordChild1, // #1 = $gp
/*2249*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 18,  TARGET_VAL(MipsISD::TlsGd),// ->2280
/*2262*/        OPC_RecordChild0, // #0 = $in
/*2263*/        OPC_MoveChild, 0,
/*2265*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*2268*/        OPC_MoveParent,
/*2269*/        OPC_MoveParent,
/*2270*/        OPC_RecordChild1, // #1 = $gp
/*2271*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (MipsTlsGd:i32 (tglobaltlsaddr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
              /*SwitchOpcode*/ 18,  TARGET_VAL(MipsISD::TprelLo),// ->2301
/*2283*/        OPC_RecordChild0, // #0 = $lo
/*2284*/        OPC_MoveChild, 0,
/*2286*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*2289*/        OPC_MoveParent,
/*2290*/        OPC_MoveParent,
/*2291*/        OPC_RecordChild1, // #1 = $hi
/*2292*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (MipsTprelLo:i32 (tglobaltlsaddr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
              0, // EndSwitchOpcode
/*2302*/    /*Scope*/ 34, /*->2337*/
/*2303*/      OPC_RecordChild0, // #0 = $b
/*2304*/      OPC_RecordChild1, // #1 = $c
/*2305*/      OPC_Scope, 19, /*->2326*/ // 2 children in Scope
/*2307*/        OPC_MoveChild, 1,
/*2309*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2312*/        OPC_CheckPredicate, 18, // Predicate_immSExt16
/*2314*/        OPC_MoveParent,
/*2315*/        OPC_EmitConvertToTarget, 1,
/*2317*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (add:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
                // Dst: (ADDiu:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2326*/      /*Scope*/ 9, /*->2336*/
/*2327*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*2336*/      0, /*End of Scope*/
/*2337*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::FPBrcond),// ->2423
/*2341*/    OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*2342*/    OPC_CaptureGlueInput,
/*2343*/    OPC_MoveChild, 1,
/*2345*/    OPC_Scope, 18, /*->2365*/ // 4 children in Scope
/*2347*/      OPC_CheckInteger, 0, 
/*2349*/      OPC_MoveParent,
/*2350*/      OPC_RecordChild2, // #1 = $dst
/*2351*/      OPC_MoveChild, 2,
/*2353*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2356*/      OPC_MoveParent,
/*2357*/      OPC_EmitMergeInputChains1_0,
/*2358*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1F (bb:Other):$dst)
/*2365*/    /*Scope*/ 18, /*->2384*/
/*2366*/      OPC_CheckInteger, 1, 
/*2368*/      OPC_MoveParent,
/*2369*/      OPC_RecordChild2, // #1 = $dst
/*2370*/      OPC_MoveChild, 2,
/*2372*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2375*/      OPC_MoveParent,
/*2376*/      OPC_EmitMergeInputChains1_0,
/*2377*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1T (bb:Other):$dst)
/*2384*/    /*Scope*/ 18, /*->2403*/
/*2385*/      OPC_CheckInteger, 2, 
/*2387*/      OPC_MoveParent,
/*2388*/      OPC_RecordChild2, // #1 = $dst
/*2389*/      OPC_MoveChild, 2,
/*2391*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2394*/      OPC_MoveParent,
/*2395*/      OPC_EmitMergeInputChains1_0,
/*2396*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1FL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 2:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1FL (bb:Other):$dst)
/*2403*/    /*Scope*/ 18, /*->2422*/
/*2404*/      OPC_CheckInteger, 3, 
/*2406*/      OPC_MoveParent,
/*2407*/      OPC_RecordChild2, // #1 = $dst
/*2408*/      OPC_MoveChild, 2,
/*2410*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2413*/      OPC_MoveParent,
/*2414*/      OPC_EmitMergeInputChains1_0,
/*2415*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1TL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 3:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1TL (bb:Other):$dst)
/*2422*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 56|128,2/*312*/,  TARGET_VAL(ISD::SETCC),// ->2739
/*2427*/    OPC_RecordChild0, // #0 = $b
/*2428*/    OPC_Scope, 97, /*->2527*/ // 2 children in Scope
/*2430*/      OPC_RecordChild1, // #1 = $c
/*2431*/      OPC_MoveChild, 1,
/*2433*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2436*/      OPC_CheckPredicate, 18, // Predicate_immSExt16
/*2438*/      OPC_MoveParent,
/*2439*/      OPC_MoveChild, 2,
/*2441*/      OPC_Scope, 14, /*->2457*/ // 4 children in Scope
/*2443*/        OPC_CheckCondCode, ISD::SETLT,
/*2445*/        OPC_MoveParent,
/*2446*/        OPC_EmitConvertToTarget, 1,
/*2448*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c, SETLT:Other) - Complexity = 7
                // Dst: (SLTi:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2457*/      /*Scope*/ 14, /*->2472*/
/*2458*/        OPC_CheckCondCode, ISD::SETULT,
/*2460*/        OPC_MoveParent,
/*2461*/        OPC_EmitConvertToTarget, 1,
/*2463*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c, SETULT:Other) - Complexity = 7
                // Dst: (SLTiu:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2472*/      /*Scope*/ 26, /*->2499*/
/*2473*/        OPC_CheckCondCode, ISD::SETGE,
/*2475*/        OPC_MoveParent,
/*2476*/        OPC_EmitConvertToTarget, 1,
/*2478*/        OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*2487*/        OPC_EmitInteger, MVT::i32, 1, 
/*2490*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*2499*/      /*Scope*/ 26, /*->2526*/
/*2500*/        OPC_CheckCondCode, ISD::SETUGE,
/*2502*/        OPC_MoveParent,
/*2503*/        OPC_EmitConvertToTarget, 1,
/*2505*/        OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*2514*/        OPC_EmitInteger, MVT::i32, 1, 
/*2517*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*2526*/      0, /*End of Scope*/
/*2527*/    /*Scope*/ 81|128,1/*209*/, /*->2738*/
/*2529*/      OPC_CheckChild0Type, MVT::i32,
/*2531*/      OPC_RecordChild1, // #1 = $c
/*2532*/      OPC_MoveChild, 2,
/*2534*/      OPC_Scope, 12, /*->2548*/ // 10 children in Scope
/*2536*/        OPC_CheckCondCode, ISD::SETLT,
/*2538*/        OPC_MoveParent,
/*2539*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$b, CPURegs:i32:$c, SETLT:Other) - Complexity = 3
                // Dst: (SLT:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*2548*/      /*Scope*/ 12, /*->2561*/
/*2549*/        OPC_CheckCondCode, ISD::SETULT,
/*2551*/        OPC_MoveParent,
/*2552*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$b, CPURegs:i32:$c, SETULT:Other) - Complexity = 3
                // Dst: (SLTu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*2561*/      /*Scope*/ 12, /*->2574*/
/*2562*/        OPC_CheckCondCode, ISD::SETGT,
/*2564*/        OPC_MoveParent,
/*2565*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*2574*/      /*Scope*/ 12, /*->2587*/
/*2575*/        OPC_CheckCondCode, ISD::SETUGT,
/*2577*/        OPC_MoveParent,
/*2578*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*2587*/      /*Scope*/ 24, /*->2612*/
/*2588*/        OPC_CheckCondCode, ISD::SETEQ,
/*2590*/        OPC_MoveParent,
/*2591*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*2600*/        OPC_EmitInteger, MVT::i32, 1, 
/*2603*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (SLTu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*2612*/      /*Scope*/ 24, /*->2637*/
/*2613*/        OPC_CheckCondCode, ISD::SETNE,
/*2615*/        OPC_MoveParent,
/*2616*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2619*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3 
/*2628*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*2637*/      /*Scope*/ 24, /*->2662*/
/*2638*/        OPC_CheckCondCode, ISD::SETLE,
/*2640*/        OPC_MoveParent,
/*2641*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*2650*/        OPC_EmitInteger, MVT::i32, 1, 
/*2653*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*2662*/      /*Scope*/ 24, /*->2687*/
/*2663*/        OPC_CheckCondCode, ISD::SETULE,
/*2665*/        OPC_MoveParent,
/*2666*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*2675*/        OPC_EmitInteger, MVT::i32, 1, 
/*2678*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*2687*/      /*Scope*/ 24, /*->2712*/
/*2688*/        OPC_CheckCondCode, ISD::SETGE,
/*2690*/        OPC_MoveParent,
/*2691*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*2700*/        OPC_EmitInteger, MVT::i32, 1, 
/*2703*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*2712*/      /*Scope*/ 24, /*->2737*/
/*2713*/        OPC_CheckCondCode, ISD::SETUGE,
/*2715*/        OPC_MoveParent,
/*2716*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*2725*/        OPC_EmitInteger, MVT::i32, 1, 
/*2728*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*2737*/      0, /*End of Scope*/
/*2738*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::AND),// ->2779
/*2742*/    OPC_RecordChild0, // #0 = $b
/*2743*/    OPC_RecordChild1, // #1 = $c
/*2744*/    OPC_Scope, 22, /*->2768*/ // 2 children in Scope
/*2746*/      OPC_MoveChild, 1,
/*2748*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2751*/      OPC_CheckPredicate, 17, // Predicate_immZExt16
/*2753*/      OPC_MoveParent,
/*2754*/      OPC_EmitConvertToTarget, 1,
/*2756*/      OPC_EmitNodeXForm, 0, 2, // LO16
/*2759*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (and:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c) - Complexity = 7
              // Dst: (ANDi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
/*2768*/    /*Scope*/ 9, /*->2778*/
/*2769*/      OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (AND:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*2778*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::OR),// ->2819
/*2782*/    OPC_RecordChild0, // #0 = $b
/*2783*/    OPC_RecordChild1, // #1 = $c
/*2784*/    OPC_Scope, 22, /*->2808*/ // 2 children in Scope
/*2786*/      OPC_MoveChild, 1,
/*2788*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2791*/      OPC_CheckPredicate, 17, // Predicate_immZExt16
/*2793*/      OPC_MoveParent,
/*2794*/      OPC_EmitConvertToTarget, 1,
/*2796*/      OPC_EmitNodeXForm, 0, 2, // LO16
/*2799*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (or:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c) - Complexity = 7
              // Dst: (ORi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
/*2808*/    /*Scope*/ 9, /*->2818*/
/*2809*/      OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (OR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*2818*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->2856
/*2822*/    OPC_RecordChild0, // #0 = $b
/*2823*/    OPC_RecordChild1, // #1 = $c
/*2824*/    OPC_Scope, 19, /*->2845*/ // 2 children in Scope
/*2826*/      OPC_MoveChild, 1,
/*2828*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2831*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2833*/      OPC_MoveParent,
/*2834*/      OPC_EmitConvertToTarget, 1,
/*2836*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (SLL:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2845*/    /*Scope*/ 9, /*->2855*/
/*2846*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (shl:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (SLLV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2855*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->2893
/*2859*/    OPC_RecordChild0, // #0 = $b
/*2860*/    OPC_RecordChild1, // #1 = $c
/*2861*/    OPC_Scope, 19, /*->2882*/ // 2 children in Scope
/*2863*/      OPC_MoveChild, 1,
/*2865*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2868*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2870*/      OPC_MoveParent,
/*2871*/      OPC_EmitConvertToTarget, 1,
/*2873*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (SRL:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2882*/    /*Scope*/ 9, /*->2892*/
/*2883*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (srl:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (SRLV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2892*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRA),// ->2930
/*2896*/    OPC_RecordChild0, // #0 = $b
/*2897*/    OPC_RecordChild1, // #1 = $c
/*2898*/    OPC_Scope, 19, /*->2919*/ // 2 children in Scope
/*2900*/      OPC_MoveChild, 1,
/*2902*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2905*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2907*/      OPC_MoveParent,
/*2908*/      OPC_EmitConvertToTarget, 1,
/*2910*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sra:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (SRA:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2919*/    /*Scope*/ 9, /*->2929*/
/*2920*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (sra:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (SRAV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2929*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::ROTR),// ->2971
/*2933*/    OPC_RecordChild0, // #0 = $b
/*2934*/    OPC_RecordChild1, // #1 = $c
/*2935*/    OPC_Scope, 21, /*->2958*/ // 2 children in Scope
/*2937*/      OPC_MoveChild, 1,
/*2939*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2942*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2944*/      OPC_MoveParent,
/*2945*/      OPC_CheckPatternPredicate, 3, // (Subtarget.isMips32r2())
/*2947*/      OPC_EmitConvertToTarget, 1,
/*2949*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (rotr:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (ROTR:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2958*/    /*Scope*/ 11, /*->2970*/
/*2959*/      OPC_CheckPatternPredicate, 3, // (Subtarget.isMips32r2())
/*2961*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (rotr:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (ROTRV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2970*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::ADDC),// ->3008
/*2974*/    OPC_RecordChild0, // #0 = $src
/*2975*/    OPC_RecordChild1, // #1 = $imm
/*2976*/    OPC_Scope, 19, /*->2997*/ // 2 children in Scope
/*2978*/      OPC_MoveChild, 1,
/*2980*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2983*/      OPC_CheckPredicate, 18, // Predicate_immSExt16
/*2985*/      OPC_MoveParent,
/*2986*/      OPC_EmitConvertToTarget, 1,
/*2988*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*2997*/    /*Scope*/ 9, /*->3007*/
/*2998*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*3007*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->3028
/*3011*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3012*/    OPC_RecordChild1, // #1 = $amt
/*3013*/    OPC_MoveChild, 1,
/*3015*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3018*/    OPC_MoveParent,
/*3019*/    OPC_EmitMergeInputChains1_0,
/*3020*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 18,  TARGET_VAL(MipsISD::Sync),// ->3049
/*3031*/    OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*3032*/    OPC_RecordChild1, // #1 = $stype
/*3033*/    OPC_MoveChild, 1,
/*3035*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3038*/    OPC_MoveParent,
/*3039*/    OPC_EmitMergeInputChains1_0,
/*3040*/    OPC_EmitConvertToTarget, 1,
/*3042*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 67,  TARGET_VAL(MipsISD::JmpLink),// ->3119
/*3052*/    OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*3053*/    OPC_CaptureGlueInput,
/*3054*/    OPC_RecordChild1, // #1 = $target
/*3055*/    OPC_Scope, 49, /*->3106*/ // 2 children in Scope
/*3057*/      OPC_MoveChild, 1,
/*3059*/      OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::Constant),// ->3075
/*3063*/        OPC_MoveParent,
/*3064*/        OPC_EmitMergeInputChains1_0,
/*3065*/        OPC_EmitConvertToTarget, 1,
/*3067*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL:i32 (imm:i32):$target)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3090
/*3078*/        OPC_CheckType, MVT::i32,
/*3080*/        OPC_MoveParent,
/*3081*/        OPC_EmitMergeInputChains1_0,
/*3082*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (JAL:i32 (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3105
/*3093*/        OPC_CheckType, MVT::i32,
/*3095*/        OPC_MoveParent,
/*3096*/        OPC_EmitMergeInputChains1_0,
/*3097*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (JAL:i32 (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*3106*/    /*Scope*/ 11, /*->3118*/
/*3107*/      OPC_CheckChild1Type, MVT::i32,
/*3109*/      OPC_EmitMergeInputChains1_0,
/*3110*/      OPC_MorphNodeTo, TARGET_VAL(Mips::JALR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
              // Dst: (JALR:i32 CPURegs:i32:$rs)
/*3118*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Hi),// ->3175
/*3122*/    OPC_RecordChild0, // #0 = $in
/*3123*/    OPC_MoveChild, 0,
/*3125*/    OPC_SwitchOpcode /*4 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3138
/*3129*/      OPC_MoveParent,
/*3130*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (LUi:i32 (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetBlockAddress),// ->3150
/*3141*/      OPC_MoveParent,
/*3142*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
              // Dst: (LUi:i32 (tblockaddress:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetJumpTable),// ->3162
/*3153*/      OPC_MoveParent,
/*3154*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
              // Dst: (LUi:i32 (tjumptable:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetConstantPool),// ->3174
/*3165*/      OPC_MoveParent,
/*3166*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (LUi:i32 (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::TprelHi),// ->3193
/*3178*/    OPC_RecordChild0, // #0 = $in
/*3179*/    OPC_MoveChild, 0,
/*3181*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*3184*/    OPC_MoveParent,
/*3185*/    OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (MipsTprelHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
            // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
          /*SwitchOpcode*/ 85,  TARGET_VAL(MipsISD::WrapperPIC),// ->3281
/*3196*/    OPC_RecordChild0, // #0 = $in
/*3197*/    OPC_MoveChild, 0,
/*3199*/    OPC_SwitchOpcode /*5 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3216
/*3203*/      OPC_MoveParent,
/*3204*/      OPC_EmitRegister, MVT::i32, Mips::GP,
/*3207*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MipsWrapperPIC:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (ADDiu:i32 GP:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->3232
/*3219*/      OPC_MoveParent,
/*3220*/      OPC_EmitRegister, MVT::i32, Mips::GP,
/*3223*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MipsWrapperPIC:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (ADDiu:i32 GP:i32, (tconstpool:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3248
/*3235*/      OPC_MoveParent,
/*3236*/      OPC_EmitRegister, MVT::i32, Mips::GP,
/*3239*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MipsWrapperPIC:i32 (texternalsym:i32):$in) - Complexity = 6
              // Dst: (ADDiu:i32 GP:i32, (texternalsym:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetBlockAddress),// ->3264
/*3251*/      OPC_MoveParent,
/*3252*/      OPC_EmitRegister, MVT::i32, Mips::GP,
/*3255*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MipsWrapperPIC:i32 (tblockaddress:i32):$in) - Complexity = 6
              // Dst: (ADDiu:i32 GP:i32, (tblockaddress:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->3280
/*3267*/      OPC_MoveParent,
/*3268*/      OPC_EmitRegister, MVT::i32, Mips::GP,
/*3271*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MipsWrapperPIC:i32 (tjumptable:i32):$in) - Complexity = 6
              // Dst: (ADDiu:i32 GP:i32, (tjumptable:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 51,  TARGET_VAL(MipsISD::FPCmp),// ->3335
/*3284*/    OPC_RecordChild0, // #0 = $fs
/*3285*/    OPC_Scope, 22, /*->3309*/ // 2 children in Scope
/*3287*/      OPC_CheckChild0Type, MVT::f32,
/*3289*/      OPC_RecordChild1, // #1 = $ft
/*3290*/      OPC_RecordChild2, // #2 = $cc
/*3291*/      OPC_MoveChild, 2,
/*3293*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3296*/      OPC_MoveParent,
/*3297*/      OPC_EmitConvertToTarget, 2,
/*3299*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc)
/*3309*/    /*Scope*/ 24, /*->3334*/
/*3310*/      OPC_CheckChild0Type, MVT::f64,
/*3312*/      OPC_RecordChild1, // #1 = $ft
/*3313*/      OPC_RecordChild2, // #2 = $cc
/*3314*/      OPC_MoveChild, 2,
/*3316*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3319*/      OPC_MoveParent,
/*3320*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*3322*/      OPC_EmitConvertToTarget, 2,
/*3324*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc) - Complexity = 6
              // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc)
/*3334*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(MipsISD::ExtractElementF64),// ->3357
/*3338*/    OPC_RecordChild0, // #0 = $src
/*3339*/    OPC_RecordChild1, // #1 = $n
/*3340*/    OPC_MoveChild, 1,
/*3342*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3345*/    OPC_MoveParent,
/*3346*/    OPC_EmitConvertToTarget, 1,
/*3348*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 65,  TARGET_VAL(ISD::Constant),// ->3425
/*3360*/    OPC_RecordNode,   // #0 = $in
/*3361*/    OPC_Scope, 16, /*->3379*/ // 3 children in Scope
/*3363*/      OPC_CheckPredicate, 18, // Predicate_immSExt16
/*3365*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3368*/      OPC_EmitConvertToTarget, 0,
/*3370*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*3379*/    /*Scope*/ 16, /*->3396*/
/*3380*/      OPC_CheckPredicate, 17, // Predicate_immZExt16
/*3382*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3385*/      OPC_EmitConvertToTarget, 0,
/*3387*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*3396*/    /*Scope*/ 27, /*->3424*/
/*3397*/      OPC_EmitConvertToTarget, 0,
/*3399*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*3402*/      OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*3410*/      OPC_EmitConvertToTarget, 0,
/*3412*/      OPC_EmitNodeXForm, 0, 4, // LO16
/*3415*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i32):$imm - Complexity = 3
              // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*3424*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->3475
/*3428*/    OPC_RecordMemRef,
/*3429*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*3430*/    OPC_RecordChild1, // #1 = $ptr
/*3431*/    OPC_CheckChild1Type, MVT::i32,
/*3433*/    OPC_RecordChild2, // #2 = $incr
/*3434*/    OPC_Scope, 12, /*->3448*/ // 3 children in Scope
/*3436*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_add_8
/*3438*/      OPC_EmitMergeInputChains1_0,
/*3439*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_ADD_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3448*/    /*Scope*/ 12, /*->3461*/
/*3449*/      OPC_CheckPredicate, 21, // Predicate_atomic_load_add_16
/*3451*/      OPC_EmitMergeInputChains1_0,
/*3452*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_ADD_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3461*/    /*Scope*/ 12, /*->3474*/
/*3462*/      OPC_CheckPredicate, 22, // Predicate_atomic_load_add_32
/*3464*/      OPC_EmitMergeInputChains1_0,
/*3465*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_ADD_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3474*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3525
/*3478*/    OPC_RecordMemRef,
/*3479*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*3480*/    OPC_RecordChild1, // #1 = $ptr
/*3481*/    OPC_CheckChild1Type, MVT::i32,
/*3483*/    OPC_RecordChild2, // #2 = $incr
/*3484*/    OPC_Scope, 12, /*->3498*/ // 3 children in Scope
/*3486*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_sub_8
/*3488*/      OPC_EmitMergeInputChains1_0,
/*3489*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_SUB_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3498*/    /*Scope*/ 12, /*->3511*/
/*3499*/      OPC_CheckPredicate, 24, // Predicate_atomic_load_sub_16
/*3501*/      OPC_EmitMergeInputChains1_0,
/*3502*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_SUB_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3511*/    /*Scope*/ 12, /*->3524*/
/*3512*/      OPC_CheckPredicate, 25, // Predicate_atomic_load_sub_32
/*3514*/      OPC_EmitMergeInputChains1_0,
/*3515*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_SUB_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3524*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3575
/*3528*/    OPC_RecordMemRef,
/*3529*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3530*/    OPC_RecordChild1, // #1 = $ptr
/*3531*/    OPC_CheckChild1Type, MVT::i32,
/*3533*/    OPC_RecordChild2, // #2 = $incr
/*3534*/    OPC_Scope, 12, /*->3548*/ // 3 children in Scope
/*3536*/      OPC_CheckPredicate, 26, // Predicate_atomic_load_and_8
/*3538*/      OPC_EmitMergeInputChains1_0,
/*3539*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_AND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3548*/    /*Scope*/ 12, /*->3561*/
/*3549*/      OPC_CheckPredicate, 27, // Predicate_atomic_load_and_16
/*3551*/      OPC_EmitMergeInputChains1_0,
/*3552*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_AND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3561*/    /*Scope*/ 12, /*->3574*/
/*3562*/      OPC_CheckPredicate, 28, // Predicate_atomic_load_and_32
/*3564*/      OPC_EmitMergeInputChains1_0,
/*3565*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_AND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3574*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3625
/*3578*/    OPC_RecordMemRef,
/*3579*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3580*/    OPC_RecordChild1, // #1 = $ptr
/*3581*/    OPC_CheckChild1Type, MVT::i32,
/*3583*/    OPC_RecordChild2, // #2 = $incr
/*3584*/    OPC_Scope, 12, /*->3598*/ // 3 children in Scope
/*3586*/      OPC_CheckPredicate, 29, // Predicate_atomic_load_or_8
/*3588*/      OPC_EmitMergeInputChains1_0,
/*3589*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_OR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3598*/    /*Scope*/ 12, /*->3611*/
/*3599*/      OPC_CheckPredicate, 30, // Predicate_atomic_load_or_16
/*3601*/      OPC_EmitMergeInputChains1_0,
/*3602*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_OR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3611*/    /*Scope*/ 12, /*->3624*/
/*3612*/      OPC_CheckPredicate, 31, // Predicate_atomic_load_or_32
/*3614*/      OPC_EmitMergeInputChains1_0,
/*3615*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_OR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3624*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3675
/*3628*/    OPC_RecordMemRef,
/*3629*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3630*/    OPC_RecordChild1, // #1 = $ptr
/*3631*/    OPC_CheckChild1Type, MVT::i32,
/*3633*/    OPC_RecordChild2, // #2 = $incr
/*3634*/    OPC_Scope, 12, /*->3648*/ // 3 children in Scope
/*3636*/      OPC_CheckPredicate, 32, // Predicate_atomic_load_xor_8
/*3638*/      OPC_EmitMergeInputChains1_0,
/*3639*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_XOR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3648*/    /*Scope*/ 12, /*->3661*/
/*3649*/      OPC_CheckPredicate, 33, // Predicate_atomic_load_xor_16
/*3651*/      OPC_EmitMergeInputChains1_0,
/*3652*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_XOR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3661*/    /*Scope*/ 12, /*->3674*/
/*3662*/      OPC_CheckPredicate, 34, // Predicate_atomic_load_xor_32
/*3664*/      OPC_EmitMergeInputChains1_0,
/*3665*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_XOR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3674*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3725
/*3678*/    OPC_RecordMemRef,
/*3679*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3680*/    OPC_RecordChild1, // #1 = $ptr
/*3681*/    OPC_CheckChild1Type, MVT::i32,
/*3683*/    OPC_RecordChild2, // #2 = $incr
/*3684*/    OPC_Scope, 12, /*->3698*/ // 3 children in Scope
/*3686*/      OPC_CheckPredicate, 35, // Predicate_atomic_load_nand_8
/*3688*/      OPC_EmitMergeInputChains1_0,
/*3689*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_NAND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3698*/    /*Scope*/ 12, /*->3711*/
/*3699*/      OPC_CheckPredicate, 36, // Predicate_atomic_load_nand_16
/*3701*/      OPC_EmitMergeInputChains1_0,
/*3702*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_NAND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3711*/    /*Scope*/ 12, /*->3724*/
/*3712*/      OPC_CheckPredicate, 37, // Predicate_atomic_load_nand_32
/*3714*/      OPC_EmitMergeInputChains1_0,
/*3715*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
              // Dst: (ATOMIC_LOAD_NAND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3724*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3775
/*3728*/    OPC_RecordMemRef,
/*3729*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3730*/    OPC_RecordChild1, // #1 = $ptr
/*3731*/    OPC_CheckChild1Type, MVT::i32,
/*3733*/    OPC_RecordChild2, // #2 = $incr
/*3734*/    OPC_Scope, 12, /*->3748*/ // 3 children in Scope
/*3736*/      OPC_CheckPredicate, 38, // Predicate_atomic_swap_8
/*3738*/      OPC_EmitMergeInputChains1_0,
/*3739*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
              // Dst: (ATOMIC_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3748*/    /*Scope*/ 12, /*->3761*/
/*3749*/      OPC_CheckPredicate, 39, // Predicate_atomic_swap_16
/*3751*/      OPC_EmitMergeInputChains1_0,
/*3752*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
              // Dst: (ATOMIC_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3761*/    /*Scope*/ 12, /*->3774*/
/*3762*/      OPC_CheckPredicate, 40, // Predicate_atomic_swap_32
/*3764*/      OPC_EmitMergeInputChains1_0,
/*3765*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
              // Dst: (ATOMIC_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*3774*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 51,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3829
/*3778*/    OPC_RecordMemRef,
/*3779*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3780*/    OPC_RecordChild1, // #1 = $ptr
/*3781*/    OPC_CheckChild1Type, MVT::i32,
/*3783*/    OPC_RecordChild2, // #2 = $cmp
/*3784*/    OPC_RecordChild3, // #3 = $swap
/*3785*/    OPC_Scope, 13, /*->3800*/ // 3 children in Scope
/*3787*/      OPC_CheckPredicate, 41, // Predicate_atomic_cmp_swap_8
/*3789*/      OPC_EmitMergeInputChains1_0,
/*3790*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
              // Dst: (ATOMIC_CMP_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*3800*/    /*Scope*/ 13, /*->3814*/
/*3801*/      OPC_CheckPredicate, 42, // Predicate_atomic_cmp_swap_16
/*3803*/      OPC_EmitMergeInputChains1_0,
/*3804*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
              // Dst: (ATOMIC_CMP_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*3814*/    /*Scope*/ 13, /*->3828*/
/*3815*/      OPC_CheckPredicate, 43, // Predicate_atomic_cmp_swap_32
/*3817*/      OPC_EmitMergeInputChains1_0,
/*3818*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
              // Dst: (ATOMIC_CMP_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*3828*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SUB),// ->3843
/*3832*/    OPC_RecordChild0, // #0 = $b
/*3833*/    OPC_RecordChild1, // #1 = $c
/*3834*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sub:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
            // Dst: (SUBu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
          /*SwitchOpcode*/ 33,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3879
/*3846*/    OPC_RecordChild0, // #0 = $src
/*3847*/    OPC_MoveChild, 1,
/*3849*/    OPC_Scope, 13, /*->3864*/ // 2 children in Scope
/*3851*/      OPC_CheckValueType, MVT::i8,
/*3853*/      OPC_MoveParent,
/*3854*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasSEInReg())
/*3856*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 CPURegs:i32:$src, i8:Other) - Complexity = 3
              // Dst: (SEB:i32 CPURegs:i32:$src)
/*3864*/    /*Scope*/ 13, /*->3878*/
/*3865*/      OPC_CheckValueType, MVT::i16,
/*3867*/      OPC_MoveParent,
/*3868*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasSEInReg())
/*3870*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 CPURegs:i32:$src, i16:Other) - Complexity = 3
              // Dst: (SEH:i32 CPURegs:i32:$src)
/*3878*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::BSWAP),// ->3893
/*3882*/    OPC_RecordChild0, // #0 = $src
/*3883*/    OPC_CheckPatternPredicate, 5, // (Subtarget.hasSwap())
/*3885*/    OPC_MorphNodeTo, TARGET_VAL(Mips::WSBW), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (bswap:i32 CPURegs:i32:$src) - Complexity = 3
            // Dst: (WSBW:i32 CPURegs:i32:$src)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MUL),// ->3909
/*3896*/    OPC_RecordChild0, // #0 = $b
/*3897*/    OPC_RecordChild1, // #1 = $c
/*3898*/    OPC_CheckPatternPredicate, 6, // (Subtarget.isMips32())
/*3900*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mul:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
            // Dst: (MUL:i32 CPURegs:i32:$b, CPURegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SUBC),// ->3923
/*3912*/    OPC_RecordChild0, // #0 = $lhs
/*3913*/    OPC_RecordChild1, // #1 = $rhs
/*3914*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
            // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->3953
/*3926*/    OPC_RecordChild0, // #0 = $src
/*3927*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->3940
/*3930*/      OPC_CheckChild0Type, MVT::f32,
/*3932*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$src) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$src)
            /*SwitchType*/ 10,  MVT::f32,// ->3952
/*3942*/      OPC_CheckChild0Type, MVT::i32,
/*3944*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f32 CPURegs:i32:$src) - Complexity = 3
              // Dst: (MTC1:f32 CPURegs:i32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FP_TO_SINT),// ->3997
/*3956*/    OPC_RecordChild0, // #0 = $src
/*3957*/    OPC_Scope, 18, /*->3977*/ // 2 children in Scope
/*3959*/      OPC_CheckChild0Type, MVT::f32,
/*3961*/      OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*3969*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (fp_to_sint:i32 FGR32:f32:$src) - Complexity = 3
              // Dst: (MFC1:i32 (TRUNC_W_S32:f32 FGR32:f32:$src))
/*3977*/    /*Scope*/ 18, /*->3996*/
/*3978*/      OPC_CheckChild0Type, MVT::f64,
/*3980*/      OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*3988*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (fp_to_sint:i32 AFGR64:f64:$src) - Complexity = 3
              // Dst: (MFC1:i32 (TRUNC_W_D32:f32 AFGR64:f64:$src))
/*3996*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::CMovFP_T),// ->4040
/*4000*/    OPC_CaptureGlueInput,
/*4001*/    OPC_RecordChild0, // #0 = $T
/*4002*/    OPC_RecordChild1, // #1 = $F
/*4003*/    OPC_SwitchType /*3 cases */, 9,  MVT::i32,// ->4015
/*4006*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i32 CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVT:i32 CPURegs:i32:$T, CPURegs:i32:$F)
            /*SwitchType*/ 9,  MVT::f32,// ->4026
/*4017*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f32 FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32:f32:$T, FGR32:f32:$F)
            /*SwitchType*/ 11,  MVT::f64,// ->4039
/*4028*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4030*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f64 AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
              // Dst: (MOVT_D:f64 AFGR64:f64:$T, AFGR64:f64:$F)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::CMovFP_F),// ->4083
/*4043*/    OPC_CaptureGlueInput,
/*4044*/    OPC_RecordChild0, // #0 = $T
/*4045*/    OPC_RecordChild1, // #1 = $F
/*4046*/    OPC_SwitchType /*3 cases */, 9,  MVT::i32,// ->4058
/*4049*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i32 CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVF:i32 CPURegs:i32:$T, CPURegs:i32:$F)
            /*SwitchType*/ 9,  MVT::f32,// ->4069
/*4060*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f32 FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32:f32:$T, FGR32:f32:$F)
            /*SwitchType*/ 11,  MVT::f64,// ->4082
/*4071*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4073*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f64 AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
              // Dst: (MOVF_D:f64 AFGR64:f64:$T, AFGR64:f64:$F)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::ConstantFP),// ->4126
/*4086*/    OPC_CheckType, MVT::f32,
/*4088*/    OPC_Scope, 13, /*->4103*/ // 2 children in Scope
/*4090*/      OPC_CheckPredicate, 44, // Predicate_fpimm0
/*4092*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*4095*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
              // Dst: (MTC1:f32 ZERO:i32)
/*4103*/    /*Scope*/ 21, /*->4125*/
/*4104*/      OPC_CheckPredicate, 45, // Predicate_fpimm0neg
/*4106*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*4109*/      OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*4117*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
              // Dst: (FNEG_S32:f32 (MTC1:f32 ZERO:i32))
/*4125*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->4145
/*4129*/    OPC_RecordNode,   // #0 = 'br' chained node
/*4130*/    OPC_RecordChild1, // #1 = $target
/*4131*/    OPC_MoveChild, 1,
/*4133*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4136*/    OPC_MoveParent,
/*4137*/    OPC_EmitMergeInputChains1_0,
/*4138*/    OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$target) - Complexity = 3
            // Dst: (J (bb:Other):$target)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->4160
/*4148*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*4149*/    OPC_RecordChild1, // #1 = $target
/*4150*/    OPC_CheckChild1Type, MVT::i32,
/*4152*/    OPC_EmitMergeInputChains1_0,
/*4153*/    OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind CPURegs:i32:$target) - Complexity = 3
            // Dst: (JR CPURegs:i32:$target)
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::Ret),// ->4174
/*4163*/    OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*4164*/    OPC_CaptureGlueInput,
/*4165*/    OPC_RecordChild1, // #1 = $target
/*4166*/    OPC_EmitMergeInputChains1_0,
/*4167*/    OPC_MorphNodeTo, TARGET_VAL(Mips::RET), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (MipsRet CPURegs:i32:$target) - Complexity = 3
            // Dst: (RET CPURegs:i32:$target)
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::DivRem),// ->4188
/*4177*/    OPC_RecordChild0, // #0 = $a
/*4178*/    OPC_RecordChild1, // #1 = $b
/*4179*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SDIV), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRem CPURegs:i32:$a, CPURegs:i32:$b) - Complexity = 3
            // Dst: (SDIV:i32 CPURegs:i32:$a, CPURegs:i32:$b)
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::DivRemU),// ->4202
/*4191*/    OPC_RecordChild0, // #0 = $a
/*4192*/    OPC_RecordChild1, // #1 = $b
/*4193*/    OPC_MorphNodeTo, TARGET_VAL(Mips::UDIV), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRemU CPURegs:i32:$a, CPURegs:i32:$b) - Complexity = 3
            // Dst: (UDIV:i32 CPURegs:i32:$a, CPURegs:i32:$b)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MAdd),// ->4225
/*4205*/    OPC_CaptureGlueInput,
/*4206*/    OPC_RecordChild0, // #0 = $rs
/*4207*/    OPC_RecordChild1, // #1 = $rt
/*4208*/    OPC_RecordChild2, // #2 = physreg input LO
/*4209*/    OPC_RecordChild3, // #3 = physreg input HI
/*4210*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*4213*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*4216*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MADD), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAdd CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADD:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MAddu),// ->4248
/*4228*/    OPC_CaptureGlueInput,
/*4229*/    OPC_RecordChild0, // #0 = $rs
/*4230*/    OPC_RecordChild1, // #1 = $rt
/*4231*/    OPC_RecordChild2, // #2 = physreg input LO
/*4232*/    OPC_RecordChild3, // #3 = physreg input HI
/*4233*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*4236*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*4239*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAddu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADDU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MSub),// ->4271
/*4251*/    OPC_CaptureGlueInput,
/*4252*/    OPC_RecordChild0, // #0 = $rs
/*4253*/    OPC_RecordChild1, // #1 = $rt
/*4254*/    OPC_RecordChild2, // #2 = physreg input LO
/*4255*/    OPC_RecordChild3, // #3 = physreg input HI
/*4256*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*4259*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*4262*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSub CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MSubu),// ->4294
/*4274*/    OPC_CaptureGlueInput,
/*4275*/    OPC_RecordChild0, // #0 = $rs
/*4276*/    OPC_RecordChild1, // #1 = $rt
/*4277*/    OPC_RecordChild2, // #2 = physreg input LO
/*4278*/    OPC_RecordChild3, // #3 = physreg input HI
/*4279*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*4282*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*4285*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSubu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUBU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FABS),// ->4322
/*4297*/    OPC_RecordChild0, // #0 = $fs
/*4298*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4309
/*4301*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S32:f32 FGR32:f32:$fs)
            /*SwitchType*/ 10,  MVT::f64,// ->4321
/*4311*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4313*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
              // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FNEG),// ->4350
/*4325*/    OPC_RecordChild0, // #0 = $fs
/*4326*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4337
/*4329*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S32:f32 FGR32:f32:$fs)
            /*SwitchType*/ 10,  MVT::f64,// ->4349
/*4339*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4341*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
              // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FSQRT),// ->4378
/*4353*/    OPC_RecordChild0, // #0 = $fs
/*4354*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->4365
/*4357*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S32:f32 FGR32:f32:$fs)
            /*SwitchType*/ 10,  MVT::f64,// ->4377
/*4367*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4369*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
              // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FADD),// ->4409
/*4381*/    OPC_RecordChild0, // #0 = $fs
/*4382*/    OPC_RecordChild1, // #1 = $ft
/*4383*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4395
/*4386*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FADD_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->4408
/*4397*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4399*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FDIV),// ->4440
/*4412*/    OPC_RecordChild0, // #0 = $fs
/*4413*/    OPC_RecordChild1, // #1 = $ft
/*4414*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4426
/*4417*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->4439
/*4428*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4430*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FMUL),// ->4471
/*4443*/    OPC_RecordChild0, // #0 = $fs
/*4444*/    OPC_RecordChild1, // #1 = $ft
/*4445*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4457
/*4448*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->4470
/*4459*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4461*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FSUB),// ->4502
/*4474*/    OPC_RecordChild0, // #0 = $fs
/*4475*/    OPC_RecordChild1, // #1 = $ft
/*4476*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->4488
/*4479*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FSUB_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->4501
/*4490*/      OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4492*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::BuildPairF64),// ->4516
/*4505*/    OPC_RecordChild0, // #0 = $lo
/*4506*/    OPC_RecordChild1, // #1 = $hi
/*4507*/    OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FP_ROUND),// ->4530
/*4519*/    OPC_RecordChild0, // #0 = $src
/*4520*/    OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4522*/    OPC_MorphNodeTo, TARGET_VAL(Mips::CVTS_D32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
            // Dst: (CVTS_D32:f32 AFGR64:f64:$src)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FP_EXTEND),// ->4544
/*4533*/    OPC_RecordChild0, // #0 = $src
/*4534*/    OPC_CheckPatternPredicate, 2, // (!Subtarget.isFP64bit())
/*4536*/    OPC_MorphNodeTo, TARGET_VAL(Mips::CVTD_S32), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
            // Dst: (CVTD_S32:f64 FGR32:f32:$src)
          /*SwitchOpcode*/ 10,  TARGET_VAL(MipsISD::FPRound),// ->4557
/*4547*/    OPC_CaptureGlueInput,
/*4548*/    OPC_RecordChild0, // #0 = $src
/*4549*/    OPC_MorphNodeTo, TARGET_VAL(Mips::CVTW_D32), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (MipsFPRound:f32 AFGR64:f64:$src) - Complexity = 3
            // Dst: (CVTW_D32:f32 AFGR64:f64:$src)
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::SINT_TO_FP),// ->4599
/*4560*/    OPC_RecordChild0, // #0 = $src
/*4561*/    OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->4580
/*4564*/      OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*4572*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CVTS_W32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
              // Dst: (CVTS_W32:f32 (MTC1:f32 CPURegs:i32:$src))
            /*SwitchType*/ 16,  MVT::f64,// ->4598
/*4582*/      OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*4590*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CVTD_W32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
              // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
              // Dst: (CVTD_W32:f64 (MTC1:f32 CPURegs:i32:$src))
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4601 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 51
  // #OPC_RecordNode                     = 22
  // #OPC_RecordChild                    = 230
  // #OPC_RecordMemRef                   = 10
  // #OPC_CaptureGlueInput               = 12
  // #OPC_MoveChild                      = 79
  // #OPC_MoveParent                     = 202
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 33
  // #OPC_CheckPredicate                 = 67
  // #OPC_CheckOpcode                    = 50
  // #OPC_SwitchOpcode                   = 10
  // #OPC_CheckType                      = 41
  // #OPC_SwitchType                     = 13
  // #OPC_CheckChildType                 = 23
  // #OPC_CheckInteger                   = 11
  // #OPC_CheckCondCode                  = 58
  // #OPC_CheckValueType                 = 2
  // #OPC_CheckComplexPat                = 18
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 7
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 21
  // #OPC_EmitConvertToTarget            = 30
  // #OPC_EmitMergeInputChains           = 70
  // #OPC_EmitCopyToReg                  = 8
  // #OPC_EmitNode                       = 45
  // #OPC_EmitNodeXForm                  = 5
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 1
  // #OPC_MorphNodeTo                    = 216

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (!Subtarget.isSingleFloat()) && (!Subtarget.isMips1());
  case 1: return (Subtarget.hasBitCount());
  case 2: return (!Subtarget.isFP64bit());
  case 3: return (Subtarget.isMips32r2());
  case 4: return (Subtarget.hasSEInReg());
  case 5: return (Subtarget.hasSwap());
  case 6: return (Subtarget.isMips32());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 7: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 9: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 13: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 14: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 15: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 16: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 17: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 18: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 19: { // Predicate_immZExt5
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0x1f) ;

  }
  case 20: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 21: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 22: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 23: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 24: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 25: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 26: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 27: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 28: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 29: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 30: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 31: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 32: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 33: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 34: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 35: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 36: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 37: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 38: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 42: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 43: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 44: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 45: { // Predicate_fpimm0neg
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
    Result.resize(NextRes+2);
    return SelectAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getI32Imm((unsigned)N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  }
}

