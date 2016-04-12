// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vprime_H_
#define _Vprime_H_

#include "verilated.h"
class Vprime__Syms;

//----------

VL_MODULE(Vprime) {
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
    VL_OUT8(ap_return,7,0);
    //char	__VpadToAlign7[1];
    VL_IN(n,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__tmp_reg_137,0,0);
    VL_SIG8(v__DOT__tmp_5_fu_98_p2,0,0);
    VL_SIG8(v__DOT__tmp_5_reg_146,0,0);
    VL_SIG8(v__DOT__p_0_reg_62,0,0);
    //char	__VpadToAlign20[4];
    VL_SIGW(v__DOT__ap_CS_fsm,76,0,3);
    VL_SIG(v__DOT__i_1_fu_118_p2,31,0);
    VL_SIG(v__DOT__i_reg_50,31,0);
    //char	__VpadToAlign44[4];
    VL_SIGW(v__DOT__ap_NS_fsm,76,0,3);
    VL_SIG(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__grp_fu_26_p2,31,0);
    VL_SIG(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__divisor0,31,0);
    VL_SIG(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__remd_u,31,0);
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__grp_fu_26_p2,31,0);
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__dividend0,31,0);
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__divisor0,31,0);
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__remd_u,31,0);
    VL_SIG(v__DOT__prime_mul_32s_32s_32_6_U5__DOT__prime_mul_32s_32s_32_6_MulnS_0_U__DOT__a_reg0,31,0);
    VL_SIG(v__DOT__prime_mul_32s_32s_32_6_U5__DOT__prime_mul_32s_32s_32_6_MulnS_0_U__DOT__buff0,31,0);
    VL_SIG(v__DOT__prime_mul_32s_32s_32_6_U5__DOT__prime_mul_32s_32s_32_6_MulnS_0_U__DOT__buff1,31,0);
    VL_SIG(v__DOT__prime_mul_32s_32s_32_6_U5__DOT__prime_mul_32s_32s_32_6_MulnS_0_U__DOT__buff2,31,0);
    VL_SIG(v__DOT__prime_mul_32s_32s_32_6_U5__DOT__prime_mul_32s_32s_32_6_MulnS_0_U__DOT__buff3,31,0);
    //char	__VpadToAlign108[4];
    VL_SIG(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__dividend_tmp[33],31,0);
    //char	__VpadToAlign244[4];
    VL_SIG(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__divisor_tmp[33],31,0);
    //char	__VpadToAlign380[4];
    VL_SIG(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__remd_tmp[33],31,0);
    //char	__VpadToAlign516[4];
    VL_SIG(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__comb_tmp[32],31,0);
    VL_SIG64(v__DOT__grp_prime_even_fu_74__DOT__grp_prime_divides_fu_22__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__cal_tmp[32],32,0);
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__dividend_tmp[33],31,0);
    //char	__VpadToAlign1036[4];
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__divisor_tmp[33],31,0);
    //char	__VpadToAlign1172[4];
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__remd_tmp[33],31,0);
    //char	__VpadToAlign1308[4];
    VL_SIG(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__comb_tmp[32],31,0);
    VL_SIG64(v__DOT__grp_prime_divides_fu_80__DOT__prime_urem_32ns_32ns_32_36_U1__DOT__prime_urem_32ns_32ns_32_36_div_U__DOT__prime_urem_32ns_32ns_32_36_div_u_0__DOT__cal_tmp[32],32,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign1701[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign1708[4];
    Vprime__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vprime& operator= (const Vprime&);	///< Copying not allowed
    Vprime(const Vprime&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vprime(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vprime();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vprime__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vprime__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vprime__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__3(Vprime__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(Vprime__Syms* __restrict vlSymsp);
    static void	_eval(Vprime__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vprime__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vprime__Syms* __restrict vlSymsp);
    static void	_initial__TOP__4(Vprime__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vprime__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(Vprime__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vprime__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vprime__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
