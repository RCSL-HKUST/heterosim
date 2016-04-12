// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vbitcnt_H_
#define _Vbitcnt_H_

#include "verilated.h"
class Vbitcnt__Syms;

//----------

VL_MODULE(Vbitcnt) {
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
    VL_OUT8(out_r_address0,2,0);
    VL_OUT8(out_r_ce0,0,0);
    VL_OUT8(out_r_we0,0,0);
    VL_OUT8(out_r_address1,2,0);
    VL_OUT8(out_r_ce1,0,0);
    VL_OUT8(out_r_we1,0,0);
    VL_IN(mm,31,0);
    VL_OUT(out_r_d0,31,0);
    VL_OUT(out_r_d1,31,0);
    VL_IN(nn,31,0);
    VL_OUT(ap_return,31,0);
    VL_IN64(in_r,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__ap_CS_fsm,6,0);
    VL_SIG8(v__DOT__bits_q0,3,0);
    VL_SIG8(v__DOT__bits_q1,3,0);
    VL_SIG8(v__DOT__bits_q2,3,0);
    VL_SIG8(v__DOT__bits_q3,3,0);
    VL_SIG8(v__DOT__bits_q4,3,0);
    VL_SIG8(v__DOT__bits_q5,3,0);
    VL_SIG8(v__DOT__bits_q6,3,0);
    VL_SIG8(v__DOT__bits_q7,3,0);
    VL_SIG8(v__DOT__out_addr_5_reg_1691,2,0);
    VL_SIG8(v__DOT__tmp_i_reg_1696,0,0);
    VL_SIG8(v__DOT__tmp_59_i_reg_1705,0,0);
    VL_SIG8(v__DOT__tmp_56_reg_1755,4,0);
    VL_SIG8(v__DOT__tmp_57_reg_1760,7,0);
    VL_SIG8(v__DOT__tmp_58_reg_1765,7,0);
    VL_SIG8(v__DOT__tmp_59_reg_1770,7,0);
    VL_SIG8(v__DOT__out_write_assign_1_reg_1775,6,0);
    VL_SIG8(v__DOT__out_addr_4_reg_1800,2,0);
    VL_SIG8(v__DOT__i_fu_1593_p2,6,0);
    VL_SIG8(v__DOT__demorgan_fu_1587_p2,0,0);
    VL_SIG8(v__DOT__i_i_reg_391,6,0);
    VL_SIG8(v__DOT__Accu_fu_1561_p2,5,0);
    VL_SIG8(v__DOT__ap_NS_fsm,6,0);
    //char	__VpadToAlign67[1];
    VL_SIG(v__DOT__n_fu_438_p2,31,0);
    VL_SIG(v__DOT__n_1_fu_1607_p2,31,0);
    VL_SIG(v__DOT__n_i_reg_359,31,0);
    VL_SIG(v__DOT__n_1_i_reg_370,31,0);
    VL_SIG(v__DOT__out_write_assign_4_reg_402,31,0);
    VL_SIG(v__DOT__i_1_fu_910_p2,31,0);
    VL_SIG(v__DOT__i_2_fu_1146_p2,30,0);
    VL_SIG(v__DOT__i_3_fu_1270_p2,28,0);
    VL_SIG(v__DOT__i_4_fu_1432_p2,24,0);
    VL_SIG64(v__DOT__x_1_fu_426_p2,63,0);
    VL_SIG64(v__DOT__x_1_reg_1700,63,0);
    VL_SIG64(v__DOT__x_2_fu_1623_p1,63,0);
    VL_SIG64(v__DOT__x3_i_reg_350,63,0);
    VL_SIG64(v__DOT__x1_i_reg_382,63,0);
    VL_SIG8(v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram0[256],3,0);
    VL_SIG8(v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram1[256],3,0);
    VL_SIG8(v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram2[256],3,0);
    VL_SIG8(v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram3[256],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign1173[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign1180[4];
    Vbitcnt__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vbitcnt& operator= (const Vbitcnt&);	///< Copying not allowed
    Vbitcnt(const Vbitcnt&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vbitcnt(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbitcnt();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbitcnt__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbitcnt__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vbitcnt__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__4(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__9(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_eval(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_initial__TOP__6(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vbitcnt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(Vbitcnt__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
