// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfloat64_mul.h for the primary calling header

#include "Vfloat64_mul.h"      // For This
#include "Vfloat64_mul__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfloat64_mul) {
    Vfloat64_mul__Syms* __restrict vlSymsp = __VlSymsp = new Vfloat64_mul__Syms(this, name());
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    buff_address0 = VL_RAND_RESET_I(1);
    buff_ce0 = VL_RAND_RESET_I(1);
    buff_q0 = VL_RAND_RESET_Q(64);
    buff_address1 = VL_RAND_RESET_I(1);
    buff_ce1 = VL_RAND_RESET_I(1);
    buff_q1 = VL_RAND_RESET_Q(64);
    m = VL_RAND_RESET_I(32);
    result = VL_RAND_RESET_Q(64);
    result_ap_vld = VL_RAND_RESET_I(1);
    n = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(21);
    v__DOT__countLeadingZerosHigh_q0 = VL_RAND_RESET_I(4);
    v__DOT__b_reg_1367 = VL_RAND_RESET_Q(64);
    v__DOT__bSig_reg_1374 = VL_RAND_RESET_Q(52);
    v__DOT__aSig_1_cast_reg_1379 = VL_RAND_RESET_Q(64);
    v__DOT__bSig_1_cast_reg_1390 = VL_RAND_RESET_Q(64);
    v__DOT__bExp_reg_1396 = VL_RAND_RESET_I(11);
    v__DOT__bExp_cast_reg_1401 = VL_RAND_RESET_I(12);
    v__DOT__zSign_fu_405_p2 = VL_RAND_RESET_I(1);
    v__DOT__zSign_reg_1406 = VL_RAND_RESET_I(1);
    v__DOT__tmp_reg_1412 = VL_RAND_RESET_I(1);
    v__DOT__tmp_22_reg_1416 = VL_RAND_RESET_I(1);
    v__DOT__tmp_26_reg_1420 = VL_RAND_RESET_I(1);
    v__DOT__tmp_29_reg_1424 = VL_RAND_RESET_I(1);
    v__DOT__icmp_reg_1428 = VL_RAND_RESET_I(1);
    v__DOT__a_assign_2_fu_463_p3 = VL_RAND_RESET_I(32);
    v__DOT__a_assign_2_reg_1433 = VL_RAND_RESET_I(32);
    v__DOT__icmp6_reg_1439 = VL_RAND_RESET_I(1);
    v__DOT__tmp_i2_reg_1449 = VL_RAND_RESET_I(1);
    v__DOT__b_assign_mux_i1_fu_554_p3 = VL_RAND_RESET_Q(64);
    v__DOT__b_assign_mux_i1_reg_1454 = VL_RAND_RESET_Q(64);
    v__DOT__a_assign_1_reg_1459 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_i9_fu_683_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_i9_reg_1473 = VL_RAND_RESET_I(1);
    v__DOT__or_cond_fu_625_p2 = VL_RAND_RESET_I(1);
    v__DOT__b_assign_mux_i_fu_689_p3 = VL_RAND_RESET_Q(64);
    v__DOT__b_assign_mux_i_reg_1478 = VL_RAND_RESET_Q(64);
    v__DOT__a_assign_5_fu_697_p3 = VL_RAND_RESET_Q(64);
    v__DOT__a_assign_5_reg_1483 = VL_RAND_RESET_Q(64);
    v__DOT__icmp9_reg_1491 = VL_RAND_RESET_I(1);
    v__DOT__shiftCount_1_reg_1501 = VL_RAND_RESET_I(7);
    v__DOT__aExp2_cast_reg_1507 = VL_RAND_RESET_I(13);
    v__DOT__tmp_30_reg_1512 = VL_RAND_RESET_I(1);
    v__DOT__tmp_31_reg_1516 = VL_RAND_RESET_I(1);
    v__DOT__icmp1_reg_1520 = VL_RAND_RESET_I(1);
    v__DOT__icmp2_reg_1525 = VL_RAND_RESET_I(1);
    v__DOT__tmp_66_reg_1531 = VL_RAND_RESET_I(8);
    v__DOT__tmp_46_reg_1536 = VL_RAND_RESET_I(8);
    v__DOT__tmp_47_reg_1541 = VL_RAND_RESET_I(8);
    v__DOT__icmp3_reg_1546 = VL_RAND_RESET_I(1);
    v__DOT__shiftCount_4_reg_1556 = VL_RAND_RESET_I(7);
    v__DOT__tmp_67_reg_1572 = VL_RAND_RESET_I(22);
    v__DOT__tmp_4_reg_1577 = VL_RAND_RESET_I(32);
    v__DOT__z1_reg_1606 = VL_RAND_RESET_Q(64);
    v__DOT__zMiddleA_reg_1611 = VL_RAND_RESET_Q(64);
    v__DOT__zMiddleB_reg_1616 = VL_RAND_RESET_Q(64);
    v__DOT__z0_reg_1622 = VL_RAND_RESET_Q(64);
    v__DOT__zMiddleA_1_fu_1180_p2 = VL_RAND_RESET_Q(64);
    v__DOT__zMiddleA_1_reg_1627 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_43_i_reg_1632 = VL_RAND_RESET_I(1);
    v__DOT__tmp_49_reg_1637 = VL_RAND_RESET_I(32);
    v__DOT__tmp_48_i_reg_1642 = VL_RAND_RESET_I(1);
    v__DOT__tmp_34_reg_1647 = VL_RAND_RESET_I(1);
    v__DOT__zSig0_3_reg_1652 = VL_RAND_RESET_Q(64);
    v__DOT__tmp35_reg_1657 = VL_RAND_RESET_I(12);
    v__DOT__zExp_reg_1662 = VL_RAND_RESET_I(13);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done = VL_RAND_RESET_I(1);
    v__DOT__aSig2_reg_215 = VL_RAND_RESET_Q(64);
    v__DOT__aExp2_reg_225 = VL_RAND_RESET_I(12);
    v__DOT__bSig2_reg_234 = VL_RAND_RESET_Q(64);
    v__DOT__bExp2_reg_243 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg = VL_RAND_RESET_I(1);
    v__DOT__grp_fu_270_p0 = VL_RAND_RESET_Q(52);
    v__DOT__tmp_17_fu_590_p3 = VL_RAND_RESET_Q(52);
    v__DOT__tmp_79_i7_i_fu_677_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_10_fu_725_p3 = VL_RAND_RESET_Q(52);
    v__DOT__p_a_i_i_i_fu_759_p3 = VL_RAND_RESET_I(32);
    v__DOT__a_assign_4_fu_925_p3 = VL_RAND_RESET_I(32);
    v__DOT__p_a_i_i_i1_fu_955_p3 = VL_RAND_RESET_I(32);
    v__DOT__z1_2_fu_1204_p2 = VL_RAND_RESET_Q(64);
    v__DOT__z0_2_fu_1239_p2 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_13_fu_1249_p2 = VL_RAND_RESET_I(1);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(21);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__countLeadingZerosHigh_U__DOT__float64_mul_countLeadingZerosHigh_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(4);
    }}
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_reg_561 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp4_cast_reg_566 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_1_reg_576 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_reg_595 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_6_reg_606 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_reg_614 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_4_reg_618 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__count_assign_reg_625 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__icmp_reg_630 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_i_reg_635 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__z_2_fu_420_p3 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign_2_reg_661 = VL_RAND_RESET_Q(54);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_29_reg_667 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_38_i8_reg_672 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign1_reg_106 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zExp_assign_1_reg_117 = VL_RAND_RESET_I(13);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundBits_1_reg_130 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_phi_fu_144_p4 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_reg_141 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_return_preg = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_NS_fsm = VL_RAND_RESET_I(6);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__b_reg0 = VL_RAND_RESET_I(32);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0 = VL_RAND_RESET_I(32);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 = VL_RAND_RESET_Q(64);
    v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 = VL_RAND_RESET_Q(64);
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vfloat64_mul::__Vconfigure(Vfloat64_mul__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfloat64_mul::~Vfloat64_mul() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vfloat64_mul::eval() {
    Vfloat64_mul__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vfloat64_mul::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vfloat64_mul::_eval_initial_loop(Vfloat64_mul__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vfloat64_mul::_initial__TOP__1(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_initial__TOP__1\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at float64_mul.v:1208
    vlTOPp->buff_address0 = 0U;
    // INITIAL at float64_mul.v:1210
    vlTOPp->buff_address1 = 1U;
    // INITIAL at float64_mul_roundAndPackFloat64.v:183
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_return_preg = VL_ULL(0);
}

VL_INLINE_OPT void Vfloat64_mul::_combo__TOP__2(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_combo__TOP__2\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->n + vlTOPp->m);
    vlTOPp->v__DOT__tmp_79_i7_i_fu_677_p2 = ((VL_ULL(0x7ff0000000000000) 
					      == ((QData)((IData)(
								  (0xfffU 
								   & (IData)(
									     (vlTOPp->buff_q1 
									      >> 0x33U))))) 
						  << 0x33U)) 
					     & (VL_ULL(0) 
						!= 
						(VL_ULL(0x7ffffffffffff) 
						 & vlTOPp->buff_q1)));
    vlTOPp->v__DOT__tmp_10_fu_725_p3 = ((VL_ULL(0xffffffffff800) 
					 & vlTOPp->buff_q1) 
					| (QData)((IData)(
							  (0x7ffU 
							   & ((IData)(vlTOPp->buff_q1) 
							      | (IData)(
									(vlTOPp->buff_q1 
									 >> 0x34U)))))));
    vlTOPp->v__DOT__tmp_17_fu_590_p3 = ((VL_ULL(0xffffffffff800) 
					 & vlTOPp->buff_q0) 
					| (QData)((IData)(
							  (0x7ffU 
							   & ((IData)(vlTOPp->buff_q0) 
							      | (IData)(
									(vlTOPp->buff_q0 
									 >> 0x34U)))))));
}

VL_INLINE_OPT void Vfloat64_mul::_sequent__TOP__4(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_sequent__TOP__4\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_mul_roundAndPackFloat64.v:197
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_return_preg = VL_ULL(0);
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_return_preg 
		= vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_phi_fu_144_p4;
	}
    }
    // ALWAYS at float64_mul.v:655
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0x7ffU 
					      != (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q0 
							     >> 0x34U)))))) {
	vlTOPp->v__DOT__tmp_22_reg_1416 = (0x7ffU == 
					   (0x7ffU 
					    & (IData)(
						      (vlTOPp->buff_q1 
						       >> 0x34U))));
    }
    // ALWAYS at float64_mul.v:667
    if (((((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0x7ffU 
						!= 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->buff_q1 
					  >> 0x34U))))) 
	 & (0U == (0x7ffU & (IData)((vlTOPp->buff_q0 
				     >> 0x34U)))))) {
	vlTOPp->v__DOT__tmp_29_reg_1424 = (VL_ULL(0) 
					   == (VL_ULL(0xfffffffffffff) 
					       & vlTOPp->buff_q0));
    }
    // ALWAYS at float64_mul.v:1522
    vlTOPp->v__DOT__a_assign_5_reg_1483 = (VL_ULL(0x8000000000000) 
					   | vlTOPp->v__DOT__a_assign_5_reg_1483);
    // ALWAYS at float64_mul.v:1521
    vlTOPp->v__DOT__b_assign_mux_i_reg_1478 = (VL_ULL(0x8000000000000) 
					       | vlTOPp->v__DOT__b_assign_mux_i_reg_1478);
    // ALWAYS at float64_mul.v:606
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (((VL_ULL(0) 
						!= 
						(VL_ULL(0xfffffffffffff) 
						 & vlTOPp->buff_q0)) 
					       & (0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
					      | ((0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U)))) 
						 & (~ (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)))))) {
	vlTOPp->v__DOT__a_assign_5_reg_1483 = ((VL_ULL(0xfff8000000000000) 
						& vlTOPp->v__DOT__a_assign_5_reg_1483) 
					       | (VL_ULL(0x7ffffffffffff) 
						  & vlTOPp->v__DOT__a_assign_5_fu_697_p3));
	vlTOPp->v__DOT__b_assign_mux_i_reg_1478 = (
						   (VL_ULL(0xfff8000000000000) 
						    & vlTOPp->v__DOT__b_assign_mux_i_reg_1478) 
						   | (VL_ULL(0x7ffffffffffff) 
						      & vlTOPp->v__DOT__b_assign_mux_i_fu_689_p3));
	vlTOPp->v__DOT__tmp_i9_reg_1473 = vlTOPp->v__DOT__tmp_i9_fu_683_p2;
	vlTOPp->v__DOT__a_assign_5_reg_1483 = ((VL_ULL(0xfffffffffffff) 
						& vlTOPp->v__DOT__a_assign_5_reg_1483) 
					       | ((QData)((IData)(
								  (0xfffU 
								   & (IData)(
									     (vlTOPp->v__DOT__a_assign_5_fu_697_p3 
									      >> 0x34U))))) 
						  << 0x34U));
	vlTOPp->v__DOT__b_assign_mux_i_reg_1478 = (
						   (VL_ULL(0xfffffffffffff) 
						    & vlTOPp->v__DOT__b_assign_mux_i_reg_1478) 
						   | ((QData)((IData)(
								      (0xfffU 
								       & (IData)(
										(vlTOPp->v__DOT__b_assign_mux_i_fu_689_p3 
										>> 0x34U))))) 
						      << 0x34U));
    }
    // ALWAYS at float64_mul.v:1520
    vlTOPp->v__DOT__a_assign_1_reg_1459 = (VL_ULL(0x8000000000000) 
					   | vlTOPp->v__DOT__a_assign_1_reg_1459);
    // ALWAYS at float64_mul.v:1519
    vlTOPp->v__DOT__b_assign_mux_i1_reg_1454 = (VL_ULL(0x8000000000000) 
						| vlTOPp->v__DOT__b_assign_mux_i1_reg_1454);
    // ALWAYS at float64_mul.v:590
    if (((((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0x7ffU 
						!= 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
	  & (0x7ffU == (0x7ffU & (IData)((vlTOPp->buff_q1 
					  >> 0x34U))))) 
	 & (VL_ULL(0) != vlTOPp->v__DOT__grp_fu_270_p0))) {
	vlTOPp->v__DOT__a_assign_1_reg_1459 = ((VL_ULL(0xfff8000000000000) 
						& vlTOPp->v__DOT__a_assign_1_reg_1459) 
					       | (VL_ULL(0x7ffffffffffff) 
						  & vlTOPp->v__DOT__a_assign_5_fu_697_p3));
	vlTOPp->v__DOT__b_assign_mux_i1_reg_1454 = 
	    ((VL_ULL(0xfff8000000000000) & vlTOPp->v__DOT__b_assign_mux_i1_reg_1454) 
	     | (VL_ULL(0x7ffffffffffff) & vlTOPp->v__DOT__b_assign_mux_i1_fu_554_p3));
	vlTOPp->v__DOT__tmp_i2_reg_1449 = vlTOPp->v__DOT__tmp_i9_fu_683_p2;
	vlTOPp->v__DOT__a_assign_1_reg_1459 = ((VL_ULL(0xfffffffffffff) 
						& vlTOPp->v__DOT__a_assign_1_reg_1459) 
					       | ((QData)((IData)(
								  (0xfffU 
								   & (IData)(
									     (vlTOPp->v__DOT__a_assign_5_fu_697_p3 
									      >> 0x34U))))) 
						  << 0x34U));
	vlTOPp->v__DOT__b_assign_mux_i1_reg_1454 = 
	    ((VL_ULL(0xfffffffffffff) & vlTOPp->v__DOT__b_assign_mux_i1_reg_1454) 
	     | ((QData)((IData)((0xfffU & (IData)((vlTOPp->v__DOT__b_assign_mux_i1_fu_554_p3 
						   >> 0x34U))))) 
		<< 0x34U));
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:602
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571 
	= (0x200U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571));
    // ALWAYS at float64_mul.v:673
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 4U) & (0U == (IData)(vlTOPp->v__DOT__bExp_reg_1396)))) {
	vlTOPp->v__DOT__tmp_31_reg_1516 = (VL_ULL(0) 
					   == vlTOPp->v__DOT__grp_fu_270_p0);
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:239
    if ((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	  >> 1U) & (((((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
		       & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		      & (0x7fdU != (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		     & ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
			>> 0xcU)) | ((((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
				       & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
				      & ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
					 >> 0xcU)) 
				     & (~ (IData)((vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
						   >> 0x3fU))))))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__count_assign_reg_625 
	    = (0x7ffU & VL_NEGATE_I((IData)(vlTOPp->v__DOT__zExp_reg_1662)));
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__icmp_reg_630 
	    = (0U == (0x1fU & (VL_NEGATE_I((IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
			       >> 6U)));
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_i_reg_635 
	    = (VL_ULL(0) != (vlTOPp->v__DOT__zSig0_3_reg_1652 
			     << (0x3fU & (IData)(vlTOPp->v__DOT__zExp_reg_1662))));
    }
    // ALWAYS at float64_mul.v:679
    if ((0x8000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp_34_reg_1647 = (VL_ULL(0) 
					   != vlTOPp->v__DOT__z1_2_fu_1204_p2);
	vlTOPp->v__DOT__tmp_48_i_reg_1642 = (vlTOPp->v__DOT__z1_2_fu_1204_p2 
					     < (vlTOPp->v__DOT__zMiddleA_1_reg_1627 
						<< 0x20U));
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:207
    if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
		>> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_6_reg_606)) 
			   | ((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610)) 
			      & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_reg_614)))) 
			  | ((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610)) 
			     & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_4_reg_618))))))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_reg_141 
	    = vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_38_i8_reg_672;
    } else {
	if ((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	      >> 1U) & (((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
			 & VL_LTS_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
			| (((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
			    & (0x7fdU == (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
			   & (IData)((vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
				      >> 0x3fU)))))) {
	    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_reg_141 
		= ((VL_ULL(0x7ff0000000000000) | ((QData)((IData)(vlTOPp->v__DOT__zSign_reg_1406)) 
						  << 0x3fU)) 
		   - (QData)((IData)((0U == (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3)))));
	}
    }
    // ALWAYS at float64_mul.v:686
    if ((0x4000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp_43_i_reg_1632 = (vlTOPp->v__DOT__zMiddleA_1_fu_1180_p2 
					     < vlTOPp->v__DOT__zMiddleB_reg_1616);
	vlTOPp->v__DOT__tmp_49_reg_1637 = (IData)((vlTOPp->v__DOT__zMiddleA_1_fu_1180_p2 
						   >> 0x20U));
	vlTOPp->v__DOT__zMiddleA_1_reg_1627 = vlTOPp->v__DOT__zMiddleA_1_fu_1180_p2;
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:282
    if ((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	  >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610 
	    = VL_LTS_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662));
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:288
    if (((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	   >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
	 & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662)))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_reg_614 
	    = (0x7fdU == (IData)(vlTOPp->v__DOT__zExp_reg_1662));
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:276
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	    >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
	  & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
	 & (0x7fdU == (IData)(vlTOPp->v__DOT__zExp_reg_1662)))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_4_reg_618 
	    = (1U & (IData)((vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
			     >> 0x3fU)));
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:270
    if ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_38_i8_reg_672 
	    = ((((QData)((IData)(vlTOPp->v__DOT__zSign_reg_1406)) 
		 << 0x3fU) | vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign_2_reg_661) 
	       + ((QData)((IData)(((VL_ULL(0) == vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign_2_reg_661)
				    ? 0U : (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_29_reg_667)))) 
		  << 0x34U));
    }
    // ALWAYS at float64_mul.v:701
    if ((0x2000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__z0_reg_1622 = vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3;
	vlTOPp->v__DOT__z1_reg_1606 = vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3;
	vlTOPp->v__DOT__zMiddleA_reg_1611 = vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3;
	vlTOPp->v__DOT__zMiddleB_reg_1616 = vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3;
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:263
    if ((8U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_29_reg_667 
	    = (0xfffU & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zExp_assign_1_reg_117));
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign_2_reg_661 
	    = (VL_ULL(0x3fffffffffffff) & (((vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign1_reg_106 
					     + (QData)((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_reg_595))) 
					    >> 0xaU) 
					   & VL_EXTENDS_QI(54,32, 
							   (~ 
							    ((0x200U 
							      == (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundBits_1_reg_130)) 
							     & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_reg_561))))));
    }
    vlTOPp->v__DOT__z1_2_fu_1204_p2 = ((vlTOPp->v__DOT__zMiddleA_1_reg_1627 
					<< 0x20U) + vlTOPp->v__DOT__z1_reg_1606);
    vlTOPp->v__DOT__zMiddleA_1_fu_1180_p2 = (vlTOPp->v__DOT__zMiddleA_reg_1611 
					     + vlTOPp->v__DOT__zMiddleB_reg_1616);
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:35
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:35
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:35
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:35
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2;
    // ALWAYS at float64_mul_roundAndPackFloat64.v:254
    if (((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp4_cast_reg_566 = 0x3ffU;
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571 
	    = (0x200U | (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571));
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_1_reg_576 = 1U;
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_reg_561 = 1U;
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:223
    if ((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
			& VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		      & (~ ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
			    >> 0xcU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
					    & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
					   & (~ ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
						 >> 0xcU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__zExp_reg_1662))))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zExp_assign_1_reg_117 
	    = vlTOPp->v__DOT__zExp_reg_1662;
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zExp_assign_1_reg_117 = 0U;
	}
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:247
    if ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_reg_595 
	    = vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3;
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_6_reg_606 
	    = (0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662));
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:231
    if ((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
			& VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		      & (~ ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
			    >> 0xcU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
					    & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
					   & (~ ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
						 >> 0xcU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__zExp_reg_1662))))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign1_reg_106 
	    = vlTOPp->v__DOT__zSig0_3_reg_1652;
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign1_reg_106 
		= vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__z_2_fu_420_p3;
	}
    }
    // ALWAYS at float64_mul_roundAndPackFloat64.v:215
    if ((((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
			& VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
		      & (~ ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
			    >> 0xcU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
					    & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
					   & (~ ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
						 >> 0xcU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__zExp_reg_1662))))) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundBits_1_reg_130 
	    = (0x3ffU & (IData)(vlTOPp->v__DOT__zSig0_3_reg_1652));
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundBits_1_reg_130 
		= (0x3ffU & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__z_2_fu_420_p3));
	}
    }
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:34
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:34
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:34
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:34
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1;
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_1_reg_576)
	    ? (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571)
	    : (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp4_cast_reg_566));
    // ALWAYS at float64_mul.v:518
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg = 0U;
    } else {
	if ((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg = 1U;
	} else {
	    if ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))) {
		vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg = 0U;
	    }
	}
    }
    // ALWAYS at float64_mul.v:710
    if ((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__zExp_reg_1662 = (0x1fffU & 
					 (VL_EXTENDS_II(13,12, (IData)(vlTOPp->v__DOT__tmp35_reg_1657)) 
					  + (IData)(vlTOPp->v__DOT__aExp2_cast_reg_1507)));
    }
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:33
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:33
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:33
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0;
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:33
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1 
	= vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0;
    // ALWAYS at float64_mul_roundAndPackFloat64.v:189
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->ap_rst) ? 1U : (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_NS_fsm));
    // ALWAYS at float64_mul.v:648
    if ((0x10000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp35_reg_1657 = (0xfffU & 
					  ((IData)(vlTOPp->v__DOT__bExp2_reg_243) 
					   + ((1U & (IData)(
							    (vlTOPp->v__DOT__z0_2_fu_1239_p2 
							     >> 0x3eU)))
					       ? 0xc01U
					       : 0xc00U)));
	vlTOPp->v__DOT__zSig0_3_reg_1652 = ((1U & (IData)(
							  (vlTOPp->v__DOT__z0_2_fu_1239_p2 
							   >> 0x3eU)))
					     ? ((VL_ULL(0xfffffffffffffffe) 
						 & vlTOPp->v__DOT__z0_2_fu_1239_p2) 
						| (QData)((IData)(vlTOPp->v__DOT__tmp_13_fu_1249_p2)))
					     : ((VL_ULL(0xfffffffffffffffc) 
						 & (vlTOPp->v__DOT__z0_2_fu_1239_p2 
						    << 1U)) 
						| (QData)((IData)(
								  ((IData)(vlTOPp->v__DOT__tmp_13_fu_1249_p2) 
								   << 1U)))));
    }
    vlTOPp->v__DOT__z0_2_fu_1239_p2 = ((vlTOPp->v__DOT__z0_reg_1622 
					+ (QData)((IData)(vlTOPp->v__DOT__tmp_48_i_reg_1642))) 
				       + (((QData)((IData)(vlTOPp->v__DOT__tmp_43_i_reg_1632)) 
					   << 0x20U) 
					  | (QData)((IData)(vlTOPp->v__DOT__tmp_49_reg_1637))));
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:32
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0)));
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:32
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__b_reg0)));
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:32
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__b_reg0)));
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:32
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0 
	= ((QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0)) 
	   * (QData)((IData)(vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0)));
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2 
	= (vlTOPp->v__DOT__zSig0_3_reg_1652 >> (0x3fU 
						& (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__count_assign_reg_625)));
    // ALWAYS at float64_mul.v:546
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 4U) & (0U != (IData)(vlTOPp->v__DOT__bExp_reg_1396)))) {
	vlTOPp->v__DOT__bExp2_reg_243 = vlTOPp->v__DOT__bExp_cast_reg_1401;
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 7U) & (IData)(vlTOPp->v__DOT__tmp_30_reg_1512))) {
	    vlTOPp->v__DOT__bExp2_reg_243 = (0xfffU 
					     & VL_EXTENDS_II(12,7, 
							     (0x7fU 
							      & ((IData)(0xcU) 
								 - (IData)(vlTOPp->v__DOT__shiftCount_4_reg_1556)))));
	}
    }
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:31
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__b_reg0 
	= (vlTOPp->v__DOT__tmp_67_reg_1572 << 0xaU);
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:30
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0 
	= (0x80000000U | (IData)((vlTOPp->v__DOT__bSig2_reg_234 
				  >> 0x15U)));
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:30
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0 
	= (0x40000000U | vlTOPp->v__DOT__tmp_4_reg_1577);
    // ALWAYS at float64_mul_mul_32ns_32ns_64_6.v:30
    vlTOPp->v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0 
	= (0xfffff800U & ((IData)(vlTOPp->v__DOT__bSig2_reg_234) 
			  << 0xbU));
    // ALWAYS at float64_mul.v:1518
    vlTOPp->v__DOT__bExp_cast_reg_1401 = (0x7ffU & (IData)(vlTOPp->v__DOT__bExp_cast_reg_1401));
    // ALWAYS at float64_mul.v:694
    if ((0x80U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp_4_reg_1577 = (IData)((vlTOPp->v__DOT__aSig2_reg_215 
						  >> 0x16U));
	vlTOPp->v__DOT__tmp_67_reg_1572 = (0x3fffffU 
					   & (IData)(vlTOPp->v__DOT__aSig2_reg_215));
    }
    // ALWAYS at float64_mul.v:554
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 4U) & (0U != (IData)(vlTOPp->v__DOT__bExp_reg_1396)))) {
	vlTOPp->v__DOT__bSig2_reg_234 = vlTOPp->v__DOT__bSig_1_cast_reg_1390;
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 7U) & (IData)(vlTOPp->v__DOT__tmp_30_reg_1512))) {
	    vlTOPp->v__DOT__bSig2_reg_234 = (vlTOPp->v__DOT__bSig_1_cast_reg_1390 
					     << (0x3fU 
						 & VL_EXTENDS_II(6,7, 
								 (0x7fU 
								  & ((IData)(0x75U) 
								     + (IData)(vlTOPp->v__DOT__shiftCount_4_reg_1556))))));
	}
    }
    // ALWAYS at float64_mul.v:538
    if (((((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0x7ffU 
						!= 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->buff_q1 
					  >> 0x34U))))) 
	 & (0U != (0x7ffU & (IData)((vlTOPp->buff_q0 
				     >> 0x34U)))))) {
	vlTOPp->v__DOT__aSig2_reg_215 = (VL_ULL(0xfffffffffffff) 
					 & vlTOPp->buff_q0);
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 4U) & (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) {
	    vlTOPp->v__DOT__aSig2_reg_215 = (vlTOPp->v__DOT__aSig_1_cast_reg_1379 
					     << (0x3fU 
						 & VL_EXTENDS_II(6,7, 
								 (0x7fU 
								  & ((IData)(0x75U) 
								     + (IData)(vlTOPp->v__DOT__shiftCount_1_reg_1501))))));
	}
    }
    // ALWAYS at float64_mul.v:1517
    vlTOPp->v__DOT__bSig_1_cast_reg_1390 = (VL_ULL(0xfffffffffffff) 
					    & vlTOPp->v__DOT__bSig_1_cast_reg_1390);
    // ALWAYS at float64_mul.v:642
    if ((0x40U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__shiftCount_4_reg_1556 = (0x7fU 
						 & ((IData)(vlTOPp->v__DOT__countLeadingZerosHigh_q0) 
						    + 
						    (((IData)(vlTOPp->v__DOT__icmp1_reg_1520) 
						      << 5U) 
						     | ((IData)(vlTOPp->v__DOT__icmp3_reg_1546)
							 ? 
							((IData)(vlTOPp->v__DOT__icmp2_reg_1525)
							  ? 0x18U
							  : 8U)
							 : 
							((IData)(vlTOPp->v__DOT__icmp2_reg_1525)
							  ? 0x10U
							  : 0U)))));
    }
    // ALWAYS at float64_mul.v:570
    if ((0x10U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__aExp2_cast_reg_1507 = (0x1fffU 
					       & VL_EXTENDS_II(13,12, 
							       (0xfffU 
								& (((vlTOPp->v__DOT__ap_CS_fsm 
								     >> 4U) 
								    & (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))
								    ? 
								   VL_EXTENDS_II(12,7, 
										(0x7fU 
										& ((IData)(0xcU) 
										- (IData)(vlTOPp->v__DOT__shiftCount_1_reg_1501))))
								    : (IData)(vlTOPp->v__DOT__aExp2_reg_225)))));
	vlTOPp->v__DOT__tmp_30_reg_1512 = (0U == (IData)(vlTOPp->v__DOT__bExp_reg_1396));
    }
    // ALWAYS at float64_mul.v:1516
    vlTOPp->v__DOT__aSig_1_cast_reg_1379 = (VL_ULL(0xfffffffffffff) 
					    & vlTOPp->v__DOT__aSig_1_cast_reg_1379);
    // ALWAYS at float64_mul.v:624
    if ((0x20U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__icmp3_reg_1546 = (0U == (IData)(vlTOPp->v__DOT__tmp_66_reg_1531));
    }
    // ALWAYS at float64_mul.v:530
    if (((((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0x7ffU 
						!= 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->buff_q1 
					  >> 0x34U))))) 
	 & (0U != (0x7ffU & (IData)((vlTOPp->buff_q0 
				     >> 0x34U)))))) {
	vlTOPp->v__DOT__aExp2_reg_225 = (0x7ffU & (IData)(
							  (vlTOPp->buff_q0 
							   >> 0x34U)));
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 4U) & (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) {
	    vlTOPp->v__DOT__aExp2_reg_225 = (0xfffU 
					     & VL_EXTENDS_II(12,7, 
							     (0x7fU 
							      & ((IData)(0xcU) 
								 - (IData)(vlTOPp->v__DOT__shiftCount_1_reg_1501)))));
	}
    }
    // ALWAYS at float64_mul.v:661
    if ((((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0x7ffU 
					       != (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
	 & (0x7ffU != (0x7ffU & (IData)((vlTOPp->buff_q1 
					 >> 0x34U)))))) {
	vlTOPp->v__DOT__tmp_26_reg_1420 = (0U == (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q0 
							     >> 0x34U))));
    }
    // ALWAYS at float64_mul.v:636
    if ((8U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__shiftCount_1_reg_1501 = (0x7fU 
						 & ((IData)(vlTOPp->v__DOT__countLeadingZerosHigh_q0) 
						    + 
						    (((IData)(vlTOPp->v__DOT__icmp_reg_1428) 
						      << 5U) 
						     | ((IData)(vlTOPp->v__DOT__icmp9_reg_1491)
							 ? 
							((IData)(vlTOPp->v__DOT__icmp6_reg_1439)
							  ? 0x18U
							  : 8U)
							 : 
							((IData)(vlTOPp->v__DOT__icmp6_reg_1439)
							  ? 0x10U
							  : 0U)))));
    }
    // ALWAYS at float64_mul.v:630
    if ((4U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__icmp9_reg_1491 = (0U == (0xffU 
						 & (vlTOPp->v__DOT__p_a_i_i_i_fu_759_p3 
						    >> 0x18U)));
    }
    // ALWAYS at float64_mul.v:598
    if ((((((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0x7ffU 
						 != 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q0 
							     >> 0x34U))))) 
	   & (0x7ffU != (0x7ffU & (IData)((vlTOPp->buff_q1 
					   >> 0x34U))))) 
	  & (0U == (0x7ffU & (IData)((vlTOPp->buff_q0 
				      >> 0x34U))))) 
	 & (VL_ULL(0) != (VL_ULL(0xfffffffffffff) & vlTOPp->buff_q0)))) {
	vlTOPp->v__DOT__a_assign_2_reg_1433 = vlTOPp->v__DOT__a_assign_2_fu_463_p3;
	vlTOPp->v__DOT__icmp6_reg_1439 = (0U == (0xffffU 
						 & (vlTOPp->v__DOT__a_assign_2_fu_463_p3 
						    >> 0x10U)));
	vlTOPp->v__DOT__icmp_reg_1428 = (0U == (0xfffffU 
						& (IData)(
							  (vlTOPp->buff_q0 
							   >> 0x20U))));
    }
    // ALWAYS at float64_mul_countLeadingZerosHigh.v:29
    if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 2U) | 
	       (vlTOPp->v__DOT__ap_CS_fsm >> 5U)))) {
	vlTOPp->v__DOT__countLeadingZerosHigh_q0 = 
	    vlTOPp->v__DOT__countLeadingZerosHigh_U__DOT__float64_mul_countLeadingZerosHigh_rom_U__DOT__ram
	    [(0xffU & ((0x20U & vlTOPp->v__DOT__ap_CS_fsm)
		        ? ((0U == (IData)(vlTOPp->v__DOT__tmp_66_reg_1531))
			    ? (IData)(vlTOPp->v__DOT__tmp_46_reg_1536)
			    : (IData)(vlTOPp->v__DOT__tmp_47_reg_1541))
		        : ((4U & vlTOPp->v__DOT__ap_CS_fsm)
			    ? ((0U == (0xffU & (vlTOPp->v__DOT__p_a_i_i_i_fu_759_p3 
						>> 0x18U)))
			        ? (vlTOPp->v__DOT__p_a_i_i_i_fu_759_p3 
				   >> 0x10U) : (vlTOPp->v__DOT__p_a_i_i_i_fu_759_p3 
						>> 0x18U))
			    : 0U)))];
    }
    vlTOPp->v__DOT__p_a_i_i_i_fu_759_p3 = ((IData)(vlTOPp->v__DOT__icmp6_reg_1439)
					    ? (vlTOPp->v__DOT__a_assign_2_reg_1433 
					       << 0x10U)
					    : vlTOPp->v__DOT__a_assign_2_reg_1433);
    // ALWAYS at float64_mul.v:614
    if ((((VL_ULL(0) != vlTOPp->v__DOT__grp_fu_270_p0) 
	  & (vlTOPp->v__DOT__ap_CS_fsm >> 4U)) & (0U 
						  == (IData)(vlTOPp->v__DOT__bExp_reg_1396)))) {
	vlTOPp->v__DOT__icmp1_reg_1520 = (0U == (0xfffffU 
						 & (IData)(
							   (vlTOPp->v__DOT__b_reg_1367 
							    >> 0x20U))));
	vlTOPp->v__DOT__icmp2_reg_1525 = (0U == (0xffffU 
						 & (vlTOPp->v__DOT__a_assign_4_fu_925_p3 
						    >> 0x10U)));
	vlTOPp->v__DOT__tmp_46_reg_1536 = (0xffU & 
					   (vlTOPp->v__DOT__p_a_i_i_i1_fu_955_p3 
					    >> 0x10U));
	vlTOPp->v__DOT__tmp_47_reg_1541 = (0xffU & 
					   (vlTOPp->v__DOT__p_a_i_i_i1_fu_955_p3 
					    >> 0x18U));
	vlTOPp->v__DOT__tmp_66_reg_1531 = (0xffU & 
					   (vlTOPp->v__DOT__p_a_i_i_i1_fu_955_p3 
					    >> 0x18U));
    }
    // ALWAYS at float64_mul.v:577
    if ((2U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__aSig_1_cast_reg_1379 = ((VL_ULL(0xfff0000000000000) 
						 & vlTOPp->v__DOT__aSig_1_cast_reg_1379) 
						| (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q0));
	vlTOPp->v__DOT__zSign_reg_1406 = vlTOPp->v__DOT__zSign_fu_405_p2;
	vlTOPp->v__DOT__bExp_cast_reg_1401 = ((0x800U 
					       & (IData)(vlTOPp->v__DOT__bExp_cast_reg_1401)) 
					      | (0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q1 
							    >> 0x34U))));
	vlTOPp->v__DOT__bExp_reg_1396 = (0x7ffU & (IData)(
							  (vlTOPp->buff_q1 
							   >> 0x34U)));
	vlTOPp->v__DOT__bSig_1_cast_reg_1390 = ((VL_ULL(0xfff0000000000000) 
						 & vlTOPp->v__DOT__bSig_1_cast_reg_1390) 
						| (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q1));
	vlTOPp->v__DOT__bSig_reg_1374 = (VL_ULL(0xfffffffffffff) 
					 & vlTOPp->buff_q1);
	vlTOPp->v__DOT__b_reg_1367 = vlTOPp->buff_q1;
	vlTOPp->v__DOT__tmp_reg_1412 = (0x7ffU == (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))));
    }
    vlTOPp->v__DOT__a_assign_4_fu_925_p3 = ((0U == 
					     (0xfffffU 
					      & (IData)(
							(vlTOPp->v__DOT__b_reg_1367 
							 >> 0x20U))))
					     ? (IData)(vlTOPp->v__DOT__b_reg_1367)
					     : (0xfffffU 
						& (IData)(
							  (vlTOPp->v__DOT__b_reg_1367 
							   >> 0x20U))));
    // ALWAYS at float64_mul.v:510
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : vlTOPp->v__DOT__ap_NS_fsm);
}

