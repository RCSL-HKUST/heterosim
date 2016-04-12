// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReflection_coefficients.h for the primary calling header

#include "VReflection_coefficients.h" // For This
#include "VReflection_coefficients__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VReflection_coefficients) {
    VReflection_coefficients__Syms* __restrict vlSymsp = __VlSymsp = new VReflection_coefficients__Syms(this, name());
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    x_address0 = VL_RAND_RESET_I(4);
    x_ce0 = VL_RAND_RESET_I(1);
    x_q0 = VL_RAND_RESET_I(32);
    mm = VL_RAND_RESET_I(32);
    y_address0 = VL_RAND_RESET_I(3);
    y_ce0 = VL_RAND_RESET_I(1);
    y_we0 = VL_RAND_RESET_I(1);
    y_d0 = VL_RAND_RESET_I(16);
    nn = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(22);
    v__DOT__bitoff_q0 = VL_RAND_RESET_I(4);
    v__DOT__bitoff_q1 = VL_RAND_RESET_I(4);
    v__DOT__bitoff_q2 = VL_RAND_RESET_I(4);
    v__DOT__bitoff_q3 = VL_RAND_RESET_I(4);
    v__DOT__tmp_reg_1347 = VL_RAND_RESET_I(1);
    v__DOT__tmp_1_i_reg_1351 = VL_RAND_RESET_I(1);
    v__DOT__icmp_reg_1358 = VL_RAND_RESET_I(1);
    v__DOT__icmp1_reg_1364 = VL_RAND_RESET_I(1);
    v__DOT__icmp2_reg_1370 = VL_RAND_RESET_I(1);
    v__DOT__tmp_s_reg_1395 = VL_RAND_RESET_I(32);
    v__DOT__i_reg_1403 = VL_RAND_RESET_I(4);
    v__DOT__tmp_3_reg_1408 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_7_reg_1421 = VL_RAND_RESET_Q(64);
    v__DOT__i_4_reg_1431 = VL_RAND_RESET_I(4);
    v__DOT__i_5_reg_1439 = VL_RAND_RESET_I(4);
    v__DOT__tmp_8_reg_1444 = VL_RAND_RESET_Q(64);
    v__DOT__P_addr_reg_1454 = VL_RAND_RESET_I(4);
    v__DOT__P_addr_1_reg_1459 = VL_RAND_RESET_I(4);
    v__DOT__y_addr_1_reg_1464 = VL_RAND_RESET_I(3);
    v__DOT__P_q0 = VL_RAND_RESET_I(16);
    v__DOT__temp_1_reg_1469 = VL_RAND_RESET_I(16);
    v__DOT__p_rec5_reg_1480 = VL_RAND_RESET_I(4);
    v__DOT__tmp_1_fu_862_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_1_reg_1490 = VL_RAND_RESET_I(1);
    v__DOT__L_denum_i_reg_1499 = VL_RAND_RESET_I(32);
    v__DOT__L_denum_i_cast_reg_1505 = VL_RAND_RESET_I(17);
    v__DOT__r_1_rec_cast1_le_reg_1513 = VL_RAND_RESET_I(5);
    v__DOT__k_fu_890_p2 = VL_RAND_RESET_I(4);
    v__DOT__L_num_3_fu_918_p3 = VL_RAND_RESET_I(32);
    v__DOT__tmp_27_i_fu_896_p2 = VL_RAND_RESET_I(1);
    v__DOT__div_fu_936_p3 = VL_RAND_RESET_I(16);
    v__DOT__b_assign_fu_955_p3 = VL_RAND_RESET_I(16);
    v__DOT__b_assign_reg_1536 = VL_RAND_RESET_I(16);
    v__DOT__tmp_i2_reg_1544 = VL_RAND_RESET_I(1);
    v__DOT__grp_fu_467_p2 = VL_RAND_RESET_I(1);
    v__DOT__or_cond_i_reg_1550 = VL_RAND_RESET_I(1);
    v__DOT__tmp_24_i_reg_1555 = VL_RAND_RESET_I(32);
    v__DOT__sum_fu_1007_p2 = VL_RAND_RESET_I(17);
    v__DOT__sum_reg_1561 = VL_RAND_RESET_I(17);
    v__DOT__icmp3_reg_1566 = VL_RAND_RESET_I(1);
    v__DOT__tmp_28_reg_1571 = VL_RAND_RESET_I(16);
    v__DOT__tmp_15_reg_1576 = VL_RAND_RESET_I(32);
    v__DOT__tmp_17_reg_1584 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_16_fu_1064_p2 = VL_RAND_RESET_I(1);
    v__DOT__K_addr_1_reg_1589 = VL_RAND_RESET_I(4);
    v__DOT__m_1_reg_1594 = VL_RAND_RESET_I(32);
    v__DOT__n_fu_1085_p2 = VL_RAND_RESET_I(32);
    v__DOT__indvars_iv_next_fu_1091_p2 = VL_RAND_RESET_I(32);
    v__DOT__K_q0 = VL_RAND_RESET_I(16);
    v__DOT__K_load_reg_1614 = VL_RAND_RESET_I(16);
    v__DOT__or_cond_i1_reg_1620 = VL_RAND_RESET_I(1);
    v__DOT__P_load_reg_1625 = VL_RAND_RESET_I(16);
    v__DOT__or_cond_i2_reg_1631 = VL_RAND_RESET_I(1);
    v__DOT__sum_1_fu_1140_p2 = VL_RAND_RESET_I(17);
    v__DOT__sum_1_reg_1636 = VL_RAND_RESET_I(17);
    v__DOT__icmp4_reg_1641 = VL_RAND_RESET_I(1);
    v__DOT__tmp_30_reg_1646 = VL_RAND_RESET_I(16);
    v__DOT__sum_2_fu_1186_p2 = VL_RAND_RESET_I(17);
    v__DOT__sum_2_reg_1651 = VL_RAND_RESET_I(17);
    v__DOT__icmp5_reg_1656 = VL_RAND_RESET_I(1);
    v__DOT__tmp_32_reg_1661 = VL_RAND_RESET_I(16);
    v__DOT__exitcond3_fu_1278_p2 = VL_RAND_RESET_I(1);
    v__DOT__exitcond3_reg_1666 = VL_RAND_RESET_I(1);
    v__DOT__p_rec_fu_1284_p2 = VL_RAND_RESET_I(32);
    v__DOT__exitcond5_fu_1295_p2 = VL_RAND_RESET_I(1);
    v__DOT__exitcond5_reg_1675 = VL_RAND_RESET_I(1);
    v__DOT__p_rec9_fu_1301_p2 = VL_RAND_RESET_I(4);
    v__DOT__ACF_address0 = VL_RAND_RESET_I(4);
    v__DOT__ACF_q0 = VL_RAND_RESET_I(16);
    v__DOT__P_address0 = VL_RAND_RESET_I(4);
    v__DOT__P_d0 = VL_RAND_RESET_I(16);
    v__DOT__K_address0 = VL_RAND_RESET_I(4);
    v__DOT__K_d0 = VL_RAND_RESET_I(16);
    v__DOT__i_1_reg_306 = VL_RAND_RESET_I(4);
    v__DOT__i_2_reg_317 = VL_RAND_RESET_I(4);
    v__DOT__i_3_reg_328 = VL_RAND_RESET_I(4);
    v__DOT__indvars_iv_reg_339 = VL_RAND_RESET_I(32);
    v__DOT__r_1_rec_reg_351 = VL_RAND_RESET_I(4);
    v__DOT__i_6_reg_363 = VL_RAND_RESET_I(32);
    v__DOT__temp_6_reg_375 = VL_RAND_RESET_I(16);
    v__DOT__L_num_i_reg_384 = VL_RAND_RESET_I(32);
    v__DOT__div_i_reg_393 = VL_RAND_RESET_I(16);
    v__DOT__k_i_reg_405 = VL_RAND_RESET_I(4);
    v__DOT__p_0_i_reg_416 = VL_RAND_RESET_I(16);
    v__DOT__m_reg_428 = VL_RAND_RESET_I(32);
    v__DOT__r_2_rec_reg_439 = VL_RAND_RESET_I(32);
    v__DOT__r_0_rec_reg_450 = VL_RAND_RESET_I(4);
    v__DOT__grp_fu_461_p0 = VL_RAND_RESET_I(16);
    v__DOT__a_assign_1_fu_500_p2 = VL_RAND_RESET_I(32);
    v__DOT__sel_tmp13_i_fu_673_p2 = VL_RAND_RESET_I(1);
    v__DOT__or_cond_fu_705_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_28_i_fu_908_p2 = VL_RAND_RESET_I(1);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(22);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram0[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram1[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
	    v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }}
    v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
	    v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }}
    v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<9; ++__Vi0) {
	    v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }}
    v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void VReflection_coefficients::__Vconfigure(VReflection_coefficients__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VReflection_coefficients::~VReflection_coefficients() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VReflection_coefficients::eval() {
    VReflection_coefficients__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VReflection_coefficients::eval\n"); );
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

void VReflection_coefficients::_eval_initial_loop(VReflection_coefficients__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VReflection_coefficients::_combo__TOP__1(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_combo__TOP__1\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->nn + vlTOPp->mm);
}

VL_INLINE_OPT void VReflection_coefficients::_sequent__TOP__3(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_sequent__TOP__3\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__i_3_reg_328,3,0);
    VL_SIG8(__Vdly__v__DOT__r_1_rec_reg_351,3,0);
    VL_SIG8(__Vdly__v__DOT__i_4_reg_1431,3,0);
    VL_SIG8(__Vdly__v__DOT__i_reg_1403,3,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,3,0);
    VL_SIG8(__Vdlyvset__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,3,0);
    VL_SIG8(__Vdlyvset__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,0,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,3,0);
    VL_SIG8(__Vdlyvset__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,0,0);
    VL_SIG16(__Vdlyvval__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,15,0);
    VL_SIG16(__Vdlyvval__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,15,0);
    VL_SIG16(__Vdlyvval__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0,15,0);
    VL_SIG(__Vdly__v__DOT__m_1_reg_1594,31,0);
    // Body
    __Vdlyvset__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 = 0U;
    __Vdlyvset__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 = 0U;
    __Vdly__v__DOT__i_reg_1403 = vlTOPp->v__DOT__i_reg_1403;
    __Vdly__v__DOT__m_1_reg_1594 = vlTOPp->v__DOT__m_1_reg_1594;
    __Vdly__v__DOT__i_4_reg_1431 = vlTOPp->v__DOT__i_4_reg_1431;
    __Vdly__v__DOT__r_1_rec_reg_351 = vlTOPp->v__DOT__r_1_rec_reg_351;
    __Vdly__v__DOT__i_3_reg_328 = vlTOPp->v__DOT__i_3_reg_328;
    __Vdlyvset__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 = 0U;
    // ALWAYS at Reflection_coefficients.v:1768
    vlTOPp->v__DOT__P_addr_reg_1454 = 1U;
    // ALWAYS at Reflection_coefficients.v:1769
    vlTOPp->v__DOT__P_addr_1_reg_1459 = 0U;
    // ALWAYS at Reflection_coefficients.v:1767
    vlTOPp->v__DOT__tmp_8_reg_1444 = (VL_ULL(0xf) & vlTOPp->v__DOT__tmp_8_reg_1444);
    // ALWAYS at Reflection_coefficients.v:774
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 7U) & (9U != (IData)(vlTOPp->v__DOT__i_3_reg_328)))) {
	vlTOPp->v__DOT__tmp_8_reg_1444 = ((VL_ULL(0xfffffffffffffff0) 
					   & vlTOPp->v__DOT__tmp_8_reg_1444) 
					  | (IData)((IData)(vlTOPp->v__DOT__i_3_reg_328)));
    }
    // ALWAYS at Reflection_coefficients.v:1770
    vlTOPp->v__DOT__r_1_rec_cast1_le_reg_1513 = (0xfU 
						 & (IData)(vlTOPp->v__DOT__r_1_rec_cast1_le_reg_1513));
    // ALWAYS at Reflection_coefficients.v:750
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 0xbU) & (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2))) {
	vlTOPp->v__DOT__r_1_rec_cast1_le_reg_1513 = 
	    ((0x10U & (IData)(vlTOPp->v__DOT__r_1_rec_cast1_le_reg_1513)) 
	     | (IData)(vlTOPp->v__DOT__r_1_rec_reg_351));
    }
    // ALWAYS at Reflection_coefficients.v:724
    if ((0x40000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__icmp4_reg_1641 = (1U == (3U 
						 & (vlTOPp->v__DOT__sum_1_fu_1140_p2 
						    >> 0xfU)));
	vlTOPp->v__DOT__icmp5_reg_1656 = (1U == (3U 
						 & (vlTOPp->v__DOT__sum_2_fu_1186_p2 
						    >> 0xfU)));
	vlTOPp->v__DOT__sum_1_reg_1636 = vlTOPp->v__DOT__sum_1_fu_1140_p2;
	vlTOPp->v__DOT__sum_2_reg_1651 = vlTOPp->v__DOT__sum_2_fu_1186_p2;
	vlTOPp->v__DOT__tmp_30_reg_1646 = (0xffffU 
					   & vlTOPp->v__DOT__sum_1_fu_1140_p2);
	vlTOPp->v__DOT__tmp_32_reg_1661 = (0xffffU 
					   & vlTOPp->v__DOT__sum_2_fu_1186_p2);
    }
    // ALWAYS at Reflection_coefficients.v:675
    if ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__exitcond3_reg_1666 = vlTOPp->v__DOT__exitcond3_fu_1278_p2;
    }
    // ALWAYS at Reflection_coefficients.v:579
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 7U) & (9U == (IData)(vlTOPp->v__DOT__i_3_reg_328)))) {
	vlTOPp->v__DOT__indvars_iv_reg_339 = 8U;
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 0x10U) & (IData)(vlTOPp->v__DOT__tmp_16_fu_1064_p2))) {
	    vlTOPp->v__DOT__indvars_iv_reg_339 = vlTOPp->v__DOT__indvars_iv_next_fu_1091_p2;
	}
    }
    // ALWAYS at Reflection_coefficients.v:627
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 0xbU) & (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2))) {
	vlTOPp->v__DOT__r_2_rec_reg_439 = 0U;
    } else {
	if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 0x14U) 
		   & (~ (IData)(vlTOPp->v__DOT__exitcond3_fu_1278_p2))))) {
	    vlTOPp->v__DOT__r_2_rec_reg_439 = vlTOPp->v__DOT__p_rec_fu_1284_p2;
	}
    }
    // ALWAYS at Reflection_coefficients.v:700
    if ((8U & vlTOPp->v__DOT__ap_CS_fsm)) {
	__Vdly__v__DOT__i_reg_1403 = (0xfU & ((IData)(1U) 
					      + (IData)(vlTOPp->v__DOT__i_1_reg_306)));
    }
    // ALWAYS at Reflection_coefficients.v:1765
    vlTOPp->v__DOT__tmp_3_reg_1408 = (VL_ULL(0xf) & vlTOPp->v__DOT__tmp_3_reg_1408);
    // ALWAYS at Reflection_coefficients.v:768
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 3U) & (9U != (IData)(vlTOPp->v__DOT__i_1_reg_306)))) {
	vlTOPp->v__DOT__tmp_3_reg_1408 = ((VL_ULL(0xfffffffffffffff0) 
					   & vlTOPp->v__DOT__tmp_3_reg_1408) 
					  | (IData)((IData)(vlTOPp->v__DOT__i_1_reg_306)));
    }
    // ALWAYS at Reflection_coefficients.v:681
    if ((0x200000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__exitcond5_reg_1675 = (8U == (IData)(vlTOPp->v__DOT__r_0_rec_reg_450));
    }
    // ALWAYS at Reflection_coefficients.v:1771
    vlTOPp->v__DOT__tmp_17_reg_1584 = (VL_ULL(0xffffffff) 
				       & vlTOPp->v__DOT__tmp_17_reg_1584);
    // ALWAYS at Reflection_coefficients.v:645
    if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 0x10U) 
	       & (~ (IData)(vlTOPp->v__DOT__tmp_16_fu_1064_p2))))) {
	vlTOPp->v__DOT__K_addr_1_reg_1589 = (0xfU & (IData)((QData)((IData)(vlTOPp->v__DOT__m_reg_428))));
	__Vdly__v__DOT__m_1_reg_1594 = ((IData)(1U) 
					+ vlTOPp->v__DOT__m_reg_428);
	vlTOPp->v__DOT__tmp_17_reg_1584 = ((VL_ULL(0xffffffff00000000) 
					    & vlTOPp->v__DOT__tmp_17_reg_1584) 
					   | (IData)((IData)(vlTOPp->v__DOT__m_reg_428)));
    }
    // ALWAYS at Reflection_coefficients.v:756
    if ((0x8000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp_15_reg_1576 = ((IData)(8U) 
					   - vlTOPp->v__DOT__i_6_reg_363);
    }
    // ALWAYS at Reflection_coefficients.v:662
    if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 0xbU) 
	       & (~ (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2))))) {
	vlTOPp->v__DOT__L_denum_i_cast_reg_1505 = (0x1ffffU 
						   & VL_EXTENDS_II(17,16, (IData)(vlTOPp->v__DOT__P_q0)));
	vlTOPp->v__DOT__L_denum_i_reg_1499 = VL_EXTENDS_II(32,16, (IData)(vlTOPp->v__DOT__P_q0));
    }
    // ALWAYS at Reflection_coefficients.v:1766
    vlTOPp->v__DOT__tmp_7_reg_1421 = (VL_ULL(0xf) & vlTOPp->v__DOT__tmp_7_reg_1421);
    // ALWAYS at Reflection_coefficients.v:687
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 5U) & (8U != (IData)(vlTOPp->v__DOT__i_2_reg_317)))) {
	__Vdly__v__DOT__i_4_reg_1431 = (0xfU & ((IData)(1U) 
						+ (IData)(vlTOPp->v__DOT__i_2_reg_317)));
	vlTOPp->v__DOT__tmp_7_reg_1421 = ((VL_ULL(0xfffffffffffffff0) 
					   & vlTOPp->v__DOT__tmp_7_reg_1421) 
					  | (IData)((IData)(vlTOPp->v__DOT__i_2_reg_317)));
    }
    // ALWAYS at Reflection_coefficients.v:619
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 7U) & (9U == (IData)(vlTOPp->v__DOT__i_3_reg_328)))) {
	__Vdly__v__DOT__r_1_rec_reg_351 = 0U;
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 0x10U) & (IData)(vlTOPp->v__DOT__tmp_16_fu_1064_p2))) {
	    __Vdly__v__DOT__r_1_rec_reg_351 = vlTOPp->v__DOT__p_rec5_reg_1480;
	}
    }
    // ALWAYS at Reflection_coefficients.v:563
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 5U) & (8U == (IData)(vlTOPp->v__DOT__i_2_reg_317)))) {
	__Vdly__v__DOT__i_3_reg_328 = 0U;
    } else {
	if ((0x100U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    __Vdly__v__DOT__i_3_reg_328 = vlTOPp->v__DOT__i_5_reg_1439;
	}
    }
    // ALWAYS at Reflection_coefficients.v:715
    if ((0x4000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__icmp3_reg_1566 = (1U == (3U 
						 & (vlTOPp->v__DOT__sum_fu_1007_p2 
						    >> 0xfU)));
	vlTOPp->v__DOT__sum_reg_1561 = vlTOPp->v__DOT__sum_fu_1007_p2;
	vlTOPp->v__DOT__tmp_24_i_reg_1555 = VL_EXTENDS_II(32,16, (IData)(vlTOPp->v__DOT__b_assign_reg_1536));
	vlTOPp->v__DOT__tmp_28_reg_1571 = (0xffffU 
					   & vlTOPp->v__DOT__sum_fu_1007_p2);
    }
    // ALWAYS at Reflection_coefficients.v:531
    if ((((vlTOPp->v__DOT__ap_CS_fsm >> 0xbU) & (~ (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2))) 
	 & (0U != (IData)(vlTOPp->v__DOT__temp_6_reg_375)))) {
	vlTOPp->v__DOT__L_num_i_reg_384 = VL_EXTENDS_II(32,16, (IData)(vlTOPp->v__DOT__temp_6_reg_375));
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 0xcU) & 
	     (0U != (IData)(vlTOPp->v__DOT__k_i_reg_405)))) {
	    vlTOPp->v__DOT__L_num_i_reg_384 = vlTOPp->v__DOT__L_num_3_fu_918_p3;
	}
    }
    // ALWAYS at Reflection_coefficients.v:653
    if ((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__K_load_reg_1614 = vlTOPp->v__DOT__K_q0;
	vlTOPp->v__DOT__P_load_reg_1625 = vlTOPp->v__DOT__P_q0;
	vlTOPp->v__DOT__or_cond_i1_reg_1620 = ((IData)(vlTOPp->v__DOT__tmp_i2_reg_1544) 
					       & (0x8000U 
						  == (IData)(vlTOPp->v__DOT__K_q0)));
	vlTOPp->v__DOT__or_cond_i2_reg_1631 = vlTOPp->v__DOT__grp_fu_467_p2;
    }
    // ALWAYS at Reflection_coefficients_ACF.v:27
    if ((1U & (((vlTOPp->v__DOT__ap_CS_fsm >> 5U) | 
		(vlTOPp->v__DOT__ap_CS_fsm >> 7U)) 
	       | (vlTOPp->v__DOT__ap_CS_fsm >> 4U)))) {
	if ((0x10U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1 
		= (0xffffU & (((0x1fU >= vlTOPp->v__DOT__tmp_s_reg_1395)
			        ? (vlTOPp->x_q0 << vlTOPp->v__DOT__tmp_s_reg_1395)
			        : 0U) >> 0x10U));
	    if ((8U >= (IData)(vlTOPp->v__DOT__ACF_address0))) {
		__Vdlyvval__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 
		    = vlTOPp->v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1;
		__Vdlyvset__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 = 1U;
		__Vdlyvdim0__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 
		    = vlTOPp->v__DOT__ACF_address0;
	    }
	    vlTOPp->v__DOT__ACF_q0 = (0xffffU & (((0x1fU 
						   >= vlTOPp->v__DOT__tmp_s_reg_1395)
						   ? 
						  (vlTOPp->x_q0 
						   << vlTOPp->v__DOT__tmp_s_reg_1395)
						   : 0U) 
						 >> 0x10U));
	} else {
	    vlTOPp->v__DOT__ACF_q0 = ((8U >= (IData)(vlTOPp->v__DOT__ACF_address0))
				       ? vlTOPp->v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram
				      [vlTOPp->v__DOT__ACF_address0]
				       : 0U);
	}
    }
    // ALWAYS at Reflection_coefficients.v:603
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 0xcU) & (0U 
						== (IData)(vlTOPp->v__DOT__k_i_reg_405)))) {
	vlTOPp->v__DOT__p_0_i_reg_416 = vlTOPp->v__DOT__div_i_reg_393;
    } else {
	if ((((vlTOPp->v__DOT__ap_CS_fsm >> 0xbU) & 
	      (~ (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2))) 
	     & (0U == (IData)(vlTOPp->v__DOT__temp_6_reg_375)))) {
	    vlTOPp->v__DOT__p_0_i_reg_416 = 0U;
	}
    }
    // ALWAYSPOST at Reflection_coefficients_ACF.v:33
    if (__Vdlyvset__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0) {
	vlTOPp->v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[__Vdlyvdim0__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0] 
	    = __Vdlyvval__v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0;
    }
    vlTOPp->v__DOT__indvars_iv_next_fu_1091_p2 = ((IData)(0xffffffffU) 
						  + vlTOPp->v__DOT__indvars_iv_reg_339);
    vlTOPp->v__DOT__p_rec_fu_1284_p2 = ((IData)(1U) 
					+ vlTOPp->v__DOT__r_2_rec_reg_439);
    vlTOPp->v__DOT__exitcond3_fu_1278_p2 = (vlTOPp->v__DOT__r_2_rec_reg_439 
					    == vlTOPp->v__DOT__indvars_iv_reg_339);
    // ALWAYS at Reflection_coefficients.v:611
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0U == vlTOPp->x_q0))) {
	vlTOPp->v__DOT__r_0_rec_reg_450 = 0U;
    } else {
	if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 0x15U) 
		   & (~ (IData)(vlTOPp->v__DOT__exitcond5_fu_1295_p2))))) {
	    vlTOPp->v__DOT__r_0_rec_reg_450 = vlTOPp->v__DOT__p_rec9_fu_1301_p2;
	}
    }
    // ALWAYS at Reflection_coefficients.v:595
    if ((0x80000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__m_reg_428 = vlTOPp->v__DOT__m_1_reg_1594;
    } else {
	if ((0x8000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__m_reg_428 = 1U;
	}
    }
    // ALWAYS at Reflection_coefficients.v:742
    if ((0x400U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__p_rec5_reg_1480 = (0xfU & ((IData)(1U) 
						   + (IData)(vlTOPp->v__DOT__r_1_rec_reg_351)));
	vlTOPp->v__DOT__temp_1_reg_1469 = vlTOPp->v__DOT__P_q0;
	vlTOPp->v__DOT__y_addr_1_reg_1464 = (7U & (IData)((QData)((IData)(vlTOPp->v__DOT__r_1_rec_reg_351))));
    }
    // ALWAYS at Reflection_coefficients.v:694
    if ((0x80U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__i_5_reg_1439 = (0xfU & ((IData)(1U) 
						+ (IData)(vlTOPp->v__DOT__i_3_reg_328)));
    }
    // ALWAYS at Reflection_coefficients.v:555
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 3U) & (9U == (IData)(vlTOPp->v__DOT__i_1_reg_306)))) {
	vlTOPp->v__DOT__i_2_reg_317 = 1U;
    } else {
	if ((0x40U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__i_2_reg_317 = vlTOPp->v__DOT__i_4_reg_1431;
	}
    }
    // ALWAYS at Reflection_coefficients.v:669
    if ((1U & (((vlTOPp->v__DOT__ap_CS_fsm >> 0xdU) 
		& (~ (IData)(vlTOPp->v__DOT__tmp_reg_1347))) 
	       & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))))) {
	vlTOPp->v__DOT__b_assign_reg_1536 = vlTOPp->v__DOT__b_assign_fu_955_p3;
    }
    vlTOPp->v__DOT__tmp_28_i_fu_908_p2 = VL_LTS_III(1,32,32, 
						    (vlTOPp->v__DOT__L_num_i_reg_384 
						     << 1U), vlTOPp->v__DOT__L_denum_i_reg_1499);
    vlTOPp->v__DOT__sum_1_fu_1140_p2 = (0x1ffffU & 
					(VL_EXTENDS_II(17,16, 
						       (0xffffU 
							& ((IData)(vlTOPp->v__DOT__or_cond_i1_reg_1620)
							    ? 0x7fffU
							    : (IData)(
								      (VL_ULL(0x1ffffffff) 
								       & ((VL_ULL(0x4000) 
									   + 
									   VL_EXTENDS_QQ(48,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_MULS_QQQ(43,43,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, 
										(0xffffU 
										& vlTOPp->v__DOT__tmp_24_i_reg_1555))), 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__K_load_reg_1614))))))) 
									  >> 0xfU)))))) 
					 + VL_EXTENDS_II(17,16, (IData)(vlTOPp->v__DOT__P_load_reg_1625))));
    vlTOPp->v__DOT__sum_2_fu_1186_p2 = (0x1ffffU & 
					(VL_EXTENDS_II(17,16, 
						       (0xffffU 
							& ((IData)(vlTOPp->v__DOT__or_cond_i2_reg_1631)
							    ? 0x7fffU
							    : (IData)(
								      (VL_ULL(0x1ffffffff) 
								       & ((VL_ULL(0x4000) 
									   + 
									   VL_EXTENDS_QQ(48,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_MULS_QQQ(43,43,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, 
										(0xffffU 
										& vlTOPp->v__DOT__tmp_24_i_reg_1555))), 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__P_load_reg_1625))))))) 
									  >> 0xfU)))))) 
					 + VL_EXTENDS_II(17,16, (IData)(vlTOPp->v__DOT__K_load_reg_1614))));
    // ALWAYS at Reflection_coefficients_ACF.v:27
    if ((1U & (((vlTOPp->v__DOT__ap_CS_fsm >> 0x10U) 
		| (vlTOPp->v__DOT__ap_CS_fsm >> 6U)) 
	       | (vlTOPp->v__DOT__ap_CS_fsm >> 0x13U)))) {
	if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 6U) 
		   | (vlTOPp->v__DOT__ap_CS_fsm >> 0x13U)))) {
	    vlTOPp->v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1 
		= vlTOPp->v__DOT__K_d0;
	    if ((8U >= (IData)(vlTOPp->v__DOT__K_address0))) {
		__Vdlyvval__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 
		    = vlTOPp->v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1;
		__Vdlyvset__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 = 1U;
		__Vdlyvdim0__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 
		    = vlTOPp->v__DOT__K_address0;
	    }
	    vlTOPp->v__DOT__K_q0 = vlTOPp->v__DOT__K_d0;
	} else {
	    vlTOPp->v__DOT__K_q0 = ((8U >= (IData)(vlTOPp->v__DOT__K_address0))
				     ? vlTOPp->v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram
				    [vlTOPp->v__DOT__K_address0]
				     : 0U);
	}
    }
    // ALWAYS at Reflection_coefficients.v:735
    if (((((vlTOPp->v__DOT__ap_CS_fsm >> 0xdU) & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1347))) 
	  & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
	 & (8U != vlTOPp->v__DOT__i_6_reg_363))) {
	vlTOPp->v__DOT__or_cond_i_reg_1550 = vlTOPp->v__DOT__grp_fu_467_p2;
	vlTOPp->v__DOT__tmp_i2_reg_1544 = (0x8000U 
					   == (IData)(vlTOPp->v__DOT__b_assign_fu_955_p3));
    }
    // ALWAYS at Reflection_coefficients.v:786
    if ((4U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp_s_reg_1395 = VL_EXTENDS_II(32,6, 
						       (0x3fU 
							& (((IData)(vlTOPp->v__DOT__or_cond_fu_705_p2) 
							    | ((IData)(vlTOPp->v__DOT__sel_tmp13_i_fu_673_p2) 
							       | ((IData)(vlTOPp->v__DOT__icmp1_reg_1364) 
								  & (~ (IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351)))))
							    ? 
							   ((IData)(vlTOPp->v__DOT__or_cond_fu_705_p2)
							     ? 
							    (0x1fU 
							     & ((IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351)
								 ? 0U
								 : 
								((IData)(0x17U) 
								 + (IData)(vlTOPp->v__DOT__bitoff_q2))))
							     : 
							    VL_EXTENDS_II(6,5, 
									  (0x1fU 
									   & ((IData)(vlTOPp->v__DOT__sel_tmp13_i_fu_673_p2)
									       ? 
									      (0xfU 
									       & ((IData)(7U) 
										+ (IData)(vlTOPp->v__DOT__bitoff_q1)))
									       : 
									      VL_EXTENDS_II(5,4, 
										(0xfU 
										& ((IData)(0xfU) 
										+ (IData)(vlTOPp->v__DOT__bitoff_q0))))))))
							    : 
							   (0x1fU 
							    & ((IData)(0xfU) 
							       + (IData)(vlTOPp->v__DOT__bitoff_q3))))));
    }
    // ALWAYS at Reflection_coefficients.v:539
    if ((((vlTOPp->v__DOT__ap_CS_fsm >> 0xbU) & (~ (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2))) 
	 & (0U != (IData)(vlTOPp->v__DOT__temp_6_reg_375)))) {
	vlTOPp->v__DOT__div_i_reg_393 = 0U;
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 0xcU) & 
	     (0U != (IData)(vlTOPp->v__DOT__k_i_reg_405)))) {
	    vlTOPp->v__DOT__div_i_reg_393 = vlTOPp->v__DOT__div_fu_936_p3;
	}
    }
    vlTOPp->v__DOT__m_1_reg_1594 = __Vdly__v__DOT__m_1_reg_1594;
    vlTOPp->v__DOT__r_1_rec_reg_351 = __Vdly__v__DOT__r_1_rec_reg_351;
    vlTOPp->v__DOT__i_4_reg_1431 = __Vdly__v__DOT__i_4_reg_1431;
    // ALWAYSPOST at Reflection_coefficients_ACF.v:33
    if (__Vdlyvset__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0) {
	vlTOPp->v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[__Vdlyvdim0__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0] 
	    = __Vdlyvval__v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0;
    }
    vlTOPp->v__DOT__exitcond5_fu_1295_p2 = (8U == (IData)(vlTOPp->v__DOT__r_0_rec_reg_450));
    vlTOPp->v__DOT__p_rec9_fu_1301_p2 = (0xfU & ((IData)(1U) 
						 + (IData)(vlTOPp->v__DOT__r_0_rec_reg_450)));
    vlTOPp->v__DOT__b_assign_fu_955_p3 = (0xffffU & 
					  (VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->v__DOT__temp_1_reg_1469))
					    ? VL_NEGATE_I((IData)(vlTOPp->v__DOT__p_0_i_reg_416))
					    : (IData)(vlTOPp->v__DOT__p_0_i_reg_416)));
    // ALWAYS at Reflection_coefficients.v:547
    if ((0x10U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__i_1_reg_306 = vlTOPp->v__DOT__i_reg_1403;
    } else {
	if ((4U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__i_1_reg_306 = 0U;
	}
    }
    vlTOPp->v__DOT__sum_fu_1007_p2 = (0x1ffffU & (VL_EXTENDS_II(17,16, 
								(0xffffU 
								 & ((IData)(vlTOPp->v__DOT__or_cond_i_reg_1550)
								     ? 0x7fffU
								     : (IData)(
									       (VL_ULL(0x1ffffffff) 
										& ((VL_ULL(0x4000) 
										+ 
										VL_EXTENDS_QQ(48,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_MULS_QQQ(43,43,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__b_assign_reg_1536))), 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__temp_1_reg_1469))))))) 
										>> 0xfU)))))) 
						  + vlTOPp->v__DOT__L_denum_i_cast_reg_1505));
    // ALWAYS at Reflection_coefficients.v:780
    if ((2U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp_reg_1347 = (0U == vlTOPp->x_q0);
    }
    // ALWAYS at Reflection_coefficients.v:762
    if ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__tmp_1_reg_1490 = vlTOPp->v__DOT__tmp_1_fu_862_p2;
    }
    // ALWAYS at Reflection_coefficients.v:571
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 7U) & (9U == (IData)(vlTOPp->v__DOT__i_3_reg_328)))) {
	vlTOPp->v__DOT__i_6_reg_363 = 1U;
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 0x10U) & (IData)(vlTOPp->v__DOT__tmp_16_fu_1064_p2))) {
	    vlTOPp->v__DOT__i_6_reg_363 = vlTOPp->v__DOT__n_fu_1085_p2;
	}
    }
    // ALWAYS at Reflection_coefficients_bitoff.v:60
    if ((2U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__bitoff_q2 = vlTOPp->v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram1
	    [(0xffU & vlTOPp->v__DOT__a_assign_1_fu_500_p2)];
    }
    // ALWAYS at Reflection_coefficients_bitoff.v:50
    if ((2U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__bitoff_q1 = vlTOPp->v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram0
	    [(0xffU & (vlTOPp->v__DOT__a_assign_1_fu_500_p2 
		       >> 0x10U))];
    }
    // ALWAYS at Reflection_coefficients_bitoff.v:40
    if ((2U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__bitoff_q0 = vlTOPp->v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram0
	    [(0xffU & (vlTOPp->v__DOT__a_assign_1_fu_500_p2 
		       >> 0x18U))];
    }
    // ALWAYS at Reflection_coefficients_bitoff.v:70
    if ((2U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__bitoff_q3 = vlTOPp->v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram1
	    [(0xffU & (vlTOPp->v__DOT__a_assign_1_fu_500_p2 
		       >> 8U))];
    }
    // ALWAYS at Reflection_coefficients.v:706
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0U != vlTOPp->x_q0))) {
	vlTOPp->v__DOT__icmp1_reg_1364 = (0U != (0xffU 
						 & (vlTOPp->v__DOT__a_assign_1_fu_500_p2 
						    >> 0x18U)));
	vlTOPp->v__DOT__icmp2_reg_1370 = (0U == (0xffU 
						 & (vlTOPp->v__DOT__a_assign_1_fu_500_p2 
						    >> 8U)));
	vlTOPp->v__DOT__icmp_reg_1358 = (0U != (0xffffU 
						& (vlTOPp->v__DOT__a_assign_1_fu_500_p2 
						   >> 0x10U)));
	vlTOPp->v__DOT__tmp_1_i_reg_1351 = VL_GTS_III(1,32,32, 0xc0000001U, vlTOPp->x_q0);
    }
    // ALWAYS at Reflection_coefficients.v:587
    if ((((vlTOPp->v__DOT__ap_CS_fsm >> 0xbU) & (~ (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2))) 
	 & (0U != (IData)(vlTOPp->v__DOT__temp_6_reg_375)))) {
	vlTOPp->v__DOT__k_i_reg_405 = 0xfU;
    } else {
	if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 0xcU) 
		   & (~ (IData)(vlTOPp->v__DOT__tmp_27_i_fu_896_p2))))) {
	    vlTOPp->v__DOT__k_i_reg_405 = vlTOPp->v__DOT__k_fu_890_p2;
	}
    }
    vlTOPp->v__DOT__i_reg_1403 = __Vdly__v__DOT__i_reg_1403;
    vlTOPp->v__DOT__i_3_reg_328 = __Vdly__v__DOT__i_3_reg_328;
    vlTOPp->v__DOT__tmp_16_fu_1064_p2 = VL_GTS_III(1,32,32, vlTOPp->v__DOT__m_reg_428, vlTOPp->v__DOT__tmp_15_reg_1576);
    vlTOPp->v__DOT__n_fu_1085_p2 = ((IData)(1U) + vlTOPp->v__DOT__i_6_reg_363);
    vlTOPp->v__DOT__or_cond_fu_705_p2 = ((IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351) 
					 | (((~ (IData)(vlTOPp->v__DOT__icmp_reg_1358)) 
					     & (~ (IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351))) 
					    & (IData)(vlTOPp->v__DOT__icmp2_reg_1370)));
    vlTOPp->v__DOT__sel_tmp13_i_fu_673_p2 = (((~ (IData)(vlTOPp->v__DOT__icmp1_reg_1364)) 
					      & (~ (IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351))) 
					     & (IData)(vlTOPp->v__DOT__icmp_reg_1358));
    vlTOPp->v__DOT__k_fu_890_p2 = (0xfU & ((IData)(0xfU) 
					   + (IData)(vlTOPp->v__DOT__k_i_reg_405)));
    vlTOPp->v__DOT__tmp_27_i_fu_896_p2 = (0U == (IData)(vlTOPp->v__DOT__k_i_reg_405));
    // ALWAYS at Reflection_coefficients.v:635
    if ((0x400U & vlTOPp->v__DOT__ap_CS_fsm)) {
	if ((0x8000U & (IData)(vlTOPp->v__DOT__P_q0))) {
	    if ((0x8000U & (IData)(vlTOPp->v__DOT__P_q0))) {
		vlTOPp->v__DOT__temp_6_reg_375 = (0x7fffU 
						  & ((0x8000U 
						      == (IData)(vlTOPp->v__DOT__grp_fu_461_p0))
						      ? 0x7fffU
						      : 
						     VL_NEGATE_I((IData)(vlTOPp->v__DOT__P_q0))));
	    }
	} else {
	    vlTOPp->v__DOT__temp_6_reg_375 = vlTOPp->v__DOT__P_q0;
	}
    }
    // ALWAYS at Reflection_coefficients_ACF.v:27
    if ((1U & ((((((vlTOPp->v__DOT__ap_CS_fsm >> 0xaU) 
		   | (vlTOPp->v__DOT__ap_CS_fsm >> 0xfU)) 
		  | (vlTOPp->v__DOT__ap_CS_fsm >> 0x10U)) 
		 | (vlTOPp->v__DOT__ap_CS_fsm >> 8U)) 
		| (vlTOPp->v__DOT__ap_CS_fsm >> 0x13U)) 
	       | (vlTOPp->v__DOT__ap_CS_fsm >> 9U)))) {
	if ((1U & (((vlTOPp->v__DOT__ap_CS_fsm >> 0xfU) 
		    | (vlTOPp->v__DOT__ap_CS_fsm >> 8U)) 
		   | (vlTOPp->v__DOT__ap_CS_fsm >> 0x13U)))) {
	    vlTOPp->v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1 
		= vlTOPp->v__DOT__P_d0;
	    if ((8U >= (IData)(vlTOPp->v__DOT__P_address0))) {
		__Vdlyvval__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 
		    = vlTOPp->v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1;
		__Vdlyvset__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 = 1U;
		__Vdlyvdim0__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0 
		    = vlTOPp->v__DOT__P_address0;
	    }
	    vlTOPp->v__DOT__P_q0 = vlTOPp->v__DOT__P_d0;
	} else {
	    vlTOPp->v__DOT__P_q0 = ((8U >= (IData)(vlTOPp->v__DOT__P_address0))
				     ? vlTOPp->v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram
				    [vlTOPp->v__DOT__P_address0]
				     : 0U);
	}
    }
    // ALWAYSPOST at Reflection_coefficients_ACF.v:33
    if (__Vdlyvset__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0) {
	vlTOPp->v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[__Vdlyvdim0__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0] 
	    = __Vdlyvval__v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram__v0;
    }
    vlTOPp->v__DOT__tmp_1_fu_862_p2 = VL_LTS_III(1,16,16, (IData)(vlTOPp->v__DOT__P_q0), (IData)(vlTOPp->v__DOT__temp_6_reg_375));
    // ALWAYS at Reflection_coefficients.v:523
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : vlTOPp->v__DOT__ap_NS_fsm);
}

