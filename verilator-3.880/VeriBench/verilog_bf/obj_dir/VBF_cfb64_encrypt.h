// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBF_cfb64_encrypt_H_
#define _VBF_cfb64_encrypt_H_

#include "verilated.h"
class VBF_cfb64_encrypt__Syms;

//----------

VL_MODULE(VBF_cfb64_encrypt) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(ap_clk,0,0);
    VL_IN8(ap_rst,0,0);
    VL_IN8(ap_start,0,0);
    VL_OUT8(ap_done,0,0);
    VL_OUT8(ap_idle,0,0);
    VL_OUT8(ap_ready,0,0);
    VL_OUT8(in_r_address0,5,0);
    VL_OUT8(in_r_ce0,0,0);
    VL_IN8(in_r_q0,7,0);
    VL_OUT8(out_r_address0,5,0);
    VL_OUT8(out_r_ce0,0,0);
    VL_OUT8(out_r_we0,0,0);
    VL_OUT8(out_r_d0,7,0);
    VL_OUT8(ivec_address0,2,0);
    VL_OUT8(ivec_ce0,0,0);
    VL_OUT8(ivec_we0,0,0);
    VL_OUT8(ivec_d0,7,0);
    VL_IN8(ivec_q0,7,0);
    VL_OUT8(ivec_address1,2,0);
    VL_OUT8(ivec_ce1,0,0);
    VL_OUT8(ivec_we1,0,0);
    VL_OUT8(ivec_d1,7,0);
    VL_IN8(ivec_q1,7,0);
    VL_OUT8(num_o_ap_vld,0,0);
    VL_OUT8(key_P_address0,4,0);
    VL_OUT8(key_P_ce0,0,0);
    VL_OUT8(key_P_address1,4,0);
    VL_OUT8(key_P_ce1,0,0);
    VL_OUT8(key_S_ce0,0,0);
    VL_OUT8(key_S_ce1,0,0);
    VL_OUT16(key_S_address0,9,0);
    VL_OUT16(key_S_address1,9,0);
    //char	__VpadToAlign34[2];
    VL_IN(length_r,31,0);
    VL_IN(num_i,31,0);
    VL_OUT(num_o,31,0);
    VL_IN(encrypt,31,0);
    VL_IN(key_P_q0,31,0);
    VL_IN(key_P_q1,31,0);
    VL_IN(key_S_q0,31,0);
    VL_IN(key_S_q1,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__reg_383,7,0);
    VL_SIG8(v__DOT__reg_387,7,0);
    VL_SIG8(v__DOT__reg_391,7,0);
    VL_SIG8(v__DOT__reg_395,7,0);
    VL_SIG8(v__DOT__reg_399,7,0);
    VL_SIG8(v__DOT__reg_403,7,0);
    VL_SIG8(v__DOT__reg_407,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_done,0,0);
    VL_SIG8(v__DOT__reg_412,7,0);
    VL_SIG8(v__DOT__reg_417,7,0);
    VL_SIG8(v__DOT__reg_422,7,0);
    VL_SIG8(v__DOT__ivec_addr_reg_605,2,0);
    VL_SIG8(v__DOT__iv_reg_619,2,0);
    VL_SIG8(v__DOT__iv_1_reg_624,2,0);
    VL_SIG8(v__DOT__iv_2_reg_629,2,0);
    VL_SIG8(v__DOT__iv_3_reg_634,2,0);
    VL_SIG8(v__DOT__iv_4_reg_639,2,0);
    VL_SIG8(v__DOT__iv_5_reg_644,2,0);
    VL_SIG8(v__DOT__iv_6_reg_649,2,0);
    VL_SIG8(v__DOT__in_addr_1_reg_654,5,0);
    VL_SIG8(v__DOT__out_addr_1_reg_659,5,0);
    VL_SIG8(v__DOT__tmp_178_reg_677,0,0);
    VL_SIG8(v__DOT__tmp_199_reg_691,7,0);
    VL_SIG8(v__DOT__tmp_200_reg_696,7,0);
    VL_SIG8(v__DOT__ivec_addr_8_reg_701,2,0);
    VL_SIG8(v__DOT__in_addr_reg_712,5,0);
    VL_SIG8(v__DOT__out_addr_reg_717,5,0);
    VL_SIG8(v__DOT__tmp_177_reg_735,0,0);
    VL_SIG8(v__DOT__tmp_192_reg_749,7,0);
    VL_SIG8(v__DOT__tmp_196_reg_754,7,0);
    VL_SIG8(v__DOT__ivec_addr27_reg_759,2,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_176_reg_2204,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_7_cast_reg_2219,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_177_reg_2249,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_23_cast_reg_2264,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_178_reg_2294,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_39_cast_reg_2309,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_179_reg_2339,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_55_cast_reg_2354,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_180_reg_2384,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_71_cast_reg_2399,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_181_reg_2429,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_87_cast_reg_2444,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_182_reg_2474,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_103_cast_reg_2489,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_reg_2519,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_119_cast_reg_2534,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_184_reg_2564,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_135_cast_reg_2579,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_185_reg_2609,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_151_cast_reg_2624,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_186_reg_2654,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_167_cast_reg_2669,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_187_reg_2699,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_183_cast_reg_2714,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_188_reg_2744,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_199_cast_reg_2759,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_189_reg_2789,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_215_cast_reg_2804,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_190_reg_2834,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_231_cast_reg_2849,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_191_reg_2879,7,0);
    VL_SIG8(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_247_cast_reg_2894,7,0);
    VL_SIG(v__DOT__ap_CS_fsm,23,0);
    VL_SIG(v__DOT__l_9_reg_664,31,0);
    VL_SIG(v__DOT__p_rec4_reg_672,31,0);
    VL_SIG(v__DOT__v0_reg_681,31,0);
    VL_SIG(v__DOT__v1_reg_686,31,0);
    VL_SIG(v__DOT__n_4_cast_reg_707,31,0);
    VL_SIG(v__DOT__l_reg_722,31,0);
    VL_SIG(v__DOT__p_rec_reg_730,31,0);
    VL_SIG(v__DOT__v0_2_reg_739,31,0);
    VL_SIG(v__DOT__v1_2_reg_744,31,0);
    VL_SIG(v__DOT__n_3_cast_reg_765,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_0,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295_ap_return_1,31,0);
    VL_SIG(v__DOT__n1_reg_223,31,0);
    VL_SIG(v__DOT__l9_reg_233,31,0);
    VL_SIG(v__DOT__p_01_rec_reg_242,31,0);
    VL_SIG(v__DOT__n_1_reg_253,31,0);
    VL_SIG(v__DOT__l_1_reg_263,31,0);
    VL_SIG(v__DOT__p_12_rec_reg_272,31,0);
    VL_SIG(v__DOT__n_2_reg_283,31,0);
    VL_SIG(v__DOT__ap_NS_fsm,23,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__reg_778,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_fu_794_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_reg_2199,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__grp_fu_788_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp_10_reg_2239,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_fu_881_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_reg_2244,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp1_reg_2284,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_fu_968_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_1_reg_2289,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp2_reg_2329,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_fu_1054_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_1_reg_2334,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp3_reg_2374,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_fu_1140_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_2_reg_2379,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp4_reg_2419,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_fu_1226_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_2_reg_2424,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp5_reg_2464,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_fu_1312_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_3_reg_2469,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp6_reg_2509,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_fu_1398_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_3_reg_2514,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp7_reg_2554,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_fu_1484_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_4_reg_2559,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp8_reg_2599,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_fu_1570_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_4_reg_2604,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp9_reg_2644,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_fu_1656_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_5_reg_2649,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp10_reg_2689,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_fu_1742_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_5_reg_2694,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp11_reg_2734,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_fu_1828_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_6_reg_2739,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp12_reg_2779,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_fu_1914_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_6_reg_2784,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp13_reg_2824,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_fu_2000_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_7_reg_2829,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp14_reg_2869,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_fu_2086_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_7_reg_2874,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__tmp15_reg_2914,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__r_8_fu_2177_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__l_8_fu_2172_p2,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_0_preg,31,0);
    VL_SIG(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_return_1_preg,31,0);
    //char	__VpadToAlign436[4];
    VL_SIG64(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_CS_fsm,49,0);
    VL_SIG64(v__DOT__grp_BF_cfb64_encrypt_BF_encrypt_fu_295__DOT__ap_NS_fsm,49,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign461[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign468[4];
    VBF_cfb64_encrypt__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VBF_cfb64_encrypt& operator= (const VBF_cfb64_encrypt&);	///< Copying not allowed
    VBF_cfb64_encrypt(const VBF_cfb64_encrypt&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VBF_cfb64_encrypt(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBF_cfb64_encrypt();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBF_cfb64_encrypt__Syms* symsp, bool first);
  private:
    static QData	_change_request(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__3(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_eval(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_eval_initial(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_eval_settle(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_initial__TOP__7(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VBF_cfb64_encrypt__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