VL_INLINE_OPT void Vfloat64_mul::_combo__TOP__5(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_combo__TOP__5\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__b_assign_mux_i_fu_689_p3 = ((IData)(vlTOPp->v__DOT__tmp_79_i7_i_fu_677_p2)
						 ? 
						(VL_ULL(0x8000000000000) 
						 | vlTOPp->buff_q1)
						 : 
						(VL_ULL(0x8000000000000) 
						 | vlTOPp->buff_q0));
    vlTOPp->v__DOT__a_assign_5_fu_697_p3 = ((VL_ULL(0xffe0000000000000) 
					     < (vlTOPp->buff_q1 
						<< 1U))
					     ? (VL_ULL(0x8000000000000) 
						| vlTOPp->buff_q1)
					     : (VL_ULL(0x8000000000000) 
						| vlTOPp->buff_q0));
    vlTOPp->v__DOT__tmp_i9_fu_683_p2 = ((IData)(vlTOPp->v__DOT__tmp_79_i7_i_fu_677_p2) 
					| ((VL_ULL(0x7ff0000000000000) 
					    == ((QData)((IData)(
								(0xfffU 
								 & (IData)(
									   (vlTOPp->buff_q0 
									    >> 0x33U))))) 
						<< 0x33U)) 
					   & (VL_ULL(0) 
					      != (VL_ULL(0x7ffffffffffff) 
						  & vlTOPp->buff_q0))));
    vlTOPp->v__DOT__b_assign_mux_i1_fu_554_p3 = ((IData)(vlTOPp->v__DOT__tmp_79_i7_i_fu_677_p2)
						  ? 
						 (VL_ULL(0x8000000000000) 
						  | vlTOPp->buff_q1)
						  : 
						 (VL_ULL(0x8000000000000) 
						  | vlTOPp->buff_q0));
    vlTOPp->v__DOT__a_assign_2_fu_463_p3 = ((0U == 
					     (0xfffffU 
					      & (IData)(
							(vlTOPp->buff_q0 
							 >> 0x20U))))
					     ? (IData)(vlTOPp->buff_q0)
					     : (0xfffffU 
						& (IData)(
							  (vlTOPp->buff_q0 
							   >> 0x20U))));
    vlTOPp->v__DOT__zSign_fu_405_p2 = (1U & ((IData)(
						     (vlTOPp->buff_q1 
						      >> 0x3fU)) 
					     ^ (IData)(
						       (vlTOPp->buff_q0 
							>> 0x3fU))));
}