void VReflection_coefficients::_settle__TOP__4(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_settle__TOP__4\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__indvars_iv_next_fu_1091_p2 = ((IData)(0xffffffffU) 
						  + vlTOPp->v__DOT__indvars_iv_reg_339);
    vlTOPp->v__DOT__p_rec_fu_1284_p2 = ((IData)(1U) 
					+ vlTOPp->v__DOT__r_2_rec_reg_439);
    vlTOPp->v__DOT__exitcond3_fu_1278_p2 = (vlTOPp->v__DOT__r_2_rec_reg_439 
					    == vlTOPp->v__DOT__indvars_iv_reg_339);
    vlTOPp->v__DOT__tmp_28_i_fu_908_p2 = VL_LTS_III(1,32,32, 
						    (vlTOPp->v__DOT__L_num_i_reg_384 
						     << 1U), vlTOPp->v__DOT__L_denum_i_reg_1499);
    vlTOPp->v__DOT__sum_1_fu_1140_p2 = (0x1ffffU & 
					(VL_EXTENDS_II(17,16, 
						       (0xffffU 
							& ((IData)(vlTOPp->v__DOT__or_cond_i1_reg_1620)
							    ? 0x7fffU
							    : (IData)(
								      (VL_ULL(0x1ffffffff) 
								       & ((VL_ULL(0x4000) 
									   + 
									   VL_EXTENDS_QQ(48,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_MULS_QQQ(43,43,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, 
										(0xffffU 
										& vlTOPp->v__DOT__tmp_24_i_reg_1555))), 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__K_load_reg_1614))))))) 
									  >> 0xfU)))))) 
					 + VL_EXTENDS_II(17,16, (IData)(vlTOPp->v__DOT__P_load_reg_1625))));
    vlTOPp->v__DOT__sum_2_fu_1186_p2 = (0x1ffffU & 
					(VL_EXTENDS_II(17,16, 
						       (0xffffU 
							& ((IData)(vlTOPp->v__DOT__or_cond_i2_reg_1631)
							    ? 0x7fffU
							    : (IData)(
								      (VL_ULL(0x1ffffffff) 
								       & ((VL_ULL(0x4000) 
									   + 
									   VL_EXTENDS_QQ(48,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_MULS_QQQ(43,43,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, 
										(0xffffU 
										& vlTOPp->v__DOT__tmp_24_i_reg_1555))), 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__P_load_reg_1625))))))) 
									  >> 0xfU)))))) 
					 + VL_EXTENDS_II(17,16, (IData)(vlTOPp->v__DOT__K_load_reg_1614))));
    vlTOPp->v__DOT__exitcond5_fu_1295_p2 = (8U == (IData)(vlTOPp->v__DOT__r_0_rec_reg_450));
    vlTOPp->v__DOT__p_rec9_fu_1301_p2 = (0xfU & ((IData)(1U) 
						 + (IData)(vlTOPp->v__DOT__r_0_rec_reg_450)));
    vlTOPp->v__DOT__b_assign_fu_955_p3 = (0xffffU & 
					  (VL_LTS_III(1,16,16, 0U, (IData)(vlTOPp->v__DOT__temp_1_reg_1469))
					    ? VL_NEGATE_I((IData)(vlTOPp->v__DOT__p_0_i_reg_416))
					    : (IData)(vlTOPp->v__DOT__p_0_i_reg_416)));
    vlTOPp->v__DOT__sum_fu_1007_p2 = (0x1ffffU & (VL_EXTENDS_II(17,16, 
								(0xffffU 
								 & ((IData)(vlTOPp->v__DOT__or_cond_i_reg_1550)
								     ? 0x7fffU
								     : (IData)(
									       (VL_ULL(0x1ffffffff) 
										& ((VL_ULL(0x4000) 
										+ 
										VL_EXTENDS_QQ(48,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_MULS_QQQ(43,43,43, 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__b_assign_reg_1536))), 
										(VL_ULL(0x7ffffffffff) 
										& VL_EXTENDS_QI(43,16, (IData)(vlTOPp->v__DOT__temp_1_reg_1469))))))) 
										>> 0xfU)))))) 
						  + vlTOPp->v__DOT__L_denum_i_cast_reg_1505));
    vlTOPp->v__DOT__tmp_16_fu_1064_p2 = VL_GTS_III(1,32,32, vlTOPp->v__DOT__m_reg_428, vlTOPp->v__DOT__tmp_15_reg_1576);
    vlTOPp->v__DOT__a_assign_1_fu_500_p2 = (vlTOPp->x_q0 
					    ^ ((0x80000000U 
						& vlTOPp->x_q0)
					        ? 0xffffffffU
					        : 0U));
    vlTOPp->v__DOT__n_fu_1085_p2 = ((IData)(1U) + vlTOPp->v__DOT__i_6_reg_363);
    vlTOPp->v__DOT__or_cond_fu_705_p2 = ((IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351) 
					 | (((~ (IData)(vlTOPp->v__DOT__icmp_reg_1358)) 
					     & (~ (IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351))) 
					    & (IData)(vlTOPp->v__DOT__icmp2_reg_1370)));
    vlTOPp->v__DOT__sel_tmp13_i_fu_673_p2 = (((~ (IData)(vlTOPp->v__DOT__icmp1_reg_1364)) 
					      & (~ (IData)(vlTOPp->v__DOT__tmp_1_i_reg_1351))) 
					     & (IData)(vlTOPp->v__DOT__icmp_reg_1358));
    vlTOPp->v__DOT__k_fu_890_p2 = (0xfU & ((IData)(0xfU) 
					   + (IData)(vlTOPp->v__DOT__k_i_reg_405)));
    vlTOPp->v__DOT__tmp_27_i_fu_896_p2 = (0U == (IData)(vlTOPp->v__DOT__k_i_reg_405));
    vlTOPp->v__DOT__tmp_1_fu_862_p2 = VL_LTS_III(1,16,16, (IData)(vlTOPp->v__DOT__P_q0), (IData)(vlTOPp->v__DOT__temp_6_reg_375));
    vlTOPp->v__DOT__L_num_3_fu_918_p3 = ((IData)(vlTOPp->v__DOT__tmp_28_i_fu_908_p2)
					  ? (vlTOPp->v__DOT__L_num_i_reg_384 
					     << 1U)
					  : ((vlTOPp->v__DOT__L_num_i_reg_384 
					      << 1U) 
					     - vlTOPp->v__DOT__L_denum_i_reg_1499));
    vlTOPp->v__DOT__div_fu_936_p3 = ((0xfffeU & ((IData)(vlTOPp->v__DOT__div_i_reg_393) 
						 << 1U)) 
				     | (1U & (~ (IData)(vlTOPp->v__DOT__tmp_28_i_fu_908_p2))));
}

