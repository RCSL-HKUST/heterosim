// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vbitcount_H_
#define _Vbitcount_H_

#include "verilated.h"
class Vbitcount__Syms;

//----------

VL_MODULE(Vbitcount) {
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
    VL_OUT8(out_r_ap_vld,0,0);
    //char	__VpadToAlign7[1];
    VL_IN(mm,31,0);
    VL_OUT(out_r,31,0);
    VL_IN(nn,31,0);
    VL_OUT(ap_return,31,0);
    VL_IN64(in_r,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__ap_CS_fsm,1,0);
    VL_SIG8(v__DOT__tmp_65_reg_1004,4,0);
    VL_SIG8(v__DOT__tmp_66_reg_1009,7,0);
    VL_SIG8(v__DOT__tmp_67_reg_1014,7,0);
    VL_SIG8(v__DOT__tmp_68_reg_1019,7,0);
    VL_SIG8(v__DOT__ap_NS_fsm,1,0);
    //char	__VpadToAlign42[2];
    VL_SIG(v__DOT__i_1_fu_535_p2,31,0);
    VL_SIG(v__DOT__i_2_fu_771_p2,30,0);
    VL_SIG(v__DOT__i_3_fu_895_p2,28,0);
    VL_SIG(v__DOT__i_4_fu_959_p2,24,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign65[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vbitcount__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vbitcount& operator= (const Vbitcount&);	///< Copying not allowed
    Vbitcount(const Vbitcount&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vbitcount(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbitcount();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbitcount__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbitcount__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vbitcount__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vbitcount__Syms* __restrict vlSymsp);
    static void	_combo__TOP__4(Vbitcount__Syms* __restrict vlSymsp);
    static void	_combo__TOP__8(Vbitcount__Syms* __restrict vlSymsp);
    static void	_eval(Vbitcount__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vbitcount__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vbitcount__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(Vbitcount__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vbitcount__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vbitcount__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(Vbitcount__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vbitcount__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