void Vfloat64_mul::_settle__TOP__6(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_settle__TOP__6\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__b_assign_mux_i_fu_689_p3 = ((IData)(vlTOPp->v__DOT__tmp_79_i7_i_fu_677_p2)
						 ? 
						(VL_ULL(0x8000000000000) 
						 | vlTOPp->buff_q1)
						 : 
						(VL_ULL(0x8000000000000) 
						 | vlTOPp->buff_q0));
    vlTOPp->v__DOT__a_assign_5_fu_697_p3 = ((VL_ULL(0xffe0000000000000) 
					     < (vlTOPp->buff_q1 
						<< 1U))
					     ? (VL_ULL(0x8000000000000) 
						| vlTOPp->buff_q1)
					     : (VL_ULL(0x8000000000000) 
						| vlTOPp->buff_q0));
    vlTOPp->v__DOT__tmp_i9_fu_683_p2 = ((IData)(vlTOPp->v__DOT__tmp_79_i7_i_fu_677_p2) 
					| ((VL_ULL(0x7ff0000000000000) 
					    == ((QData)((IData)(
								(0xfffU 
								 & (IData)(
									   (vlTOPp->buff_q0 
									    >> 0x33U))))) 
						<< 0x33U)) 
					   & (VL_ULL(0) 
					      != (VL_ULL(0x7ffffffffffff) 
						  & vlTOPp->buff_q0))));
    vlTOPp->v__DOT__b_assign_mux_i1_fu_554_p3 = ((IData)(vlTOPp->v__DOT__tmp_79_i7_i_fu_677_p2)
						  ? 
						 (VL_ULL(0x8000000000000) 
						  | vlTOPp->buff_q1)
						  : 
						 (VL_ULL(0x8000000000000) 
						  | vlTOPp->buff_q0));
    vlTOPp->v__DOT__z1_2_fu_1204_p2 = ((vlTOPp->v__DOT__zMiddleA_1_reg_1627 
					<< 0x20U) + vlTOPp->v__DOT__z1_reg_1606);
    vlTOPp->v__DOT__zMiddleA_1_fu_1180_p2 = (vlTOPp->v__DOT__zMiddleA_reg_1611 
					     + vlTOPp->v__DOT__zMiddleB_reg_1616);
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_1_reg_576)
	    ? (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571)
	    : (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp4_cast_reg_566));
    vlTOPp->v__DOT__z0_2_fu_1239_p2 = ((vlTOPp->v__DOT__z0_reg_1622 
					+ (QData)((IData)(vlTOPp->v__DOT__tmp_48_i_reg_1642))) 
				       + (((QData)((IData)(vlTOPp->v__DOT__tmp_43_i_reg_1632)) 
					   << 0x20U) 
					  | (QData)((IData)(vlTOPp->v__DOT__tmp_49_reg_1637))));
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2 
	= (vlTOPp->v__DOT__zSig0_3_reg_1652 >> (0x3fU 
						& (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__count_assign_reg_625)));
    vlTOPp->v__DOT__a_assign_2_fu_463_p3 = ((0U == 
					     (0xfffffU 
					      & (IData)(
							(vlTOPp->buff_q0 
							 >> 0x20U))))
					     ? (IData)(vlTOPp->buff_q0)
					     : (0xfffffU 
						& (IData)(
							  (vlTOPp->buff_q0 
							   >> 0x20U))));
    vlTOPp->v__DOT__p_a_i_i_i_fu_759_p3 = ((IData)(vlTOPp->v__DOT__icmp6_reg_1439)
					    ? (vlTOPp->v__DOT__a_assign_2_reg_1433 
					       << 0x10U)
					    : vlTOPp->v__DOT__a_assign_2_reg_1433);
    vlTOPp->v__DOT__zSign_fu_405_p2 = (1U & ((IData)(
						     (vlTOPp->buff_q1 
						      >> 0x3fU)) 
					     ^ (IData)(
						       (vlTOPp->buff_q0 
							>> 0x3fU))));
    vlTOPp->v__DOT__a_assign_4_fu_925_p3 = ((0U == 
					     (0xfffffU 
					      & (IData)(
							(vlTOPp->v__DOT__b_reg_1367 
							 >> 0x20U))))
					     ? (IData)(vlTOPp->v__DOT__b_reg_1367)
					     : (0xfffffU 
						& (IData)(
							  (vlTOPp->v__DOT__b_reg_1367 
							   >> 0x20U))));
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
	= ((QData)((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3)) 
	   + vlTOPp->v__DOT__zSig0_3_reg_1652);
    vlTOPp->v__DOT__tmp_13_fu_1249_p2 = (1U & ((IData)(vlTOPp->v__DOT__z0_2_fu_1239_p2) 
					       | (IData)(vlTOPp->v__DOT__tmp_34_reg_1647)));
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__z_2_fu_420_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__icmp_reg_630)
	    ? ((VL_ULL(0xfffffffffffffffe) & vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2) 
					| (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_i_reg_635))))))
	    : (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__zSig0_3_reg_1652))));
    vlTOPp->v__DOT__p_a_i_i_i1_fu_955_p3 = ((0U == 
					     (0xffffU 
					      & (vlTOPp->v__DOT__a_assign_4_fu_925_p3 
						 >> 0x10U)))
					     ? (vlTOPp->v__DOT__a_assign_4_fu_925_p3 
						<< 0x10U)
					     : vlTOPp->v__DOT__a_assign_4_fu_925_p3);
}