void VReflection_coefficients::_initial__TOP__5(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_initial__TOP__5\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign84[4];
    VL_SIGW(__Vtemp1,319,0,10);
    VL_SIGW(__Vtemp2,319,0,10);
    // Body
    // INITIAL at Reflection_coefficients_bitoff.v:33
    __Vtemp1[0U] = 0x2e646174U;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x746f6666U;
    __Vtemp1[3U] = 0x735f6269U;
    __Vtemp1[4U] = 0x69656e74U;
    __Vtemp1[5U] = 0x66666963U;
    __Vtemp1[6U] = 0x5f636f65U;
    __Vtemp1[7U] = 0x74696f6eU;
    __Vtemp1[8U] = 0x666c6563U;
    __Vtemp1[9U] = 0x2e2f5265U;
    VL_READMEM_W (true,4,256, 0,10, __Vtemp1, vlTOPp->v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram0
		  ,0,~0);
    __Vtemp2[0U] = 0x2e646174U;
    __Vtemp2[1U] = 0x5f726f6dU;
    __Vtemp2[2U] = 0x746f6666U;
    __Vtemp2[3U] = 0x735f6269U;
    __Vtemp2[4U] = 0x69656e74U;
    __Vtemp2[5U] = 0x66666963U;
    __Vtemp2[6U] = 0x5f636f65U;
    __Vtemp2[7U] = 0x74696f6eU;
    __Vtemp2[8U] = 0x666c6563U;
    __Vtemp2[9U] = 0x2e2f5265U;
    VL_READMEM_W (true,4,256, 0,10, __Vtemp2, vlTOPp->v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram1
		  ,0,~0);
    // INITIAL at Reflection_coefficients.v:133
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

VL_INLINE_OPT void VReflection_coefficients::_combo__TOP__6(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_combo__TOP__6\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__a_assign_1_fu_500_p2 = (vlTOPp->x_q0 
					    ^ ((0x80000000U 
						& vlTOPp->x_q0)
					        ? 0xffffffffU
					        : 0U));
    // ALWAYS at Reflection_coefficients.v:910
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & vlTOPp->v__DOT__ap_CS_fsm));
    // ALWAYS at Reflection_coefficients.v:1164
    vlTOPp->x_ce0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			    & (IData)(vlTOPp->ap_start)) 
			   | (vlTOPp->v__DOT__ap_CS_fsm 
			      >> 3U)));
    // ALWAYS at Reflection_coefficients.v:1209
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
					  ? ((0U == vlTOPp->x_q0)
					      ? 0x200000U
					      : 4U)
					  : ((4U == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 8U : 
					     ((8U == vlTOPp->v__DOT__ap_CS_fsm)
					       ? ((9U 
						   == (IData)(vlTOPp->v__DOT__i_1_reg_306))
						   ? 0x20U
						   : 0x10U)
					       : ((0x10U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 8U
						   : 
						  ((0x20U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   ((8U 
						     == (IData)(vlTOPp->v__DOT__i_2_reg_317))
						     ? 0x80U
						     : 0x40U)
						    : 
						   ((0x40U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x20U
						     : 
						    ((9U 
						      == (IData)(vlTOPp->v__DOT__i_3_reg_328))
						      ? 0x200U
						      : 0x100U))))))))
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
					  ? 0x80U : 
					 ((0x200U == vlTOPp->v__DOT__ap_CS_fsm)
					   ? 0x400U
					   : ((0x400U 
					       == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x800U
					       : ((0x800U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 
						  ((IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2)
						    ? 0x100000U
						    : 
						   (((~ (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2)) 
						     & (0U 
							== (IData)(vlTOPp->v__DOT__temp_6_reg_375)))
						     ? 0x2000U
						     : 0x1000U))
						   : 
						  ((0x1000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   ((0U 
						     == (IData)(vlTOPp->v__DOT__k_i_reg_405))
						     ? 0x2000U
						     : 0x1000U)
						    : 
						   ((0x2000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 
						    (((((IData)(vlTOPp->v__DOT__tmp_reg_1347) 
							& (IData)(vlTOPp->v__DOT__exitcond5_reg_1675)) 
						       | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
							  & (8U 
							     == vlTOPp->v__DOT__i_6_reg_363))) 
						      | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
							  & (IData)(vlTOPp->v__DOT__tmp_1_reg_1490)) 
							 & (IData)(vlTOPp->v__DOT__exitcond3_reg_1666)))
						      ? 1U
						      : 0x4000U)
						     : 
						    ((0x4000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x8000U
						      : 0x10000U)))))))
				      : ((0x10000U 
					  == vlTOPp->v__DOT__ap_CS_fsm)
					  ? ((IData)(vlTOPp->v__DOT__tmp_16_fu_1064_p2)
					      ? 0x200U
					      : 0x20000U)
					  : ((0x20000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 0x40000U
					      : ((0x40000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)
						  ? 0x80000U
						  : 
						 ((0x80000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x10000U
						   : 
						  ((0x100000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   ((IData)(vlTOPp->v__DOT__exitcond3_fu_1278_p2)
						     ? 0x2000U
						     : 0x100000U)
						    : 
						   ((0x200000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 
						    ((8U 
						      == (IData)(vlTOPp->v__DOT__r_0_rec_reg_450))
						      ? 0x2000U
						      : 0x200000U)
						     : 0U))))))));
}

VL_INLINE_OPT void VReflection_coefficients::_sequent__TOP__7(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_sequent__TOP__7\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__L_num_3_fu_918_p3 = ((IData)(vlTOPp->v__DOT__tmp_28_i_fu_908_p2)
					  ? (vlTOPp->v__DOT__L_num_i_reg_384 
					     << 1U)
					  : ((vlTOPp->v__DOT__L_num_i_reg_384 
					      << 1U) 
					     - vlTOPp->v__DOT__L_denum_i_reg_1499));
    vlTOPp->v__DOT__div_fu_936_p3 = ((0xfffeU & ((IData)(vlTOPp->v__DOT__div_i_reg_393) 
						 << 1U)) 
				     | (1U & (~ (IData)(vlTOPp->v__DOT__tmp_28_i_fu_908_p2))));
    // ALWAYS at Reflection_coefficients.v:1184
    vlTOPp->y_ce0 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
			     >> 0xdU) | (vlTOPp->v__DOT__ap_CS_fsm 
					 >> 0x14U)) 
			   | (vlTOPp->v__DOT__ap_CS_fsm 
			      >> 0x15U)));
    // ALWAYS at Reflection_coefficients.v:1154
    vlTOPp->x_address0 = ((8U & vlTOPp->v__DOT__ap_CS_fsm)
			   ? (IData)(vlTOPp->v__DOT__i_1_reg_306)
			   : 0U);
    // ALWAYS at Reflection_coefficients.v:1192
    vlTOPp->y_d0 = ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			    >> 0x14U) | (vlTOPp->v__DOT__ap_CS_fsm 
					 >> 0x15U)))
		     ? 0U : ((0x2000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__b_assign_fu_955_p3)
			      : 0U));
    // ALWAYS at Reflection_coefficients.v:792
    vlTOPp->v__DOT__ACF_address0 = (0xfU & ((0x10U 
					     & vlTOPp->v__DOT__ap_CS_fsm)
					     ? (IData)(vlTOPp->v__DOT__tmp_3_reg_1408)
					     : ((0x80U 
						 & vlTOPp->v__DOT__ap_CS_fsm)
						 ? (IData)(vlTOPp->v__DOT__i_3_reg_328)
						 : 
						((0x20U 
						  & vlTOPp->v__DOT__ap_CS_fsm)
						  ? (IData)(vlTOPp->v__DOT__i_2_reg_317)
						  : 0U))));
    // ALWAYS at Reflection_coefficients.v:820
    vlTOPp->v__DOT__K_address0 = (0xfU & ((0x80000U 
					   & vlTOPp->v__DOT__ap_CS_fsm)
					   ? (IData)(vlTOPp->v__DOT__K_addr_1_reg_1589)
					   : ((0x40U 
					       & vlTOPp->v__DOT__ap_CS_fsm)
					       ? (IData)(vlTOPp->v__DOT__tmp_7_reg_1421)
					       : ((0x10000U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? (IData)((QData)((IData)(vlTOPp->v__DOT__m_reg_428)))
						   : 0U))));
    // ALWAYS at Reflection_coefficients.v:840
    vlTOPp->v__DOT__K_d0 = ((0x80000U & vlTOPp->v__DOT__ap_CS_fsm)
			     ? ((VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_2_reg_1651) 
				 | (IData)(vlTOPp->v__DOT__icmp5_reg_1656))
				 ? (VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_2_reg_1651)
				     ? 0x8000U : 0x7fffU)
				 : (IData)(vlTOPp->v__DOT__tmp_32_reg_1661))
			     : ((0x40U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? (IData)(vlTOPp->v__DOT__ACF_q0)
				 : 0U));
    // ALWAYS at Reflection_coefficients.v:1172
    vlTOPp->y_address0 = (7U & ((0x200000U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? (IData)((QData)((IData)(vlTOPp->v__DOT__r_0_rec_reg_450)))
				 : ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)
				     ? (IData)((QData)((IData)(
							       (0x1fU 
								& (vlTOPp->v__DOT__r_2_rec_reg_439 
								   + (IData)(vlTOPp->v__DOT__r_1_rec_cast1_le_reg_1513))))))
				     : ((0x2000U & vlTOPp->v__DOT__ap_CS_fsm)
					 ? (IData)(vlTOPp->v__DOT__y_addr_1_reg_1464)
					 : 0U))));
    // ALWAYS at Reflection_coefficients.v:1202
    vlTOPp->y_we0 = (1U & (((((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0xdU) & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1347))) 
			     & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
			    | ((vlTOPp->v__DOT__ap_CS_fsm 
				>> 0x14U) & (~ (IData)(vlTOPp->v__DOT__exitcond3_fu_1278_p2)))) 
			   | ((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0x15U) & (8U != (IData)(vlTOPp->v__DOT__r_0_rec_reg_450)))));
    // ALWAYS at Reflection_coefficients.v:858
    vlTOPp->v__DOT__P_address0 = (0xfU & ((0x80000U 
					   & vlTOPp->v__DOT__ap_CS_fsm)
					   ? (IData)(vlTOPp->v__DOT__tmp_17_reg_1584)
					   : ((0x100U 
					       & vlTOPp->v__DOT__ap_CS_fsm)
					       ? (IData)(vlTOPp->v__DOT__tmp_8_reg_1444)
					       : ((0x10000U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? (IData)((QData)((IData)(
									     ((IData)(1U) 
									      + vlTOPp->v__DOT__m_reg_428))))
						   : 
						  ((1U 
						    & ((vlTOPp->v__DOT__ap_CS_fsm 
							>> 0xaU) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0xfU)))
						    ? (IData)(vlTOPp->v__DOT__P_addr_1_reg_1459)
						    : 
						   ((0x200U 
						     & vlTOPp->v__DOT__ap_CS_fsm)
						     ? (IData)(vlTOPp->v__DOT__P_addr_reg_1454)
						     : 0U))))));
    // ALWAYS at Reflection_coefficients.v:902
    vlTOPp->ap_done = ((vlTOPp->v__DOT__ap_CS_fsm >> 0xdU) 
		       & ((((IData)(vlTOPp->v__DOT__tmp_reg_1347) 
			    & (IData)(vlTOPp->v__DOT__exitcond5_reg_1675)) 
			   | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
			       & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
			      & (8U == vlTOPp->v__DOT__i_6_reg_363))) 
			  | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
			      & (IData)(vlTOPp->v__DOT__tmp_1_reg_1490)) 
			     & (IData)(vlTOPp->v__DOT__exitcond3_reg_1666))));
    // ALWAYS at Reflection_coefficients.v:918
    vlTOPp->ap_ready = ((vlTOPp->v__DOT__ap_CS_fsm 
			 >> 0xdU) & ((((IData)(vlTOPp->v__DOT__tmp_reg_1347) 
				       & (IData)(vlTOPp->v__DOT__exitcond5_reg_1675)) 
				      | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
					  & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
					 & (8U == vlTOPp->v__DOT__i_6_reg_363))) 
				     | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
					 & (IData)(vlTOPp->v__DOT__tmp_1_reg_1490)) 
					& (IData)(vlTOPp->v__DOT__exitcond3_reg_1666))));
    // ALWAYS at Reflection_coefficients.v:882
    vlTOPp->v__DOT__P_d0 = ((0x80000U & vlTOPp->v__DOT__ap_CS_fsm)
			     ? ((VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_1_reg_1636) 
				 | (IData)(vlTOPp->v__DOT__icmp4_reg_1641))
				 ? (VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_1_reg_1636)
				     ? 0x8000U : 0x7fffU)
				 : (IData)(vlTOPp->v__DOT__tmp_30_reg_1646))
			     : ((0x8000U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? ((VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_reg_1561) 
				     | (IData)(vlTOPp->v__DOT__icmp3_reg_1566))
				     ? (VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_reg_1561)
					 ? 0x8000U : 0x7fffU)
				     : (IData)(vlTOPp->v__DOT__tmp_28_reg_1571))
				 : ((0x100U & vlTOPp->v__DOT__ap_CS_fsm)
				     ? (IData)(vlTOPp->v__DOT__ACF_q0)
				     : 0U)));
    // ALWAYS at Reflection_coefficients.v:1134
    vlTOPp->v__DOT__grp_fu_461_p0 = ((0x2000U & vlTOPp->v__DOT__ap_CS_fsm)
				      ? (IData)(vlTOPp->v__DOT__temp_1_reg_1469)
				      : ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xaU) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 0x11U)))
					  ? (IData)(vlTOPp->v__DOT__P_q0)
					  : 0U));
}

