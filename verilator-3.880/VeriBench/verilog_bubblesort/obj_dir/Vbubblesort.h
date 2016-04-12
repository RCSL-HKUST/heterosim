// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vbubblesort_H_
#define _Vbubblesort_H_

#include "verilated.h"
class Vbubblesort__Syms;

//----------

VL_MODULE(Vbubblesort) {
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
    VL_OUT8(Array_r_address0,4,0);
    VL_OUT8(Array_r_ce0,0,0);
    VL_OUT8(Array_r_we0,0,0);
    VL_OUT8(Array_r_address1,4,0);
    VL_OUT8(Array_r_ce1,0,0);
    VL_OUT8(Array_r_we1,0,0);
    VL_OUT(Array_r_d0,31,0);
    VL_IN(Array_r_q0,31,0);
    VL_OUT(Array_r_d1,31,0);
    VL_IN(Array_r_q1,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__ap_CS_fsm,1,0);
    VL_SIG8(v__DOT__tmp_2_reg_196,0,0);
    VL_SIG8(v__DOT__Array_addr_reg_203,4,0);
    VL_SIG8(v__DOT__exitcond_fu_146_p2,0,0);
    VL_SIG8(v__DOT__Array_addr_1_reg_214,4,0);
    VL_SIG8(v__DOT__i_1_fu_173_p2,4,0);
    VL_SIG8(v__DOT__indvars_iv_next_fu_179_p2,5,0);
    VL_SIG8(v__DOT__indvars_iv_reg_57,5,0);
    VL_SIG8(v__DOT__i_reg_69,4,0);
    VL_SIG8(v__DOT__tmp_7_fu_185_p2,0,0);
    VL_SIG8(v__DOT__Sorted_reg_94,1,0);
    VL_SIG8(v__DOT__ap_NS_fsm,1,0);
    VL_SIG(v__DOT__tmp_1_cast_reg_191,31,0);
    VL_SIG(v__DOT__Index_1_reg_208,31,0);
    VL_SIG(v__DOT__Index_reg_81,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__ap_NS_fsm[64],1,0);
    VL_SIG8(__Vtableidx1,5,0);
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign62[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign68[4];
    Vbubblesort__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vbubblesort& operator= (const Vbubblesort&);	///< Copying not allowed
    Vbubblesort(const Vbubblesort&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vbubblesort(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbubblesort();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbubblesort__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbubblesort__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vbubblesort__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_combo__TOP__4(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_combo__TOP__9(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_eval(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_initial__TOP__6(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vbubblesort__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(Vbubblesort__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
