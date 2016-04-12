// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vbit_count_H_
#define _Vbit_count_H_

#include "verilated.h"
class Vbit_count__Syms;

//----------

VL_MODULE(Vbit_count) {
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
    VL_SIG8(v__DOT__ap_CS_fsm,2,0);
    VL_SIG8(v__DOT__tmp_reg_139,0,0);
    VL_SIG8(v__DOT__tmp_4_reg_148,0,0);
    VL_SIG8(v__DOT__ap_NS_fsm,2,0);
    VL_SIG(v__DOT__n_2_fu_113_p2,31,0);
    VL_SIG(v__DOT__n_reg_66,31,0);
    VL_SIG(v__DOT__n_1_reg_77,31,0);
    //char	__VpadToAlign52[4];
    VL_SIG64(v__DOT__x_1_fu_101_p2,63,0);
    VL_SIG64(v__DOT__x_1_reg_143,63,0);
    VL_SIG64(v__DOT__x1_reg_57,63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__ap_NS_fsm[128],2,0);
    VL_SIG8(__Vtableidx1,6,0);
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign86[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign92[4];
    Vbit_count__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vbit_count& operator= (const Vbit_count&);	///< Copying not allowed
    Vbit_count(const Vbit_count&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vbit_count(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbit_count();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbit_count__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbit_count__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vbit_count__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vbit_count__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(Vbit_count__Syms* __restrict vlSymsp);
    static void	_eval(Vbit_count__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vbit_count__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vbit_count__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(Vbit_count__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vbit_count__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vbit_count__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vbit_count__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vbit_count__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
