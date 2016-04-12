// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusqrt.h for the primary calling header

#include "Vusqrt.h"            // For This
#include "Vusqrt__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vusqrt) {
    Vusqrt__Syms* __restrict vlSymsp = __VlSymsp = new Vusqrt__Syms(this, name());
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(32);
    m = VL_RAND_RESET_I(32);
    q_sqrt = VL_RAND_RESET_I(32);
    q_sqrt_ap_vld = VL_RAND_RESET_I(1);
    q_frac = VL_RAND_RESET_I(32);
    q_frac_ap_vld = VL_RAND_RESET_I(1);
    n = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(16);
    v__DOT__tmp_5_reg_3073 = VL_RAND_RESET_I(2);
    v__DOT__a_1_1_fu_368_p3 = VL_RAND_RESET_I(2);
    v__DOT__a_1_1_reg_3080 = VL_RAND_RESET_I(2);
    v__DOT__tmp_6_cast_reg_3113 = VL_RAND_RESET_I(2);
    v__DOT__tmp_8_2_reg_3118 = VL_RAND_RESET_I(1);
    v__DOT__tmp_9_cast_reg_3124 = VL_RAND_RESET_I(2);
    v__DOT__tmp_14_reg_3131 = VL_RAND_RESET_I(28);
    v__DOT__tmp_16_reg_3136 = VL_RAND_RESET_I(30);
    v__DOT__tmp_cast_reg_3141 = VL_RAND_RESET_I(2);
    v__DOT__tmp_1_cast_reg_3148 = VL_RAND_RESET_I(2);
    v__DOT__tmp_3_cast_reg_3155 = VL_RAND_RESET_I(2);
    v__DOT__tmp_5_cast_reg_3162 = VL_RAND_RESET_I(2);
    v__DOT__tmp_7_cast_reg_3169 = VL_RAND_RESET_I(2);
    v__DOT__tmp_10_cast_reg_3176 = VL_RAND_RESET_I(2);
    v__DOT__tmp_11_cast_reg_3183 = VL_RAND_RESET_I(2);
    v__DOT__tmp_12_cast_reg_3190 = VL_RAND_RESET_I(2);
    v__DOT__tmp_13_cast_reg_3197 = VL_RAND_RESET_I(2);
    v__DOT__tmp_14_cast_reg_3204 = VL_RAND_RESET_I(2);
    v__DOT__tmp_15_cast_reg_3211 = VL_RAND_RESET_I(2);
    v__DOT__tmp_177_reg_3218 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_2_reg_3223 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_3_reg_3255 = VL_RAND_RESET_I(1);
    v__DOT__tmp_8_4_reg_3287 = VL_RAND_RESET_I(1);
    v__DOT__tmp_34_reg_3293 = VL_RAND_RESET_I(28);
    v__DOT__tmp_36_reg_3298 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_4_reg_3303 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_5_reg_3333 = VL_RAND_RESET_I(1);
    v__DOT__tmp_8_6_reg_3363 = VL_RAND_RESET_I(1);
    v__DOT__tmp_54_reg_3369 = VL_RAND_RESET_I(28);
    v__DOT__tmp_56_reg_3374 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_6_reg_3379 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_7_reg_3407 = VL_RAND_RESET_I(1);
    v__DOT__tmp_8_8_reg_3435 = VL_RAND_RESET_I(1);
    v__DOT__tmp_70_reg_3441 = VL_RAND_RESET_I(28);
    v__DOT__tmp_71_reg_3446 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_8_reg_3451 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_9_reg_3477 = VL_RAND_RESET_I(1);
    v__DOT__tmp_8_s_reg_3503 = VL_RAND_RESET_I(1);
    v__DOT__tmp_83_reg_3509 = VL_RAND_RESET_I(28);
    v__DOT__tmp_84_reg_3514 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_s_reg_3519 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_1_reg_3543 = VL_RAND_RESET_I(1);
    v__DOT__tmp_8_11_reg_3567 = VL_RAND_RESET_I(1);
    v__DOT__tmp_96_reg_3573 = VL_RAND_RESET_I(28);
    v__DOT__tmp_98_reg_3578 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_10_reg_3583 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_11_reg_3605 = VL_RAND_RESET_I(1);
    v__DOT__tmp_8_13_reg_3627 = VL_RAND_RESET_I(1);
    v__DOT__tmp_110_reg_3633 = VL_RAND_RESET_I(28);
    v__DOT__tmp_111_reg_3638 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_12_reg_3643 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_13_reg_3664 = VL_RAND_RESET_I(1);
    v__DOT__tmp_61_reg_3685 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_14_reg_3692 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_15_reg_3711 = VL_RAND_RESET_I(1);
    v__DOT__tmp_69_reg_3730 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_16_reg_3737 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_17_reg_3754 = VL_RAND_RESET_I(1);
    v__DOT__tmp_77_reg_3771 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_18_reg_3778 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_19_reg_3793 = VL_RAND_RESET_I(1);
    v__DOT__tmp_85_reg_3808 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_20_reg_3815 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_21_reg_3828 = VL_RAND_RESET_I(1);
    v__DOT__tmp_93_reg_3841 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_22_reg_3848 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_23_reg_3859 = VL_RAND_RESET_I(1);
    v__DOT__tmp_101_reg_3870 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_24_reg_3877 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_25_reg_3886 = VL_RAND_RESET_I(1);
    v__DOT__tmp_109_reg_3895 = VL_RAND_RESET_I(30);
    v__DOT__not_tmp_8_26_reg_3902 = VL_RAND_RESET_I(1);
    v__DOT__not_tmp_8_27_reg_3909 = VL_RAND_RESET_I(1);
    v__DOT__tmp_117_reg_3916 = VL_RAND_RESET_I(30);
    v__DOT__a_1_s_fu_3028_p32 = VL_RAND_RESET_I(32);
    v__DOT__tmp_s_fu_312_p3 = VL_RAND_RESET_I(5);
    v__DOT__tmp_8_1_fu_348_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_4_fu_394_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_9_fu_595_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_3_fu_612_p4 = VL_RAND_RESET_I(5);
    v__DOT__tmp_8_3_fu_631_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_13_fu_671_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_4_fu_690_p5 = VL_RAND_RESET_I(6);
    v__DOT__tmp_17_fu_749_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_5_fu_766_p6 = VL_RAND_RESET_I(7);
    v__DOT__tmp_8_5_fu_787_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_21_fu_827_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_6_fu_846_p7 = VL_RAND_RESET_I(8);
    v__DOT__tmp_25_fu_907_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_7_fu_924_p8 = VL_RAND_RESET_I(9);
    v__DOT__tmp_8_7_fu_947_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_29_fu_987_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_8_fu_1006_p9 = VL_RAND_RESET_I(10);
    v__DOT__tmp_33_fu_1069_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_9_fu_1086_p10 = VL_RAND_RESET_I(11);
    v__DOT__tmp_8_9_fu_1111_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_37_fu_1151_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_s_fu_1170_p11 = VL_RAND_RESET_I(12);
    v__DOT__tmp_41_fu_1235_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_1_fu_1252_p12 = VL_RAND_RESET_I(13);
    v__DOT__tmp_8_10_fu_1279_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_45_fu_1319_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_10_fu_1338_p13 = VL_RAND_RESET_I(14);
    v__DOT__tmp_49_fu_1405_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_11_fu_1422_p14 = VL_RAND_RESET_I(15);
    v__DOT__tmp_8_12_fu_1451_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_53_fu_1491_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_12_fu_1510_p15 = VL_RAND_RESET_I(16);
    v__DOT__tmp_57_fu_1579_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_13_fu_1596_p16 = VL_RAND_RESET_I(17);
    v__DOT__tmp_8_14_fu_1627_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_14_fu_1682_p17 = VL_RAND_RESET_I(18);
    v__DOT__tmp_8_15_fu_1713_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_65_fu_1745_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_15_fu_1761_p18 = VL_RAND_RESET_I(19);
    v__DOT__tmp_8_16_fu_1794_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_16_fu_1843_p19 = VL_RAND_RESET_I(20);
    v__DOT__tmp_8_17_fu_1876_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_73_fu_1908_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_17_fu_1924_p20 = VL_RAND_RESET_I(21);
    v__DOT__tmp_8_18_fu_1959_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_18_fu_2008_p21 = VL_RAND_RESET_I(22);
    v__DOT__tmp_8_19_fu_2043_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_81_fu_2075_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_19_fu_2091_p22 = VL_RAND_RESET_I(23);
    v__DOT__tmp_8_20_fu_2128_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_20_fu_2177_p23 = VL_RAND_RESET_I(24);
    v__DOT__tmp_8_21_fu_2214_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_89_fu_2246_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_21_fu_2262_p24 = VL_RAND_RESET_I(25);
    v__DOT__tmp_8_22_fu_2301_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_22_fu_2350_p25 = VL_RAND_RESET_I(26);
    v__DOT__tmp_8_23_fu_2389_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_97_fu_2421_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_23_fu_2437_p26 = VL_RAND_RESET_I(27);
    v__DOT__tmp_8_24_fu_2478_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_24_fu_2527_p27 = VL_RAND_RESET_I(28);
    v__DOT__tmp_8_25_fu_2568_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_105_fu_2600_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_25_fu_2616_p28 = VL_RAND_RESET_I(29);
    v__DOT__tmp_8_26_fu_2659_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_26_fu_2708_p29 = VL_RAND_RESET_I(30);
    v__DOT__tmp_8_27_fu_2751_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_113_fu_2779_p3 = VL_RAND_RESET_I(30);
    v__DOT__tmp_6_27_fu_2795_p30 = VL_RAND_RESET_I(31);
    v__DOT__tmp_8_28_fu_2840_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_28_fu_2889_p31 = VL_RAND_RESET_I(32);
    v__DOT__tmp_8_29_fu_2930_p2 = VL_RAND_RESET_I(1);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(16);
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vusqrt::__Vconfigure(Vusqrt__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vusqrt::~Vusqrt() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vusqrt::eval() {
    Vusqrt__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vusqrt::eval\n"); );
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

void Vusqrt::_eval_initial_loop(Vusqrt__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vusqrt::_combo__TOP__1(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_combo__TOP__1\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->n + vlTOPp->m);
    vlTOPp->v__DOT__tmp_s_fu_312_p3 = ((0x1cU & (((0U 
						   == 
						   (3U 
						    & (vlTOPp->y 
						       >> 0x1eU)))
						   ? 0U
						   : 
						  ((IData)(7U) 
						   + 
						   (3U 
						    & (vlTOPp->y 
						       >> 0x1eU)))) 
						 << 2U)) 
				       | (3U & (vlTOPp->y 
						>> 0x1cU)));
}

void Vusqrt::_settle__TOP__2(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_settle__TOP__2\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->n + vlTOPp->m);
    vlTOPp->v__DOT__tmp_s_fu_312_p3 = ((0x1cU & (((0U 
						   == 
						   (3U 
						    & (vlTOPp->y 
						       >> 0x1eU)))
						   ? 0U
						   : 
						  ((IData)(7U) 
						   + 
						   (3U 
						    & (vlTOPp->y 
						       >> 0x1eU)))) 
						 << 2U)) 
				       | (3U & (vlTOPp->y 
						>> 0x1cU)));
    vlTOPp->v__DOT__tmp_8_1_fu_348_p2 = ((IData)(vlTOPp->v__DOT__tmp_s_fu_312_p3) 
					 < ((0U == 
					     (3U & 
					      (vlTOPp->y 
					       >> 0x1eU)))
					     ? 1U : 5U));
}

VL_INLINE_OPT void Vusqrt::_sequent__TOP__3(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_sequent__TOP__3\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at usqrt.v:729
    if ((0x4000U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_26_reg_3902 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_27_fu_2751_p2)));
	vlTOPp->v__DOT__not_tmp_8_27_reg_3909 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_28_fu_2840_p2)));
	vlTOPp->v__DOT__tmp_117_reg_3916 = (0x3fffffffU 
					    & ((IData)(vlTOPp->v__DOT__tmp_8_28_fu_2840_p2)
					        ? (vlTOPp->v__DOT__tmp_113_fu_2779_p3 
						   << 2U)
					        : (
						   (vlTOPp->v__DOT__tmp_113_fu_2779_p3 
						    << 2U) 
						   - 
						   (1U 
						    | vlTOPp->v__DOT__tmp_6_27_fu_2795_p30))));
    }
    // ALWAYS at usqrt.v:721
    if ((0x2000U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_24_reg_3877 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_25_fu_2568_p2)));
	vlTOPp->v__DOT__not_tmp_8_25_reg_3886 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_26_fu_2659_p2)));
	vlTOPp->v__DOT__tmp_109_reg_3895 = (0x3fffffffU 
					    & ((IData)(vlTOPp->v__DOT__tmp_8_26_fu_2659_p2)
					        ? (vlTOPp->v__DOT__tmp_105_fu_2600_p3 
						   << 2U)
					        : (
						   (vlTOPp->v__DOT__tmp_105_fu_2600_p3 
						    << 2U) 
						   - 
						   (1U 
						    | vlTOPp->v__DOT__tmp_6_25_fu_2616_p28))));
    }
    // ALWAYS at usqrt.v:713
    if ((0x1000U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_22_reg_3848 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_23_fu_2389_p2)));
	vlTOPp->v__DOT__not_tmp_8_23_reg_3859 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_24_fu_2478_p2)));
	vlTOPp->v__DOT__tmp_101_reg_3870 = (0x3fffffffU 
					    & ((IData)(vlTOPp->v__DOT__tmp_8_24_fu_2478_p2)
					        ? (vlTOPp->v__DOT__tmp_97_fu_2421_p3 
						   << 2U)
					        : (
						   (vlTOPp->v__DOT__tmp_97_fu_2421_p3 
						    << 2U) 
						   - 
						   (1U 
						    | vlTOPp->v__DOT__tmp_6_23_fu_2437_p26))));
    }
    // ALWAYS at usqrt.v:705
    if ((0x800U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_20_reg_3815 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_21_fu_2214_p2)));
	vlTOPp->v__DOT__not_tmp_8_21_reg_3828 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_22_fu_2301_p2)));
	vlTOPp->v__DOT__tmp_93_reg_3841 = (0x3fffffffU 
					   & ((IData)(vlTOPp->v__DOT__tmp_8_22_fu_2301_p2)
					       ? (vlTOPp->v__DOT__tmp_89_fu_2246_p3 
						  << 2U)
					       : ((vlTOPp->v__DOT__tmp_89_fu_2246_p3 
						   << 2U) 
						  - 
						  (1U 
						   | vlTOPp->v__DOT__tmp_6_21_fu_2262_p24))));
    }
    // ALWAYS at usqrt.v:687
    if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_18_reg_3778 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_19_fu_2043_p2)));
	vlTOPp->v__DOT__not_tmp_8_19_reg_3793 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_20_fu_2128_p2)));
	vlTOPp->v__DOT__tmp_85_reg_3808 = (0x3fffffffU 
					   & ((IData)(vlTOPp->v__DOT__tmp_8_20_fu_2128_p2)
					       ? (vlTOPp->v__DOT__tmp_81_fu_2075_p3 
						  << 2U)
					       : ((vlTOPp->v__DOT__tmp_81_fu_2075_p3 
						   << 2U) 
						  - 
						  (1U 
						   | vlTOPp->v__DOT__tmp_6_19_fu_2091_p22))));
    }
    // ALWAYS at usqrt.v:679
    if ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_16_reg_3737 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_17_fu_1876_p2)));
	vlTOPp->v__DOT__not_tmp_8_17_reg_3754 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_18_fu_1959_p2)));
	vlTOPp->v__DOT__tmp_77_reg_3771 = (0x3fffffffU 
					   & ((IData)(vlTOPp->v__DOT__tmp_8_18_fu_1959_p2)
					       ? (vlTOPp->v__DOT__tmp_73_fu_1908_p3 
						  << 2U)
					       : ((vlTOPp->v__DOT__tmp_73_fu_1908_p3 
						   << 2U) 
						  - 
						  (1U 
						   | vlTOPp->v__DOT__tmp_6_17_fu_1924_p20))));
    }
    // ALWAYS at usqrt.v:671
    if ((0x100U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_14_reg_3692 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_15_fu_1713_p2)));
	vlTOPp->v__DOT__not_tmp_8_15_reg_3711 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_16_fu_1794_p2)));
	vlTOPp->v__DOT__tmp_69_reg_3730 = (0x3fffffffU 
					   & ((IData)(vlTOPp->v__DOT__tmp_8_16_fu_1794_p2)
					       ? (vlTOPp->v__DOT__tmp_65_fu_1745_p3 
						  << 2U)
					       : ((vlTOPp->v__DOT__tmp_65_fu_1745_p3 
						   << 2U) 
						  - 
						  (1U 
						   | vlTOPp->v__DOT__tmp_6_15_fu_1761_p18))));
    }
    // ALWAYS at usqrt.v:663
    if ((0x80U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_12_reg_3643 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_13_reg_3627)));
	vlTOPp->v__DOT__not_tmp_8_13_reg_3664 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_14_fu_1627_p2)));
	vlTOPp->v__DOT__tmp_61_reg_3685 = (0x3fffffffU 
					   & ((IData)(vlTOPp->v__DOT__tmp_8_14_fu_1627_p2)
					       ? ((0x3ffffffcU 
						   & (vlTOPp->v__DOT__tmp_57_fu_1579_p3 
						      << 2U)) 
						  | (IData)(vlTOPp->v__DOT__tmp_5_reg_3073))
					       : ((
						   (0x3ffffffcU 
						    & (vlTOPp->v__DOT__tmp_57_fu_1579_p3 
						       << 2U)) 
						   | (IData)(vlTOPp->v__DOT__tmp_5_reg_3073)) 
						  - 
						  (1U 
						   | vlTOPp->v__DOT__tmp_6_13_fu_1596_p16))));
    }
    // ALWAYS at usqrt.v:653
    if ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_10_reg_3583 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_11_reg_3567)));
	vlTOPp->v__DOT__not_tmp_8_11_reg_3605 = (1U 
						 & (~ (IData)(vlTOPp->v__DOT__tmp_8_12_fu_1451_p2)));
	vlTOPp->v__DOT__tmp_110_reg_3633 = (0xfffffffU 
					    & vlTOPp->v__DOT__tmp_53_fu_1491_p3);
	vlTOPp->v__DOT__tmp_111_reg_3638 = (0x3fffffffU 
					    & (((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_53_fu_1491_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_15_cast_reg_3211)) 
					       - (1U 
						  | (IData)(vlTOPp->v__DOT__tmp_6_12_fu_1510_p15))));
	vlTOPp->v__DOT__tmp_8_13_reg_3627 = (((vlTOPp->v__DOT__tmp_53_fu_1491_p3 
					       << 2U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_cast_reg_3211)) 
					     < (1U 
						| (IData)(vlTOPp->v__DOT__tmp_6_12_fu_1510_p15)));
    }
    // ALWAYS at usqrt.v:695
    if ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_1_reg_3543 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_10_fu_1279_p2)));
	vlTOPp->v__DOT__not_tmp_8_s_reg_3519 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_s_reg_3503)));
	vlTOPp->v__DOT__tmp_8_11_reg_3567 = (((vlTOPp->v__DOT__tmp_45_fu_1319_p3 
					       << 2U) 
					      | (IData)(vlTOPp->v__DOT__tmp_13_cast_reg_3197)) 
					     < (1U 
						| (IData)(vlTOPp->v__DOT__tmp_6_10_fu_1338_p13)));
	vlTOPp->v__DOT__tmp_96_reg_3573 = (0xfffffffU 
					   & vlTOPp->v__DOT__tmp_45_fu_1319_p3);
	vlTOPp->v__DOT__tmp_98_reg_3578 = (0x3fffffffU 
					   & (((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_45_fu_1319_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_13_cast_reg_3197)) 
					      - (1U 
						 | (IData)(vlTOPp->v__DOT__tmp_6_10_fu_1338_p13))));
    }
    // ALWAYS at usqrt.v:767
    if ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_8_reg_3451 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_8_reg_3435)));
	vlTOPp->v__DOT__not_tmp_8_9_reg_3477 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_9_fu_1111_p2)));
	vlTOPp->v__DOT__tmp_83_reg_3509 = (0xfffffffU 
					   & vlTOPp->v__DOT__tmp_37_fu_1151_p3);
	vlTOPp->v__DOT__tmp_84_reg_3514 = (0x3fffffffU 
					   & (((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_37_fu_1151_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_11_cast_reg_3183)) 
					      - (1U 
						 | (IData)(vlTOPp->v__DOT__tmp_6_s_fu_1170_p11))));
	vlTOPp->v__DOT__tmp_8_s_reg_3503 = (((vlTOPp->v__DOT__tmp_37_fu_1151_p3 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_11_cast_reg_3183)) 
					    < (1U | (IData)(vlTOPp->v__DOT__tmp_6_s_fu_1170_p11)));
    }
    // ALWAYS at usqrt.v:757
    if ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_6_reg_3379 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_6_reg_3363)));
	vlTOPp->v__DOT__not_tmp_8_7_reg_3407 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_7_fu_947_p2)));
	vlTOPp->v__DOT__tmp_70_reg_3441 = (0xfffffffU 
					   & vlTOPp->v__DOT__tmp_29_fu_987_p3);
	vlTOPp->v__DOT__tmp_71_reg_3446 = (0x3fffffffU 
					   & (((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_29_fu_987_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_7_cast_reg_3169)) 
					      - (1U 
						 | (IData)(vlTOPp->v__DOT__tmp_6_8_fu_1006_p9))));
	vlTOPp->v__DOT__tmp_8_8_reg_3435 = (((vlTOPp->v__DOT__tmp_29_fu_987_p3 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_7_cast_reg_3169)) 
					    < (1U | (IData)(vlTOPp->v__DOT__tmp_6_8_fu_1006_p9)));
    }
    // ALWAYS at usqrt.v:747
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_4_reg_3303 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_4_reg_3287)));
	vlTOPp->v__DOT__not_tmp_8_5_reg_3333 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_5_fu_787_p2)));
	vlTOPp->v__DOT__tmp_54_reg_3369 = (0xfffffffU 
					   & vlTOPp->v__DOT__tmp_21_fu_827_p3);
	vlTOPp->v__DOT__tmp_56_reg_3374 = (0x3fffffffU 
					   & (((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_21_fu_827_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_3_cast_reg_3155)) 
					      - (1U 
						 | (IData)(vlTOPp->v__DOT__tmp_6_6_fu_846_p7))));
	vlTOPp->v__DOT__tmp_8_6_reg_3363 = (((vlTOPp->v__DOT__tmp_21_fu_827_p3 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_3_cast_reg_3155)) 
					    < (1U | (IData)(vlTOPp->v__DOT__tmp_6_6_fu_846_p7)));
    }
    // ALWAYS at usqrt.v:737
    if ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__not_tmp_8_2_reg_3223 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_2_reg_3118)));
	vlTOPp->v__DOT__not_tmp_8_3_reg_3255 = (1U 
						& (~ (IData)(vlTOPp->v__DOT__tmp_8_3_fu_631_p2)));
	vlTOPp->v__DOT__tmp_34_reg_3293 = (0xfffffffU 
					   & vlTOPp->v__DOT__tmp_13_fu_671_p3);
	vlTOPp->v__DOT__tmp_36_reg_3298 = (0x3fffffffU 
					   & (((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_13_fu_671_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_cast_reg_3141)) 
					      - (1U 
						 | (IData)(vlTOPp->v__DOT__tmp_6_4_fu_690_p5))));
	vlTOPp->v__DOT__tmp_8_4_reg_3287 = (((vlTOPp->v__DOT__tmp_13_fu_671_p3 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_cast_reg_3141)) 
					    < (1U | (IData)(vlTOPp->v__DOT__tmp_6_4_fu_690_p5)));
    }
    // ALWAYS at usqrt.v:629
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__a_1_1_reg_3080 = vlTOPp->v__DOT__a_1_1_fu_368_p3;
	vlTOPp->v__DOT__tmp_10_cast_reg_3176 = (3U 
						& (vlTOPp->y 
						   >> 0xcU));
	vlTOPp->v__DOT__tmp_14_reg_3131 = (0xfffffffU 
					   & vlTOPp->v__DOT__tmp_4_fu_394_p3);
	vlTOPp->v__DOT__tmp_177_reg_3218 = (1U & (IData)(vlTOPp->v__DOT__a_1_1_fu_368_p3));
	vlTOPp->v__DOT__tmp_11_cast_reg_3183 = (3U 
						& (vlTOPp->y 
						   >> 0xaU));
	vlTOPp->v__DOT__tmp_12_cast_reg_3190 = (3U 
						& (vlTOPp->y 
						   >> 8U));
	vlTOPp->v__DOT__tmp_13_cast_reg_3197 = (3U 
						& (vlTOPp->y 
						   >> 6U));
	vlTOPp->v__DOT__tmp_14_cast_reg_3204 = (3U 
						& (vlTOPp->y 
						   >> 4U));
	vlTOPp->v__DOT__tmp_15_cast_reg_3211 = (3U 
						& (vlTOPp->y 
						   >> 2U));
	vlTOPp->v__DOT__tmp_16_reg_3136 = (0x3fffffffU 
					   & (((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_4_fu_394_p3 
						   << 2U)) 
					       | (3U 
						  & (vlTOPp->y 
						     >> 0x1aU))) 
					      - (1U 
						 | ((IData)(vlTOPp->v__DOT__a_1_1_fu_368_p3) 
						    << 2U))));
	vlTOPp->v__DOT__tmp_1_cast_reg_3148 = (3U & 
					       (vlTOPp->y 
						>> 0x14U));
	vlTOPp->v__DOT__tmp_3_cast_reg_3155 = (3U & 
					       (vlTOPp->y 
						>> 0x12U));
	vlTOPp->v__DOT__tmp_5_cast_reg_3162 = (3U & 
					       (vlTOPp->y 
						>> 0x10U));
	vlTOPp->v__DOT__tmp_5_reg_3073 = (3U & vlTOPp->y);
	vlTOPp->v__DOT__tmp_6_cast_reg_3113 = (3U & 
					       (vlTOPp->y 
						>> 0x1aU));
	vlTOPp->v__DOT__tmp_7_cast_reg_3169 = (3U & 
					       (vlTOPp->y 
						>> 0xeU));
	vlTOPp->v__DOT__tmp_8_2_reg_3118 = (((vlTOPp->v__DOT__tmp_4_fu_394_p3 
					      << 2U) 
					     | (3U 
						& (vlTOPp->y 
						   >> 0x1aU))) 
					    < (1U | 
					       ((IData)(vlTOPp->v__DOT__a_1_1_fu_368_p3) 
						<< 2U)));
	vlTOPp->v__DOT__tmp_9_cast_reg_3124 = (3U & 
					       (vlTOPp->y 
						>> 0x18U));
	vlTOPp->v__DOT__tmp_cast_reg_3141 = (3U & (vlTOPp->y 
						   >> 0x16U));
    }
    vlTOPp->v__DOT__tmp_57_fu_1579_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_13_reg_3627)
					  ? ((vlTOPp->v__DOT__tmp_110_reg_3633 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_cast_reg_3211))
					  : vlTOPp->v__DOT__tmp_111_reg_3638);
    // ALWAYS at usqrt.v:621
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
    vlTOPp->v__DOT__tmp_17_fu_749_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_4_reg_3287)
					 ? ((vlTOPp->v__DOT__tmp_34_reg_3293 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_cast_reg_3141))
					 : vlTOPp->v__DOT__tmp_36_reg_3298);
    vlTOPp->v__DOT__tmp_25_fu_907_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_6_reg_3363)
					 ? ((vlTOPp->v__DOT__tmp_54_reg_3369 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_3_cast_reg_3155))
					 : vlTOPp->v__DOT__tmp_56_reg_3374);
    vlTOPp->v__DOT__tmp_33_fu_1069_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_8_reg_3435)
					  ? ((vlTOPp->v__DOT__tmp_70_reg_3441 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_7_cast_reg_3169))
					  : vlTOPp->v__DOT__tmp_71_reg_3446);
    vlTOPp->v__DOT__tmp_41_fu_1235_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_s_reg_3503)
					  ? ((vlTOPp->v__DOT__tmp_83_reg_3509 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_11_cast_reg_3183))
					  : vlTOPp->v__DOT__tmp_84_reg_3514);
    vlTOPp->v__DOT__tmp_49_fu_1405_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_11_reg_3567)
					  ? ((vlTOPp->v__DOT__tmp_96_reg_3573 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_13_cast_reg_3197))
					  : vlTOPp->v__DOT__tmp_98_reg_3578);
    vlTOPp->v__DOT__tmp_9_fu_595_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_2_reg_3118)
				        ? ((vlTOPp->v__DOT__tmp_14_reg_3131 
					    << 2U) 
					   | (IData)(vlTOPp->v__DOT__tmp_6_cast_reg_3113))
				        : vlTOPp->v__DOT__tmp_16_reg_3136);
    vlTOPp->v__DOT__tmp_6_13_fu_1596_p16 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xfU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xeU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xdU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xcU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xbU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xaU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 9U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 8U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 7U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 6U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 5U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 4U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_13_reg_3627)) 
										<< 2U)))))))))))))));
    vlTOPp->v__DOT__tmp_6_3_fu_612_p4 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 3U) | 
					 (4U & ((~ (IData)(vlTOPp->v__DOT__tmp_8_2_reg_3118)) 
						<< 2U)));
    vlTOPp->v__DOT__tmp_6_5_fu_766_p6 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 5U) | 
					 (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					   << 4U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					    << 3U) 
					   | (4U & 
					      ((~ (IData)(vlTOPp->v__DOT__tmp_8_4_reg_3287)) 
					       << 2U)))));
    vlTOPp->v__DOT__tmp_6_7_fu_924_p8 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 7U) | 
					 (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					   << 6U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					    << 5U) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
					       << 4U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
						  << 3U) 
						 | (4U 
						    & ((~ (IData)(vlTOPp->v__DOT__tmp_8_6_reg_3363)) 
						       << 2U)))))));
    vlTOPp->v__DOT__tmp_6_9_fu_1086_p10 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					    << 9U) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					       << 8U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						  << 7U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						     << 6U) 
						    | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							<< 5U) 
						       | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							   << 4U) 
							  | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							      << 3U) 
							     | (4U 
								& ((~ (IData)(vlTOPp->v__DOT__tmp_8_8_reg_3435)) 
								   << 2U)))))))));
    vlTOPp->v__DOT__tmp_6_1_fu_1252_p12 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					    << 0xbU) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					       << 0xaU) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						  << 9U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						     << 8U) 
						    | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							<< 7U) 
						       | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							   << 6U) 
							  | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							      << 5U) 
							     | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								 << 4U) 
								| (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								    << 3U) 
								   | (4U 
								      & ((~ (IData)(vlTOPp->v__DOT__tmp_8_s_reg_3503)) 
									 << 2U)))))))))));
    vlTOPp->v__DOT__tmp_6_11_fu_1422_p14 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xdU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xcU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xbU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xaU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 9U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 8U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 7U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 6U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 5U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 4U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 3U) 
									  | (4U 
									     & ((~ (IData)(vlTOPp->v__DOT__tmp_8_11_reg_3567)) 
										<< 2U)))))))))))));
    vlTOPp->v__DOT__tmp_6_14_fu_1682_p17 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x10U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xfU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xeU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xdU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xcU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xbU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xaU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 9U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 8U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 7U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 6U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 5U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 2U)))))))))))))));
    vlTOPp->v__DOT__tmp_6_16_fu_1843_p19 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x12U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x11U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x10U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xfU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xeU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xdU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xcU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xbU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xaU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 9U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 8U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 7U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 2U)))))))))))))))));
    vlTOPp->v__DOT__tmp_6_18_fu_2008_p21 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x14U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x13U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x12U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x11U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x10U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xfU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xeU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xdU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xcU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xbU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xaU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 9U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 2U)))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_20_fu_2177_p23 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x16U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x15U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x14U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x13U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x12U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x11U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x10U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xfU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xeU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xdU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xcU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xbU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 2U)))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_22_fu_2350_p25 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x18U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x17U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x16U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x15U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x14U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x13U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x12U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x11U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x10U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xfU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xeU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xdU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 2U)))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_24_fu_2527_p27 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1aU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x19U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x18U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x17U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x16U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x15U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x14U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x13U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x12U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x11U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x10U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xfU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 2U)))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_26_fu_2708_p29 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1cU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1bU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x1aU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x19U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x18U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x17U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x16U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x15U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x14U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x13U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x12U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x11U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 2U)))))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_28_fu_2889_p31 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1eU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1dU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x1cU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x1bU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x1aU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x19U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x18U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x17U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x16U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x15U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x14U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x13U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x12U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_26_reg_3902) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_27_reg_3909) 
										<< 2U)))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vusqrt::_combo__TOP__4(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_combo__TOP__4\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_8_1_fu_348_p2 = ((IData)(vlTOPp->v__DOT__tmp_s_fu_312_p3) 
					 < ((0U == 
					     (3U & 
					      (vlTOPp->y 
					       >> 0x1eU)))
					     ? 1U : 5U));
    vlTOPp->v__DOT__a_1_1_fu_368_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_1_fu_348_p2)
				        ? ((0U == (3U 
						   & (vlTOPp->y 
						      >> 0x1eU)))
					    ? 0U : 2U)
				        : ((0U == (3U 
						   & (vlTOPp->y 
						      >> 0x1eU)))
					    ? 1U : 3U));
    vlTOPp->v__DOT__tmp_4_fu_394_p3 = (0x3fffffffU 
				       & ((IData)(vlTOPp->v__DOT__tmp_8_1_fu_348_p2)
					   ? VL_EXTENDS_II(30,5, (IData)(vlTOPp->v__DOT__tmp_s_fu_312_p3))
					   : VL_EXTENDS_II(30,6, 
							   (0x3fU 
							    & (VL_EXTENDS_II(6,5, (IData)(vlTOPp->v__DOT__tmp_s_fu_312_p3)) 
							       - 
							       ((0U 
								 == 
								 (3U 
								  & (vlTOPp->y 
								     >> 0x1eU)))
								 ? 1U
								 : 5U))))));
}