void Vfloat64_mul::_initial__TOP__7(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_initial__TOP__7\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,351,0,11);
    // Body
    // INITIAL at float64_mul.v:285
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg = 0U;
    // INITIAL at float64_mul_roundAndPackFloat64.v:85
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm = 1U;
    // INITIAL at float64_mul_countLeadingZerosHigh.v:23
    __Vtemp1[0U] = 0x2e646174U;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x48696768U;
    __Vtemp1[3U] = 0x65726f73U;
    __Vtemp1[4U] = 0x696e675aU;
    __Vtemp1[5U] = 0x4c656164U;
    __Vtemp1[6U] = 0x6f756e74U;
    __Vtemp1[7U] = 0x756c5f63U;
    __Vtemp1[8U] = 0x36345f6dU;
    __Vtemp1[9U] = 0x6c6f6174U;
    __Vtemp1[0xaU] = 0x2e2f66U;
    VL_READMEM_W (true,4,256, 0,11, __Vtemp1, vlTOPp->v__DOT__countLeadingZerosHigh_U__DOT__float64_mul_countLeadingZerosHigh_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at float64_mul.v:140
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

VL_INLINE_OPT void Vfloat64_mul::_sequent__TOP__8(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_sequent__TOP__8\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
	= ((QData)((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3)) 
	   + vlTOPp->v__DOT__zSig0_3_reg_1652);
    vlTOPp->v__DOT__tmp_13_fu_1249_p2 = (1U & ((IData)(vlTOPp->v__DOT__z0_2_fu_1239_p2) 
					       | (IData)(vlTOPp->v__DOT__tmp_34_reg_1647)));
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__z_2_fu_420_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__icmp_reg_630)
	    ? ((VL_ULL(0xfffffffffffffffe) & vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2) 
					| (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_i_reg_635))))))
	    : (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__zSig0_3_reg_1652))));
    vlTOPp->v__DOT__p_a_i_i_i1_fu_955_p3 = ((0U == 
					     (0xffffU 
					      & (vlTOPp->v__DOT__a_assign_4_fu_925_p3 
						 >> 0x10U)))
					     ? (vlTOPp->v__DOT__a_assign_4_fu_925_p3 
						<< 0x10U)
					     : vlTOPp->v__DOT__a_assign_4_fu_925_p3);
    // ALWAYS at float64_mul_roundAndPackFloat64.v:394
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_phi_fu_144_p4 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
		   >> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_6_reg_606)) 
			      | ((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_reg_614)))) 
			     | ((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610)) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_4_reg_618))))))
	    ? vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_38_i8_reg_672
	    : vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_reg_141);
    // ALWAYS at float64_mul_roundAndPackFloat64.v:294
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
		    >> 5U)));
    // ALWAYS at float64_mul_roundAndPackFloat64.v:401
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_NS_fsm 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
	    ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
	        ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			 ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				  ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
					   ? 0U : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
						    ? 0U
						    : 1U)))))
	    : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
	        ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		    ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			     ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				      ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
					       ? 0U
					       : 0x20U))))
	        : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		    ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		        ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				 ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
					  ? 0U : 0x10U)))
		    : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		        ? ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			    ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				     ? 0U : 8U)) : 
		       ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			 ? ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			     ? 0U : ((((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
				       & VL_LTS_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
				      | (((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
					  & (0x7fdU 
					     == (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
					 & (IData)(
						   (vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
						    >> 0x3fU))))
				      ? 0x20U : (((
						   (((0x7fcU 
						      < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
						     & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
						    & (0x7fdU 
						       != (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
						   & ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
						      >> 0xcU)) 
						  | ((((0x7fcU 
							< (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
						       & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
						      & ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
							 >> 0xcU)) 
						     & (~ (IData)(
								  (vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
								   >> 0x3fU)))))
						  ? 4U
						  : 8U)))
			 : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			     ? ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg)
				 ? 2U : 1U) : 0U))))));
}

void Vfloat64_mul::_settle__TOP__9(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_settle__TOP__9\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_mul_roundAndPackFloat64.v:394
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_phi_fu_144_p4 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
		   >> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_6_reg_606)) 
			      | ((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_reg_614)))) 
			     | ((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610)) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_4_reg_618))))))
	    ? vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_38_i8_reg_672
	    : vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_reg_141);
    // ALWAYS at float64_mul_roundAndPackFloat64.v:294
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm) 
		    >> 5U)));
    // ALWAYS at float64_mul.v:732
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & vlTOPp->v__DOT__ap_CS_fsm));
    // ALWAYS at float64_mul.v:884
    vlTOPp->buff_ce0 = (vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start));
    // ALWAYS at float64_mul.v:892
    vlTOPp->buff_ce1 = (vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start));
    // ALWAYS at float64_mul.v:918
    vlTOPp->v__DOT__grp_fu_270_p0 = (VL_ULL(0xfffffffffffff) 
				     & ((0x10U & vlTOPp->v__DOT__ap_CS_fsm)
					 ? vlTOPp->v__DOT__bSig_reg_1374
					 : (((((vlTOPp->v__DOT__ap_CS_fsm 
						>> 1U) 
					       & (0x7ffU 
						  != 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
					      & (0x7ffU 
						 == 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q1 
							     >> 0x34U))))) 
					     | (((vlTOPp->v__DOT__ap_CS_fsm 
						  >> 1U) 
						 & (0x7ffU 
						    == 
						    (0x7ffU 
						     & (IData)(
							       (vlTOPp->buff_q0 
								>> 0x34U))))) 
						& (VL_ULL(0) 
						   == 
						   (VL_ULL(0xfffffffffffff) 
						    & vlTOPp->buff_q0))))
					     ? vlTOPp->buff_q1
					     : VL_ULL(0))));
    // ALWAYS at float64_mul_roundAndPackFloat64.v:401
    vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_NS_fsm 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
	    ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
	        ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			 ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				  ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
					   ? 0U : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
						    ? 0U
						    : 1U)))))
	    : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
	        ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		    ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			     ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				      ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
					       ? 0U
					       : 0x20U))))
	        : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		    ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		        ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				 ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
					  ? 0U : 0x10U)))
		    : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
		        ? ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			    ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				     ? 0U : 8U)) : 
		       ((2U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			 ? ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			     ? 0U : ((((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
				       & VL_LTS_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
				      | (((0x7fcU < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
					  & (0x7fdU 
					     == (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
					 & (IData)(
						   (vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
						    >> 0x3fU))))
				      ? 0x20U : (((
						   (((0x7fcU 
						      < (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
						     & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
						    & (0x7fdU 
						       != (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
						   & ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
						      >> 0xcU)) 
						  | ((((0x7fcU 
							< (IData)(vlTOPp->v__DOT__zExp_reg_1662)) 
						       & VL_GTES_III(1,13,13, 0x7fdU, (IData)(vlTOPp->v__DOT__zExp_reg_1662))) 
						      & ((IData)(vlTOPp->v__DOT__zExp_reg_1662) 
							 >> 0xcU)) 
						     & (~ (IData)(
								  (vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2 
								   >> 0x3fU)))))
						  ? 4U
						  : 8U)))
			 : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
			     ? ((IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg)
				 ? 2U : 1U) : 0U))))));
    // ALWAYS at float64_mul.v:724
    vlTOPp->ap_done = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			      >> 0x12U) & (~ ((((((
						   ((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))));
    // ALWAYS at float64_mul.v:740
    vlTOPp->ap_ready = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0x12U) & (~ (((((
						   (((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						  | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						       & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					       & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))));
}

VL_INLINE_OPT void Vfloat64_mul::_combo__TOP__10(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_combo__TOP__10\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_mul.v:732
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & vlTOPp->v__DOT__ap_CS_fsm));
    // ALWAYS at float64_mul.v:884
    vlTOPp->buff_ce0 = (vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start));
    // ALWAYS at float64_mul.v:892
    vlTOPp->buff_ce1 = (vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start));
    // ALWAYS at float64_mul.v:918
    vlTOPp->v__DOT__grp_fu_270_p0 = (VL_ULL(0xfffffffffffff) 
				     & ((0x10U & vlTOPp->v__DOT__ap_CS_fsm)
					 ? vlTOPp->v__DOT__bSig_reg_1374
					 : (((((vlTOPp->v__DOT__ap_CS_fsm 
						>> 1U) 
					       & (0x7ffU 
						  != 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
					      & (0x7ffU 
						 == 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q1 
							     >> 0x34U))))) 
					     | (((vlTOPp->v__DOT__ap_CS_fsm 
						  >> 1U) 
						 & (0x7ffU 
						    == 
						    (0x7ffU 
						     & (IData)(
							       (vlTOPp->buff_q0 
								>> 0x34U))))) 
						& (VL_ULL(0) 
						   == 
						   (VL_ULL(0xfffffffffffff) 
						    & vlTOPp->buff_q0))))
					     ? vlTOPp->buff_q1
					     : VL_ULL(0))));
    vlTOPp->v__DOT__or_cond_fu_625_p2 = ((0x7ffU != 
					  (0x7ffU & (IData)(
							    (vlTOPp->buff_q1 
							     >> 0x34U)))) 
					 | (VL_ULL(0) 
					    == vlTOPp->v__DOT__grp_fu_270_p0));
}

VL_INLINE_OPT void Vfloat64_mul::_sequent__TOP__11(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_sequent__TOP__11\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_mul.v:724
    vlTOPp->ap_done = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			      >> 0x12U) & (~ ((((((
						   ((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))));
    // ALWAYS at float64_mul.v:740
    vlTOPp->ap_ready = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0x12U) & (~ (((((
						   (((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						  | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						       & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					       & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))));
}

void Vfloat64_mul::_settle__TOP__12(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_settle__TOP__12\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__or_cond_fu_625_p2 = ((0x7ffU != 
					  (0x7ffU & (IData)(
							    (vlTOPp->buff_q1 
							     >> 0x34U)))) 
					 | (VL_ULL(0) 
					    == vlTOPp->v__DOT__grp_fu_270_p0));
    // ALWAYS at float64_mul.v:957
    vlTOPp->v__DOT__ap_NS_fsm = (((((((((1U == vlTOPp->v__DOT__ap_CS_fsm) 
					| (2U == vlTOPp->v__DOT__ap_CS_fsm)) 
				       | (4U == vlTOPp->v__DOT__ap_CS_fsm)) 
				      | (8U == vlTOPp->v__DOT__ap_CS_fsm)) 
				     | (0x10U == vlTOPp->v__DOT__ap_CS_fsm)) 
				    | (0x20U == vlTOPp->v__DOT__ap_CS_fsm)) 
				   | (0x40U == vlTOPp->v__DOT__ap_CS_fsm)) 
				  | (0x80U == vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((1U == vlTOPp->v__DOT__ap_CS_fsm)
				      ? ((IData)(vlTOPp->ap_start)
					  ? 2U : 1U)
				      : ((2U == vlTOPp->v__DOT__ap_CS_fsm)
					  ? ((((VL_ULL(0) 
						!= 
						(VL_ULL(0xfffffffffffff) 
						 & vlTOPp->buff_q0)) 
					       & (0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
					      | ((0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U)))) 
						 & (~ (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2))))
					      ? 0x100000U
					      : (((
						   (0x7ffU 
						    != 
						    (0x7ffU 
						     & (IData)(
							       (vlTOPp->buff_q0 
								>> 0x34U)))) 
						   & (0x7ffU 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->buff_q1 
								  >> 0x34U))))) 
						  & (VL_ULL(0) 
						     != vlTOPp->v__DOT__grp_fu_270_p0))
						  ? 0x80000U
						  : 
						 ((((((0x7ffU 
						       != 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->buff_q0 
								   >> 0x34U)))) 
						      & (0x7ffU 
							 == 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q1 
								     >> 0x34U))))) 
						     & (VL_ULL(0) 
							== vlTOPp->v__DOT__grp_fu_270_p0)) 
						    | (((0x7ffU 
							 == 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q0 
								     >> 0x34U)))) 
							& (VL_ULL(0) 
							   == 
							   (VL_ULL(0xfffffffffffff) 
							    & vlTOPp->buff_q0))) 
						       & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2))) 
						   | ((((0x7ffU 
							 != 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q0 
								     >> 0x34U)))) 
							& (0x7ffU 
							   != 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q1 
								       >> 0x34U))))) 
						       & (0U 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->buff_q0 
								      >> 0x34U))))) 
						      & (VL_ULL(0) 
							 == 
							 (VL_ULL(0xfffffffffffff) 
							  & vlTOPp->buff_q0))))
						   ? 0x40000U
						   : 
						  (((((0x7ffU 
						       != 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->buff_q0 
								   >> 0x34U)))) 
						      & (0x7ffU 
							 != 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q1 
								     >> 0x34U))))) 
						     & (0U 
							== 
							(0x7ffU 
							 & (IData)(
								   (vlTOPp->buff_q0 
								    >> 0x34U))))) 
						    & (VL_ULL(0) 
						       != 
						       (VL_ULL(0xfffffffffffff) 
							& vlTOPp->buff_q0)))
						    ? 4U
						    : 0x10U))))
					  : ((4U == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 8U : 
					     ((8U == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x10U
					       : ((0x10U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 
						  (((0U 
						     == (IData)(vlTOPp->v__DOT__bExp_reg_1396)) 
						    & (VL_ULL(0) 
						       == vlTOPp->v__DOT__grp_fu_270_p0))
						    ? 0x40000U
						    : 
						   (((VL_ULL(0) 
						      != vlTOPp->v__DOT__grp_fu_270_p0) 
						     & (0U 
							== (IData)(vlTOPp->v__DOT__bExp_reg_1396)))
						     ? 0x20U
						     : 0x80U))
						   : 
						  ((0x20U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x40U
						    : 
						   ((0x40U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x80U
						     : 0x100U)))))))
				  : (((((((((0x100U 
					     == vlTOPp->v__DOT__ap_CS_fsm) 
					    | (0x200U 
					       == vlTOPp->v__DOT__ap_CS_fsm)) 
					   | (0x400U 
					      == vlTOPp->v__DOT__ap_CS_fsm)) 
					  | (0x800U 
					     == vlTOPp->v__DOT__ap_CS_fsm)) 
					 | (0x1000U 
					    == vlTOPp->v__DOT__ap_CS_fsm)) 
					| (0x2000U 
					   == vlTOPp->v__DOT__ap_CS_fsm)) 
				       | (0x4000U == vlTOPp->v__DOT__ap_CS_fsm)) 
				      | (0x8000U == vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((0x100U == vlTOPp->v__DOT__ap_CS_fsm)
					  ? 0x200U : 
					 ((0x200U == vlTOPp->v__DOT__ap_CS_fsm)
					   ? 0x400U
					   : ((0x400U 
					       == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x800U
					       : ((0x800U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x1000U
						   : 
						  ((0x1000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x2000U
						    : 
						   ((0x2000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x4000U
						     : 
						    ((0x4000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x8000U
						      : 0x10000U)))))))
				      : ((0x10000U 
					  == vlTOPp->v__DOT__ap_CS_fsm)
					  ? 0x20000U
					  : ((0x20000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 0x40000U
					      : ((0x40000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)
						  ? 
						 ((1U 
						   & ((((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
							  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
							      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
							     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
							| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
							     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
						       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
							  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))
						   ? 0x40000U
						   : 1U)
						  : 
						 ((0x80000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x40000U
						   : 
						  ((0x100000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x40000U
						    : 0U)))))));
    // ALWAYS at float64_mul.v:950
    vlTOPp->result_ap_vld = (1U & (((((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 1U) 
					      & (0x7ffU 
						 != 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q0 
							     >> 0x34U))))) 
					     & (0x7ffU 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q1 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == vlTOPp->v__DOT__grp_fu_270_p0)) 
					   & (VL_ULL(0) 
					      == vlTOPp->v__DOT__tmp_17_fu_590_p3)) 
					  | (((((vlTOPp->v__DOT__ap_CS_fsm 
						 >> 1U) 
						& (0x7ffU 
						   == 
						   (0x7ffU 
						    & (IData)(
							      (vlTOPp->buff_q0 
							       >> 0x34U))))) 
					       & (VL_ULL(0) 
						  == 
						  (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q0))) 
					      & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
					     & (VL_ULL(0) 
						== vlTOPp->v__DOT__tmp_10_fu_725_p3))) 
					 | (((((vlTOPp->v__DOT__ap_CS_fsm 
						>> 1U) 
					       & (0x7ffU 
						  != 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
					      & (0x7ffU 
						 != 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q1 
							     >> 0x34U))))) 
					     & (0U 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q0)))) 
					| (((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 1U) 
					      & (0x7ffU 
						 != 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q0 
							     >> 0x34U))))) 
					     & (0x7ffU 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q1 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == vlTOPp->v__DOT__grp_fu_270_p0)) 
					   & (VL_ULL(0) 
					      != vlTOPp->v__DOT__tmp_17_fu_590_p3))) 
				       | (((((vlTOPp->v__DOT__ap_CS_fsm 
					      >> 1U) 
					     & (0x7ffU 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q0))) 
					   & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
					  & (VL_ULL(0) 
					     != vlTOPp->v__DOT__tmp_10_fu_725_p3))) 
				      | (((vlTOPp->v__DOT__ap_CS_fsm 
					   >> 4U) & 
					  (0U == (IData)(vlTOPp->v__DOT__bExp_reg_1396))) 
					 & (VL_ULL(0) 
					    == vlTOPp->v__DOT__grp_fu_270_p0))) 
				     | (((vlTOPp->v__DOT__ap_CS_fsm 
					  >> 0x12U) 
					 & (((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					      | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
					     | ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					    | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424))))) 
					& (~ ((((((
						   ((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done)))))) 
				    | (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x13U)) | 
				   (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 0x14U)));
    // ALWAYS at float64_mul.v:928
    vlTOPp->result = ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)
		       ? ((IData)(vlTOPp->v__DOT__tmp_i9_reg_1473)
			   ? vlTOPp->v__DOT__b_assign_mux_i_reg_1478
			   : vlTOPp->v__DOT__a_assign_5_reg_1483)
		       : ((0x80000U & vlTOPp->v__DOT__ap_CS_fsm)
			   ? ((IData)(vlTOPp->v__DOT__tmp_i2_reg_1449)
			       ? vlTOPp->v__DOT__b_assign_mux_i1_reg_1454
			       : vlTOPp->v__DOT__a_assign_1_reg_1459)
			   : ((1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x12U) & 
				      (((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
					   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
					      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
					| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
					     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
				       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
					  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424))))) 
				     & (~ ((((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					      | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
					     | ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					    | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))))
			       ? ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				   ? vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_phi_fu_144_p4
				   : vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_return_preg)
			       : ((((vlTOPp->v__DOT__ap_CS_fsm 
				     >> 4U) & (0U == (IData)(vlTOPp->v__DOT__bExp_reg_1396))) 
				   & (VL_ULL(0) == vlTOPp->v__DOT__grp_fu_270_p0))
				   ? ((QData)((IData)(vlTOPp->v__DOT__zSign_reg_1406)) 
				      << 0x3fU) : (
						   (((((vlTOPp->v__DOT__ap_CS_fsm 
							>> 1U) 
						       & (0x7ffU 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->buff_q0 
								      >> 0x34U))))) 
						      & (VL_ULL(0) 
							 == 
							 (VL_ULL(0xfffffffffffff) 
							  & vlTOPp->buff_q0))) 
						     & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
						    & (VL_ULL(0) 
						       != vlTOPp->v__DOT__tmp_10_fu_725_p3))
						    ? 
						   (VL_ULL(0x7ff0000000000000) 
						    | ((QData)((IData)(vlTOPp->v__DOT__zSign_fu_405_p2)) 
						       << 0x3fU))
						    : 
						   (((((((vlTOPp->v__DOT__ap_CS_fsm 
							  >> 1U) 
							 & (0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->buff_q0 
									>> 0x34U))))) 
							& (0x7ffU 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q1 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  == vlTOPp->v__DOT__grp_fu_270_p0)) 
						      & (VL_ULL(0) 
							 == vlTOPp->v__DOT__tmp_17_fu_590_p3)) 
						     | (((((vlTOPp->v__DOT__ap_CS_fsm 
							    >> 1U) 
							   & (0x7ffU 
							      == 
							      (0x7ffU 
							       & (IData)(
									 (vlTOPp->buff_q0 
									  >> 0x34U))))) 
							  & (VL_ULL(0) 
							     == 
							     (VL_ULL(0xfffffffffffff) 
							      & vlTOPp->buff_q0))) 
							 & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
							& (VL_ULL(0) 
							   == vlTOPp->v__DOT__tmp_10_fu_725_p3)))
						     ? VL_ULL(0x7fffffffffffffff)
						     : 
						    ((((((vlTOPp->v__DOT__ap_CS_fsm 
							  >> 1U) 
							 & (0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->buff_q0 
									>> 0x34U))))) 
							& (0x7ffU 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q1 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  == vlTOPp->v__DOT__grp_fu_270_p0)) 
						      & (VL_ULL(0) 
							 != vlTOPp->v__DOT__tmp_17_fu_590_p3))
						      ? 
						     (VL_ULL(0x7ff0000000000000) 
						      | ((QData)((IData)(vlTOPp->v__DOT__zSign_fu_405_p2)) 
							 << 0x3fU))
						      : 
						     ((((((vlTOPp->v__DOT__ap_CS_fsm 
							   >> 1U) 
							  & (0x7ffU 
							     != 
							     (0x7ffU 
							      & (IData)(
									(vlTOPp->buff_q0 
									 >> 0x34U))))) 
							 & (0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->buff_q1 
									>> 0x34U))))) 
							& (0U 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q0 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  == 
							  (VL_ULL(0xfffffffffffff) 
							   & vlTOPp->buff_q0)))
						       ? 
						      ((QData)((IData)(vlTOPp->v__DOT__zSign_fu_405_p2)) 
						       << 0x3fU)
						       : VL_ULL(0)))))))));
}

