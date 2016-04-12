// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBF_cfb64_encrypt.h for the primary calling header

#include "VBF_cfb64_encrypt.h" // For This
#include "VBF_cfb64_encrypt__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VBF_cfb64_encrypt) {
    VBF_cfb64_encrypt__Syms* __restrict vlSymsp = __VlSymsp = new VBF_cfb64_encrypt__Syms(this, name());
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    in_r_address0 = VL_RAND_RESET_I(6);
    in_r_ce0 = VL_RAND_RESET_I(1);
    in_r_q0 = VL_RAND_RESET_I(8);
    out_r_address0 = VL_RAND_RESET_I(6);
    out_r_ce0 = VL_RAND_RESET_I(1);
    out_r_we0 = VL_RAND_RESET_I(1);
    out_r_d0 = VL_RAND_RESET_I(8);
    length_r = VL_RAND_RESET_I(32);
    ivec_address0 = VL_RAND_RESET_I(3);
    ivec_ce0 = VL_RAND_RESET_I(1);
    ivec_we0 = VL_RAND_RESET_I(1);
    ivec_d0 = VL_RAND_RESET_I(8);
    ivec_q0 = VL_RAND_RESET_I(8);
    ivec_address1 = VL_RAND_RESET_I(3);
    ivec_ce1 = VL_RAND_RESET_I(1);
    ivec_we1 = VL_RAND_RESET_I(1);
    ivec_d1 = VL_RAND_RESET_I(8);
    ivec_q1 = VL_RAND_RESET_I(8);
    num_i = VL_RAND_RESET_I(32);
    num_o = VL_RAND_RESET_I(32);
    num_o_ap_vld = VL_RAND_RESET_I(1);
    encrypt = VL_RAND_RESET_I(32);
    key_P_address0 = VL_RAND_RESET_I(5);
    key_P_ce0 = VL_RAND_RESET_I(1);
    key_P_q0 = VL_RAND_RESET_I(32);
    key_P_address1 = VL_RAND_RESET_I(5);
    key_P_ce1 = VL_RAND_RESET_I(1);
    key_P_q1 = VL_RAND_RESET_I(32);
    key_S_address0 = VL_RAND_RESET_I(10);
    key_S_ce0 = VL_RAND_RESET_I(1);
    key_S_q0 = VL_RAND_RESET_I(32);
    key_S_address1 = VL_RAND_RESET_I(10);
    key_S_ce1 = VL_RAND_RESET_I(1);
    key_S_q1 = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(24);
    v__DOT__reg_383 = VL_RAND_RESET_I(8);
    v__DOT__reg_387 = VL_RAND_RESET_I(8);
    v__DOT__reg_391 = VL_RAND_RESET_I(8);
    v__DOT__reg_395 = VL_RAND_RESET_I(8);
    v__DOT__reg_399 = VL_RAND_RESET_I(8);
    v__DOT__reg_403 = VL_RAND_RESET_I(8);
    v__DOT__reg_407 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done = VL_RAND_RESET_I(1);
    v__DOT__reg_412 = VL_RAND_RESET_I(8);
    v__DOT__reg_417 = VL_RAND_RESET_I(8);
    v__DOT__reg_422 = VL_RAND_RESET_I(8);
    v__DOT__ivec_addr_reg_605 = VL_RAND_RESET_I(3);
    v__DOT__iv_reg_619 = VL_RAND_RESET_I(3);
    v__DOT__iv_1_reg_624 = VL_RAND_RESET_I(3);
    v__DOT__iv_2_reg_629 = VL_RAND_RESET_I(3);
    v__DOT__iv_3_reg_634 = VL_RAND_RESET_I(3);
    v__DOT__iv_4_reg_639 = VL_RAND_RESET_I(3);
    v__DOT__iv_5_reg_644 = VL_RAND_RESET_I(3);
    v__DOT__iv_6_reg_649 = VL_RAND_RESET_I(3);
    v__DOT__in_addr_1_reg_654 = VL_RAND_RESET_I(6);
    v__DOT__out_addr_1_reg_659 = VL_RAND_RESET_I(6);
    v__DOT__l_9_reg_664 = VL_RAND_RESET_I(32);
    v__DOT__p_rec4_reg_672 = VL_RAND_RESET_I(32);
    v__DOT__tmp_178_reg_677 = VL_RAND_RESET_I(1);
    v__DOT__v0_reg_681 = VL_RAND_RESET_I(32);
    v__DOT__v1_reg_686 = VL_RAND_RESET_I(32);
    v__DOT__tmp_199_reg_691 = VL_RAND_RESET_I(8);
    v__DOT__tmp_200_reg_696 = VL_RAND_RESET_I(8);
    v__DOT__ivec_addr_8_reg_701 = VL_RAND_RESET_I(3);
    v__DOT__n_4_cast_reg_707 = VL_RAND_RESET_I(32);
    v__DOT__in_addr_reg_712 = VL_RAND_RESET_I(6);
    v__DOT__out_addr_reg_717 = VL_RAND_RESET_I(6);
    v__DOT__l_reg_722 = VL_RAND_RESET_I(32);
    v__DOT__p_rec_reg_730 = VL_RAND_RESET_I(32);
    v__DOT__tmp_177_reg_735 = VL_RAND_RESET_I(1);
    v__DOT__v0_2_reg_739 = VL_RAND_RESET_I(32);
    v__DOT__v1_2_reg_744 = VL_RAND_RESET_I(32);
    v__DOT__tmp_192_reg_749 = VL_RAND_RESET_I(8);
    v__DOT__tmp_196_reg_754 = VL_RAND_RESET_I(8);
    v__DOT__ivec_addr27_reg_759 = VL_RAND_RESET_I(3);
    v__DOT__n_3_cast_reg_765 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1 = VL_RAND_RESET_I(32);
    v__DOT__n1_reg_223 = VL_RAND_RESET_I(32);
    v__DOT__l9_reg_233 = VL_RAND_RESET_I(32);
    v__DOT__p_01_rec_reg_242 = VL_RAND_RESET_I(32);
    v__DOT__n_1_reg_253 = VL_RAND_RESET_I(32);
    v__DOT__l_1_reg_263 = VL_RAND_RESET_I(32);
    v__DOT__p_12_rec_reg_272 = VL_RAND_RESET_I(32);
    v__DOT__n_2_reg_283 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg = VL_RAND_RESET_I(1);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(24);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm = VL_RAND_RESET_Q(50);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__reg_778 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_reg_2199 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_176_reg_2204 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_7_cast_reg_2219 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_10_reg_2239 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_reg_2244 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_177_reg_2249 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_23_cast_reg_2264 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp1_reg_2284 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_reg_2289 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_178_reg_2294 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_39_cast_reg_2309 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp2_reg_2329 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_reg_2334 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_179_reg_2339 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_55_cast_reg_2354 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp3_reg_2374 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_reg_2379 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_180_reg_2384 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_71_cast_reg_2399 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp4_reg_2419 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_reg_2424 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_181_reg_2429 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_87_cast_reg_2444 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp5_reg_2464 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_reg_2469 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_182_reg_2474 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_103_cast_reg_2489 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp6_reg_2509 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_reg_2514 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_reg_2519 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_119_cast_reg_2534 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp7_reg_2554 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_reg_2559 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_184_reg_2564 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_135_cast_reg_2579 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp8_reg_2599 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_reg_2604 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_185_reg_2609 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_151_cast_reg_2624 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp9_reg_2644 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_reg_2649 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_186_reg_2654 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_167_cast_reg_2669 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp10_reg_2689 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_reg_2694 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_187_reg_2699 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_cast_reg_2714 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp11_reg_2734 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_reg_2739 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_188_reg_2744 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_199_cast_reg_2759 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp12_reg_2779 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_reg_2784 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_189_reg_2789 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_215_cast_reg_2804 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp13_reg_2824 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_reg_2829 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_190_reg_2834 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_231_cast_reg_2849 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp14_reg_2869 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_reg_2874 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_191_reg_2879 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_247_cast_reg_2894 = VL_RAND_RESET_I(8);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp15_reg_2914 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_8_fu_2177_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_8_fu_2172_p2 = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_0_preg = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_1_preg = VL_RAND_RESET_I(32);
    v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_NS_fsm = VL_RAND_RESET_Q(50);
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void VBF_cfb64_encrypt::__Vconfigure(VBF_cfb64_encrypt__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBF_cfb64_encrypt::~VBF_cfb64_encrypt() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VBF_cfb64_encrypt::eval() {
    VBF_cfb64_encrypt__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VBF_cfb64_encrypt::eval\n"); );
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

void VBF_cfb64_encrypt::_eval_initial_loop(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
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

void VBF_cfb64_encrypt::_settle__TOP__1(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_settle__TOP__1\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->key_P_address1 = 0x11U;
    vlTOPp->out_r_d0 = ((IData)(vlTOPp->ivec_q0) ^ (IData)(vlTOPp->in_r_q0));
}

void VBF_cfb64_encrypt::_initial__TOP__2(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_initial__TOP__2\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at BF_cfb64_encrypt_BF_encrypt.v:559
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_1_preg = 0U;
    // INITIAL at BF_cfb64_encrypt_BF_encrypt.v:558
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_0_preg = 0U;
    // INITIAL at BF_cfb64_encrypt.v:312
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg = 0U;
}

VL_INLINE_OPT void VBF_cfb64_encrypt::_combo__TOP__3(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_combo__TOP__3\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out_r_d0 = ((IData)(vlTOPp->ivec_q0) ^ (IData)(vlTOPp->in_r_q0));
}

VL_INLINE_OPT void VBF_cfb64_encrypt::_sequent__TOP__4(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_sequent__TOP__4\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__v__DOT__l_9_reg_664,31,0);
    VL_SIG(__Vdly__v__DOT__p_rec4_reg_672,31,0);
    VL_SIG(__Vdly__v__DOT__l_reg_722,31,0);
    VL_SIG(__Vdly__v__DOT__p_rec_reg_730,31,0);
    VL_SIG(__Vdly__v__DOT__n_3_cast_reg_765,31,0);
    VL_SIG(__Vdly__v__DOT__n_4_cast_reg_707,31,0);
    // Body
    __Vdly__v__DOT__n_3_cast_reg_765 = vlTOPp->v__DOT__n_3_cast_reg_765;
    __Vdly__v__DOT__n_4_cast_reg_707 = vlTOPp->v__DOT__n_4_cast_reg_707;
    __Vdly__v__DOT__l_9_reg_664 = vlTOPp->v__DOT__l_9_reg_664;
    __Vdly__v__DOT__p_rec4_reg_672 = vlTOPp->v__DOT__p_rec4_reg_672;
    __Vdly__v__DOT__l_reg_722 = vlTOPp->v__DOT__l_reg_722;
    __Vdly__v__DOT__p_rec_reg_730 = vlTOPp->v__DOT__p_rec_reg_730;
    // ALWAYS at BF_cfb64_encrypt.v:1313
    vlTOPp->v__DOT__ivec_addr_reg_605 = 0U;
    // ALWAYS at BF_cfb64_encrypt.v:1314
    vlTOPp->v__DOT__iv_reg_619 = 1U;
    // ALWAYS at BF_cfb64_encrypt.v:1315
    vlTOPp->v__DOT__iv_1_reg_624 = 2U;
    // ALWAYS at BF_cfb64_encrypt.v:1316
    vlTOPp->v__DOT__iv_2_reg_629 = 3U;
    // ALWAYS at BF_cfb64_encrypt.v:1317
    vlTOPp->v__DOT__iv_3_reg_634 = 4U;
    // ALWAYS at BF_cfb64_encrypt.v:1318
    vlTOPp->v__DOT__iv_4_reg_639 = 5U;
    // ALWAYS at BF_cfb64_encrypt.v:1319
    vlTOPp->v__DOT__iv_5_reg_644 = 6U;
    // ALWAYS at BF_cfb64_encrypt.v:1320
    vlTOPp->v__DOT__iv_6_reg_649 = 7U;
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:721
    if ((1U & ((((((((((((((((IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
				      >> 2U)) | (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 5U))) 
			    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
				       >> 8U))) | (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0xbU))) 
			  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
				     >> 0xeU))) | (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0x11U))) 
			| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
				   >> 0x14U))) | (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 0x17U))) 
		      | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
				 >> 0x1aU))) | (IData)(
						       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							>> 0x1dU))) 
		    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			       >> 0x20U))) | (IData)(
						     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						      >> 0x23U))) 
		  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			     >> 0x26U))) | (IData)(
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						    >> 0x29U))) 
		| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			   >> 0x2cU))) | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						  >> 0x2fU))))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__reg_778 
	    = (vlTOPp->key_S_q1 + vlTOPp->key_S_q0);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:583
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_1_preg = 0U;
    } else {
	if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			   >> 0x31U)))) {
	    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_1_preg 
		= vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_8_fu_2172_p2;
	}
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:573
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_0_preg = 0U;
    } else {
	if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			   >> 0x31U)))) {
	    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_0_preg 
		= vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_8_fu_2177_p2;
	}
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:817
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 3U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_10_reg_2239 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2;
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:705
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x2eU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_reg_2874 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_191_reg_2879 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_247_cast_reg_2894 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt.v:516
    if (((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
	 & (vlTOPp->v__DOT__ap_CS_fsm >> 0x11U))) {
	vlTOPp->v__DOT__tmp_192_reg_749 = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0);
	vlTOPp->v__DOT__tmp_196_reg_754 = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1);
    }
    // ALWAYS at BF_cfb64_encrypt.v:523
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 6U) & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done))) {
	vlTOPp->v__DOT__tmp_199_reg_691 = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0);
	vlTOPp->v__DOT__tmp_200_reg_696 = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1);
    }
    // ALWAYS at BF_cfb64_encrypt.v:495
    if ((((vlTOPp->v__DOT__ap_CS_fsm >> 6U) & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)) 
	 | ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
	    & (vlTOPp->v__DOT__ap_CS_fsm >> 0x11U)))) {
	vlTOPp->v__DOT__reg_407 = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 
					    >> 8U));
	vlTOPp->v__DOT__reg_412 = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1 
					    >> 0x18U));
	vlTOPp->v__DOT__reg_417 = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1 
					    >> 0x10U));
	vlTOPp->v__DOT__reg_422 = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1 
					    >> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:757
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x30U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp15_reg_2914 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_reg_2829 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:727
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x21U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp10_reg_2689 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_reg_2604 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:733
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x24U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp11_reg_2734 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_reg_2649 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:739
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x27U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp12_reg_2779 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_reg_2694 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:745
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x2aU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp13_reg_2824 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_reg_2739 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:751
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x2dU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp14_reg_2869 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_reg_2784 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:775
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0xcU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp3_reg_2374 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_reg_2289 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:781
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0xfU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp4_reg_2419 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_reg_2334 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:787
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x12U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp5_reg_2464 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_reg_2379 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:793
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x15U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp6_reg_2509 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_reg_2424 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:799
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x18U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp7_reg_2554 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_reg_2469 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:805
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x1bU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp8_reg_2599 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_reg_2514 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:811
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x1eU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp9_reg_2644 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_reg_2559 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:763
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 6U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp1_reg_2284 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_reg_2199 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:769
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 9U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp2_reg_2329 
	    = (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_reg_2244 
	       ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2);
    }
    // ALWAYS at BF_cfb64_encrypt.v:374
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg = 0U;
    } else {
	if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 5U) 
		   | (vlTOPp->v__DOT__ap_CS_fsm >> 0x10U)))) {
	    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg = 1U;
	} else {
	    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			       >> 0x31U)))) {
		vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg = 0U;
	    }
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:1322
    __Vdly__v__DOT__n_3_cast_reg_765 = (7U & __Vdly__v__DOT__n_3_cast_reg_765);
    // ALWAYS at BF_cfb64_encrypt.v:1321
    __Vdly__v__DOT__n_4_cast_reg_707 = (7U & __Vdly__v__DOT__n_4_cast_reg_707);
    // ALWAYS at BF_cfb64_encrypt.v:460
    if ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__ivec_addr27_reg_759 = (7U & (IData)(
							    VL_EXTENDS_QI(64,32, vlTOPp->v__DOT__n_1_reg_253)));
	__Vdly__v__DOT__n_3_cast_reg_765 = ((0xfffffff8U 
					     & __Vdly__v__DOT__n_3_cast_reg_765) 
					    | (7U & 
					       ((IData)(1U) 
						+ vlTOPp->v__DOT__n_1_reg_253)));
    }
    // ALWAYS at BF_cfb64_encrypt.v:467
    if ((0x200U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__ivec_addr_8_reg_701 = (7U & (IData)(
							    VL_EXTENDS_QI(64,32, vlTOPp->v__DOT__n1_reg_223)));
	__Vdly__v__DOT__n_4_cast_reg_707 = ((0xfffffff8U 
					     & __Vdly__v__DOT__n_4_cast_reg_707) 
					    | (7U & 
					       ((IData)(1U) 
						+ vlTOPp->v__DOT__n1_reg_223)));
    }
    // ALWAYS at BF_cfb64_encrypt.v:442
    if ((2U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__in_addr_1_reg_654 = (0x3fU 
					     & (IData)((QData)((IData)(vlTOPp->v__DOT__p_01_rec_reg_242))));
	__Vdly__v__DOT__l_9_reg_664 = ((IData)(0xffffffffU) 
				       + vlTOPp->v__DOT__l9_reg_233);
	vlTOPp->v__DOT__out_addr_1_reg_659 = (0x3fU 
					      & (IData)((QData)((IData)(vlTOPp->v__DOT__p_01_rec_reg_242))));
	__Vdly__v__DOT__p_rec4_reg_672 = ((IData)(1U) 
					  + vlTOPp->v__DOT__p_01_rec_reg_242);
    }
    // ALWAYS at BF_cfb64_encrypt.v:451
    if ((0x1000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__in_addr_reg_712 = (0x3fU & (IData)((QData)((IData)(vlTOPp->v__DOT__p_12_rec_reg_272))));
	__Vdly__v__DOT__l_reg_722 = ((IData)(0xffffffffU) 
				     + vlTOPp->v__DOT__l_1_reg_263);
	vlTOPp->v__DOT__out_addr_reg_717 = (0x3fU & (IData)((QData)((IData)(vlTOPp->v__DOT__p_12_rec_reg_272))));
	__Vdly__v__DOT__p_rec_reg_730 = ((IData)(1U) 
					 + vlTOPp->v__DOT__p_12_rec_reg_272);
    }
    // ALWAYS at BF_cfb64_encrypt.v:504
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 0xcU) & (0U 
						!= vlTOPp->v__DOT__l_1_reg_263))) {
	vlTOPp->v__DOT__tmp_177_reg_735 = (0U == vlTOPp->v__DOT__n_1_reg_253);
    }
    // ALWAYS at BF_cfb64_encrypt.v:510
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0U != vlTOPp->v__DOT__l9_reg_233))) {
	vlTOPp->v__DOT__tmp_178_reg_677 = (0U == vlTOPp->v__DOT__n1_reg_223);
    }
    // ALWAYS at BF_cfb64_encrypt.v:418
    if (((vlTOPp->v__DOT__ap_CS_fsm >> 1U) & (0U == vlTOPp->v__DOT__l9_reg_233))) {
	vlTOPp->v__DOT__n_2_reg_283 = vlTOPp->v__DOT__n1_reg_223;
    } else {
	if (((vlTOPp->v__DOT__ap_CS_fsm >> 0xcU) & 
	     (0U == vlTOPp->v__DOT__l_1_reg_263))) {
	    vlTOPp->v__DOT__n_2_reg_283 = vlTOPp->v__DOT__n_1_reg_253;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:530
    if ((0x10000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__v0_2_reg_739 = (((IData)(vlTOPp->v__DOT__reg_383) 
					 << 0x18U) 
					| (((IData)(vlTOPp->v__DOT__reg_387) 
					    << 0x10U) 
					   | (((IData)(vlTOPp->v__DOT__reg_391) 
					       << 8U) 
					      | (IData)(vlTOPp->v__DOT__reg_395))));
	vlTOPp->v__DOT__v1_2_reg_744 = (((IData)(vlTOPp->v__DOT__reg_399) 
					 << 0x18U) 
					| (((IData)(vlTOPp->v__DOT__reg_403) 
					    << 0x10U) 
					   | (((IData)(vlTOPp->ivec_q0) 
					       << 8U) 
					      | (IData)(vlTOPp->ivec_q1))));
    }
    // ALWAYS at BF_cfb64_encrypt.v:537
    if ((0x20U & vlTOPp->v__DOT__ap_CS_fsm)) {
	vlTOPp->v__DOT__v0_reg_681 = (((IData)(vlTOPp->v__DOT__reg_383) 
				       << 0x18U) | 
				      (((IData)(vlTOPp->v__DOT__reg_387) 
					<< 0x10U) | 
				       (((IData)(vlTOPp->v__DOT__reg_391) 
					 << 8U) | (IData)(vlTOPp->v__DOT__reg_395))));
	vlTOPp->v__DOT__v1_reg_686 = (((IData)(vlTOPp->v__DOT__reg_399) 
				       << 0x18U) | 
				      (((IData)(vlTOPp->v__DOT__reg_403) 
					<< 0x10U) | 
				       (((IData)(vlTOPp->ivec_q0) 
					 << 8U) | (IData)(vlTOPp->ivec_q1))));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:641
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x2bU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_reg_2829 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_190_reg_2834 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_231_cast_reg_2849 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:681
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x1cU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_reg_2604 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_151_cast_reg_2624 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 
			>> 8U));
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_185_reg_2609 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:625
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x1fU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_reg_2649 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_167_cast_reg_2669 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 
			>> 8U));
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_186_reg_2654 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:689
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x22U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_reg_2694 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_cast_reg_2714 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 
			>> 8U));
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_187_reg_2699 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:633
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x25U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_reg_2739 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_188_reg_2744 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_199_cast_reg_2759 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:697
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x28U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_reg_2784 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_189_reg_2789 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_215_cast_reg_2804 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:593
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 7U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_reg_2289 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_178_reg_2294 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_39_cast_reg_2309 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:657
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0xaU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_reg_2334 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_179_reg_2339 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_55_cast_reg_2354 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:601
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0xdU)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_reg_2379 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_180_reg_2384 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_71_cast_reg_2399 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:665
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x10U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_reg_2424 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_181_reg_2429 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_87_cast_reg_2444 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:609
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x13U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_reg_2469 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_103_cast_reg_2489 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 
			>> 8U));
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_182_reg_2474 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:673
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x16U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_reg_2514 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_119_cast_reg_2534 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 
			>> 8U));
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_reg_2519 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:617
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 0x19U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_reg_2559 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_135_cast_reg_2579 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 
			>> 8U));
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_184_reg_2564 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2);
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:649
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 1U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_reg_2199 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_176_reg_2204 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_7_cast_reg_2219 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:713
    if ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
		       >> 4U)))) {
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_reg_2244 
	    = vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2;
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_177_reg_2249 
	    = (0xffU & vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2);
	vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_23_cast_reg_2264 
	    = (0xffU & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 
			>> 8U));
    }
    // ALWAYS at BF_cfb64_encrypt.v:426
    if (((vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start)) 
	 & (0U != vlTOPp->encrypt))) {
	vlTOPp->v__DOT__p_01_rec_reg_242 = 0U;
    } else {
	if ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__p_01_rec_reg_242 = vlTOPp->v__DOT__p_rec4_reg_672;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:434
    if (((vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start)) 
	 & (0U == vlTOPp->encrypt))) {
	vlTOPp->v__DOT__p_12_rec_reg_272 = 0U;
    } else {
	if ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__p_12_rec_reg_272 = vlTOPp->v__DOT__p_rec_reg_730;
	}
    }
    vlTOPp->num_o = vlTOPp->v__DOT__n_2_reg_283;
    // ALWAYS at BF_cfb64_encrypt.v:386
    if (((vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start)) 
	 & (0U != vlTOPp->encrypt))) {
	vlTOPp->v__DOT__l9_reg_233 = vlTOPp->length_r;
    } else {
	if ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__l9_reg_233 = vlTOPp->v__DOT__l_9_reg_664;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:402
    if (((vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start)) 
	 & (0U != vlTOPp->encrypt))) {
	vlTOPp->v__DOT__n1_reg_223 = vlTOPp->num_i;
    } else {
	if ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__n1_reg_223 = vlTOPp->v__DOT__n_4_cast_reg_707;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:394
    if (((vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start)) 
	 & (0U == vlTOPp->encrypt))) {
	vlTOPp->v__DOT__l_1_reg_263 = vlTOPp->length_r;
    } else {
	if ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__l_1_reg_263 = vlTOPp->v__DOT__l_reg_722;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:410
    if (((vlTOPp->v__DOT__ap_CS_fsm & (IData)(vlTOPp->ap_start)) 
	 & (0U == vlTOPp->encrypt))) {
	vlTOPp->v__DOT__n_1_reg_253 = vlTOPp->num_i;
    } else {
	if ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)) {
	    vlTOPp->v__DOT__n_1_reg_253 = vlTOPp->v__DOT__n_3_cast_reg_765;
	}
    }
    // ALWAYS at BF_cfb64_encrypt.v:474
    if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 2U) | 
	       (vlTOPp->v__DOT__ap_CS_fsm >> 0xdU)))) {
	vlTOPp->v__DOT__reg_383 = vlTOPp->ivec_q0;
	vlTOPp->v__DOT__reg_387 = vlTOPp->ivec_q1;
    }
    // ALWAYS at BF_cfb64_encrypt.v:481
    if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 3U) | 
	       (vlTOPp->v__DOT__ap_CS_fsm >> 0xeU)))) {
	vlTOPp->v__DOT__reg_391 = vlTOPp->ivec_q0;
	vlTOPp->v__DOT__reg_395 = vlTOPp->ivec_q1;
    }
    // ALWAYS at BF_cfb64_encrypt.v:488
    if ((1U & ((vlTOPp->v__DOT__ap_CS_fsm >> 4U) | 
	       (vlTOPp->v__DOT__ap_CS_fsm >> 0xfU)))) {
	vlTOPp->v__DOT__reg_399 = vlTOPp->ivec_q0;
	vlTOPp->v__DOT__reg_403 = vlTOPp->ivec_q1;
    }
    vlTOPp->v__DOT__p_rec4_reg_672 = __Vdly__v__DOT__p_rec4_reg_672;
    vlTOPp->v__DOT__p_rec_reg_730 = __Vdly__v__DOT__p_rec_reg_730;
    vlTOPp->v__DOT__l_9_reg_664 = __Vdly__v__DOT__l_9_reg_664;
    vlTOPp->v__DOT__n_4_cast_reg_707 = __Vdly__v__DOT__n_4_cast_reg_707;
    vlTOPp->v__DOT__l_reg_722 = __Vdly__v__DOT__l_reg_722;
    vlTOPp->v__DOT__n_3_cast_reg_765 = __Vdly__v__DOT__n_3_cast_reg_765;
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:565
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->ap_rst) ? VL_ULL(1) : vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_NS_fsm);
    // ALWAYS at BF_cfb64_encrypt.v:366
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : vlTOPp->v__DOT__ap_NS_fsm);
}

