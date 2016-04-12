// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vusqrt_H_
#define _Vusqrt_H_

#include "verilated.h"
class Vusqrt__Syms;

//----------

VL_MODULE(Vusqrt) {
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
    VL_OUT8(q_sqrt_ap_vld,0,0);
    VL_OUT8(q_frac_ap_vld,0,0);
    VL_IN(y,31,0);
    VL_IN(m,31,0);
    VL_OUT(q_sqrt,31,0);
    VL_OUT(q_frac,31,0);
    VL_IN(n,31,0);
    VL_OUT(ap_return,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__tmp_5_reg_3073,1,0);
    VL_SIG8(v__DOT__a_1_1_fu_368_p3,1,0);
    VL_SIG8(v__DOT__a_1_1_reg_3080,1,0);
    VL_SIG8(v__DOT__tmp_6_cast_reg_3113,1,0);
    VL_SIG8(v__DOT__tmp_8_2_reg_3118,0,0);
    VL_SIG8(v__DOT__tmp_9_cast_reg_3124,1,0);
    VL_SIG8(v__DOT__tmp_cast_reg_3141,1,0);
    VL_SIG8(v__DOT__tmp_1_cast_reg_3148,1,0);
    VL_SIG8(v__DOT__tmp_3_cast_reg_3155,1,0);
    VL_SIG8(v__DOT__tmp_5_cast_reg_3162,1,0);
    VL_SIG8(v__DOT__tmp_7_cast_reg_3169,1,0);
    VL_SIG8(v__DOT__tmp_10_cast_reg_3176,1,0);
    VL_SIG8(v__DOT__tmp_11_cast_reg_3183,1,0);
    VL_SIG8(v__DOT__tmp_12_cast_reg_3190,1,0);
    VL_SIG8(v__DOT__tmp_13_cast_reg_3197,1,0);
    VL_SIG8(v__DOT__tmp_14_cast_reg_3204,1,0);
    VL_SIG8(v__DOT__tmp_15_cast_reg_3211,1,0);
    VL_SIG8(v__DOT__tmp_177_reg_3218,0,0);
    VL_SIG8(v__DOT__not_tmp_8_2_reg_3223,0,0);
    VL_SIG8(v__DOT__not_tmp_8_3_reg_3255,0,0);
    VL_SIG8(v__DOT__tmp_8_4_reg_3287,0,0);
    VL_SIG8(v__DOT__not_tmp_8_4_reg_3303,0,0);
    VL_SIG8(v__DOT__not_tmp_8_5_reg_3333,0,0);
    VL_SIG8(v__DOT__tmp_8_6_reg_3363,0,0);
    VL_SIG8(v__DOT__not_tmp_8_6_reg_3379,0,0);
    VL_SIG8(v__DOT__not_tmp_8_7_reg_3407,0,0);
    VL_SIG8(v__DOT__tmp_8_8_reg_3435,0,0);
    VL_SIG8(v__DOT__not_tmp_8_8_reg_3451,0,0);
    VL_SIG8(v__DOT__not_tmp_8_9_reg_3477,0,0);
    VL_SIG8(v__DOT__tmp_8_s_reg_3503,0,0);
    VL_SIG8(v__DOT__not_tmp_8_s_reg_3519,0,0);
    VL_SIG8(v__DOT__not_tmp_8_1_reg_3543,0,0);
    VL_SIG8(v__DOT__tmp_8_11_reg_3567,0,0);
    VL_SIG8(v__DOT__not_tmp_8_10_reg_3583,0,0);
    VL_SIG8(v__DOT__not_tmp_8_11_reg_3605,0,0);
    VL_SIG8(v__DOT__tmp_8_13_reg_3627,0,0);
    VL_SIG8(v__DOT__not_tmp_8_12_reg_3643,0,0);
    VL_SIG8(v__DOT__not_tmp_8_13_reg_3664,0,0);
    VL_SIG8(v__DOT__not_tmp_8_14_reg_3692,0,0);
    VL_SIG8(v__DOT__not_tmp_8_15_reg_3711,0,0);
    VL_SIG8(v__DOT__not_tmp_8_16_reg_3737,0,0);
    VL_SIG8(v__DOT__not_tmp_8_17_reg_3754,0,0);
    VL_SIG8(v__DOT__not_tmp_8_18_reg_3778,0,0);
    VL_SIG8(v__DOT__not_tmp_8_19_reg_3793,0,0);
    VL_SIG8(v__DOT__not_tmp_8_20_reg_3815,0,0);
    VL_SIG8(v__DOT__not_tmp_8_21_reg_3828,0,0);
    VL_SIG8(v__DOT__not_tmp_8_22_reg_3848,0,0);
    VL_SIG8(v__DOT__not_tmp_8_23_reg_3859,0,0);
    VL_SIG8(v__DOT__not_tmp_8_24_reg_3877,0,0);
    VL_SIG8(v__DOT__not_tmp_8_25_reg_3886,0,0);
    VL_SIG8(v__DOT__not_tmp_8_26_reg_3902,0,0);
    VL_SIG8(v__DOT__not_tmp_8_27_reg_3909,0,0);
    VL_SIG8(v__DOT__tmp_s_fu_312_p3,4,0);
    VL_SIG8(v__DOT__tmp_8_1_fu_348_p2,0,0);
    VL_SIG8(v__DOT__tmp_6_3_fu_612_p4,4,0);
    VL_SIG8(v__DOT__tmp_8_3_fu_631_p2,0,0);
    VL_SIG8(v__DOT__tmp_6_4_fu_690_p5,5,0);
    VL_SIG8(v__DOT__tmp_6_5_fu_766_p6,6,0);
    VL_SIG8(v__DOT__tmp_8_5_fu_787_p2,0,0);
    VL_SIG8(v__DOT__tmp_6_6_fu_846_p7,7,0);
    VL_SIG8(v__DOT__tmp_8_7_fu_947_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_9_fu_1111_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_10_fu_1279_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_12_fu_1451_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_14_fu_1627_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_15_fu_1713_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_16_fu_1794_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_17_fu_1876_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_18_fu_1959_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_19_fu_2043_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_20_fu_2128_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_21_fu_2214_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_22_fu_2301_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_23_fu_2389_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_24_fu_2478_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_25_fu_2568_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_26_fu_2659_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_27_fu_2751_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_28_fu_2840_p2,0,0);
    VL_SIG8(v__DOT__tmp_8_29_fu_2930_p2,0,0);
    VL_SIG16(v__DOT__ap_CS_fsm,15,0);
    VL_SIG16(v__DOT__tmp_6_7_fu_924_p8,8,0);
    VL_SIG16(v__DOT__tmp_6_8_fu_1006_p9,9,0);
    VL_SIG16(v__DOT__tmp_6_9_fu_1086_p10,10,0);
    VL_SIG16(v__DOT__tmp_6_s_fu_1170_p11,11,0);
    VL_SIG16(v__DOT__tmp_6_1_fu_1252_p12,12,0);
    VL_SIG16(v__DOT__tmp_6_10_fu_1338_p13,13,0);
    VL_SIG16(v__DOT__tmp_6_11_fu_1422_p14,14,0);
    VL_SIG16(v__DOT__tmp_6_12_fu_1510_p15,15,0);
    VL_SIG16(v__DOT__ap_NS_fsm,15,0);
    VL_SIG(v__DOT__tmp_14_reg_3131,27,0);
    VL_SIG(v__DOT__tmp_16_reg_3136,29,0);
    VL_SIG(v__DOT__tmp_34_reg_3293,27,0);
    VL_SIG(v__DOT__tmp_36_reg_3298,29,0);
    VL_SIG(v__DOT__tmp_54_reg_3369,27,0);
    VL_SIG(v__DOT__tmp_56_reg_3374,29,0);
    VL_SIG(v__DOT__tmp_70_reg_3441,27,0);
    VL_SIG(v__DOT__tmp_71_reg_3446,29,0);
    VL_SIG(v__DOT__tmp_83_reg_3509,27,0);
    VL_SIG(v__DOT__tmp_84_reg_3514,29,0);
    VL_SIG(v__DOT__tmp_96_reg_3573,27,0);
    VL_SIG(v__DOT__tmp_98_reg_3578,29,0);
    VL_SIG(v__DOT__tmp_110_reg_3633,27,0);
    VL_SIG(v__DOT__tmp_111_reg_3638,29,0);
    VL_SIG(v__DOT__tmp_61_reg_3685,29,0);
    VL_SIG(v__DOT__tmp_69_reg_3730,29,0);
    VL_SIG(v__DOT__tmp_77_reg_3771,29,0);
    VL_SIG(v__DOT__tmp_85_reg_3808,29,0);
    VL_SIG(v__DOT__tmp_93_reg_3841,29,0);
    VL_SIG(v__DOT__tmp_101_reg_3870,29,0);
    VL_SIG(v__DOT__tmp_109_reg_3895,29,0);
    VL_SIG(v__DOT__tmp_117_reg_3916,29,0);
    VL_SIG(v__DOT__a_1_s_fu_3028_p32,31,0);
    VL_SIG(v__DOT__tmp_4_fu_394_p3,29,0);
    VL_SIG(v__DOT__tmp_9_fu_595_p3,29,0);
    VL_SIG(v__DOT__tmp_13_fu_671_p3,29,0);
    VL_SIG(v__DOT__tmp_17_fu_749_p3,29,0);
    VL_SIG(v__DOT__tmp_21_fu_827_p3,29,0);
    VL_SIG(v__DOT__tmp_25_fu_907_p3,29,0);
    VL_SIG(v__DOT__tmp_29_fu_987_p3,29,0);
    VL_SIG(v__DOT__tmp_33_fu_1069_p3,29,0);
    VL_SIG(v__DOT__tmp_37_fu_1151_p3,29,0);
    VL_SIG(v__DOT__tmp_41_fu_1235_p3,29,0);
    VL_SIG(v__DOT__tmp_45_fu_1319_p3,29,0);
    VL_SIG(v__DOT__tmp_49_fu_1405_p3,29,0);
    VL_SIG(v__DOT__tmp_53_fu_1491_p3,29,0);
    VL_SIG(v__DOT__tmp_57_fu_1579_p3,29,0);
    VL_SIG(v__DOT__tmp_6_13_fu_1596_p16,16,0);
    VL_SIG(v__DOT__tmp_6_14_fu_1682_p17,17,0);
    VL_SIG(v__DOT__tmp_65_fu_1745_p3,29,0);
    VL_SIG(v__DOT__tmp_6_15_fu_1761_p18,18,0);
    VL_SIG(v__DOT__tmp_6_16_fu_1843_p19,19,0);
    VL_SIG(v__DOT__tmp_73_fu_1908_p3,29,0);
    VL_SIG(v__DOT__tmp_6_17_fu_1924_p20,20,0);
    VL_SIG(v__DOT__tmp_6_18_fu_2008_p21,21,0);
    VL_SIG(v__DOT__tmp_81_fu_2075_p3,29,0);
    VL_SIG(v__DOT__tmp_6_19_fu_2091_p22,22,0);
    VL_SIG(v__DOT__tmp_6_20_fu_2177_p23,23,0);
    VL_SIG(v__DOT__tmp_89_fu_2246_p3,29,0);
    VL_SIG(v__DOT__tmp_6_21_fu_2262_p24,24,0);
    VL_SIG(v__DOT__tmp_6_22_fu_2350_p25,25,0);
    VL_SIG(v__DOT__tmp_97_fu_2421_p3,29,0);
    VL_SIG(v__DOT__tmp_6_23_fu_2437_p26,26,0);
    VL_SIG(v__DOT__tmp_6_24_fu_2527_p27,27,0);
    VL_SIG(v__DOT__tmp_105_fu_2600_p3,29,0);
    VL_SIG(v__DOT__tmp_6_25_fu_2616_p28,28,0);
    VL_SIG(v__DOT__tmp_6_26_fu_2708_p29,29,0);
    VL_SIG(v__DOT__tmp_113_fu_2779_p3,29,0);
    VL_SIG(v__DOT__tmp_6_27_fu_2795_p30,30,0);
    VL_SIG(v__DOT__tmp_6_28_fu_2889_p31,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign381[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign388[4];
    Vusqrt__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vusqrt& operator= (const Vusqrt&);	///< Copying not allowed
    Vusqrt(const Vusqrt&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vusqrt(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vusqrt();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vusqrt__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vusqrt__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vusqrt__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vusqrt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__4(Vusqrt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__8(Vusqrt__Syms* __restrict vlSymsp);
    static void	_eval(Vusqrt__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vusqrt__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vusqrt__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(Vusqrt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(Vusqrt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vusqrt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vusqrt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vusqrt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vusqrt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vusqrt__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