VL_INLINE_OPT void Vfloat64_mul::_combo__TOP__13(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_combo__TOP__13\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_mul.v:957
    vlTOPp->v__DOT__ap_NS_fsm = (((((((((1U == vlTOPp->v__DOT__ap_CS_fsm) 
					| (2U == vlTOPp->v__DOT__ap_CS_fsm)) 
				       | (4U == vlTOPp->v__DOT__ap_CS_fsm)) 
				      | (8U == vlTOPp->v__DOT__ap_CS_fsm)) 
				     | (0x10U == vlTOPp->v__DOT__ap_CS_fsm)) 
				    | (0x20U == vlTOPp->v__DOT__ap_CS_fsm)) 
				   | (0x40U == vlTOPp->v__DOT__ap_CS_fsm)) 
				  | (0x80U == vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((1U == vlTOPp->v__DOT__ap_CS_fsm)
				      ? ((IData)(vlTOPp->ap_start)
					  ? 2U : 1U)
				      : ((2U == vlTOPp->v__DOT__ap_CS_fsm)
					  ? ((((VL_ULL(0) 
						!= 
						(VL_ULL(0xfffffffffffff) 
						 & vlTOPp->buff_q0)) 
					       & (0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
					      | ((0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U)))) 
						 & (~ (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2))))
					      ? 0x100000U
					      : (((
						   (0x7ffU 
						    != 
						    (0x7ffU 
						     & (IData)(
							       (vlTOPp->buff_q0 
								>> 0x34U)))) 
						   & (0x7ffU 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->buff_q1 
								  >> 0x34U))))) 
						  & (VL_ULL(0) 
						     != vlTOPp->v__DOT__grp_fu_270_p0))
						  ? 0x80000U
						  : 
						 ((((((0x7ffU 
						       != 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->buff_q0 
								   >> 0x34U)))) 
						      & (0x7ffU 
							 == 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q1 
								     >> 0x34U))))) 
						     & (VL_ULL(0) 
							== vlTOPp->v__DOT__grp_fu_270_p0)) 
						    | (((0x7ffU 
							 == 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q0 
								     >> 0x34U)))) 
							& (VL_ULL(0) 
							   == 
							   (VL_ULL(0xfffffffffffff) 
							    & vlTOPp->buff_q0))) 
						       & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2))) 
						   | ((((0x7ffU 
							 != 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q0 
								     >> 0x34U)))) 
							& (0x7ffU 
							   != 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q1 
								       >> 0x34U))))) 
						       & (0U 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->buff_q0 
								      >> 0x34U))))) 
						      & (VL_ULL(0) 
							 == 
							 (VL_ULL(0xfffffffffffff) 
							  & vlTOPp->buff_q0))))
						   ? 0x40000U
						   : 
						  (((((0x7ffU 
						       != 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->buff_q0 
								   >> 0x34U)))) 
						      & (0x7ffU 
							 != 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->buff_q1 
								     >> 0x34U))))) 
						     & (0U 
							== 
							(0x7ffU 
							 & (IData)(
								   (vlTOPp->buff_q0 
								    >> 0x34U))))) 
						    & (VL_ULL(0) 
						       != 
						       (VL_ULL(0xfffffffffffff) 
							& vlTOPp->buff_q0)))
						    ? 4U
						    : 0x10U))))
					  : ((4U == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 8U : 
					     ((8U == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x10U
					       : ((0x10U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 
						  (((0U 
						     == (IData)(vlTOPp->v__DOT__bExp_reg_1396)) 
						    & (VL_ULL(0) 
						       == vlTOPp->v__DOT__grp_fu_270_p0))
						    ? 0x40000U
						    : 
						   (((VL_ULL(0) 
						      != vlTOPp->v__DOT__grp_fu_270_p0) 
						     & (0U 
							== (IData)(vlTOPp->v__DOT__bExp_reg_1396)))
						     ? 0x20U
						     : 0x80U))
						   : 
						  ((0x20U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x40U
						    : 
						   ((0x40U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x80U
						     : 0x100U)))))))
				  : (((((((((0x100U 
					     == vlTOPp->v__DOT__ap_CS_fsm) 
					    | (0x200U 
					       == vlTOPp->v__DOT__ap_CS_fsm)) 
					   | (0x400U 
					      == vlTOPp->v__DOT__ap_CS_fsm)) 
					  | (0x800U 
					     == vlTOPp->v__DOT__ap_CS_fsm)) 
					 | (0x1000U 
					    == vlTOPp->v__DOT__ap_CS_fsm)) 
					| (0x2000U 
					   == vlTOPp->v__DOT__ap_CS_fsm)) 
				       | (0x4000U == vlTOPp->v__DOT__ap_CS_fsm)) 
				      | (0x8000U == vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((0x100U == vlTOPp->v__DOT__ap_CS_fsm)
					  ? 0x200U : 
					 ((0x200U == vlTOPp->v__DOT__ap_CS_fsm)
					   ? 0x400U
					   : ((0x400U 
					       == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x800U
					       : ((0x800U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x1000U
						   : 
						  ((0x1000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x2000U
						    : 
						   ((0x2000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x4000U
						     : 
						    ((0x4000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x8000U
						      : 0x10000U)))))))
				      : ((0x10000U 
					  == vlTOPp->v__DOT__ap_CS_fsm)
					  ? 0x20000U
					  : ((0x20000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 0x40000U
					      : ((0x40000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)
						  ? 
						 ((1U 
						   & ((((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
							  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
							      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
							     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
							| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
							     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
						       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
							    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
							  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))
						   ? 0x40000U
						   : 1U)
						  : 
						 ((0x80000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x40000U
						   : 
						  ((0x100000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x40000U
						    : 0U)))))));
    // ALWAYS at float64_mul.v:950
    vlTOPp->result_ap_vld = (1U & (((((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 1U) 
					      & (0x7ffU 
						 != 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q0 
							     >> 0x34U))))) 
					     & (0x7ffU 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q1 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == vlTOPp->v__DOT__grp_fu_270_p0)) 
					   & (VL_ULL(0) 
					      == vlTOPp->v__DOT__tmp_17_fu_590_p3)) 
					  | (((((vlTOPp->v__DOT__ap_CS_fsm 
						 >> 1U) 
						& (0x7ffU 
						   == 
						   (0x7ffU 
						    & (IData)(
							      (vlTOPp->buff_q0 
							       >> 0x34U))))) 
					       & (VL_ULL(0) 
						  == 
						  (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q0))) 
					      & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
					     & (VL_ULL(0) 
						== vlTOPp->v__DOT__tmp_10_fu_725_p3))) 
					 | (((((vlTOPp->v__DOT__ap_CS_fsm 
						>> 1U) 
					       & (0x7ffU 
						  != 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->buff_q0 
							      >> 0x34U))))) 
					      & (0x7ffU 
						 != 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q1 
							     >> 0x34U))))) 
					     & (0U 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q0)))) 
					| (((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 1U) 
					      & (0x7ffU 
						 != 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->buff_q0 
							     >> 0x34U))))) 
					     & (0x7ffU 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q1 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == vlTOPp->v__DOT__grp_fu_270_p0)) 
					   & (VL_ULL(0) 
					      != vlTOPp->v__DOT__tmp_17_fu_590_p3))) 
				       | (((((vlTOPp->v__DOT__ap_CS_fsm 
					      >> 1U) 
					     & (0x7ffU 
						== 
						(0x7ffU 
						 & (IData)(
							   (vlTOPp->buff_q0 
							    >> 0x34U))))) 
					    & (VL_ULL(0) 
					       == (VL_ULL(0xfffffffffffff) 
						   & vlTOPp->buff_q0))) 
					   & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
					  & (VL_ULL(0) 
					     != vlTOPp->v__DOT__tmp_10_fu_725_p3))) 
				      | (((vlTOPp->v__DOT__ap_CS_fsm 
					   >> 4U) & 
					  (0U == (IData)(vlTOPp->v__DOT__bExp_reg_1396))) 
					 & (VL_ULL(0) 
					    == vlTOPp->v__DOT__grp_fu_270_p0))) 
				     | (((vlTOPp->v__DOT__ap_CS_fsm 
					  >> 0x12U) 
					 & (((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					      | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
					     | ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					    | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424))))) 
					& (~ ((((((
						   ((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done)))))) 
				    | (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x13U)) | 
				   (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 0x14U)));
    // ALWAYS at float64_mul.v:928
    vlTOPp->result = ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)
		       ? ((IData)(vlTOPp->v__DOT__tmp_i9_reg_1473)
			   ? vlTOPp->v__DOT__b_assign_mux_i_reg_1478
			   : vlTOPp->v__DOT__a_assign_5_reg_1483)
		       : ((0x80000U & vlTOPp->v__DOT__ap_CS_fsm)
			   ? ((IData)(vlTOPp->v__DOT__tmp_i2_reg_1449)
			       ? vlTOPp->v__DOT__b_assign_mux_i1_reg_1454
			       : vlTOPp->v__DOT__a_assign_1_reg_1459)
			   : ((1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x12U) & 
				      (((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
					   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					 | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
					      & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					     & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
					| ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
					     & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					   & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
				       | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
					    & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					   & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
					  & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424))))) 
				     & (~ ((((((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
					      | ((((~ (IData)(vlTOPp->v__DOT__tmp_26_reg_1420)) 
						   & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516)))) 
					     | ((((~ (IData)(vlTOPp->v__DOT__tmp_30_reg_1512)) 
						  & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1412))) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					    | ((((~ (IData)(vlTOPp->v__DOT__tmp_reg_1412)) 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_22_reg_1416))) 
						& (~ (IData)(vlTOPp->v__DOT__tmp_31_reg_1516))) 
					       & (~ (IData)(vlTOPp->v__DOT__tmp_29_reg_1424)))) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done))))))
			       ? ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm))
				   ? vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_phi_fu_144_p4
				   : vlTOPp->v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_return_preg)
			       : ((((vlTOPp->v__DOT__ap_CS_fsm 
				     >> 4U) & (0U == (IData)(vlTOPp->v__DOT__bExp_reg_1396))) 
				   & (VL_ULL(0) == vlTOPp->v__DOT__grp_fu_270_p0))
				   ? ((QData)((IData)(vlTOPp->v__DOT__zSign_reg_1406)) 
				      << 0x3fU) : (
						   (((((vlTOPp->v__DOT__ap_CS_fsm 
							>> 1U) 
						       & (0x7ffU 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->buff_q0 
								      >> 0x34U))))) 
						      & (VL_ULL(0) 
							 == 
							 (VL_ULL(0xfffffffffffff) 
							  & vlTOPp->buff_q0))) 
						     & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
						    & (VL_ULL(0) 
						       != vlTOPp->v__DOT__tmp_10_fu_725_p3))
						    ? 
						   (VL_ULL(0x7ff0000000000000) 
						    | ((QData)((IData)(vlTOPp->v__DOT__zSign_fu_405_p2)) 
						       << 0x3fU))
						    : 
						   (((((((vlTOPp->v__DOT__ap_CS_fsm 
							  >> 1U) 
							 & (0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->buff_q0 
									>> 0x34U))))) 
							& (0x7ffU 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q1 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  == vlTOPp->v__DOT__grp_fu_270_p0)) 
						      & (VL_ULL(0) 
							 == vlTOPp->v__DOT__tmp_17_fu_590_p3)) 
						     | (((((vlTOPp->v__DOT__ap_CS_fsm 
							    >> 1U) 
							   & (0x7ffU 
							      == 
							      (0x7ffU 
							       & (IData)(
									 (vlTOPp->buff_q0 
									  >> 0x34U))))) 
							  & (VL_ULL(0) 
							     == 
							     (VL_ULL(0xfffffffffffff) 
							      & vlTOPp->buff_q0))) 
							 & (IData)(vlTOPp->v__DOT__or_cond_fu_625_p2)) 
							& (VL_ULL(0) 
							   == vlTOPp->v__DOT__tmp_10_fu_725_p3)))
						     ? VL_ULL(0x7fffffffffffffff)
						     : 
						    ((((((vlTOPp->v__DOT__ap_CS_fsm 
							  >> 1U) 
							 & (0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->buff_q0 
									>> 0x34U))))) 
							& (0x7ffU 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q1 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  == vlTOPp->v__DOT__grp_fu_270_p0)) 
						      & (VL_ULL(0) 
							 != vlTOPp->v__DOT__tmp_17_fu_590_p3))
						      ? 
						     (VL_ULL(0x7ff0000000000000) 
						      | ((QData)((IData)(vlTOPp->v__DOT__zSign_fu_405_p2)) 
							 << 0x3fU))
						      : 
						     ((((((vlTOPp->v__DOT__ap_CS_fsm 
							   >> 1U) 
							  & (0x7ffU 
							     != 
							     (0x7ffU 
							      & (IData)(
									(vlTOPp->buff_q0 
									 >> 0x34U))))) 
							 & (0x7ffU 
							    != 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->buff_q1 
									>> 0x34U))))) 
							& (0U 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->buff_q0 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  == 
							  (VL_ULL(0xfffffffffffff) 
							   & vlTOPp->buff_q0)))
						       ? 
						      ((QData)((IData)(vlTOPp->v__DOT__zSign_fu_405_p2)) 
						       << 0x3fU)
						       : VL_ULL(0)))))))));
}

void Vfloat64_mul::_eval(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_eval\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    vlTOPp->_combo__TOP__13(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vfloat64_mul::_eval_initial(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_eval_initial\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->_initial__TOP__7(vlSymsp);
}

void Vfloat64_mul::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::final\n"); );
    // Variables
    Vfloat64_mul__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfloat64_mul::_eval_settle(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_eval_settle\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
}

VL_INLINE_OPT QData Vfloat64_mul::_change_request(Vfloat64_mul__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_mul::_change_request\n"); );
    Vfloat64_mul* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