VL_INLINE_OPT void VBF_cfb64_encrypt::_combo__TOP__5(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_combo__TOP__5\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2 
	= (vlTOPp->key_S_q1 + (vlTOPp->key_S_q0 ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__reg_778));
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_8_fu_2177_p2 
	= (vlTOPp->key_P_q1 ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_reg_2874);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_8_fu_2172_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp15_reg_2914 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp14_reg_2869 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp13_reg_2824 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp8_reg_2599 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp9_reg_2644 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp10_reg_2689 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp11_reg_2734 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp12_reg_2779 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp1_reg_2284 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp2_reg_2329 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp3_reg_2374 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp4_reg_2419 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp5_reg_2464 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp6_reg_2509 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp7_reg_2554 
	   ^ vlTOPp->key_P_q0);
}

void VBF_cfb64_encrypt::_settle__TOP__6(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_settle__TOP__6\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2 
	= (vlTOPp->key_S_q1 + (vlTOPp->key_S_q0 ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__reg_778));
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_8_fu_2177_p2 
	= (vlTOPp->key_P_q1 ^ vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_reg_2874);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_8_fu_2172_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp15_reg_2914 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp14_reg_2869 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->num_o = vlTOPp->v__DOT__n_2_reg_283;
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp13_reg_2824 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp8_reg_2599 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp9_reg_2644 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp10_reg_2689 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp11_reg_2734 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp12_reg_2779 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp1_reg_2284 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp2_reg_2329 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp3_reg_2374 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp4_reg_2419 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp5_reg_2464 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp6_reg_2509 
	   ^ vlTOPp->key_P_q0);
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 
	= (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp7_reg_2554 
	   ^ vlTOPp->key_P_q0);
}

