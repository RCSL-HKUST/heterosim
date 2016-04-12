// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VReflection_coefficients_H_
#define _VReflection_coefficients_H_

#include "verilated.h"
#include "VReflection_coefficients__Inlines.h"
class VReflection_coefficients__Syms;

//----------

VL_MODULE(VReflection_coefficients) {
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
    VL_OUT8(x_address0,3,0);
    VL_OUT8(x_ce0,0,0);
    VL_OUT8(y_address0,2,0);
    VL_OUT8(y_ce0,0,0);
    VL_OUT8(y_we0,0,0);
    //char	__VpadToAlign11[1];
    VL_OUT16(y_d0,15,0);
    //char	__VpadToAlign14[2];
    VL_IN(x_q0,31,0);
    VL_IN(mm,31,0);
    VL_IN(nn,31,0);
    VL_OUT(ap_return,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__bitoff_q0,3,0);
    VL_SIG8(v__DOT__bitoff_q1,3,0);
    VL_SIG8(v__DOT__bitoff_q2,3,0);
    VL_SIG8(v__DOT__bitoff_q3,3,0);
    VL_SIG8(v__DOT__tmp_reg_1347,0,0);
    VL_SIG8(v__DOT__tmp_1_i_reg_1351,0,0);
    VL_SIG8(v__DOT__icmp_reg_1358,0,0);
    VL_SIG8(v__DOT__icmp1_reg_1364,0,0);
    VL_SIG8(v__DOT__icmp2_reg_1370,0,0);
    VL_SIG8(v__DOT__i_reg_1403,3,0);
    VL_SIG8(v__DOT__i_4_reg_1431,3,0);
    VL_SIG8(v__DOT__i_5_reg_1439,3,0);
    VL_SIG8(v__DOT__P_addr_reg_1454,3,0);
    VL_SIG8(v__DOT__P_addr_1_reg_1459,3,0);
    VL_SIG8(v__DOT__y_addr_1_reg_1464,2,0);
    VL_SIG8(v__DOT__p_rec5_reg_1480,3,0);
    VL_SIG8(v__DOT__tmp_1_fu_862_p2,0,0);
    VL_SIG8(v__DOT__tmp_1_reg_1490,0,0);
    VL_SIG8(v__DOT__r_1_rec_cast1_le_reg_1513,4,0);
    VL_SIG8(v__DOT__k_fu_890_p2,3,0);
    VL_SIG8(v__DOT__tmp_27_i_fu_896_p2,0,0);
    VL_SIG8(v__DOT__tmp_i2_reg_1544,0,0);
    VL_SIG8(v__DOT__grp_fu_467_p2,0,0);
    VL_SIG8(v__DOT__or_cond_i_reg_1550,0,0);
    VL_SIG8(v__DOT__icmp3_reg_1566,0,0);
    VL_SIG8(v__DOT__tmp_16_fu_1064_p2,0,0);
    VL_SIG8(v__DOT__K_addr_1_reg_1589,3,0);
    VL_SIG8(v__DOT__or_cond_i1_reg_1620,0,0);
    VL_SIG8(v__DOT__or_cond_i2_reg_1631,0,0);
    VL_SIG8(v__DOT__icmp4_reg_1641,0,0);
    VL_SIG8(v__DOT__icmp5_reg_1656,0,0);
    VL_SIG8(v__DOT__exitcond3_fu_1278_p2,0,0);
    VL_SIG8(v__DOT__exitcond3_reg_1666,0,0);
    VL_SIG8(v__DOT__exitcond5_fu_1295_p2,0,0);
    VL_SIG8(v__DOT__exitcond5_reg_1675,0,0);
    VL_SIG8(v__DOT__p_rec9_fu_1301_p2,3,0);
    VL_SIG8(v__DOT__ACF_address0,3,0);
    VL_SIG8(v__DOT__P_address0,3,0);
    VL_SIG8(v__DOT__K_address0,3,0);
    VL_SIG8(v__DOT__i_1_reg_306,3,0);
    VL_SIG8(v__DOT__i_2_reg_317,3,0);
    VL_SIG8(v__DOT__i_3_reg_328,3,0);
    VL_SIG8(v__DOT__r_1_rec_reg_351,3,0);
    VL_SIG8(v__DOT__k_i_reg_405,3,0);
    VL_SIG8(v__DOT__r_0_rec_reg_450,3,0);
    VL_SIG8(v__DOT__sel_tmp13_i_fu_673_p2,0,0);
    VL_SIG8(v__DOT__or_cond_fu_705_p2,0,0);
    VL_SIG8(v__DOT__tmp_28_i_fu_908_p2,0,0);
    VL_SIG16(v__DOT__P_q0,15,0);
    VL_SIG16(v__DOT__temp_1_reg_1469,15,0);
    VL_SIG16(v__DOT__div_fu_936_p3,15,0);
    VL_SIG16(v__DOT__b_assign_fu_955_p3,15,0);
    VL_SIG16(v__DOT__b_assign_reg_1536,15,0);
    VL_SIG16(v__DOT__tmp_28_reg_1571,15,0);
    VL_SIG16(v__DOT__K_q0,15,0);
    VL_SIG16(v__DOT__K_load_reg_1614,15,0);
    VL_SIG16(v__DOT__P_load_reg_1625,15,0);
    VL_SIG16(v__DOT__tmp_30_reg_1646,15,0);
    VL_SIG16(v__DOT__tmp_32_reg_1661,15,0);
    VL_SIG16(v__DOT__ACF_q0,15,0);
    VL_SIG16(v__DOT__P_d0,15,0);
    VL_SIG16(v__DOT__K_d0,15,0);
    VL_SIG16(v__DOT__temp_6_reg_375,15,0);
    VL_SIG16(v__DOT__div_i_reg_393,15,0);
    VL_SIG16(v__DOT__p_0_i_reg_416,15,0);
    VL_SIG16(v__DOT__grp_fu_461_p0,15,0);
    VL_SIG(v__DOT__ap_CS_fsm,21,0);
    VL_SIG(v__DOT__tmp_s_reg_1395,31,0);
    VL_SIG(v__DOT__L_denum_i_reg_1499,31,0);
    VL_SIG(v__DOT__L_denum_i_cast_reg_1505,16,0);
    VL_SIG(v__DOT__L_num_3_fu_918_p3,31,0);
    VL_SIG(v__DOT__tmp_24_i_reg_1555,31,0);
    VL_SIG(v__DOT__sum_fu_1007_p2,16,0);
    VL_SIG(v__DOT__sum_reg_1561,16,0);
    VL_SIG(v__DOT__tmp_15_reg_1576,31,0);
    VL_SIG(v__DOT__m_1_reg_1594,31,0);
    VL_SIG(v__DOT__n_fu_1085_p2,31,0);
    VL_SIG(v__DOT__indvars_iv_next_fu_1091_p2,31,0);
    VL_SIG(v__DOT__sum_1_fu_1140_p2,16,0);
    VL_SIG(v__DOT__sum_1_reg_1636,16,0);
    VL_SIG(v__DOT__sum_2_fu_1186_p2,16,0);
    VL_SIG(v__DOT__sum_2_reg_1651,16,0);
    VL_SIG(v__DOT__p_rec_fu_1284_p2,31,0);
    VL_SIG(v__DOT__indvars_iv_reg_339,31,0);
    VL_SIG(v__DOT__i_6_reg_363,31,0);
    VL_SIG(v__DOT__L_num_i_reg_384,31,0);
    VL_SIG(v__DOT__m_reg_428,31,0);
    VL_SIG(v__DOT__r_2_rec_reg_439,31,0);
    VL_SIG(v__DOT__a_assign_1_fu_500_p2,31,0);
    VL_SIG(v__DOT__ap_NS_fsm,21,0);
    VL_SIG64(v__DOT__tmp_3_reg_1408,63,0);
    VL_SIG64(v__DOT__tmp_7_reg_1421,63,0);
    VL_SIG64(v__DOT__tmp_8_reg_1444,63,0);
    VL_SIG64(v__DOT__tmp_17_reg_1584,63,0);
    VL_SIG8(v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram0[256],3,0);
    VL_SIG8(v__DOT__bitoff_U__DOT__Reflection_coefficients_bitoff_rom_U__DOT__ram1[256],3,0);
    VL_SIG16(v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[9],15,0);
    //char	__VpadToAlign778[6];
    VL_SIG16(v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[9],15,0);
    //char	__VpadToAlign802[6];
    VL_SIG16(v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT__ram[9],15,0);
    //char	__VpadToAlign826[2];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign833[1];
    VL_SIG16(v__DOT__ACF_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1,15,0);
    VL_SIG16(v__DOT__P_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1,15,0);
    VL_SIG16(v__DOT__K_U__DOT__Reflection_coefficients_ACF_ram_U__DOT____Vlvbound1,15,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign844[4];
    VReflection_coefficients__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VReflection_coefficients& operator= (const VReflection_coefficients&);	///< Copying not allowed
    VReflection_coefficients(const VReflection_coefficients&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VReflection_coefficients(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VReflection_coefficients();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VReflection_coefficients__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VReflection_coefficients__Syms* symsp, bool first);
  private:
    static QData	_change_request(VReflection_coefficients__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_eval(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_eval_initial(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_eval_settle(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VReflection_coefficients__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(VReflection_coefficients__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
