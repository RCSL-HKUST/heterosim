// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfloat64_mul_H_
#define _Vfloat64_mul_H_

#include "verilated.h"
#include "Vfloat64_mul__Inlines.h"
class Vfloat64_mul__Syms;

//----------

VL_MODULE(Vfloat64_mul) {
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
    VL_OUT8(buff_address0,0,0);
    VL_OUT8(buff_ce0,0,0);
    VL_OUT8(buff_address1,0,0);
    VL_OUT8(buff_ce1,0,0);
    VL_OUT8(result_ap_vld,0,0);
    //char	__VpadToAlign11[1];
    VL_IN(m,31,0);
    VL_IN(n,31,0);
    VL_OUT(ap_return,31,0);
    VL_IN64(buff_q0,63,0);
    VL_IN64(buff_q1,63,0);
    VL_OUT64(result,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__countLeadingZerosHigh_q0,3,0);
    VL_SIG8(v__DOT__zSign_fu_405_p2,0,0);
    VL_SIG8(v__DOT__zSign_reg_1406,0,0);
    VL_SIG8(v__DOT__tmp_reg_1412,0,0);
    VL_SIG8(v__DOT__tmp_22_reg_1416,0,0);
    VL_SIG8(v__DOT__tmp_26_reg_1420,0,0);
    VL_SIG8(v__DOT__tmp_29_reg_1424,0,0);
    VL_SIG8(v__DOT__icmp_reg_1428,0,0);
    VL_SIG8(v__DOT__icmp6_reg_1439,0,0);
    VL_SIG8(v__DOT__tmp_i2_reg_1449,0,0);
    VL_SIG8(v__DOT__tmp_i9_fu_683_p2,0,0);
    VL_SIG8(v__DOT__tmp_i9_reg_1473,0,0);
    VL_SIG8(v__DOT__or_cond_fu_625_p2,0,0);
    VL_SIG8(v__DOT__icmp9_reg_1491,0,0);
    VL_SIG8(v__DOT__shiftCount_1_reg_1501,6,0);
    VL_SIG8(v__DOT__tmp_30_reg_1512,0,0);
    VL_SIG8(v__DOT__tmp_31_reg_1516,0,0);
    VL_SIG8(v__DOT__icmp1_reg_1520,0,0);
    VL_SIG8(v__DOT__icmp2_reg_1525,0,0);
    VL_SIG8(v__DOT__tmp_66_reg_1531,7,0);
    VL_SIG8(v__DOT__tmp_46_reg_1536,7,0);
    VL_SIG8(v__DOT__tmp_47_reg_1541,7,0);
    VL_SIG8(v__DOT__icmp3_reg_1546,0,0);
    VL_SIG8(v__DOT__shiftCount_4_reg_1556,6,0);
    VL_SIG8(v__DOT__tmp_43_i_reg_1632,0,0);
    VL_SIG8(v__DOT__tmp_48_i_reg_1642,0,0);
    VL_SIG8(v__DOT__tmp_34_reg_1647,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_done,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__tmp_79_i7_i_fu_677_p2,0,0);
    VL_SIG8(v__DOT__tmp_13_fu_1249_p2,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_CS_fsm,5,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_reg_561,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_1_reg_576,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_6_reg_606,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_7_reg_610,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_reg_614,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_4_reg_618,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__icmp_reg_630,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_8_i_reg_635,0,0);
    VL_SIG8(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_NS_fsm,5,0);
    //char	__VpadToAlign93[1];
    VL_SIG16(v__DOT__bExp_reg_1396,10,0);
    VL_SIG16(v__DOT__bExp_cast_reg_1401,11,0);
    VL_SIG16(v__DOT__aExp2_cast_reg_1507,12,0);
    VL_SIG16(v__DOT__tmp35_reg_1657,11,0);
    VL_SIG16(v__DOT__zExp_reg_1662,12,0);
    VL_SIG16(v__DOT__aExp2_reg_225,11,0);
    VL_SIG16(v__DOT__bExp2_reg_243,11,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp4_cast_reg_566,9,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__sel_tmp5_reg_571,9,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_fu_236_p3,9,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundIncrement_4_reg_595,9,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__count_assign_reg_625,10,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_29_reg_667,11,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zExp_assign_1_reg_117,12,0);
    VL_SIG16(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__roundBits_1_reg_130,9,0);
    VL_SIG(v__DOT__ap_CS_fsm,20,0);
    VL_SIG(v__DOT__a_assign_2_fu_463_p3,31,0);
    VL_SIG(v__DOT__a_assign_2_reg_1433,31,0);
    VL_SIG(v__DOT__tmp_67_reg_1572,21,0);
    VL_SIG(v__DOT__tmp_4_reg_1577,31,0);
    VL_SIG(v__DOT__tmp_49_reg_1637,31,0);
    VL_SIG(v__DOT__p_a_i_i_i_fu_759_p3,31,0);
    VL_SIG(v__DOT__a_assign_4_fu_925_p3,31,0);
    VL_SIG(v__DOT__p_a_i_i_i1_fu_955_p3,31,0);
    VL_SIG(v__DOT__ap_NS_fsm,20,0);
    VL_SIG(v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0,31,0);
    VL_SIG(v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__b_reg0,31,0);
    VL_SIG(v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0,31,0);
    VL_SIG(v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__a_reg0,31,0);
    //char	__VpadToAlign180[4];
    VL_SIG64(v__DOT__b_reg_1367,63,0);
    VL_SIG64(v__DOT__bSig_reg_1374,51,0);
    VL_SIG64(v__DOT__aSig_1_cast_reg_1379,63,0);
    VL_SIG64(v__DOT__bSig_1_cast_reg_1390,63,0);
    VL_SIG64(v__DOT__b_assign_mux_i1_fu_554_p3,63,0);
    VL_SIG64(v__DOT__b_assign_mux_i1_reg_1454,63,0);
    VL_SIG64(v__DOT__a_assign_1_reg_1459,63,0);
    VL_SIG64(v__DOT__b_assign_mux_i_fu_689_p3,63,0);
    VL_SIG64(v__DOT__b_assign_mux_i_reg_1478,63,0);
    VL_SIG64(v__DOT__a_assign_5_fu_697_p3,63,0);
    VL_SIG64(v__DOT__a_assign_5_reg_1483,63,0);
    VL_SIG64(v__DOT__z1_reg_1606,63,0);
    VL_SIG64(v__DOT__zMiddleA_reg_1611,63,0);
    VL_SIG64(v__DOT__zMiddleB_reg_1616,63,0);
    VL_SIG64(v__DOT__z0_reg_1622,63,0);
    VL_SIG64(v__DOT__zMiddleA_1_fu_1180_p2,63,0);
    VL_SIG64(v__DOT__zMiddleA_1_reg_1627,63,0);
    VL_SIG64(v__DOT__zSig0_3_reg_1652,63,0);
    VL_SIG64(v__DOT__aSig2_reg_215,63,0);
    VL_SIG64(v__DOT__bSig2_reg_234,63,0);
    VL_SIG64(v__DOT__grp_fu_270_p0,51,0);
    VL_SIG64(v__DOT__tmp_17_fu_590_p3,51,0);
    VL_SIG64(v__DOT__tmp_10_fu_725_p3,51,0);
    VL_SIG64(v__DOT__z1_2_fu_1204_p2,63,0);
    VL_SIG64(v__DOT__z0_2_fu_1239_p2,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__z_2_fu_420_p3,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign_2_reg_661,53,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_38_i8_reg_672,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__zSig_assign1_reg_106,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_phi_fu_144_p4,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__p_0_reg_141,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_2_fu_267_p2,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__tmp_3_i_fu_379_p2,63,0);
    VL_SIG64(v__DOT__grp_float64_mul_roundAndPackFloat64_fu_253__DOT__ap_return_preg,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U5__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U6__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U7__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff0,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff1,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff2,63,0);
    VL_SIG64(v__DOT__float64_mul_mul_32ns_32ns_64_6_U8__DOT__float64_mul_mul_32ns_32ns_64_6_MulnS_0_U__DOT__buff3,63,0);
    VL_SIG8(v__DOT__countLeadingZerosHigh_U__DOT__float64_mul_countLeadingZerosHigh_rom_U__DOT__ram[256],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign845[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign852[4];
    Vfloat64_mul__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vfloat64_mul& operator= (const Vfloat64_mul&);	///< Copying not allowed
    Vfloat64_mul(const Vfloat64_mul&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vfloat64_mul(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfloat64_mul();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfloat64_mul__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfloat64_mul__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vfloat64_mul__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_combo__TOP__13(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_combo__TOP__2(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_eval(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_initial__TOP__7(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vfloat64_mul__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vfloat64_mul__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