void VBF_cfb64_encrypt::_initial__TOP__7(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_initial__TOP__7\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at BF_cfb64_encrypt_BF_encrypt.v:195
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm = VL_ULL(1);
    // INITIAL at BF_cfb64_encrypt.v:183
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

VL_INLINE_OPT void VBF_cfb64_encrypt::_sequent__TOP__8(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_sequent__TOP__8\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->key_P_address0 = ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x30U)))
			       ? 0x10U : ((1U & (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0x2dU)))
					   ? 0xfU : 
					  ((1U & (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 0x2aU)))
					    ? 0xeU : 
					   ((1U & (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0x27U)))
					     ? 0xdU
					     : ((1U 
						 & (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 0x24U)))
						 ? 0xcU
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x21U)))
						  ? 0xbU
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x1eU)))
						   ? 0xaU
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x1bU)))
						    ? 9U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x18U)))
						     ? 8U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x15U)))
						      ? 7U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x12U)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0xfU)))
						        ? 5U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0xcU)))
							 ? 4U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 9U)))
							  ? 3U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 6U)))
							   ? 2U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 3U)))
							    ? 1U
							    : 0U))))))))))))))));
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:1474
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_NS_fsm 
	= (((((((((VL_ULL(1) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
		  | (VL_ULL(2) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		 | (VL_ULL(4) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		| (VL_ULL(8) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	       | (VL_ULL(0x10) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	      | (VL_ULL(0x20) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	     | (VL_ULL(0x40) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	    | (VL_ULL(0x80) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
	    ? ((VL_ULL(1) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
	        ? ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg)
		    ? VL_ULL(2) : VL_ULL(1)) : ((VL_ULL(2) 
						 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						 ? VL_ULL(4)
						 : 
						((VL_ULL(4) 
						  == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						  ? VL_ULL(8)
						  : 
						 ((VL_ULL(8) 
						   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						   ? VL_ULL(0x10)
						   : 
						  ((VL_ULL(0x10) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x20)
						    : 
						   ((VL_ULL(0x20) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x40)
						     : 
						    ((VL_ULL(0x40) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x80)
						      : VL_ULL(0x100))))))))
	    : (((((((((VL_ULL(0x100) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
		      | (VL_ULL(0x200) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		   | (VL_ULL(0x1000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		  | (VL_ULL(0x2000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		 | (VL_ULL(0x4000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		| (VL_ULL(0x8000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
	        ? ((VL_ULL(0x100) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
		    ? VL_ULL(0x200) : ((VL_ULL(0x200) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(0x400)
				        : ((VL_ULL(0x400) 
					    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					    ? VL_ULL(0x800)
					    : ((VL_ULL(0x800) 
						== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					        ? VL_ULL(0x1000)
					        : (
						   (VL_ULL(0x1000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x2000)
						    : 
						   ((VL_ULL(0x2000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x4000)
						     : 
						    ((VL_ULL(0x4000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x8000)
						      : VL_ULL(0x10000))))))))
	        : (((((((((VL_ULL(0x10000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
			  | (VL_ULL(0x20000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		       | (VL_ULL(0x100000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		      | (VL_ULL(0x200000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
		    ? ((VL_ULL(0x10000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
		        ? VL_ULL(0x20000) : ((VL_ULL(0x20000) 
					      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					      ? VL_ULL(0x40000)
					      : ((VL_ULL(0x40000) 
						  == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						  ? VL_ULL(0x80000)
						  : 
						 ((VL_ULL(0x80000) 
						   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						   ? VL_ULL(0x100000)
						   : 
						  ((VL_ULL(0x100000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000)
						    : 
						   ((VL_ULL(0x200000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000)
						     : 
						    ((VL_ULL(0x400000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000)
						      : VL_ULL(0x1000000))))))))
		    : (((((((((VL_ULL(0x1000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
			      | (VL_ULL(0x2000000) 
				 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			   | (VL_ULL(0x10000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			  | (VL_ULL(0x20000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
		        ? ((VL_ULL(0x1000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
			    ? VL_ULL(0x2000000) : (
						   (VL_ULL(0x2000000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000)
						    : 
						   ((VL_ULL(0x4000000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000)
						     : 
						    ((VL_ULL(0x8000000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x10000000)
						      : 
						     ((VL_ULL(0x10000000) 
						       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						       ? VL_ULL(0x20000000)
						       : 
						      ((VL_ULL(0x20000000) 
							== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						        ? VL_ULL(0x40000000)
						        : 
						       ((VL_ULL(0x40000000) 
							 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
							 ? VL_ULL(0x80000000)
							 : VL_ULL(0x100000000))))))))
		        : (((((((((VL_ULL(0x100000000) 
				   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
				  | (VL_ULL(0x200000000) 
				     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				 | (VL_ULL(0x400000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				| (VL_ULL(0x800000000) 
				   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			       | (VL_ULL(0x1000000000) 
				  == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			      | (VL_ULL(0x2000000000) 
				 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000000) 
				== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000000) 
			       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
			    ? ((VL_ULL(0x100000000) 
				== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
			        ? VL_ULL(0x200000000)
			        : ((VL_ULL(0x200000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				    ? VL_ULL(0x400000000)
				    : ((VL_ULL(0x400000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(0x800000000)
				        : ((VL_ULL(0x800000000) 
					    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					    ? VL_ULL(0x1000000000)
					    : ((VL_ULL(0x1000000000) 
						== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					        ? VL_ULL(0x2000000000)
					        : (
						   (VL_ULL(0x2000000000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000000)
						    : 
						   ((VL_ULL(0x4000000000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000000)
						     : VL_ULL(0x10000000000))))))))
			    : (((((((((VL_ULL(0x10000000000) 
				       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
				      | (VL_ULL(0x20000000000) 
					 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				     | (VL_ULL(0x40000000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				    | (VL_ULL(0x80000000000) 
				       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				   | (VL_ULL(0x100000000000) 
				      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				  | (VL_ULL(0x200000000000) 
				     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				 | (VL_ULL(0x400000000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				| (VL_ULL(0x800000000000) 
				   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
			        ? ((VL_ULL(0x10000000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				    ? VL_ULL(0x20000000000)
				    : ((VL_ULL(0x20000000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(0x40000000000)
				        : ((VL_ULL(0x40000000000) 
					    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					    ? VL_ULL(0x80000000000)
					    : ((VL_ULL(0x80000000000) 
						== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					        ? VL_ULL(0x100000000000)
					        : (
						   (VL_ULL(0x100000000000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000000000)
						    : 
						   ((VL_ULL(0x200000000000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000000000)
						     : 
						    ((VL_ULL(0x400000000000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000000000)
						      : VL_ULL(0x1000000000000))))))))
			        : ((VL_ULL(0x1000000000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				    ? VL_ULL(0x2000000000000)
				    : ((VL_ULL(0x2000000000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(1)
				        : VL_ULL(0)))))))));
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:823
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		 | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			    >> 0x31U))));
    // ALWAYS at BF_cfb64_encrypt.v:544
    vlTOPp->ap_done = (1U & (vlTOPp->v__DOT__ap_CS_fsm 
			     >> 0x17U));
    // ALWAYS at BF_cfb64_encrypt.v:560
    vlTOPp->ap_ready = (1U & (vlTOPp->v__DOT__ap_CS_fsm 
			      >> 0x17U));
    // ALWAYS at BF_cfb64_encrypt.v:790
    vlTOPp->in_r_ce0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0xaU) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x15U)));
    // ALWAYS at BF_cfb64_encrypt.v:934
    vlTOPp->num_o_ap_vld = (1U & (vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x17U));
    // ALWAYS at BF_cfb64_encrypt.v:952
    vlTOPp->out_r_ce0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
				>> 0xbU) | (vlTOPp->v__DOT__ap_CS_fsm 
					    >> 0x16U)));
    // ALWAYS at BF_cfb64_encrypt.v:960
    vlTOPp->out_r_we0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
				>> 0xbU) | (vlTOPp->v__DOT__ap_CS_fsm 
					    >> 0x16U)));
    // ALWAYS at BF_cfb64_encrypt.v:910
    vlTOPp->key_P_ce1 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					  >> 0x30U))));
    // ALWAYS at BF_cfb64_encrypt.v:918
    vlTOPp->key_S_ce0 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & ((((((((((((((((((((((((((((((((IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 2U)) 
								| (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 5U))) 
							       | (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 8U))) 
							      | (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0xbU))) 
							     | (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0xeU))) 
							    | (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x11U))) 
							   | (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x17U))) 
							 | (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x1aU))) 
							| (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x1dU))) 
						       | (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x20U))) 
						      | (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x23U))) 
						     | (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U))) 
						    | (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x29U))) 
						   | (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x2cU))) 
						  | (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2fU))) 
						 | (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 1U))) 
						| (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 4U))) 
					       | (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 7U))) 
					      | (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0xaU))) 
					     | (IData)(
						       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							>> 0xdU))) 
					    | (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x10U))) 
					   | (IData)(
						     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						      >> 0x13U))) 
					  | (IData)(
						    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						     >> 0x16U))) 
					 | (IData)(
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						    >> 0x19U))) 
					| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						   >> 0x1cU))) 
				       | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						  >> 0x1fU))) 
				      | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						 >> 0x22U))) 
				     | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						>> 0x25U))) 
				    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					       >> 0x28U))) 
				   | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					      >> 0x2bU))) 
				  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x2eU)))));
    // ALWAYS at BF_cfb64_encrypt.v:926
    vlTOPp->key_S_ce1 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & ((((((((((((((((((((((((((((((((IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 2U)) 
								| (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 5U))) 
							       | (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 8U))) 
							      | (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0xbU))) 
							     | (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0xeU))) 
							    | (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x11U))) 
							   | (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x17U))) 
							 | (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x1aU))) 
							| (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x1dU))) 
						       | (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x20U))) 
						      | (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x23U))) 
						     | (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U))) 
						    | (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x29U))) 
						   | (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x2cU))) 
						  | (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2fU))) 
						 | (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 1U))) 
						| (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 4U))) 
					       | (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 7U))) 
					      | (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0xaU))) 
					     | (IData)(
						       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							>> 0xdU))) 
					    | (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x10U))) 
					   | (IData)(
						     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						      >> 0x13U))) 
					  | (IData)(
						    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						     >> 0x16U))) 
					 | (IData)(
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						    >> 0x19U))) 
					| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						   >> 0x1cU))) 
				       | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						  >> 0x1fU))) 
				      | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						 >> 0x22U))) 
				     | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						>> 0x25U))) 
				    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					       >> 0x28U))) 
				   | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					      >> 0x2bU))) 
				  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x2eU)))));
    // ALWAYS at BF_cfb64_encrypt.v:780
    vlTOPp->in_r_address0 = ((0x200000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__in_addr_reg_712)
			      : ((0x400U & vlTOPp->v__DOT__ap_CS_fsm)
				  ? (IData)(vlTOPp->v__DOT__in_addr_1_reg_654)
				  : 0U));
    // ALWAYS at BF_cfb64_encrypt.v:902
    vlTOPp->key_P_ce0 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & ((((((((((((((((((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
						  & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg)) 
						 | (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 3U))) 
						| (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 6U))) 
					       | (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 9U))) 
					      | (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0xcU))) 
					     | (IData)(
						       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							>> 0xfU))) 
					    | (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x12U))) 
					   | (IData)(
						     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						      >> 0x15U))) 
					  | (IData)(
						    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						     >> 0x18U))) 
					 | (IData)(
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						    >> 0x1bU))) 
					| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						   >> 0x1eU))) 
				       | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						  >> 0x21U))) 
				      | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						 >> 0x24U))) 
				     | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						>> 0x27U))) 
				    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					       >> 0x2aU))) 
				   | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					      >> 0x2dU))) 
				  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x30U)))));
    // ALWAYS at BF_cfb64_encrypt.v:942
    vlTOPp->out_r_address0 = ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)
			       ? (IData)(vlTOPp->v__DOT__out_addr_reg_717)
			       : ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)
				   ? (IData)(vlTOPp->v__DOT__out_addr_1_reg_659)
				   : 0U));
    // ALWAYS at BF_cfb64_encrypt.v:798
    vlTOPp->ivec_address0 = ((0x200000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__ivec_addr27_reg_759)
			      : ((0x400U & vlTOPp->v__DOT__ap_CS_fsm)
				  ? (IData)(vlTOPp->v__DOT__ivec_addr_8_reg_701)
				  : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 4U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xfU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 9U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0x14U)))
				      ? (IData)(vlTOPp->v__DOT__iv_5_reg_644)
				      : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
						   >> 3U) 
						  | (vlTOPp->v__DOT__ap_CS_fsm 
						     >> 0xeU)) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 8U)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 0x13U)))
					  ? (IData)(vlTOPp->v__DOT__iv_3_reg_634)
					  : ((1U & 
					      ((((vlTOPp->v__DOT__ap_CS_fsm 
						  >> 2U) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 0xdU)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 7U)) 
					       | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x12U)))
					      ? (IData)(vlTOPp->v__DOT__iv_1_reg_624)
					      : ((1U 
						  & ((((vlTOPp->v__DOT__ap_CS_fsm 
							>> 6U) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0x11U)) 
						      | (vlTOPp->v__DOT__ap_CS_fsm 
							 >> 1U)) 
						     | (vlTOPp->v__DOT__ap_CS_fsm 
							>> 0xcU)))
						  ? (IData)(vlTOPp->v__DOT__ivec_addr_reg_605)
						  : 0U))))));
    // ALWAYS at BF_cfb64_encrypt.v:816
    vlTOPp->ivec_address1 = ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__ivec_addr27_reg_759)
			      : ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)
				  ? (IData)(vlTOPp->v__DOT__ivec_addr_8_reg_701)
				  : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 4U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xfU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 9U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0x14U)))
				      ? (IData)(vlTOPp->v__DOT__iv_6_reg_649)
				      : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
						   >> 3U) 
						  | (vlTOPp->v__DOT__ap_CS_fsm 
						     >> 0xeU)) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 8U)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 0x13U)))
					  ? (IData)(vlTOPp->v__DOT__iv_4_reg_639)
					  : ((1U & 
					      ((((vlTOPp->v__DOT__ap_CS_fsm 
						  >> 2U) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 0xdU)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 7U)) 
					       | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x12U)))
					      ? (IData)(vlTOPp->v__DOT__iv_2_reg_629)
					      : ((1U 
						  & ((((vlTOPp->v__DOT__ap_CS_fsm 
							>> 6U) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0x11U)) 
						      | (vlTOPp->v__DOT__ap_CS_fsm 
							 >> 1U)) 
						     | (vlTOPp->v__DOT__ap_CS_fsm 
							>> 0xcU)))
						  ? (IData)(vlTOPp->v__DOT__iv_reg_619)
						  : 0U))))));
}

