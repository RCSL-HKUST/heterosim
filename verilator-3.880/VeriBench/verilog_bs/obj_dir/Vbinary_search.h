// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vbinary_search_H_
#define _Vbinary_search_H_

#include "verilated.h"
class Vbinary_search__Syms;

//----------

VL_MODULE(Vbinary_search) {
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
    VL_OUT8(data_key_address0,3,0);
    VL_OUT8(data_key_ce0,0,0);
    VL_OUT8(data_value_address0,3,0);
    VL_OUT8(data_value_ce0,0,0);
    //char	__VpadToAlign10[2];
    VL_IN(x,31,0);
    VL_IN(data_key_q0,31,0);
    VL_IN(data_value_q0,31,0);
    VL_OUT(ap_return,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__ap_CS_fsm,2,0);
    VL_SIG8(v__DOT__tmp_fu_106_p2,0,0);
    VL_SIG8(v__DOT__tmp_5_fu_148_p2,0,0);
    VL_SIG8(v__DOT__tmp_3_fu_137_p2,0,0);
    VL_SIG8(v__DOT__ap_NS_fsm,2,0);
    //char	__VpadToAlign37[3];
    VL_SIG(v__DOT__tmp_7_reg_214,30,0);
    VL_SIG(v__DOT__fvalue_1_fu_181_p3,31,0);
    VL_SIG(v__DOT__up_2_fu_189_p3,31,0);
    VL_SIG(v__DOT__low_2_fu_197_p3,31,0);
    VL_SIG(v__DOT__fvalue_reg_70,31,0);
    VL_SIG(v__DOT__up_reg_82,31,0);
    VL_SIG(v__DOT__low_reg_94,31,0);
    VL_SIG(v__DOT__tmp_1_fu_112_p2,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__ap_NS_fsm[32],2,0);
    VL_SIG8(__Vtableidx1,4,0);
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign78[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign84[4];
    Vbinary_search__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vbinary_search& operator= (const Vbinary_search&);	///< Copying not allowed
    Vbinary_search(const Vbinary_search&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vbinary_search(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbinary_search();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbinary_search__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbinary_search__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vbinary_search__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_eval(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_initial__TOP__4(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vbinary_search__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vbinary_search__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