void Vusqrt::_initial__TOP__5(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_initial__TOP__5\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at usqrt.v:139
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

void Vusqrt::_settle__TOP__6(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_settle__TOP__6\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_57_fu_1579_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_13_reg_3627)
					  ? ((vlTOPp->v__DOT__tmp_110_reg_3633 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_cast_reg_3211))
					  : vlTOPp->v__DOT__tmp_111_reg_3638);
    vlTOPp->v__DOT__tmp_17_fu_749_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_4_reg_3287)
					 ? ((vlTOPp->v__DOT__tmp_34_reg_3293 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_cast_reg_3141))
					 : vlTOPp->v__DOT__tmp_36_reg_3298);
    vlTOPp->v__DOT__tmp_25_fu_907_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_6_reg_3363)
					 ? ((vlTOPp->v__DOT__tmp_54_reg_3369 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_3_cast_reg_3155))
					 : vlTOPp->v__DOT__tmp_56_reg_3374);
    vlTOPp->v__DOT__tmp_33_fu_1069_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_8_reg_3435)
					  ? ((vlTOPp->v__DOT__tmp_70_reg_3441 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_7_cast_reg_3169))
					  : vlTOPp->v__DOT__tmp_71_reg_3446);
    vlTOPp->v__DOT__tmp_41_fu_1235_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_s_reg_3503)
					  ? ((vlTOPp->v__DOT__tmp_83_reg_3509 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_11_cast_reg_3183))
					  : vlTOPp->v__DOT__tmp_84_reg_3514);
    vlTOPp->v__DOT__tmp_49_fu_1405_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_11_reg_3567)
					  ? ((vlTOPp->v__DOT__tmp_96_reg_3573 
					      << 2U) 
					     | (IData)(vlTOPp->v__DOT__tmp_13_cast_reg_3197))
					  : vlTOPp->v__DOT__tmp_98_reg_3578);
    vlTOPp->v__DOT__tmp_9_fu_595_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_2_reg_3118)
				        ? ((vlTOPp->v__DOT__tmp_14_reg_3131 
					    << 2U) 
					   | (IData)(vlTOPp->v__DOT__tmp_6_cast_reg_3113))
				        : vlTOPp->v__DOT__tmp_16_reg_3136);
    vlTOPp->v__DOT__tmp_6_13_fu_1596_p16 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xfU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xeU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xdU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xcU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xbU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xaU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 9U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 8U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 7U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 6U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 5U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 4U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_13_reg_3627)) 
										<< 2U)))))))))))))));
    vlTOPp->v__DOT__tmp_6_3_fu_612_p4 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 3U) | 
					 (4U & ((~ (IData)(vlTOPp->v__DOT__tmp_8_2_reg_3118)) 
						<< 2U)));
    vlTOPp->v__DOT__tmp_6_5_fu_766_p6 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 5U) | 
					 (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					   << 4U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					    << 3U) 
					   | (4U & 
					      ((~ (IData)(vlTOPp->v__DOT__tmp_8_4_reg_3287)) 
					       << 2U)))));
    vlTOPp->v__DOT__tmp_6_7_fu_924_p8 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 7U) | 
					 (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					   << 6U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					    << 5U) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
					       << 4U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
						  << 3U) 
						 | (4U 
						    & ((~ (IData)(vlTOPp->v__DOT__tmp_8_6_reg_3363)) 
						       << 2U)))))));
    vlTOPp->v__DOT__tmp_6_9_fu_1086_p10 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					    << 9U) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					       << 8U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						  << 7U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						     << 6U) 
						    | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							<< 5U) 
						       | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							   << 4U) 
							  | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							      << 3U) 
							     | (4U 
								& ((~ (IData)(vlTOPp->v__DOT__tmp_8_8_reg_3435)) 
								   << 2U)))))))));
    vlTOPp->v__DOT__tmp_6_1_fu_1252_p12 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					    << 0xbU) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					       << 0xaU) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						  << 9U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						     << 8U) 
						    | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							<< 7U) 
						       | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							   << 6U) 
							  | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							      << 5U) 
							     | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								 << 4U) 
								| (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								    << 3U) 
								   | (4U 
								      & ((~ (IData)(vlTOPp->v__DOT__tmp_8_s_reg_3503)) 
									 << 2U)))))))))));
    vlTOPp->v__DOT__tmp_6_11_fu_1422_p14 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xdU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xcU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xbU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xaU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 9U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 8U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 7U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 6U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 5U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 4U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 3U) 
									  | (4U 
									     & ((~ (IData)(vlTOPp->v__DOT__tmp_8_11_reg_3567)) 
										<< 2U)))))))))))));
    vlTOPp->v__DOT__tmp_6_14_fu_1682_p17 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x10U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xfU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xeU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xdU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xcU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xbU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xaU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 9U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 8U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 7U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 6U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 5U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 2U)))))))))))))));
    vlTOPp->v__DOT__tmp_6_16_fu_1843_p19 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x12U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x11U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x10U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xfU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xeU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xdU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xcU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xbU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xaU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 9U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 8U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 7U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 2U)))))))))))))))));
    vlTOPp->v__DOT__tmp_6_18_fu_2008_p21 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x14U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x13U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x12U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x11U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x10U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xfU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xeU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xdU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xcU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xbU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xaU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 9U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 2U)))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_20_fu_2177_p23 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x16U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x15U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x14U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x13U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x12U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x11U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x10U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xfU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xeU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xdU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xcU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xbU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 2U)))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_22_fu_2350_p25 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x18U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x17U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x16U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x15U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x14U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x13U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x12U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x11U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x10U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xfU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xeU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xdU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 2U)))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_24_fu_2527_p27 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1aU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x19U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x18U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x17U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x16U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x15U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x14U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x13U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x12U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x11U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x10U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xfU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 2U)))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_26_fu_2708_p29 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1cU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1bU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x1aU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x19U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x18U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x17U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x16U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x15U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x14U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x13U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x12U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x11U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 2U)))))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_6_28_fu_2889_p31 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1eU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1dU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x1cU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x1bU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x1aU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x19U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x18U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x17U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x16U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x15U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x14U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x13U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x12U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_26_reg_3902) 
										<< 3U) 
										| ((IData)(vlTOPp->v__DOT__not_tmp_8_27_reg_3909) 
										<< 2U)))))))))))))))))))))))))))));
    vlTOPp->v__DOT__a_1_1_fu_368_p3 = ((IData)(vlTOPp->v__DOT__tmp_8_1_fu_348_p2)
				        ? ((0U == (3U 
						   & (vlTOPp->y 
						      >> 0x1eU)))
					    ? 0U : 2U)
				        : ((0U == (3U 
						   & (vlTOPp->y 
						      >> 0x1eU)))
					    ? 1U : 3U));
    vlTOPp->v__DOT__tmp_4_fu_394_p3 = (0x3fffffffU 
				       & ((IData)(vlTOPp->v__DOT__tmp_8_1_fu_348_p2)
					   ? VL_EXTENDS_II(30,5, (IData)(vlTOPp->v__DOT__tmp_s_fu_312_p3))
					   : VL_EXTENDS_II(30,6, 
							   (0x3fU 
							    & (VL_EXTENDS_II(6,5, (IData)(vlTOPp->v__DOT__tmp_s_fu_312_p3)) 
							       - 
							       ((0U 
								 == 
								 (3U 
								  & (vlTOPp->y 
								     >> 0x1eU)))
								 ? 1U
								 : 5U))))));
    // ALWAYS at usqrt.v:777
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 0xfU));
    // ALWAYS at usqrt.v:793
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 0xfU));
    // ALWAYS at usqrt.v:929
    vlTOPp->q_frac_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 0xfU));
    // ALWAYS at usqrt.v:937
    vlTOPp->q_sqrt_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 0xfU));
    // ALWAYS at usqrt.v:785
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at usqrt.v:944
    vlTOPp->v__DOT__ap_NS_fsm = (((((((((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
					| (2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				       | (4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				      | (8U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				     | (0x10U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				    | (0x20U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				   | (0x40U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				  | (0x80U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)))
				  ? ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((IData)(vlTOPp->ap_start)
					  ? 2U : 1U)
				      : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 4U : ((4U 
						   == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 8U
						   : 
						  ((8U 
						    == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0x10U
						    : 
						   ((0x10U 
						     == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0x20U
						     : 
						    ((0x20U 
						      == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0x40U
						      : 
						     ((0x40U 
						       == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 0x80U
						       : 0x100U)))))))
				  : (((((((((0x100U 
					     == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
					    | (0x200U 
					       == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					   | (0x400U 
					      == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					  | (0x800U 
					     == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					 | (0x1000U 
					    == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					| (0x2000U 
					   == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				       | (0x4000U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				      | (0x8000U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)))
				      ? ((0x100U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 0x200U : 
					 ((0x200U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					   ? 0x400U
					   : ((0x400U 
					       == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0x800U
					       : ((0x800U 
						   == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0x1000U
						   : 
						  ((0x1000U 
						    == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0x2000U
						    : 
						   ((0x2000U 
						     == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0x4000U
						     : 
						    ((0x4000U 
						      == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0x8000U
						      : 1U)))))))
				      : 0U));
    vlTOPp->v__DOT__tmp_8_14_fu_1627_p2 = (((vlTOPp->v__DOT__tmp_57_fu_1579_p3 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_5_reg_3073)) 
					   < (1U | vlTOPp->v__DOT__tmp_6_13_fu_1596_p16));
    vlTOPp->v__DOT__tmp_8_3_fu_631_p2 = (((vlTOPp->v__DOT__tmp_9_fu_595_p3 
					   << 2U) | (IData)(vlTOPp->v__DOT__tmp_9_cast_reg_3124)) 
					 < (1U | (IData)(vlTOPp->v__DOT__tmp_6_3_fu_612_p4)));
    vlTOPp->v__DOT__tmp_8_5_fu_787_p2 = (((vlTOPp->v__DOT__tmp_17_fu_749_p3 
					   << 2U) | (IData)(vlTOPp->v__DOT__tmp_1_cast_reg_3148)) 
					 < (1U | (IData)(vlTOPp->v__DOT__tmp_6_5_fu_766_p6)));
    vlTOPp->v__DOT__tmp_8_7_fu_947_p2 = (((vlTOPp->v__DOT__tmp_25_fu_907_p3 
					   << 2U) | (IData)(vlTOPp->v__DOT__tmp_5_cast_reg_3162)) 
					 < (1U | (IData)(vlTOPp->v__DOT__tmp_6_7_fu_924_p8)));
    vlTOPp->v__DOT__tmp_8_9_fu_1111_p2 = (((vlTOPp->v__DOT__tmp_33_fu_1069_p3 
					    << 2U) 
					   | (IData)(vlTOPp->v__DOT__tmp_10_cast_reg_3176)) 
					  < (1U | (IData)(vlTOPp->v__DOT__tmp_6_9_fu_1086_p10)));
    vlTOPp->v__DOT__tmp_8_10_fu_1279_p2 = (((vlTOPp->v__DOT__tmp_41_fu_1235_p3 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_12_cast_reg_3190)) 
					   < (1U | (IData)(vlTOPp->v__DOT__tmp_6_1_fu_1252_p12)));
    vlTOPp->v__DOT__tmp_8_12_fu_1451_p2 = (((vlTOPp->v__DOT__tmp_49_fu_1405_p3 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_14_cast_reg_3204)) 
					   < (1U | (IData)(vlTOPp->v__DOT__tmp_6_11_fu_1422_p14)));
    vlTOPp->v__DOT__tmp_8_15_fu_1713_p2 = ((vlTOPp->v__DOT__tmp_61_reg_3685 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_14_fu_1682_p17));
    vlTOPp->v__DOT__tmp_8_17_fu_1876_p2 = ((vlTOPp->v__DOT__tmp_69_reg_3730 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_16_fu_1843_p19));
    vlTOPp->v__DOT__tmp_8_19_fu_2043_p2 = ((vlTOPp->v__DOT__tmp_77_reg_3771 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_18_fu_2008_p21));
    vlTOPp->v__DOT__tmp_8_21_fu_2214_p2 = ((vlTOPp->v__DOT__tmp_85_reg_3808 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_20_fu_2177_p23));
    vlTOPp->v__DOT__tmp_8_23_fu_2389_p2 = ((vlTOPp->v__DOT__tmp_93_reg_3841 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_22_fu_2350_p25));
    vlTOPp->v__DOT__tmp_8_25_fu_2568_p2 = ((vlTOPp->v__DOT__tmp_101_reg_3870 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_24_fu_2527_p27));
    vlTOPp->v__DOT__tmp_8_27_fu_2751_p2 = ((vlTOPp->v__DOT__tmp_109_reg_3895 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_26_fu_2708_p29));
    vlTOPp->v__DOT__tmp_8_29_fu_2930_p2 = ((vlTOPp->v__DOT__tmp_117_reg_3916 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_28_fu_2889_p31));
}

VL_INLINE_OPT void Vusqrt::_sequent__TOP__7(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_sequent__TOP__7\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at usqrt.v:777
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 0xfU));
    // ALWAYS at usqrt.v:793
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 0xfU));
    // ALWAYS at usqrt.v:929
    vlTOPp->q_frac_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 0xfU));
    // ALWAYS at usqrt.v:937
    vlTOPp->q_sqrt_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 0xfU));
    vlTOPp->v__DOT__tmp_8_14_fu_1627_p2 = (((vlTOPp->v__DOT__tmp_57_fu_1579_p3 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_5_reg_3073)) 
					   < (1U | vlTOPp->v__DOT__tmp_6_13_fu_1596_p16));
    vlTOPp->v__DOT__tmp_8_3_fu_631_p2 = (((vlTOPp->v__DOT__tmp_9_fu_595_p3 
					   << 2U) | (IData)(vlTOPp->v__DOT__tmp_9_cast_reg_3124)) 
					 < (1U | (IData)(vlTOPp->v__DOT__tmp_6_3_fu_612_p4)));
    vlTOPp->v__DOT__tmp_8_5_fu_787_p2 = (((vlTOPp->v__DOT__tmp_17_fu_749_p3 
					   << 2U) | (IData)(vlTOPp->v__DOT__tmp_1_cast_reg_3148)) 
					 < (1U | (IData)(vlTOPp->v__DOT__tmp_6_5_fu_766_p6)));
    vlTOPp->v__DOT__tmp_8_7_fu_947_p2 = (((vlTOPp->v__DOT__tmp_25_fu_907_p3 
					   << 2U) | (IData)(vlTOPp->v__DOT__tmp_5_cast_reg_3162)) 
					 < (1U | (IData)(vlTOPp->v__DOT__tmp_6_7_fu_924_p8)));
    vlTOPp->v__DOT__tmp_8_9_fu_1111_p2 = (((vlTOPp->v__DOT__tmp_33_fu_1069_p3 
					    << 2U) 
					   | (IData)(vlTOPp->v__DOT__tmp_10_cast_reg_3176)) 
					  < (1U | (IData)(vlTOPp->v__DOT__tmp_6_9_fu_1086_p10)));
    vlTOPp->v__DOT__tmp_8_10_fu_1279_p2 = (((vlTOPp->v__DOT__tmp_41_fu_1235_p3 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_12_cast_reg_3190)) 
					   < (1U | (IData)(vlTOPp->v__DOT__tmp_6_1_fu_1252_p12)));
    vlTOPp->v__DOT__tmp_8_12_fu_1451_p2 = (((vlTOPp->v__DOT__tmp_49_fu_1405_p3 
					     << 2U) 
					    | (IData)(vlTOPp->v__DOT__tmp_14_cast_reg_3204)) 
					   < (1U | (IData)(vlTOPp->v__DOT__tmp_6_11_fu_1422_p14)));
    vlTOPp->v__DOT__tmp_8_15_fu_1713_p2 = ((vlTOPp->v__DOT__tmp_61_reg_3685 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_14_fu_1682_p17));
    vlTOPp->v__DOT__tmp_8_17_fu_1876_p2 = ((vlTOPp->v__DOT__tmp_69_reg_3730 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_16_fu_1843_p19));
    vlTOPp->v__DOT__tmp_8_19_fu_2043_p2 = ((vlTOPp->v__DOT__tmp_77_reg_3771 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_18_fu_2008_p21));
    vlTOPp->v__DOT__tmp_8_21_fu_2214_p2 = ((vlTOPp->v__DOT__tmp_85_reg_3808 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_20_fu_2177_p23));
    vlTOPp->v__DOT__tmp_8_23_fu_2389_p2 = ((vlTOPp->v__DOT__tmp_93_reg_3841 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_22_fu_2350_p25));
    vlTOPp->v__DOT__tmp_8_25_fu_2568_p2 = ((vlTOPp->v__DOT__tmp_101_reg_3870 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_24_fu_2527_p27));
    vlTOPp->v__DOT__tmp_8_27_fu_2751_p2 = ((vlTOPp->v__DOT__tmp_109_reg_3895 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_26_fu_2708_p29));
    vlTOPp->v__DOT__tmp_8_29_fu_2930_p2 = ((vlTOPp->v__DOT__tmp_117_reg_3916 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_28_fu_2889_p31));
    vlTOPp->v__DOT__tmp_6_4_fu_690_p5 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 4U) | 
					 ((8U & ((~ (IData)(vlTOPp->v__DOT__tmp_8_2_reg_3118)) 
						 << 3U)) 
					  | (4U & (
						   (~ (IData)(vlTOPp->v__DOT__tmp_8_3_fu_631_p2)) 
						   << 2U))));
    vlTOPp->v__DOT__tmp_13_fu_671_p3 = (0x3fffffffU 
					& ((IData)(vlTOPp->v__DOT__tmp_8_3_fu_631_p2)
					    ? ((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_9_fu_595_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_9_cast_reg_3124))
					    : (((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_9_fu_595_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_9_cast_reg_3124)) 
					       - (1U 
						  | (IData)(vlTOPp->v__DOT__tmp_6_3_fu_612_p4)))));
    vlTOPp->v__DOT__tmp_21_fu_827_p3 = (0x3fffffffU 
					& ((IData)(vlTOPp->v__DOT__tmp_8_5_fu_787_p2)
					    ? ((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_17_fu_749_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_1_cast_reg_3148))
					    : (((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_17_fu_749_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_1_cast_reg_3148)) 
					       - (1U 
						  | (IData)(vlTOPp->v__DOT__tmp_6_5_fu_766_p6)))));
    vlTOPp->v__DOT__tmp_6_6_fu_846_p7 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 6U) | 
					 (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					   << 5U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					    << 4U) 
					   | ((8U & 
					       ((~ (IData)(vlTOPp->v__DOT__tmp_8_4_reg_3287)) 
						<< 3U)) 
					      | (4U 
						 & ((~ (IData)(vlTOPp->v__DOT__tmp_8_5_fu_787_p2)) 
						    << 2U))))));
    vlTOPp->v__DOT__tmp_29_fu_987_p3 = (0x3fffffffU 
					& ((IData)(vlTOPp->v__DOT__tmp_8_7_fu_947_p2)
					    ? ((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_25_fu_907_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_5_cast_reg_3162))
					    : (((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_25_fu_907_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_5_cast_reg_3162)) 
					       - (1U 
						  | (IData)(vlTOPp->v__DOT__tmp_6_7_fu_924_p8)))));
    vlTOPp->v__DOT__tmp_6_8_fu_1006_p9 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					   << 8U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					    << 7U) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					       << 6U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						  << 5U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
						     << 4U) 
						    | ((8U 
							& ((~ (IData)(vlTOPp->v__DOT__tmp_8_6_reg_3363)) 
							   << 3U)) 
						       | (4U 
							  & ((~ (IData)(vlTOPp->v__DOT__tmp_8_7_fu_947_p2)) 
							     << 2U))))))));
    vlTOPp->v__DOT__tmp_37_fu_1151_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_9_fu_1111_p2)
					     ? ((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_33_fu_1069_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_10_cast_reg_3176))
					     : (((0x3ffffffcU 
						  & (vlTOPp->v__DOT__tmp_33_fu_1069_p3 
						     << 2U)) 
						 | (IData)(vlTOPp->v__DOT__tmp_10_cast_reg_3176)) 
						- (1U 
						   | (IData)(vlTOPp->v__DOT__tmp_6_9_fu_1086_p10)))));
    vlTOPp->v__DOT__tmp_6_s_fu_1170_p11 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					    << 0xaU) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					       << 9U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						  << 8U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						     << 7U) 
						    | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							<< 6U) 
						       | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							   << 5U) 
							  | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							      << 4U) 
							     | ((8U 
								 & ((~ (IData)(vlTOPp->v__DOT__tmp_8_8_reg_3435)) 
								    << 3U)) 
								| (4U 
								   & ((~ (IData)(vlTOPp->v__DOT__tmp_8_9_fu_1111_p2)) 
								      << 2U))))))))));
    vlTOPp->v__DOT__tmp_45_fu_1319_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_10_fu_1279_p2)
					     ? ((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_41_fu_1235_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_12_cast_reg_3190))
					     : (((0x3ffffffcU 
						  & (vlTOPp->v__DOT__tmp_41_fu_1235_p3 
						     << 2U)) 
						 | (IData)(vlTOPp->v__DOT__tmp_12_cast_reg_3190)) 
						- (1U 
						   | (IData)(vlTOPp->v__DOT__tmp_6_1_fu_1252_p12)))));
    vlTOPp->v__DOT__tmp_6_10_fu_1338_p13 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xcU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xbU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xaU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 9U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 8U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 7U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 6U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 5U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 4U) 
								    | ((8U 
									& ((~ (IData)(vlTOPp->v__DOT__tmp_8_s_reg_3503)) 
									   << 3U)) 
								       | (4U 
									  & ((~ (IData)(vlTOPp->v__DOT__tmp_8_10_fu_1279_p2)) 
									     << 2U))))))))))));
    vlTOPp->v__DOT__tmp_53_fu_1491_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_12_fu_1451_p2)
					     ? ((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_49_fu_1405_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_14_cast_reg_3204))
					     : (((0x3ffffffcU 
						  & (vlTOPp->v__DOT__tmp_49_fu_1405_p3 
						     << 2U)) 
						 | (IData)(vlTOPp->v__DOT__tmp_14_cast_reg_3204)) 
						- (1U 
						   | (IData)(vlTOPp->v__DOT__tmp_6_11_fu_1422_p14)))));
    vlTOPp->v__DOT__tmp_6_12_fu_1510_p15 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xeU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xdU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xcU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xbU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xaU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 9U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 8U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 7U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 6U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 5U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 4U) 
									  | ((8U 
									      & ((~ (IData)(vlTOPp->v__DOT__tmp_8_11_reg_3567)) 
										<< 3U)) 
									     | (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_12_fu_1451_p2)) 
										<< 2U))))))))))))));
    vlTOPp->v__DOT__tmp_65_fu_1745_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_15_fu_1713_p2)
					     ? (vlTOPp->v__DOT__tmp_61_reg_3685 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_61_reg_3685 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_14_fu_1682_p17))));
    vlTOPp->v__DOT__tmp_6_15_fu_1761_p18 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x11U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x10U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xfU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xeU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xdU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xcU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xbU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xaU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 9U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 8U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 7U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 6U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_15_fu_1713_p2)) 
										<< 2U)))))))))))))))));
    vlTOPp->v__DOT__tmp_73_fu_1908_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_17_fu_1876_p2)
					     ? (vlTOPp->v__DOT__tmp_69_reg_3730 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_69_reg_3730 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_16_fu_1843_p19))));
    vlTOPp->v__DOT__tmp_6_17_fu_1924_p20 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x13U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x12U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x11U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x10U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xfU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xeU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xdU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xcU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xbU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xaU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 9U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 8U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_17_fu_1876_p2)) 
										<< 2U)))))))))))))))))));
    vlTOPp->v__DOT__tmp_81_fu_2075_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_19_fu_2043_p2)
					     ? (vlTOPp->v__DOT__tmp_77_reg_3771 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_77_reg_3771 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_18_fu_2008_p21))));
    vlTOPp->v__DOT__tmp_6_19_fu_2091_p22 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x15U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x14U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x13U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x12U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x11U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x10U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xfU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xeU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xdU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xcU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xbU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xaU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_19_fu_2043_p2)) 
										<< 2U)))))))))))))))))))));
    vlTOPp->v__DOT__tmp_89_fu_2246_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_21_fu_2214_p2)
					     ? (vlTOPp->v__DOT__tmp_85_reg_3808 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_85_reg_3808 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_20_fu_2177_p23))));
    vlTOPp->v__DOT__tmp_6_21_fu_2262_p24 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x17U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x16U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x15U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x14U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x13U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x12U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x11U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x10U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xfU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xeU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xdU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xcU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_21_fu_2214_p2)) 
										<< 2U)))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_97_fu_2421_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_23_fu_2389_p2)
					     ? (vlTOPp->v__DOT__tmp_93_reg_3841 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_93_reg_3841 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_22_fu_2350_p25))));
    vlTOPp->v__DOT__tmp_6_23_fu_2437_p26 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x19U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x18U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x17U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x16U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x15U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x14U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x13U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x12U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x11U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x10U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xfU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xeU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_23_fu_2389_p2)) 
										<< 2U)))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_105_fu_2600_p3 = (0x3fffffffU 
					  & ((IData)(vlTOPp->v__DOT__tmp_8_25_fu_2568_p2)
					      ? (vlTOPp->v__DOT__tmp_101_reg_3870 
						 << 2U)
					      : ((vlTOPp->v__DOT__tmp_101_reg_3870 
						  << 2U) 
						 - 
						 (1U 
						  | vlTOPp->v__DOT__tmp_6_24_fu_2527_p27))));
    vlTOPp->v__DOT__tmp_6_25_fu_2616_p28 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1bU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1aU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x19U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x18U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x17U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x16U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x15U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x14U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x13U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x12U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x11U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x10U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_25_fu_2568_p2)) 
										<< 2U)))))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_113_fu_2779_p3 = (0x3fffffffU 
					  & ((IData)(vlTOPp->v__DOT__tmp_8_27_fu_2751_p2)
					      ? (vlTOPp->v__DOT__tmp_109_reg_3895 
						 << 2U)
					      : ((vlTOPp->v__DOT__tmp_109_reg_3895 
						  << 2U) 
						 - 
						 (1U 
						  | vlTOPp->v__DOT__tmp_6_26_fu_2708_p29))));
    vlTOPp->v__DOT__tmp_6_27_fu_2795_p30 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1dU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1cU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x1bU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x1aU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x19U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x18U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x17U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x16U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x15U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x14U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x13U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x12U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_27_fu_2751_p2)) 
										<< 2U)))))))))))))))))))))))))))));
    vlTOPp->v__DOT__a_1_s_fu_3028_p32 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 0x1eU) 
					 | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					     << 0x1dU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						<< 0x1cU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						   << 0x1bU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
						      << 0x1aU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							 << 0x19U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							    << 0x18U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
							       << 0x17U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								  << 0x16U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
								     << 0x15U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									<< 0x14U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									   << 0x13U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
									      << 0x12U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_26_reg_3902) 
										<< 3U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_27_reg_3909) 
										<< 2U) 
										| ((2U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_29_fu_2930_p2)) 
										<< 1U)) 
										| ((0xfffffffcU 
										& (((IData)(vlTOPp->v__DOT__tmp_8_29_fu_2930_p2)
										 ? 
										(vlTOPp->v__DOT__tmp_117_reg_3916 
										<< 2U)
										 : 
										((0x3ffffffcU 
										& (vlTOPp->v__DOT__tmp_117_reg_3916 
										<< 2U)) 
										- 
										(1U 
										| vlTOPp->v__DOT__tmp_6_28_fu_2889_p31))) 
										<< 2U)) 
										>= 
										(1U 
										| (((IData)(vlTOPp->v__DOT__tmp_177_reg_3218) 
										<< 0x1fU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
										<< 0x1eU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
										<< 0x1dU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
										<< 0x1cU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
										<< 0x1bU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
										<< 0x1aU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
										<< 0x19U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
										<< 0x18U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
										<< 0x17U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
										<< 0x16U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
										<< 0x15U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
										<< 0x14U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x13U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x12U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_26_reg_3902) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_27_reg_3909) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_29_fu_2930_p2)) 
										<< 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vusqrt::_combo__TOP__8(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_combo__TOP__8\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at usqrt.v:785
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at usqrt.v:944
    vlTOPp->v__DOT__ap_NS_fsm = (((((((((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
					| (2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				       | (4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				      | (8U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				     | (0x10U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				    | (0x20U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				   | (0x40U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				  | (0x80U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)))
				  ? ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((IData)(vlTOPp->ap_start)
					  ? 2U : 1U)
				      : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 4U : ((4U 
						   == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 8U
						   : 
						  ((8U 
						    == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0x10U
						    : 
						   ((0x10U 
						     == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0x20U
						     : 
						    ((0x20U 
						      == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0x40U
						      : 
						     ((0x40U 
						       == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 0x80U
						       : 0x100U)))))))
				  : (((((((((0x100U 
					     == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
					    | (0x200U 
					       == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					   | (0x400U 
					      == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					  | (0x800U 
					     == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					 | (0x1000U 
					    == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
					| (0x2000U 
					   == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				       | (0x4000U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) 
				      | (0x8000U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)))
				      ? ((0x100U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 0x200U : 
					 ((0x200U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					   ? 0x400U
					   : ((0x400U 
					       == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0x800U
					       : ((0x800U 
						   == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0x1000U
						   : 
						  ((0x1000U 
						    == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0x2000U
						    : 
						   ((0x2000U 
						     == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0x4000U
						     : 
						    ((0x4000U 
						      == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0x8000U
						      : 1U)))))))
				      : 0U));
}

void Vusqrt::_settle__TOP__9(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_settle__TOP__9\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_6_4_fu_690_p5 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 4U) | 
					 ((8U & ((~ (IData)(vlTOPp->v__DOT__tmp_8_2_reg_3118)) 
						 << 3U)) 
					  | (4U & (
						   (~ (IData)(vlTOPp->v__DOT__tmp_8_3_fu_631_p2)) 
						   << 2U))));
    vlTOPp->v__DOT__tmp_13_fu_671_p3 = (0x3fffffffU 
					& ((IData)(vlTOPp->v__DOT__tmp_8_3_fu_631_p2)
					    ? ((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_9_fu_595_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_9_cast_reg_3124))
					    : (((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_9_fu_595_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_9_cast_reg_3124)) 
					       - (1U 
						  | (IData)(vlTOPp->v__DOT__tmp_6_3_fu_612_p4)))));
    vlTOPp->v__DOT__tmp_21_fu_827_p3 = (0x3fffffffU 
					& ((IData)(vlTOPp->v__DOT__tmp_8_5_fu_787_p2)
					    ? ((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_17_fu_749_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_1_cast_reg_3148))
					    : (((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_17_fu_749_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_1_cast_reg_3148)) 
					       - (1U 
						  | (IData)(vlTOPp->v__DOT__tmp_6_5_fu_766_p6)))));
    vlTOPp->v__DOT__tmp_6_6_fu_846_p7 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 6U) | 
					 (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					   << 5U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					    << 4U) 
					   | ((8U & 
					       ((~ (IData)(vlTOPp->v__DOT__tmp_8_4_reg_3287)) 
						<< 3U)) 
					      | (4U 
						 & ((~ (IData)(vlTOPp->v__DOT__tmp_8_5_fu_787_p2)) 
						    << 2U))))));
    vlTOPp->v__DOT__tmp_29_fu_987_p3 = (0x3fffffffU 
					& ((IData)(vlTOPp->v__DOT__tmp_8_7_fu_947_p2)
					    ? ((0x3ffffffcU 
						& (vlTOPp->v__DOT__tmp_25_fu_907_p3 
						   << 2U)) 
					       | (IData)(vlTOPp->v__DOT__tmp_5_cast_reg_3162))
					    : (((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_25_fu_907_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_5_cast_reg_3162)) 
					       - (1U 
						  | (IData)(vlTOPp->v__DOT__tmp_6_7_fu_924_p8)))));
    vlTOPp->v__DOT__tmp_6_8_fu_1006_p9 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					   << 8U) | 
					  (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					    << 7U) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
					       << 6U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						  << 5U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
						     << 4U) 
						    | ((8U 
							& ((~ (IData)(vlTOPp->v__DOT__tmp_8_6_reg_3363)) 
							   << 3U)) 
						       | (4U 
							  & ((~ (IData)(vlTOPp->v__DOT__tmp_8_7_fu_947_p2)) 
							     << 2U))))))));
    vlTOPp->v__DOT__tmp_37_fu_1151_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_9_fu_1111_p2)
					     ? ((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_33_fu_1069_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_10_cast_reg_3176))
					     : (((0x3ffffffcU 
						  & (vlTOPp->v__DOT__tmp_33_fu_1069_p3 
						     << 2U)) 
						 | (IData)(vlTOPp->v__DOT__tmp_10_cast_reg_3176)) 
						- (1U 
						   | (IData)(vlTOPp->v__DOT__tmp_6_9_fu_1086_p10)))));
    vlTOPp->v__DOT__tmp_6_s_fu_1170_p11 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					    << 0xaU) 
					   | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					       << 9U) 
					      | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						  << 8U) 
						 | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						     << 7U) 
						    | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							<< 6U) 
						       | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							   << 5U) 
							  | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							      << 4U) 
							     | ((8U 
								 & ((~ (IData)(vlTOPp->v__DOT__tmp_8_8_reg_3435)) 
								    << 3U)) 
								| (4U 
								   & ((~ (IData)(vlTOPp->v__DOT__tmp_8_9_fu_1111_p2)) 
								      << 2U))))))))));
    vlTOPp->v__DOT__tmp_45_fu_1319_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_10_fu_1279_p2)
					     ? ((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_41_fu_1235_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_12_cast_reg_3190))
					     : (((0x3ffffffcU 
						  & (vlTOPp->v__DOT__tmp_41_fu_1235_p3 
						     << 2U)) 
						 | (IData)(vlTOPp->v__DOT__tmp_12_cast_reg_3190)) 
						- (1U 
						   | (IData)(vlTOPp->v__DOT__tmp_6_1_fu_1252_p12)))));
    vlTOPp->v__DOT__tmp_6_10_fu_1338_p13 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xcU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xbU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xaU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 9U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 8U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 7U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 6U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 5U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 4U) 
								    | ((8U 
									& ((~ (IData)(vlTOPp->v__DOT__tmp_8_s_reg_3503)) 
									   << 3U)) 
								       | (4U 
									  & ((~ (IData)(vlTOPp->v__DOT__tmp_8_10_fu_1279_p2)) 
									     << 2U))))))))))));
    vlTOPp->v__DOT__tmp_53_fu_1491_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_12_fu_1451_p2)
					     ? ((0x3ffffffcU 
						 & (vlTOPp->v__DOT__tmp_49_fu_1405_p3 
						    << 2U)) 
						| (IData)(vlTOPp->v__DOT__tmp_14_cast_reg_3204))
					     : (((0x3ffffffcU 
						  & (vlTOPp->v__DOT__tmp_49_fu_1405_p3 
						     << 2U)) 
						 | (IData)(vlTOPp->v__DOT__tmp_14_cast_reg_3204)) 
						- (1U 
						   | (IData)(vlTOPp->v__DOT__tmp_6_11_fu_1422_p14)))));
    vlTOPp->v__DOT__tmp_6_12_fu_1510_p15 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0xeU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0xdU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xcU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xbU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xaU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 9U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 8U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 7U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 6U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 5U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 4U) 
									  | ((8U 
									      & ((~ (IData)(vlTOPp->v__DOT__tmp_8_11_reg_3567)) 
										<< 3U)) 
									     | (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_12_fu_1451_p2)) 
										<< 2U))))))))))))));
    vlTOPp->v__DOT__tmp_65_fu_1745_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_15_fu_1713_p2)
					     ? (vlTOPp->v__DOT__tmp_61_reg_3685 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_61_reg_3685 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_14_fu_1682_p17))));
    vlTOPp->v__DOT__tmp_6_15_fu_1761_p18 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x11U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x10U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0xfU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0xeU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xdU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xcU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xbU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xaU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 9U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 8U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 7U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 6U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_15_fu_1713_p2)) 
										<< 2U)))))))))))))))));
    vlTOPp->v__DOT__tmp_73_fu_1908_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_17_fu_1876_p2)
					     ? (vlTOPp->v__DOT__tmp_69_reg_3730 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_69_reg_3730 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_16_fu_1843_p19))));
    vlTOPp->v__DOT__tmp_6_17_fu_1924_p20 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x13U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x12U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x11U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x10U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0xfU) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0xeU) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xdU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xcU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xbU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xaU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 9U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 8U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_17_fu_1876_p2)) 
										<< 2U)))))))))))))))))));
    vlTOPp->v__DOT__tmp_81_fu_2075_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_19_fu_2043_p2)
					     ? (vlTOPp->v__DOT__tmp_77_reg_3771 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_77_reg_3771 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_18_fu_2008_p21))));
    vlTOPp->v__DOT__tmp_6_19_fu_2091_p22 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x15U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x14U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x13U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x12U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x11U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x10U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0xfU) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0xeU) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xdU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xcU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xbU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xaU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_19_fu_2043_p2)) 
										<< 2U)))))))))))))))))))));
    vlTOPp->v__DOT__tmp_89_fu_2246_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_21_fu_2214_p2)
					     ? (vlTOPp->v__DOT__tmp_85_reg_3808 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_85_reg_3808 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_20_fu_2177_p23))));
    vlTOPp->v__DOT__tmp_6_21_fu_2262_p24 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x17U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x16U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x15U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x14U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x13U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x12U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x11U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x10U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0xfU) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0xeU) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xdU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xcU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_21_fu_2214_p2)) 
										<< 2U)))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_97_fu_2421_p3 = (0x3fffffffU 
					 & ((IData)(vlTOPp->v__DOT__tmp_8_23_fu_2389_p2)
					     ? (vlTOPp->v__DOT__tmp_93_reg_3841 
						<< 2U)
					     : ((vlTOPp->v__DOT__tmp_93_reg_3841 
						 << 2U) 
						- (1U 
						   | vlTOPp->v__DOT__tmp_6_22_fu_2350_p25))));
    vlTOPp->v__DOT__tmp_6_23_fu_2437_p26 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x19U) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x18U) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x17U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x16U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x15U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x14U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x13U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x12U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x11U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x10U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0xfU) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0xeU) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_23_fu_2389_p2)) 
										<< 2U)))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_105_fu_2600_p3 = (0x3fffffffU 
					  & ((IData)(vlTOPp->v__DOT__tmp_8_25_fu_2568_p2)
					      ? (vlTOPp->v__DOT__tmp_101_reg_3870 
						 << 2U)
					      : ((vlTOPp->v__DOT__tmp_101_reg_3870 
						  << 2U) 
						 - 
						 (1U 
						  | vlTOPp->v__DOT__tmp_6_24_fu_2527_p27))));
    vlTOPp->v__DOT__tmp_6_25_fu_2616_p28 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1bU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1aU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x19U) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x18U) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x17U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x16U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x15U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x14U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x13U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x12U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x11U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x10U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_25_fu_2568_p2)) 
										<< 2U)))))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_113_fu_2779_p3 = (0x3fffffffU 
					  & ((IData)(vlTOPp->v__DOT__tmp_8_27_fu_2751_p2)
					      ? (vlTOPp->v__DOT__tmp_109_reg_3895 
						 << 2U)
					      : ((vlTOPp->v__DOT__tmp_109_reg_3895 
						  << 2U) 
						 - 
						 (1U 
						  | vlTOPp->v__DOT__tmp_6_26_fu_2708_p29))));
    vlTOPp->v__DOT__tmp_6_27_fu_2795_p30 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					     << 0x1dU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
						<< 0x1cU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						   << 0x1bU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						      << 0x1aU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
							 << 0x19U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							    << 0x18U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							       << 0x17U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
								  << 0x16U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								     << 0x15U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
									<< 0x14U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									   << 0x13U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									      << 0x12U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_27_fu_2751_p2)) 
										<< 2U)))))))))))))))))))))))))))));
    vlTOPp->v__DOT__a_1_s_fu_3028_p32 = (((IData)(vlTOPp->v__DOT__a_1_1_reg_3080) 
					  << 0x1eU) 
					 | (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
					     << 0x1dU) 
					    | (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
						<< 0x1cU) 
					       | (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
						   << 0x1bU) 
						  | (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
						      << 0x1aU) 
						     | (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
							 << 0x19U) 
							| (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
							    << 0x18U) 
							   | (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
							       << 0x17U) 
							      | (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
								  << 0x16U) 
								 | (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
								     << 0x15U) 
								    | (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
									<< 0x14U) 
								       | (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
									   << 0x13U) 
									  | (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
									      << 0x12U) 
									     | (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_26_reg_3902) 
										<< 3U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_27_reg_3909) 
										<< 2U) 
										| ((2U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_29_fu_2930_p2)) 
										<< 1U)) 
										| ((0xfffffffcU 
										& (((IData)(vlTOPp->v__DOT__tmp_8_29_fu_2930_p2)
										 ? 
										(vlTOPp->v__DOT__tmp_117_reg_3916 
										<< 2U)
										 : 
										((0x3ffffffcU 
										& (vlTOPp->v__DOT__tmp_117_reg_3916 
										<< 2U)) 
										- 
										(1U 
										| vlTOPp->v__DOT__tmp_6_28_fu_2889_p31))) 
										<< 2U)) 
										>= 
										(1U 
										| (((IData)(vlTOPp->v__DOT__tmp_177_reg_3218) 
										<< 0x1fU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_2_reg_3223) 
										<< 0x1eU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_3_reg_3255) 
										<< 0x1dU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_4_reg_3303) 
										<< 0x1cU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_5_reg_3333) 
										<< 0x1bU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_6_reg_3379) 
										<< 0x1aU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_7_reg_3407) 
										<< 0x19U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_8_reg_3451) 
										<< 0x18U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_9_reg_3477) 
										<< 0x17U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_s_reg_3519) 
										<< 0x16U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_1_reg_3543) 
										<< 0x15U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_10_reg_3583) 
										<< 0x14U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_11_reg_3605) 
										<< 0x13U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_12_reg_3643) 
										<< 0x12U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_13_reg_3664) 
										<< 0x11U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_14_reg_3692) 
										<< 0x10U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_15_reg_3711) 
										<< 0xfU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_16_reg_3737) 
										<< 0xeU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_17_reg_3754) 
										<< 0xdU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_18_reg_3778) 
										<< 0xcU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_19_reg_3793) 
										<< 0xbU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_20_reg_3815) 
										<< 0xaU) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_21_reg_3828) 
										<< 9U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_22_reg_3848) 
										<< 8U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_23_reg_3859) 
										<< 7U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_24_reg_3877) 
										<< 6U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_25_reg_3886) 
										<< 5U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_26_reg_3902) 
										<< 4U) 
										| (((IData)(vlTOPp->v__DOT__not_tmp_8_27_reg_3909) 
										<< 3U) 
										| (4U 
										& ((~ (IData)(vlTOPp->v__DOT__tmp_8_29_fu_2930_p2)) 
										<< 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->v__DOT__tmp_8_16_fu_1794_p2 = ((vlTOPp->v__DOT__tmp_65_fu_1745_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_15_fu_1761_p18));
    vlTOPp->v__DOT__tmp_8_18_fu_1959_p2 = ((vlTOPp->v__DOT__tmp_73_fu_1908_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_17_fu_1924_p20));
    vlTOPp->v__DOT__tmp_8_20_fu_2128_p2 = ((vlTOPp->v__DOT__tmp_81_fu_2075_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_19_fu_2091_p22));
    vlTOPp->v__DOT__tmp_8_22_fu_2301_p2 = ((vlTOPp->v__DOT__tmp_89_fu_2246_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_21_fu_2262_p24));
    vlTOPp->v__DOT__tmp_8_24_fu_2478_p2 = ((vlTOPp->v__DOT__tmp_97_fu_2421_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_23_fu_2437_p26));
    vlTOPp->v__DOT__tmp_8_26_fu_2659_p2 = ((vlTOPp->v__DOT__tmp_105_fu_2600_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_25_fu_2616_p28));
    vlTOPp->v__DOT__tmp_8_28_fu_2840_p2 = ((vlTOPp->v__DOT__tmp_113_fu_2779_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_27_fu_2795_p30));
    vlTOPp->q_frac = vlTOPp->v__DOT__a_1_s_fu_3028_p32;
    vlTOPp->q_sqrt = vlTOPp->v__DOT__a_1_s_fu_3028_p32;
}

VL_INLINE_OPT void Vusqrt::_sequent__TOP__10(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_sequent__TOP__10\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_8_16_fu_1794_p2 = ((vlTOPp->v__DOT__tmp_65_fu_1745_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_15_fu_1761_p18));
    vlTOPp->v__DOT__tmp_8_18_fu_1959_p2 = ((vlTOPp->v__DOT__tmp_73_fu_1908_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_17_fu_1924_p20));
    vlTOPp->v__DOT__tmp_8_20_fu_2128_p2 = ((vlTOPp->v__DOT__tmp_81_fu_2075_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_19_fu_2091_p22));
    vlTOPp->v__DOT__tmp_8_22_fu_2301_p2 = ((vlTOPp->v__DOT__tmp_89_fu_2246_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_21_fu_2262_p24));
    vlTOPp->v__DOT__tmp_8_24_fu_2478_p2 = ((vlTOPp->v__DOT__tmp_97_fu_2421_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_23_fu_2437_p26));
    vlTOPp->v__DOT__tmp_8_26_fu_2659_p2 = ((vlTOPp->v__DOT__tmp_105_fu_2600_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_25_fu_2616_p28));
    vlTOPp->v__DOT__tmp_8_28_fu_2840_p2 = ((vlTOPp->v__DOT__tmp_113_fu_2779_p3 
					    << 2U) 
					   < (1U | vlTOPp->v__DOT__tmp_6_27_fu_2795_p30));
    vlTOPp->q_frac = vlTOPp->v__DOT__a_1_s_fu_3028_p32;
    vlTOPp->q_sqrt = vlTOPp->v__DOT__a_1_s_fu_3028_p32;
}

void Vusqrt::_eval(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_eval\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vusqrt::_eval_initial(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_eval_initial\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void Vusqrt::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::final\n"); );
    // Variables
    Vusqrt__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vusqrt::_eval_settle(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_eval_settle\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

VL_INLINE_OPT QData Vusqrt::_change_request(Vusqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vusqrt::_change_request\n"); );
    Vusqrt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