void VBF_cfb64_encrypt::_settle__TOP__9(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_settle__TOP__9\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->key_P_address0 = ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x30U)))
			       ? 0x10U : ((1U & (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0x2dU)))
					   ? 0xfU : 
					  ((1U & (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 0x2aU)))
					    ? 0xeU : 
					   ((1U & (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0x27U)))
					     ? 0xdU
					     : ((1U 
						 & (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 0x24U)))
						 ? 0xcU
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x21U)))
						  ? 0xbU
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x1eU)))
						   ? 0xaU
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x1bU)))
						    ? 9U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x18U)))
						     ? 8U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x15U)))
						      ? 7U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x12U)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0xfU)))
						        ? 5U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0xcU)))
							 ? 4U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 9U)))
							  ? 3U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 6U)))
							   ? 2U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 3U)))
							    ? 1U
							    : 0U))))))))))))))));
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:1474
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_NS_fsm 
	= (((((((((VL_ULL(1) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
		  | (VL_ULL(2) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		 | (VL_ULL(4) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		| (VL_ULL(8) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	       | (VL_ULL(0x10) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	      | (VL_ULL(0x20) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	     | (VL_ULL(0x40) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
	    | (VL_ULL(0x80) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
	    ? ((VL_ULL(1) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
	        ? ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg)
		    ? VL_ULL(2) : VL_ULL(1)) : ((VL_ULL(2) 
						 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						 ? VL_ULL(4)
						 : 
						((VL_ULL(4) 
						  == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						  ? VL_ULL(8)
						  : 
						 ((VL_ULL(8) 
						   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						   ? VL_ULL(0x10)
						   : 
						  ((VL_ULL(0x10) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x20)
						    : 
						   ((VL_ULL(0x20) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x40)
						     : 
						    ((VL_ULL(0x40) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x80)
						      : VL_ULL(0x100))))))))
	    : (((((((((VL_ULL(0x100) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
		      | (VL_ULL(0x200) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		   | (VL_ULL(0x1000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		  | (VL_ULL(0x2000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		 | (VL_ULL(0x4000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		| (VL_ULL(0x8000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
	        ? ((VL_ULL(0x100) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
		    ? VL_ULL(0x200) : ((VL_ULL(0x200) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(0x400)
				        : ((VL_ULL(0x400) 
					    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					    ? VL_ULL(0x800)
					    : ((VL_ULL(0x800) 
						== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					        ? VL_ULL(0x1000)
					        : (
						   (VL_ULL(0x1000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x2000)
						    : 
						   ((VL_ULL(0x2000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x4000)
						     : 
						    ((VL_ULL(0x4000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x8000)
						      : VL_ULL(0x10000))))))))
	        : (((((((((VL_ULL(0x10000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
			  | (VL_ULL(0x20000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		       | (VL_ULL(0x100000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		      | (VL_ULL(0x200000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		     | (VL_ULL(0x400000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		    | (VL_ULL(0x800000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
		    ? ((VL_ULL(0x10000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
		        ? VL_ULL(0x20000) : ((VL_ULL(0x20000) 
					      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					      ? VL_ULL(0x40000)
					      : ((VL_ULL(0x40000) 
						  == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						  ? VL_ULL(0x80000)
						  : 
						 ((VL_ULL(0x80000) 
						   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						   ? VL_ULL(0x100000)
						   : 
						  ((VL_ULL(0x100000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000)
						    : 
						   ((VL_ULL(0x200000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000)
						     : 
						    ((VL_ULL(0x400000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000)
						      : VL_ULL(0x1000000))))))))
		    : (((((((((VL_ULL(0x1000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
			      | (VL_ULL(0x2000000) 
				 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			   | (VL_ULL(0x10000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			  | (VL_ULL(0x20000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			 | (VL_ULL(0x40000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			| (VL_ULL(0x80000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
		        ? ((VL_ULL(0x1000000) == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
			    ? VL_ULL(0x2000000) : (
						   (VL_ULL(0x2000000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000)
						    : 
						   ((VL_ULL(0x4000000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000)
						     : 
						    ((VL_ULL(0x8000000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x10000000)
						      : 
						     ((VL_ULL(0x10000000) 
						       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						       ? VL_ULL(0x20000000)
						       : 
						      ((VL_ULL(0x20000000) 
							== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						        ? VL_ULL(0x40000000)
						        : 
						       ((VL_ULL(0x40000000) 
							 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
							 ? VL_ULL(0x80000000)
							 : VL_ULL(0x100000000))))))))
		        : (((((((((VL_ULL(0x100000000) 
				   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
				  | (VL_ULL(0x200000000) 
				     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				 | (VL_ULL(0x400000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				| (VL_ULL(0x800000000) 
				   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			       | (VL_ULL(0x1000000000) 
				  == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			      | (VL_ULL(0x2000000000) 
				 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			     | (VL_ULL(0x4000000000) 
				== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
			    | (VL_ULL(0x8000000000) 
			       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
			    ? ((VL_ULL(0x100000000) 
				== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
			        ? VL_ULL(0x200000000)
			        : ((VL_ULL(0x200000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				    ? VL_ULL(0x400000000)
				    : ((VL_ULL(0x400000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(0x800000000)
				        : ((VL_ULL(0x800000000) 
					    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					    ? VL_ULL(0x1000000000)
					    : ((VL_ULL(0x1000000000) 
						== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					        ? VL_ULL(0x2000000000)
					        : (
						   (VL_ULL(0x2000000000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x4000000000)
						    : 
						   ((VL_ULL(0x4000000000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x8000000000)
						     : VL_ULL(0x10000000000))))))))
			    : (((((((((VL_ULL(0x10000000000) 
				       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
				      | (VL_ULL(0x20000000000) 
					 == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				     | (VL_ULL(0x40000000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				    | (VL_ULL(0x80000000000) 
				       == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				   | (VL_ULL(0x100000000000) 
				      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				  | (VL_ULL(0x200000000000) 
				     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				 | (VL_ULL(0x400000000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
				| (VL_ULL(0x800000000000) 
				   == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm))
			        ? ((VL_ULL(0x10000000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				    ? VL_ULL(0x20000000000)
				    : ((VL_ULL(0x20000000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(0x40000000000)
				        : ((VL_ULL(0x40000000000) 
					    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					    ? VL_ULL(0x80000000000)
					    : ((VL_ULL(0x80000000000) 
						== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
					        ? VL_ULL(0x100000000000)
					        : (
						   (VL_ULL(0x100000000000) 
						    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						    ? VL_ULL(0x200000000000)
						    : 
						   ((VL_ULL(0x200000000000) 
						     == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						     ? VL_ULL(0x400000000000)
						     : 
						    ((VL_ULL(0x400000000000) 
						      == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
						      ? VL_ULL(0x800000000000)
						      : VL_ULL(0x1000000000000))))))))
			        : ((VL_ULL(0x1000000000000) 
				    == vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				    ? VL_ULL(0x2000000000000)
				    : ((VL_ULL(0x2000000000000) 
					== vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)
				        ? VL_ULL(1)
				        : VL_ULL(0)))))))));
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:855
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1 
	= ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			  >> 0x31U))) ? vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_8_fu_2172_p2
	    : vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_1_preg);
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:847
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 
	= ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			  >> 0x31U))) ? vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_8_fu_2177_p2
	    : vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_0_preg);
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:823
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm)) 
		 | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			    >> 0x31U))));
    // ALWAYS at BF_cfb64_encrypt.v:544
    vlTOPp->ap_done = (1U & (vlTOPp->v__DOT__ap_CS_fsm 
			     >> 0x17U));
    // ALWAYS at BF_cfb64_encrypt.v:560
    vlTOPp->ap_ready = (1U & (vlTOPp->v__DOT__ap_CS_fsm 
			      >> 0x17U));
    // ALWAYS at BF_cfb64_encrypt.v:790
    vlTOPp->in_r_ce0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
			       >> 0xaU) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x15U)));
    // ALWAYS at BF_cfb64_encrypt.v:934
    vlTOPp->num_o_ap_vld = (1U & (vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x17U));
    // ALWAYS at BF_cfb64_encrypt.v:952
    vlTOPp->out_r_ce0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
				>> 0xbU) | (vlTOPp->v__DOT__ap_CS_fsm 
					    >> 0x16U)));
    // ALWAYS at BF_cfb64_encrypt.v:960
    vlTOPp->out_r_we0 = (1U & ((vlTOPp->v__DOT__ap_CS_fsm 
				>> 0xbU) | (vlTOPp->v__DOT__ap_CS_fsm 
					    >> 0x16U)));
    // ALWAYS at BF_cfb64_encrypt.v:552
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & vlTOPp->v__DOT__ap_CS_fsm));
    // ALWAYS at BF_cfb64_encrypt.v:910
    vlTOPp->key_P_ce1 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					  >> 0x30U))));
    // ALWAYS at BF_cfb64_encrypt.v:918
    vlTOPp->key_S_ce0 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & ((((((((((((((((((((((((((((((((IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 2U)) 
								| (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 5U))) 
							       | (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 8U))) 
							      | (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0xbU))) 
							     | (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0xeU))) 
							    | (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x11U))) 
							   | (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x17U))) 
							 | (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x1aU))) 
							| (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x1dU))) 
						       | (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x20U))) 
						      | (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x23U))) 
						     | (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U))) 
						    | (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x29U))) 
						   | (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x2cU))) 
						  | (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2fU))) 
						 | (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 1U))) 
						| (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 4U))) 
					       | (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 7U))) 
					      | (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0xaU))) 
					     | (IData)(
						       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							>> 0xdU))) 
					    | (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x10U))) 
					   | (IData)(
						     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						      >> 0x13U))) 
					  | (IData)(
						    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						     >> 0x16U))) 
					 | (IData)(
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						    >> 0x19U))) 
					| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						   >> 0x1cU))) 
				       | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						  >> 0x1fU))) 
				      | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						 >> 0x22U))) 
				     | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						>> 0x25U))) 
				    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					       >> 0x28U))) 
				   | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					      >> 0x2bU))) 
				  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x2eU)))));
    // ALWAYS at BF_cfb64_encrypt.v:926
    vlTOPp->key_S_ce1 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & ((((((((((((((((((((((((((((((((IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 2U)) 
								| (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 5U))) 
							       | (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 8U))) 
							      | (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0xbU))) 
							     | (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0xeU))) 
							    | (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x11U))) 
							   | (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x14U))) 
							  | (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x17U))) 
							 | (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x1aU))) 
							| (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x1dU))) 
						       | (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x20U))) 
						      | (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x23U))) 
						     | (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U))) 
						    | (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x29U))) 
						   | (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x2cU))) 
						  | (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2fU))) 
						 | (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 1U))) 
						| (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 4U))) 
					       | (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 7U))) 
					      | (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0xaU))) 
					     | (IData)(
						       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							>> 0xdU))) 
					    | (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x10U))) 
					   | (IData)(
						     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						      >> 0x13U))) 
					  | (IData)(
						    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						     >> 0x16U))) 
					 | (IData)(
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						    >> 0x19U))) 
					| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						   >> 0x1cU))) 
				       | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						  >> 0x1fU))) 
				      | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						 >> 0x22U))) 
				     | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						>> 0x25U))) 
				    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					       >> 0x28U))) 
				   | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					      >> 0x2bU))) 
				  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x2eU)))));
    // ALWAYS at BF_cfb64_encrypt.v:780
    vlTOPp->in_r_address0 = ((0x200000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__in_addr_reg_712)
			      : ((0x400U & vlTOPp->v__DOT__ap_CS_fsm)
				  ? (IData)(vlTOPp->v__DOT__in_addr_1_reg_654)
				  : 0U));
    // ALWAYS at BF_cfb64_encrypt.v:902
    vlTOPp->key_P_ce0 = (1U & (((vlTOPp->v__DOT__ap_CS_fsm 
				 >> 6U) | (vlTOPp->v__DOT__ap_CS_fsm 
					   >> 0x11U)) 
			       & ((((((((((((((((((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm) 
						  & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg)) 
						 | (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 3U))) 
						| (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 6U))) 
					       | (IData)(
							 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							  >> 9U))) 
					      | (IData)(
							(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							 >> 0xcU))) 
					     | (IData)(
						       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							>> 0xfU))) 
					    | (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x12U))) 
					   | (IData)(
						     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						      >> 0x15U))) 
					  | (IData)(
						    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						     >> 0x18U))) 
					 | (IData)(
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						    >> 0x1bU))) 
					| (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						   >> 0x1eU))) 
				       | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						  >> 0x21U))) 
				      | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						 >> 0x24U))) 
				     | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						>> 0x27U))) 
				    | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					       >> 0x2aU))) 
				   | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					      >> 0x2dU))) 
				  | (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
					     >> 0x30U)))));
    // ALWAYS at BF_cfb64_encrypt.v:942
    vlTOPp->out_r_address0 = ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)
			       ? (IData)(vlTOPp->v__DOT__out_addr_reg_717)
			       : ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)
				   ? (IData)(vlTOPp->v__DOT__out_addr_1_reg_659)
				   : 0U));
    // ALWAYS at BF_cfb64_encrypt.v:798
    vlTOPp->ivec_address0 = ((0x200000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__ivec_addr27_reg_759)
			      : ((0x400U & vlTOPp->v__DOT__ap_CS_fsm)
				  ? (IData)(vlTOPp->v__DOT__ivec_addr_8_reg_701)
				  : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 4U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xfU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 9U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0x14U)))
				      ? (IData)(vlTOPp->v__DOT__iv_5_reg_644)
				      : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
						   >> 3U) 
						  | (vlTOPp->v__DOT__ap_CS_fsm 
						     >> 0xeU)) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 8U)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 0x13U)))
					  ? (IData)(vlTOPp->v__DOT__iv_3_reg_634)
					  : ((1U & 
					      ((((vlTOPp->v__DOT__ap_CS_fsm 
						  >> 2U) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 0xdU)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 7U)) 
					       | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x12U)))
					      ? (IData)(vlTOPp->v__DOT__iv_1_reg_624)
					      : ((1U 
						  & ((((vlTOPp->v__DOT__ap_CS_fsm 
							>> 6U) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0x11U)) 
						      | (vlTOPp->v__DOT__ap_CS_fsm 
							 >> 1U)) 
						     | (vlTOPp->v__DOT__ap_CS_fsm 
							>> 0xcU)))
						  ? (IData)(vlTOPp->v__DOT__ivec_addr_reg_605)
						  : 0U))))));
    // ALWAYS at BF_cfb64_encrypt.v:816
    vlTOPp->ivec_address1 = ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)
			      ? (IData)(vlTOPp->v__DOT__ivec_addr27_reg_759)
			      : ((0x800U & vlTOPp->v__DOT__ap_CS_fsm)
				  ? (IData)(vlTOPp->v__DOT__ivec_addr_8_reg_701)
				  : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 4U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xfU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 9U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0x14U)))
				      ? (IData)(vlTOPp->v__DOT__iv_6_reg_649)
				      : ((1U & ((((vlTOPp->v__DOT__ap_CS_fsm 
						   >> 3U) 
						  | (vlTOPp->v__DOT__ap_CS_fsm 
						     >> 0xeU)) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 8U)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 0x13U)))
					  ? (IData)(vlTOPp->v__DOT__iv_4_reg_639)
					  : ((1U & 
					      ((((vlTOPp->v__DOT__ap_CS_fsm 
						  >> 2U) 
						 | (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 0xdU)) 
						| (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 7U)) 
					       | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x12U)))
					      ? (IData)(vlTOPp->v__DOT__iv_2_reg_629)
					      : ((1U 
						  & ((((vlTOPp->v__DOT__ap_CS_fsm 
							>> 6U) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0x11U)) 
						      | (vlTOPp->v__DOT__ap_CS_fsm 
							 >> 1U)) 
						     | (vlTOPp->v__DOT__ap_CS_fsm 
							>> 0xcU)))
						  ? (IData)(vlTOPp->v__DOT__iv_reg_619)
						  : 0U))))));
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 
	= (vlTOPp->key_P_q0 ^ ((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)
			        ? vlTOPp->v__DOT__v0_2_reg_739
			        : ((0x40U & vlTOPp->v__DOT__ap_CS_fsm)
				    ? vlTOPp->v__DOT__v0_reg_681
				    : 0U)));
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 
	= ((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_10_reg_2239 
	    ^ ((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)
	        ? vlTOPp->v__DOT__v1_2_reg_744 : ((0x40U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? vlTOPp->v__DOT__v1_reg_686
						   : 0U))) 
	   ^ vlTOPp->key_P_q0);
    // ALWAYS at BF_cfb64_encrypt.v:834
    vlTOPp->ivec_ce0 = (1U & ((((((((((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 2U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xdU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 3U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0xeU)) 
					   | (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 4U)) 
					  | (vlTOPp->v__DOT__ap_CS_fsm 
					     >> 0xfU)) 
					 | ((vlTOPp->v__DOT__ap_CS_fsm 
					     >> 6U) 
					    & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done))) 
					| ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
					   & (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 0x11U))) 
				       | (vlTOPp->v__DOT__ap_CS_fsm 
					  >> 1U)) | 
				      (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 9U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0xcU)) 
				    | (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x14U)) | 
				   (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 7U)) | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 8U)) 
				 | (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 0xaU)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x12U)) 
			       | (vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x13U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 0x15U)));
    // ALWAYS at BF_cfb64_encrypt.v:842
    vlTOPp->ivec_ce1 = (1U & ((((((((((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 2U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xdU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 3U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0xeU)) 
					   | (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 4U)) 
					  | (vlTOPp->v__DOT__ap_CS_fsm 
					     >> 0xfU)) 
					 | ((vlTOPp->v__DOT__ap_CS_fsm 
					     >> 6U) 
					    & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done))) 
					| ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
					   & (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 0x11U))) 
				       | (vlTOPp->v__DOT__ap_CS_fsm 
					  >> 1U)) | 
				      (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 9U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0xcU)) 
				    | (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x14U)) | 
				   (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 0xbU)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x16U)) 
				 | (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 7U)) | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 8U)) 
			       | (vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x12U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 0x13U)));
    // ALWAYS at BF_cfb64_encrypt.v:886
    vlTOPp->ivec_we0 = (1U & (((((((((vlTOPp->v__DOT__ap_CS_fsm 
				      >> 6U) & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)) 
				    | ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
				       & (vlTOPp->v__DOT__ap_CS_fsm 
					  >> 0x11U))) 
				   | (vlTOPp->v__DOT__ap_CS_fsm 
				      >> 7U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 8U)) 
				 | ((vlTOPp->v__DOT__ap_CS_fsm 
				     >> 9U) & (IData)(vlTOPp->v__DOT__tmp_178_reg_677))) 
				| (vlTOPp->v__DOT__ap_CS_fsm 
				   >> 0x12U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x13U)) 
			      | ((vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x14U) & (IData)(vlTOPp->v__DOT__tmp_177_reg_735))));
    // ALWAYS at BF_cfb64_encrypt.v:894
    vlTOPp->ivec_we1 = (1U & (((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					>> 6U) & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)) 
				      | ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
					 & (vlTOPp->v__DOT__ap_CS_fsm 
					    >> 0x11U))) 
				     | (vlTOPp->v__DOT__ap_CS_fsm 
					>> 0xbU)) | 
				    (vlTOPp->v__DOT__ap_CS_fsm 
				     >> 0x16U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 7U)) 
				  | (vlTOPp->v__DOT__ap_CS_fsm 
				     >> 8U)) | ((vlTOPp->v__DOT__ap_CS_fsm 
						 >> 9U) 
						& (IData)(vlTOPp->v__DOT__tmp_178_reg_677))) 
				| (vlTOPp->v__DOT__ap_CS_fsm 
				   >> 0x12U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x13U)) 
			      | ((vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x14U) & (IData)(vlTOPp->v__DOT__tmp_177_reg_735))));
    // ALWAYS at BF_cfb64_encrypt.v:967
    vlTOPp->v__DOT__ap_NS_fsm = (((((((((1U == vlTOPp->v__DOT__ap_CS_fsm) 
					| (2U == vlTOPp->v__DOT__ap_CS_fsm)) 
				       | (4U == vlTOPp->v__DOT__ap_CS_fsm)) 
				      | (8U == vlTOPp->v__DOT__ap_CS_fsm)) 
				     | (0x10U == vlTOPp->v__DOT__ap_CS_fsm)) 
				    | (0x20U == vlTOPp->v__DOT__ap_CS_fsm)) 
				   | (0x40U == vlTOPp->v__DOT__ap_CS_fsm)) 
				  | (0x80U == vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((1U == vlTOPp->v__DOT__ap_CS_fsm)
				      ? (((IData)(vlTOPp->ap_start) 
					  & (0U == vlTOPp->encrypt))
					  ? 0x1000U
					  : (((IData)(vlTOPp->ap_start) 
					      & (0U 
						 != vlTOPp->encrypt))
					      ? 2U : 1U))
				      : ((2U == vlTOPp->v__DOT__ap_CS_fsm)
					  ? (((0U != vlTOPp->v__DOT__l9_reg_233) 
					      & (0U 
						 != vlTOPp->v__DOT__n1_reg_223))
					      ? 0x200U
					      : (((0U 
						   != vlTOPp->v__DOT__l9_reg_233) 
						  & (0U 
						     == vlTOPp->v__DOT__n1_reg_223))
						  ? 4U
						  : 0x800000U))
					  : ((4U == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 8U : 
					     ((8U == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x10U
					       : ((0x10U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x20U
						   : 
						  ((0x20U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x40U
						    : 
						   ((0x40U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 
						    ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)
						      ? 0x80U
						      : 0x40U)
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
						   ? 2U
						   : 
						  ((0x1000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   (((0U 
						      != vlTOPp->v__DOT__l_1_reg_263) 
						     & (0U 
							!= vlTOPp->v__DOT__n_1_reg_253))
						     ? 0x100000U
						     : 
						    (((0U 
						       != vlTOPp->v__DOT__l_1_reg_263) 
						      & (0U 
							 == vlTOPp->v__DOT__n_1_reg_253))
						      ? 0x2000U
						      : 0x800000U))
						    : 
						   ((0x2000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x4000U
						     : 
						    ((0x4000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x8000U
						      : 0x10000U)))))))
				      : (((((((((0x10000U 
						 == vlTOPp->v__DOT__ap_CS_fsm) 
						| (0x20000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)) 
					       | (0x40000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)) 
					      | (0x80000U 
						 == vlTOPp->v__DOT__ap_CS_fsm)) 
					     | (0x100000U 
						== vlTOPp->v__DOT__ap_CS_fsm)) 
					    | (0x200000U 
					       == vlTOPp->v__DOT__ap_CS_fsm)) 
					   | (0x400000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)) 
					  | (0x800000U 
					     == vlTOPp->v__DOT__ap_CS_fsm))
					  ? ((0x10000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 0x20000U
					      : ((0x20000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)
						  ? 
						 ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)
						   ? 0x40000U
						   : 0x20000U)
						  : 
						 ((0x40000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x80000U
						   : 
						  ((0x80000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x100000U
						    : 
						   ((0x100000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x200000U
						     : 
						    ((0x200000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x400000U
						      : 
						     ((0x400000U 
						       == vlTOPp->v__DOT__ap_CS_fsm)
						       ? 0x1000U
						       : 1U)))))))
					  : 0U)));
}

VL_INLINE_OPT void VBF_cfb64_encrypt::_combo__TOP__10(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_combo__TOP__10\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:855
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1 
	= ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			  >> 0x31U))) ? vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_8_fu_2172_p2
	    : vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_1_preg);
    // ALWAYS at BF_cfb64_encrypt_BF_encrypt.v:847
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 
	= ((1U & (IData)((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
			  >> 0x31U))) ? vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_8_fu_2177_p2
	    : vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_0_preg);
    // ALWAYS at BF_cfb64_encrypt.v:552
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & vlTOPp->v__DOT__ap_CS_fsm));
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 
	= (vlTOPp->key_P_q0 ^ ((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)
			        ? vlTOPp->v__DOT__v0_2_reg_739
			        : ((0x40U & vlTOPp->v__DOT__ap_CS_fsm)
				    ? vlTOPp->v__DOT__v0_reg_681
				    : 0U)));
    vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 
	= ((vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_10_reg_2239 
	    ^ ((0x20000U & vlTOPp->v__DOT__ap_CS_fsm)
	        ? vlTOPp->v__DOT__v1_2_reg_744 : ((0x40U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? vlTOPp->v__DOT__v1_reg_686
						   : 0U))) 
	   ^ vlTOPp->key_P_q0);
    // ALWAYS at BF_cfb64_encrypt.v:967
    vlTOPp->v__DOT__ap_NS_fsm = (((((((((1U == vlTOPp->v__DOT__ap_CS_fsm) 
					| (2U == vlTOPp->v__DOT__ap_CS_fsm)) 
				       | (4U == vlTOPp->v__DOT__ap_CS_fsm)) 
				      | (8U == vlTOPp->v__DOT__ap_CS_fsm)) 
				     | (0x10U == vlTOPp->v__DOT__ap_CS_fsm)) 
				    | (0x20U == vlTOPp->v__DOT__ap_CS_fsm)) 
				   | (0x40U == vlTOPp->v__DOT__ap_CS_fsm)) 
				  | (0x80U == vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((1U == vlTOPp->v__DOT__ap_CS_fsm)
				      ? (((IData)(vlTOPp->ap_start) 
					  & (0U == vlTOPp->encrypt))
					  ? 0x1000U
					  : (((IData)(vlTOPp->ap_start) 
					      & (0U 
						 != vlTOPp->encrypt))
					      ? 2U : 1U))
				      : ((2U == vlTOPp->v__DOT__ap_CS_fsm)
					  ? (((0U != vlTOPp->v__DOT__l9_reg_233) 
					      & (0U 
						 != vlTOPp->v__DOT__n1_reg_223))
					      ? 0x200U
					      : (((0U 
						   != vlTOPp->v__DOT__l9_reg_233) 
						  & (0U 
						     == vlTOPp->v__DOT__n1_reg_223))
						  ? 4U
						  : 0x800000U))
					  : ((4U == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 8U : 
					     ((8U == vlTOPp->v__DOT__ap_CS_fsm)
					       ? 0x10U
					       : ((0x10U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x20U
						   : 
						  ((0x20U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x40U
						    : 
						   ((0x40U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 
						    ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)
						      ? 0x80U
						      : 0x40U)
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
						   ? 2U
						   : 
						  ((0x1000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 
						   (((0U 
						      != vlTOPp->v__DOT__l_1_reg_263) 
						     & (0U 
							!= vlTOPp->v__DOT__n_1_reg_253))
						     ? 0x100000U
						     : 
						    (((0U 
						       != vlTOPp->v__DOT__l_1_reg_263) 
						      & (0U 
							 == vlTOPp->v__DOT__n_1_reg_253))
						      ? 0x2000U
						      : 0x800000U))
						    : 
						   ((0x2000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x4000U
						     : 
						    ((0x4000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x8000U
						      : 0x10000U)))))))
				      : (((((((((0x10000U 
						 == vlTOPp->v__DOT__ap_CS_fsm) 
						| (0x20000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)) 
					       | (0x40000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)) 
					      | (0x80000U 
						 == vlTOPp->v__DOT__ap_CS_fsm)) 
					     | (0x100000U 
						== vlTOPp->v__DOT__ap_CS_fsm)) 
					    | (0x200000U 
					       == vlTOPp->v__DOT__ap_CS_fsm)) 
					   | (0x400000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)) 
					  | (0x800000U 
					     == vlTOPp->v__DOT__ap_CS_fsm))
					  ? ((0x10000U 
					      == vlTOPp->v__DOT__ap_CS_fsm)
					      ? 0x20000U
					      : ((0x20000U 
						  == vlTOPp->v__DOT__ap_CS_fsm)
						  ? 
						 ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)
						   ? 0x40000U
						   : 0x20000U)
						  : 
						 ((0x40000U 
						   == vlTOPp->v__DOT__ap_CS_fsm)
						   ? 0x80000U
						   : 
						  ((0x80000U 
						    == vlTOPp->v__DOT__ap_CS_fsm)
						    ? 0x100000U
						    : 
						   ((0x100000U 
						     == vlTOPp->v__DOT__ap_CS_fsm)
						     ? 0x200000U
						     : 
						    ((0x200000U 
						      == vlTOPp->v__DOT__ap_CS_fsm)
						      ? 0x400000U
						      : 
						     ((0x400000U 
						       == vlTOPp->v__DOT__ap_CS_fsm)
						       ? 0x1000U
						       : 1U)))))))
					  : 0U)));
    // ALWAYS at BF_cfb64_encrypt.v:850
    vlTOPp->ivec_d0 = (0xffU & ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
					>> 9U) | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x14U)))
				 ? (IData)(vlTOPp->v__DOT__reg_422)
				 : ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
					    >> 8U) 
					   | (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 0x13U)))
				     ? (IData)(vlTOPp->v__DOT__reg_412)
				     : ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
						>> 7U) 
					       | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x12U)))
					 ? (IData)(vlTOPp->v__DOT__reg_407)
					 : ((1U & (
						   (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 6U) 
						   | (vlTOPp->v__DOT__ap_CS_fsm 
						      >> 0x11U)))
					     ? (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 
						>> 0x18U)
					     : 0U)))));
    // ALWAYS at BF_cfb64_encrypt.v:864
    vlTOPp->ivec_d1 = (0xffU & ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? (IData)(vlTOPp->in_r_q0)
				 : ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)
				     ? (IData)(vlTOPp->v__DOT__tmp_196_reg_754)
				     : ((0x40000U & vlTOPp->v__DOT__ap_CS_fsm)
					 ? (IData)(vlTOPp->v__DOT__tmp_192_reg_749)
					 : ((0x800U 
					     & vlTOPp->v__DOT__ap_CS_fsm)
					     ? ((IData)(vlTOPp->ivec_q0) 
						^ (IData)(vlTOPp->in_r_q0))
					     : ((0x200U 
						 & vlTOPp->v__DOT__ap_CS_fsm)
						 ? (IData)(vlTOPp->v__DOT__tmp_200_reg_696)
						 : 
						((1U 
						  & ((vlTOPp->v__DOT__ap_CS_fsm 
						      >> 8U) 
						     | (vlTOPp->v__DOT__ap_CS_fsm 
							>> 0x13U)))
						  ? (IData)(vlTOPp->v__DOT__reg_417)
						  : 
						 ((0x80U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? (IData)(vlTOPp->v__DOT__tmp_199_reg_691)
						   : 
						  ((1U 
						    & ((vlTOPp->v__DOT__ap_CS_fsm 
							>> 6U) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0x11U)))
						    ? 
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 
						    >> 0x10U)
						    : 0U)))))))));
    vlTOPp->key_S_address0 = (0x3ffU & ((1U & (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x2fU)))
					 ? (0x200U 
					    | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_247_cast_reg_2894))
					 : ((1U & (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0x2eU)))
					     ? (IData)((QData)((IData)(
								       (0xffU 
									& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 
									   >> 0x18U)))))
					     : ((1U 
						 & (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 0x2cU)))
						 ? 
						(0x200U 
						 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_231_cast_reg_2849))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2bU)))
						  ? (IData)((QData)((IData)(
									    (0xffU 
									     & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 
										>> 0x18U)))))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x29U)))
						   ? 
						  (0x200U 
						   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_215_cast_reg_2804))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x28U)))
						    ? (IData)((QData)((IData)(
									      (0xffU 
									       & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 
										>> 0x18U)))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U)))
						     ? 
						    (0x200U 
						     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_199_cast_reg_2759))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x25U)))
						      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 
										>> 0x18U)))))
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x23U)))
						       ? 
						      (0x200U 
						       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_cast_reg_2714))
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x22U)))
						        ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 
										>> 0x18U)))))
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x20U)))
							 ? 
							(0x200U 
							 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_167_cast_reg_2669))
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x1fU)))
							  ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 
										>> 0x18U)))))
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x1dU)))
							   ? 
							  (0x200U 
							   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_151_cast_reg_2624))
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x1cU)))
							    ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 
										>> 0x18U)))))
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0x1aU)))
							     ? 
							    (0x200U 
							     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_135_cast_reg_2579))
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0x19U)))
							      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 
										>> 0x18U)))))
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 0x17U)))
							       ? 
							      (0x200U 
							       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_119_cast_reg_2534))
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 0x16U)))
							        ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 
										>> 0x18U)))))
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									    >> 0x14U)))
								 ? 
								(0x200U 
								 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_103_cast_reg_2489))
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									     >> 0x13U)))
								  ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 
										>> 0x18U)))))
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									      >> 0x11U)))
								   ? 
								  (0x200U 
								   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_87_cast_reg_2444))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									       >> 0x10U)))
								    ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 
										>> 0x18U)))))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xeU)))
								     ? 
								    (0x200U 
								     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_71_cast_reg_2399))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xdU)))
								      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 
										>> 0x18U)))))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xbU)))
								       ? 
								      (0x200U 
								       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_55_cast_reg_2354))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xaU)))
								        ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 
										>> 0x18U)))))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 8U)))
									 ? 
									(0x200U 
									 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_39_cast_reg_2309))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 7U)))
									  ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 
										>> 0x18U)))))
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 5U)))
									   ? 
									  (0x200U 
									   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_23_cast_reg_2264))
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 4U)))
									    ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 
										>> 0x18U)))))
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 2U)))
									     ? 
									    (0x200U 
									     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_7_cast_reg_2219))
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 1U)))
									      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 
										>> 0x18U)))))
									      : 0U)))))))))))))))))))))))))))))))));
    vlTOPp->key_S_address1 = (0x3ffU & ((1U & (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x2fU)))
					 ? (0x300U 
					    | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_191_reg_2879))
					 : ((1U & (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0x2eU)))
					     ? (IData)((QData)((IData)(
								       (0x100U 
									| (0xffU 
									   & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 
									      >> 0x10U))))))
					     : ((1U 
						 & (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 0x2cU)))
						 ? 
						(0x300U 
						 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_190_reg_2834))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2bU)))
						  ? (IData)((QData)((IData)(
									    (0x100U 
									     | (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 
										>> 0x10U))))))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x29U)))
						   ? 
						  (0x300U 
						   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_189_reg_2789))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x28U)))
						    ? (IData)((QData)((IData)(
									      (0x100U 
									       | (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 
										>> 0x10U))))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U)))
						     ? 
						    (0x300U 
						     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_188_reg_2744))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x25U)))
						      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 
										>> 0x10U))))))
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x23U)))
						       ? 
						      (0x300U 
						       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_187_reg_2699))
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x22U)))
						        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 
										>> 0x10U))))))
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x20U)))
							 ? 
							(0x300U 
							 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_186_reg_2654))
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x1fU)))
							  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 
										>> 0x10U))))))
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x1dU)))
							   ? 
							  (0x300U 
							   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_185_reg_2609))
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x1cU)))
							    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 
										>> 0x10U))))))
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0x1aU)))
							     ? 
							    (0x300U 
							     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_184_reg_2564))
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0x19U)))
							      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 
										>> 0x10U))))))
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 0x17U)))
							       ? 
							      (0x300U 
							       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_reg_2519))
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 0x16U)))
							        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 
										>> 0x10U))))))
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									    >> 0x14U)))
								 ? 
								(0x300U 
								 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_182_reg_2474))
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									     >> 0x13U)))
								  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 
										>> 0x10U))))))
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									      >> 0x11U)))
								   ? 
								  (0x300U 
								   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_181_reg_2429))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									       >> 0x10U)))
								    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 
										>> 0x10U))))))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xeU)))
								     ? 
								    (0x300U 
								     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_180_reg_2384))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xdU)))
								      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 
										>> 0x10U))))))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xbU)))
								       ? 
								      (0x300U 
								       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_179_reg_2339))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xaU)))
								        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 
										>> 0x10U))))))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 8U)))
									 ? 
									(0x300U 
									 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_178_reg_2294))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 7U)))
									  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 
										>> 0x10U))))))
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 5U)))
									   ? 
									  (0x300U 
									   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_177_reg_2249))
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 4U)))
									    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 
										>> 0x10U))))))
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 2U)))
									     ? 
									    (0x300U 
									     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_176_reg_2204))
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 1U)))
									      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 
										>> 0x10U))))))
									      : 0U)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VBF_cfb64_encrypt::_sequent__TOP__11(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_sequent__TOP__11\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at BF_cfb64_encrypt.v:834
    vlTOPp->ivec_ce0 = (1U & ((((((((((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 2U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xdU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 3U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0xeU)) 
					   | (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 4U)) 
					  | (vlTOPp->v__DOT__ap_CS_fsm 
					     >> 0xfU)) 
					 | ((vlTOPp->v__DOT__ap_CS_fsm 
					     >> 6U) 
					    & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done))) 
					| ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
					   & (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 0x11U))) 
				       | (vlTOPp->v__DOT__ap_CS_fsm 
					  >> 1U)) | 
				      (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 9U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0xcU)) 
				    | (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x14U)) | 
				   (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 7U)) | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 8U)) 
				 | (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 0xaU)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x12U)) 
			       | (vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x13U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 0x15U)));
    // ALWAYS at BF_cfb64_encrypt.v:842
    vlTOPp->ivec_ce1 = (1U & ((((((((((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					       >> 2U) 
					      | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0xdU)) 
					     | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 3U)) 
					    | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 0xeU)) 
					   | (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 4U)) 
					  | (vlTOPp->v__DOT__ap_CS_fsm 
					     >> 0xfU)) 
					 | ((vlTOPp->v__DOT__ap_CS_fsm 
					     >> 6U) 
					    & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done))) 
					| ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
					   & (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 0x11U))) 
				       | (vlTOPp->v__DOT__ap_CS_fsm 
					  >> 1U)) | 
				      (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 9U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0xcU)) 
				    | (vlTOPp->v__DOT__ap_CS_fsm 
				       >> 0x14U)) | 
				   (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 0xbU)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x16U)) 
				 | (vlTOPp->v__DOT__ap_CS_fsm 
				    >> 7U)) | (vlTOPp->v__DOT__ap_CS_fsm 
					       >> 8U)) 
			       | (vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x12U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						>> 0x13U)));
    // ALWAYS at BF_cfb64_encrypt.v:886
    vlTOPp->ivec_we0 = (1U & (((((((((vlTOPp->v__DOT__ap_CS_fsm 
				      >> 6U) & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)) 
				    | ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
				       & (vlTOPp->v__DOT__ap_CS_fsm 
					  >> 0x11U))) 
				   | (vlTOPp->v__DOT__ap_CS_fsm 
				      >> 7U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 8U)) 
				 | ((vlTOPp->v__DOT__ap_CS_fsm 
				     >> 9U) & (IData)(vlTOPp->v__DOT__tmp_178_reg_677))) 
				| (vlTOPp->v__DOT__ap_CS_fsm 
				   >> 0x12U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x13U)) 
			      | ((vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x14U) & (IData)(vlTOPp->v__DOT__tmp_177_reg_735))));
    // ALWAYS at BF_cfb64_encrypt.v:894
    vlTOPp->ivec_we1 = (1U & (((((((((((vlTOPp->v__DOT__ap_CS_fsm 
					>> 6U) & (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done)) 
				      | ((IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done) 
					 & (vlTOPp->v__DOT__ap_CS_fsm 
					    >> 0x11U))) 
				     | (vlTOPp->v__DOT__ap_CS_fsm 
					>> 0xbU)) | 
				    (vlTOPp->v__DOT__ap_CS_fsm 
				     >> 0x16U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						   >> 7U)) 
				  | (vlTOPp->v__DOT__ap_CS_fsm 
				     >> 8U)) | ((vlTOPp->v__DOT__ap_CS_fsm 
						 >> 9U) 
						& (IData)(vlTOPp->v__DOT__tmp_178_reg_677))) 
				| (vlTOPp->v__DOT__ap_CS_fsm 
				   >> 0x12U)) | (vlTOPp->v__DOT__ap_CS_fsm 
						 >> 0x13U)) 
			      | ((vlTOPp->v__DOT__ap_CS_fsm 
				  >> 0x14U) & (IData)(vlTOPp->v__DOT__tmp_177_reg_735))));
}