void VReflection_coefficients::_settle__TOP__8(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_settle__TOP__8\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at Reflection_coefficients.v:1184
    vlTOPp->y_ce0 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
			     >> 0xdU) | (vlTOPp->v__DOT__ap_CS_fsm 
					 >> 0x14U)) 
			   | (vlTOPp->v__DOT__ap_CS_fsm 
			      >> 0x15U)));
    // ALWAYS at Reflection_coefficients.v:910
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & vlTOPp->v__DOT__ap_CS_fsm));
    // ALWAYS at Reflection_coefficients.v:1154
    vlTOPp->x_address0 = ((8U & vlTOPp->v__DOT__ap_CS_fsm)
			   ? (IData)(vlTOPp->v__DOT__i_1_reg_306)
			   : 0U);
    // ALWAYS at Reflection_coefficients.v:1164
    vlTOPp->x_ce0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			    & (IData)(vlTOPp->ap_start)) 
			   | (vlTOPp->v__DOT__ap_CS_fsm 
			      >> 3U)));
    // ALWAYS at Reflection_coefficients.v:1192
    vlTOPp->y_d0 = ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			    >> 0x14U) | (vlTOPp->v__DOT__ap_CS_fsm 
					 >> 0x15U)))
		     ? 0U : ((0x2000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__b_assign_fu_955_p3)
			      : 0U));
    // ALWAYS at Reflection_coefficients.v:792
    vlTOPp->v__DOT__ACF_address0 = (0xfU & ((0x10U 
					     & vlTOPp->v__DOT__ap_CS_fsm)
					     ? (IData)(vlTOPp->v__DOT__tmp_3_reg_1408)
					     : ((0x80U 
						 & vlTOPp->v__DOT__ap_CS_fsm)
						 ? (IData)(vlTOPp->v__DOT__i_3_reg_328)
						 : 
						((0x20U 
						  & vlTOPp->v__DOT__ap_CS_fsm)
						  ? (IData)(vlTOPp->v__DOT__i_2_reg_317)
						  : 0U))));
    // ALWAYS at Reflection_coefficients.v:820
    vlTOPp->v__DOT__K_address0 = (0xfU & ((0x80000U 
					   & vlTOPp->v__DOT__ap_CS_fsm)
					   ? (IData)(vlTOPp->v__DOT__K_addr_1_reg_1589)
					   : ((0x40U 
					       & vlTOPp->v__DOT__ap_CS_fsm)
					       ? (IData)(vlTOPp->v__DOT__tmp_7_reg_1421)
					       : ((0x10000U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? (IData)((QData)((IData)(vlTOPp->v__DOT__m_reg_428)))
						   : 0U))));
    // ALWAYS at Reflection_coefficients.v:840
    vlTOPp->v__DOT__K_d0 = ((0x80000U & vlTOPp->v__DOT__ap_CS_fsm)
			     ? ((VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_2_reg_1651) 
				 | (IData)(vlTOPp->v__DOT__icmp5_reg_1656))
				 ? (VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_2_reg_1651)
				     ? 0x8000U : 0x7fffU)
				 : (IData)(vlTOPp->v__DOT__tmp_32_reg_1661))
			     : ((0x40U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? (IData)(vlTOPp->v__DOT__ACF_q0)
				 : 0U));
    // ALWAYS at Reflection_coefficients.v:1172
    vlTOPp->y_address0 = (7U & ((0x200000U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? (IData)((QData)((IData)(vlTOPp->v__DOT__r_0_rec_reg_450)))
				 : ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)
				     ? (IData)((QData)((IData)(
							       (0x1fU 
								& (vlTOPp->v__DOT__r_2_rec_reg_439 
								   + (IData)(vlTOPp->v__DOT__r_1_rec_cast1_le_reg_1513))))))
				     : ((0x2000U & vlTOPp->v__DOT__ap_CS_fsm)
					 ? (IData)(vlTOPp->v__DOT__y_addr_1_reg_1464)
					 : 0U))));
    // ALWAYS at Reflection_coefficients.v:1202
    vlTOPp->y_we0 = (1U & (((((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0xdU) & (~ (IData)(vlTOPp->v__DOT__tmp_reg_1347))) 
			     & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
			    | ((vlTOPp->v__DOT__ap_CS_fsm 
				>> 0x14U) & (~ (IData)(vlTOPp->v__DOT__exitcond3_fu_1278_p2)))) 
			   | ((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0x15U) & (8U != (IData)(vlTOPp->v__DOT__r_0_rec_reg_450)))));
    // ALWAYS at Reflection_coefficients.v:858
    vlTOPp->v__DOT__P_address0 = (0xfU & ((0x80000U 
					   & vlTOPp->v__DOT__ap_CS_fsm)
					   ? (IData)(vlTOPp->v__DOT__tmp_17_reg_1584)
					   : ((0x100U 
					       & vlTOPp->v__DOT__ap_CS_fsm)
					       ? (IData)(vlTOPp->v__DOT__tmp_8_reg_1444)
					       : ((0x10000U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? (IData)((QData)((IData)(
									     ((IData)(1U) 
									      + vlTOPp->v__DOT__m_reg_428))))
						   : 
						  ((1U 
						    & ((vlTOPp->v__DOT__ap_CS_fsm 
							>> 0xaU) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0xfU)))
						    ? (IData)(vlTOPp->v__DOT__P_addr_1_reg_1459)
						    : 
						   ((0x200U 
						     & vlTOPp->v__DOT__ap_CS_fsm)
						     ? (IData)(vlTOPp->v__DOT__P_addr_reg_1454)
						     : 0U))))));
    // ALWAYS at Reflection_coefficients.v:902
    vlTOPp->ap_done = ((vlTOPp->v__DOT__ap_CS_fsm >> 0xdU) 
		       & ((((IData)(vlTOPp->v__DOT__tmp_reg_1347) 
			    & (IData)(vlTOPp->v__DOT__exitcond5_reg_1675)) 
			   | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
			       & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
			      & (8U == vlTOPp->v__DOT__i_6_reg_363))) 
			  | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
			      & (IData)(vlTOPp->v__DOT__tmp_1_reg_1490)) 
			     & (IData)(vlTOPp->v__DOT__exitcond3_reg_1666))));
    // ALWAYS at Reflection_coefficients.v:918
    vlTOPp->ap_ready = ((vlTOPp->v__DOT__ap_CS_fsm 
			 >> 0xdU) & ((((IData)(vlTOPp->v__DOT__tmp_reg_1347) 
				       & (IData)(vlTOPp->v__DOT__exitcond5_reg_1675)) 
				      | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
					  & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
					 & (8U == vlTOPp->v__DOT__i_6_reg_363))) 
				     | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
					 & (IData)(vlTOPp->v__DOT__tmp_1_reg_1490)) 
					& (IData)(vlTOPp->v__DOT__exitcond3_reg_1666))));
    // ALWAYS at Reflection_coefficients.v:882
    vlTOPp->v__DOT__P_d0 = ((0x80000U & vlTOPp->v__DOT__ap_CS_fsm)
			     ? ((VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_1_reg_1636) 
				 | (IData)(vlTOPp->v__DOT__icmp4_reg_1641))
				 ? (VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_1_reg_1636)
				     ? 0x8000U : 0x7fffU)
				 : (IData)(vlTOPp->v__DOT__tmp_30_reg_1646))
			     : ((0x8000U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? ((VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_reg_1561) 
				     | (IData)(vlTOPp->v__DOT__icmp3_reg_1566))
				     ? (VL_GTS_III(1,17,17, 0x18000U, vlTOPp->v__DOT__sum_reg_1561)
					 ? 0x8000U : 0x7fffU)
				     : (IData)(vlTOPp->v__DOT__tmp_28_reg_1571))
				 : ((0x100U & vlTOPp->v__DOT__ap_CS_fsm)
				     ? (IData)(vlTOPp->v__DOT__ACF_q0)
				     : 0U)));
    // ALWAYS at Reflection_coefficients.v:1134
    vlTOPp->v__DOT__grp_fu_461_p0 = ((0x2000U & vlTOPp->v__DOT__ap_CS_fsm)
				      ? (IData)(vlTOPp->v__DOT__temp_1_reg_1469)
				      : ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xaU) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 0x11U)))
					  ? (IData)(vlTOPp->v__DOT__P_q0)
					  : 0U));
    // ALWAYS at Reflection_coefficients.v:1209
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
					  ? ((0U == vlTOPp->x_q0)
					      ? 0x200000U
					      : 4U)
					  : ((4U == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 8U : 
					     ((8U == vlTOPp->v__DOT__ap_CS_fsm)
					       ? ((9U 
						   == (IData)(vlTOPp->v__DOT__i_1_reg_306))
						   ? 0x20U
						   : 0x10U)
					       : ((0x10U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 8U
						   : 
						  ((0x20U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   ((8U 
						     == (IData)(vlTOPp->v__DOT__i_2_reg_317))
						     ? 0x80U
						     : 0x40U)
						    : 
						   ((0x40U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x20U
						     : 
						    ((9U 
						      == (IData)(vlTOPp->v__DOT__i_3_reg_328))
						      ? 0x200U
						      : 0x100U))))))))
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
					  ? 0x80U : 
					 ((0x200U == vlTOPp->v__DOT__ap_CS_fsm)
					   ? 0x400U
					   : ((0x400U 
					       == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x800U
					       : ((0x800U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 
						  ((IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2)
						    ? 0x100000U
						    : 
						   (((~ (IData)(vlTOPp->v__DOT__tmp_1_fu_862_p2)) 
						     & (0U 
							== (IData)(vlTOPp->v__DOT__temp_6_reg_375)))
						     ? 0x2000U
						     : 0x1000U))
						   : 
						  ((0x1000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   ((0U 
						     == (IData)(vlTOPp->v__DOT__k_i_reg_405))
						     ? 0x2000U
						     : 0x1000U)
						    : 
						   ((0x2000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 
						    (((((IData)(vlTOPp->v__DOT__tmp_reg_1347) 
							& (IData)(vlTOPp->v__DOT__exitcond5_reg_1675)) 
						       | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
							   & (~ (IData)(vlTOPp->v__DOT__tmp_1_reg_1490))) 
							  & (8U 
							     == vlTOPp->v__DOT__i_6_reg_363))) 
						      | (((~ (IData)(vlTOPp->v__DOT__tmp_reg_1347)) 
							  & (IData)(vlTOPp->v__DOT__tmp_1_reg_1490)) 
							 & (IData)(vlTOPp->v__DOT__exitcond3_reg_1666)))
						      ? 1U
						      : 0x4000U)
						     : 
						    ((0x4000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x8000U
						      : 0x10000U)))))))
				      : ((0x10000U 
					  == vlTOPp->v__DOT__ap_CS_fsm)
					  ? ((IData)(vlTOPp->v__DOT__tmp_16_fu_1064_p2)
					      ? 0x200U
					      : 0x20000U)
					  : ((0x20000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 0x40000U
					      : ((0x40000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)
						  ? 0x80000U
						  : 
						 ((0x80000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x10000U
						   : 
						  ((0x100000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   ((IData)(vlTOPp->v__DOT__exitcond3_fu_1278_p2)
						     ? 0x2000U
						     : 0x100000U)
						    : 
						   ((0x200000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 
						    ((8U 
						      == (IData)(vlTOPp->v__DOT__r_0_rec_reg_450))
						      ? 0x2000U
						      : 0x200000U)
						     : 0U))))))));
    vlTOPp->v__DOT__grp_fu_467_p2 = (((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)
				       ? (IData)(vlTOPp->v__DOT__tmp_i2_reg_1544)
				       : ((vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0xdU) 
					  & (0x8000U 
					     == (IData)(vlTOPp->v__DOT__b_assign_fu_955_p3)))) 
				     & (0x8000U == (IData)(vlTOPp->v__DOT__grp_fu_461_p0)));
}

VL_INLINE_OPT void VReflection_coefficients::_sequent__TOP__9(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_sequent__TOP__9\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__grp_fu_467_p2 = (((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)
				       ? (IData)(vlTOPp->v__DOT__tmp_i2_reg_1544)
				       : ((vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0xdU) 
					  & (0x8000U 
					     == (IData)(vlTOPp->v__DOT__b_assign_fu_955_p3)))) 
				     & (0x8000U == (IData)(vlTOPp->v__DOT__grp_fu_461_p0)));
}

void VReflection_coefficients::_eval(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_eval\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void VReflection_coefficients::_eval_initial(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_eval_initial\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void VReflection_coefficients::final() {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::final\n"); );
    // Variables
    VReflection_coefficients__Syms* __restrict vlSymsp = this->__VlSymsp;
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VReflection_coefficients::_eval_settle(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_eval_settle\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
}

VL_INLINE_OPT QData VReflection_coefficients::_change_request(VReflection_coefficients__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VReflection_coefficients::_change_request\n"); );
    VReflection_coefficients* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
