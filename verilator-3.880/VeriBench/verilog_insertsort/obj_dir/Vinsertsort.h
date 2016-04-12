// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vinsertsort_H_
#define _Vinsertsort_H_

#include "verilated.h"
class Vinsertsort__Syms;

//----------

VL_MODULE(Vinsertsort) {
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
    VL_OUT8(a_address0,3,0);
    VL_OUT8(a_ce0,0,0);
    VL_OUT8(a_we0,0,0);
    VL_OUT8(a_address1,3,0);
    VL_OUT8(a_ce1,0,0);
    VL_OUT8(a_we1,0,0);
    VL_OUT(a_d0,31,0);
    VL_IN(a_q0,31,0);
    VL_OUT(a_d1,31,0);
    VL_IN(a_q1,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__ap_CS_fsm,2,0);
    VL_SIG8(v__DOT__a_addr_reg_114,3,0);
    VL_SIG8(v__DOT__a_addr_1_reg_124,3,0);
    VL_SIG8(v__DOT__i_fu_100_p2,3,0);
    VL_SIG8(v__DOT__tmp_3_fu_94_p2,0,0);
    VL_SIG8(v__DOT__j_reg_46,3,0);
    VL_SIG8(v__DOT__ap_NS_fsm,2,0);
    //char	__VpadToAlign39[1];
    VL_SIG(v__DOT__j_1_reg_119,31,0);
    VL_SIG(v__DOT__temp_reg_129,31,0);
    VL_SIG(v__DOT__j1_reg_58,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__ap_NS_fsm[64],2,0);
    VL_SIG8(__Vtableidx1,5,0);
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign58[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vinsertsort__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vinsertsort& operator= (const Vinsertsort&);	///< Copying not allowed
    Vinsertsort(const Vinsertsort&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vinsertsort(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vinsertsort();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vinsertsort__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vinsertsort__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vinsertsort__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_combo__TOP__9(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_eval(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_initial__TOP__6(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vinsertsort__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(Vinsertsort__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