void VBF_cfb64_encrypt::_settle__TOP__12(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_settle__TOP__12\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at BF_cfb64_encrypt.v:850
    vlTOPp->ivec_d0 = (0xffU & ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
					>> 9U) | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x14U)))
				 ? (IData)(vlTOPp->v__DOT__reg_422)
				 : ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
					    >> 8U) 
					   | (vlTOPp->v__DOT__ap_CS_fsm 
					      >> 0x13U)))
				     ? (IData)(vlTOPp->v__DOT__reg_412)
				     : ((1U & ((vlTOPp->v__DOT__ap_CS_fsm 
						>> 7U) 
					       | (vlTOPp->v__DOT__ap_CS_fsm 
						  >> 0x12U)))
					 ? (IData)(vlTOPp->v__DOT__reg_407)
					 : ((1U & (
						   (vlTOPp->v__DOT__ap_CS_fsm 
						    >> 6U) 
						   | (vlTOPp->v__DOT__ap_CS_fsm 
						      >> 0x11U)))
					     ? (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 
						>> 0x18U)
					     : 0U)))));
    // ALWAYS at BF_cfb64_encrypt.v:864
    vlTOPp->ivec_d1 = (0xffU & ((0x400000U & vlTOPp->v__DOT__ap_CS_fsm)
				 ? (IData)(vlTOPp->in_r_q0)
				 : ((0x100000U & vlTOPp->v__DOT__ap_CS_fsm)
				     ? (IData)(vlTOPp->v__DOT__tmp_196_reg_754)
				     : ((0x40000U & vlTOPp->v__DOT__ap_CS_fsm)
					 ? (IData)(vlTOPp->v__DOT__tmp_192_reg_749)
					 : ((0x800U 
					     & vlTOPp->v__DOT__ap_CS_fsm)
					     ? ((IData)(vlTOPp->ivec_q0) 
						^ (IData)(vlTOPp->in_r_q0))
					     : ((0x200U 
						 & vlTOPp->v__DOT__ap_CS_fsm)
						 ? (IData)(vlTOPp->v__DOT__tmp_200_reg_696)
						 : 
						((1U 
						  & ((vlTOPp->v__DOT__ap_CS_fsm 
						      >> 8U) 
						     | (vlTOPp->v__DOT__ap_CS_fsm 
							>> 0x13U)))
						  ? (IData)(vlTOPp->v__DOT__reg_417)
						  : 
						 ((0x80U 
						   & vlTOPp->v__DOT__ap_CS_fsm)
						   ? (IData)(vlTOPp->v__DOT__tmp_199_reg_691)
						   : 
						  ((1U 
						    & ((vlTOPp->v__DOT__ap_CS_fsm 
							>> 6U) 
						       | (vlTOPp->v__DOT__ap_CS_fsm 
							  >> 0x11U)))
						    ? 
						   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0 
						    >> 0x10U)
						    : 0U)))))))));
    vlTOPp->key_S_address0 = (0x3ffU & ((1U & (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x2fU)))
					 ? (0x200U 
					    | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_247_cast_reg_2894))
					 : ((1U & (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0x2eU)))
					     ? (IData)((QData)((IData)(
								       (0xffU 
									& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 
									   >> 0x18U)))))
					     : ((1U 
						 & (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 0x2cU)))
						 ? 
						(0x200U 
						 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_231_cast_reg_2849))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2bU)))
						  ? (IData)((QData)((IData)(
									    (0xffU 
									     & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 
										>> 0x18U)))))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x29U)))
						   ? 
						  (0x200U 
						   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_215_cast_reg_2804))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x28U)))
						    ? (IData)((QData)((IData)(
									      (0xffU 
									       & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 
										>> 0x18U)))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U)))
						     ? 
						    (0x200U 
						     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_199_cast_reg_2759))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x25U)))
						      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 
										>> 0x18U)))))
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x23U)))
						       ? 
						      (0x200U 
						       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_cast_reg_2714))
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x22U)))
						        ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 
										>> 0x18U)))))
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x20U)))
							 ? 
							(0x200U 
							 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_167_cast_reg_2669))
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x1fU)))
							  ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 
										>> 0x18U)))))
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x1dU)))
							   ? 
							  (0x200U 
							   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_151_cast_reg_2624))
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x1cU)))
							    ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 
										>> 0x18U)))))
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0x1aU)))
							     ? 
							    (0x200U 
							     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_135_cast_reg_2579))
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0x19U)))
							      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 
										>> 0x18U)))))
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 0x17U)))
							       ? 
							      (0x200U 
							       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_119_cast_reg_2534))
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 0x16U)))
							        ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 
										>> 0x18U)))))
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									    >> 0x14U)))
								 ? 
								(0x200U 
								 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_103_cast_reg_2489))
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									     >> 0x13U)))
								  ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 
										>> 0x18U)))))
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									      >> 0x11U)))
								   ? 
								  (0x200U 
								   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_87_cast_reg_2444))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									       >> 0x10U)))
								    ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 
										>> 0x18U)))))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xeU)))
								     ? 
								    (0x200U 
								     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_71_cast_reg_2399))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xdU)))
								      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 
										>> 0x18U)))))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xbU)))
								       ? 
								      (0x200U 
								       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_55_cast_reg_2354))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xaU)))
								        ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 
										>> 0x18U)))))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 8U)))
									 ? 
									(0x200U 
									 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_39_cast_reg_2309))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 7U)))
									  ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 
										>> 0x18U)))))
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 5U)))
									   ? 
									  (0x200U 
									   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_23_cast_reg_2264))
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 4U)))
									    ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 
										>> 0x18U)))))
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 2U)))
									     ? 
									    (0x200U 
									     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_7_cast_reg_2219))
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 1U)))
									      ? (IData)((QData)((IData)(
										(0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 
										>> 0x18U)))))
									      : 0U)))))))))))))))))))))))))))))))));
    vlTOPp->key_S_address1 = (0x3ffU & ((1U & (IData)(
						      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
						       >> 0x2fU)))
					 ? (0x300U 
					    | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_191_reg_2879))
					 : ((1U & (IData)(
							  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							   >> 0x2eU)))
					     ? (IData)((QData)((IData)(
								       (0x100U 
									| (0xffU 
									   & (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2 
									      >> 0x10U))))))
					     : ((1U 
						 & (IData)(
							   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							    >> 0x2cU)))
						 ? 
						(0x300U 
						 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_190_reg_2834))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							     >> 0x2bU)))
						  ? (IData)((QData)((IData)(
									    (0x100U 
									     | (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2 
										>> 0x10U))))))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							      >> 0x29U)))
						   ? 
						  (0x300U 
						   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_189_reg_2789))
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
							       >> 0x28U)))
						    ? (IData)((QData)((IData)(
									      (0x100U 
									       | (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2 
										>> 0x10U))))))
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								>> 0x26U)))
						     ? 
						    (0x300U 
						     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_188_reg_2744))
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								 >> 0x25U)))
						      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2 
										>> 0x10U))))))
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								  >> 0x23U)))
						       ? 
						      (0x300U 
						       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_187_reg_2699))
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								   >> 0x22U)))
						        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2 
										>> 0x10U))))))
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								    >> 0x20U)))
							 ? 
							(0x300U 
							 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_186_reg_2654))
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								     >> 0x1fU)))
							  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2 
										>> 0x10U))))))
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								      >> 0x1dU)))
							   ? 
							  (0x300U 
							   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_185_reg_2609))
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
								       >> 0x1cU)))
							    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2 
										>> 0x10U))))))
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									>> 0x1aU)))
							     ? 
							    (0x300U 
							     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_184_reg_2564))
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									 >> 0x19U)))
							      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2 
										>> 0x10U))))))
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									  >> 0x17U)))
							       ? 
							      (0x300U 
							       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_reg_2519))
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									   >> 0x16U)))
							        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2 
										>> 0x10U))))))
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									    >> 0x14U)))
								 ? 
								(0x300U 
								 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_182_reg_2474))
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									     >> 0x13U)))
								  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2 
										>> 0x10U))))))
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									      >> 0x11U)))
								   ? 
								  (0x300U 
								   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_181_reg_2429))
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
									       >> 0x10U)))
								    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2 
										>> 0x10U))))))
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xeU)))
								     ? 
								    (0x300U 
								     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_180_reg_2384))
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xdU)))
								      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2 
										>> 0x10U))))))
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xbU)))
								       ? 
								      (0x300U 
								       | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_179_reg_2339))
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 0xaU)))
								        ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2 
										>> 0x10U))))))
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 8U)))
									 ? 
									(0x300U 
									 | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_178_reg_2294))
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 7U)))
									  ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2 
										>> 0x10U))))))
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 5U)))
									   ? 
									  (0x300U 
									   | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_177_reg_2249))
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 4U)))
									    ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2 
										>> 0x10U))))))
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 2U)))
									     ? 
									    (0x300U 
									     | (IData)(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_176_reg_2204))
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm 
										>> 1U)))
									      ? (IData)((QData)((IData)(
										(0x100U 
										| (0xffU 
										& (vlTOPp->v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2 
										>> 0x10U))))))
									      : 0U)))))))))))))))))))))))))))))))));
}

void VBF_cfb64_encrypt::_eval(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_eval\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
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
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void VBF_cfb64_encrypt::_eval_initial(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_eval_initial\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->_initial__TOP__7(vlSymsp);
}

void VBF_cfb64_encrypt::final() {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::final\n"); );
    // Variables
    VBF_cfb64_encrypt__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBF_cfb64_encrypt::_eval_settle(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_eval_settle\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
}

VL_INLINE_OPT QData VBF_cfb64_encrypt::_change_request(VBF_cfb64_encrypt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBF_cfb64_encrypt::_change_request\n"); );
    VBF_cfb64_encrypt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
