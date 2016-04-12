// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vdecode_motion_vector_H_
#define _Vdecode_motion_vector_H_

#include "verilated.h"
class Vdecode_motion_vector__Syms;

//----------

VL_MODULE(Vdecode_motion_vector) {
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
    VL_OUT8(buff_address0,2,0);
    VL_OUT8(buff_ce0,0,0);
    VL_OUT8(buff_address1,2,0);
    VL_OUT8(buff_ce1,0,0);
    VL_OUT8(y_ap_vld,0,0);
    //char	__VpadToAlign11[1];
    VL_IN(buff_q0,31,0);
    VL_IN(buff_q1,31,0);
    VL_IN(m,31,0);
    VL_OUT(y,31,0);
    VL_IN(n,31,0);
    VL_OUT(ap_return,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__ap_CS_fsm,5,0);
    VL_SIG8(v__DOT__tmp_2_reg_396,0,0);
    VL_SIG8(v__DOT__tmp_6_reg_401,4,0);
    VL_SIG8(v__DOT__tmp_13_reg_406,4,0);
    VL_SIG8(v__DOT__tmp_reg_411,0,0);
    VL_SIG8(v__DOT__tmp_17_reg_453,0,0);
    VL_SIG8(v__DOT__tmp_3_reg_464,0,0);
    VL_SIG8(v__DOT__sel_tmp2_reg_490,0,0);
    VL_SIG8(v__DOT__sel_tmp7_reg_500,0,0);
    VL_SIG8(v__DOT__tmp_9_fu_280_p2,0,0);
    VL_SIG8(v__DOT__ap_NS_fsm,5,0);
    //char	__VpadToAlign51[1];
    VL_SIG(v__DOT__r_size_reg_422,31,0);
    VL_SIG(v__DOT__vec_reg_429,31,0);
    VL_SIG(v__DOT__buff_load_3_reg_436,31,0);
    VL_SIG(v__DOT__tmp_4_reg_443,31,0);
    VL_SIG(v__DOT__lim_reg_458,31,0);
    VL_SIG(v__DOT__vec_1_reg_471,31,0);
    VL_SIG(v__DOT__vec_4_reg_478,31,0);
    VL_SIG(v__DOT__tmp_10_reg_485,31,0);
    VL_SIG(v__DOT__vec_7_reg_495,31,0);
    VL_SIG(v__DOT__vec_3_fu_355_p3,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__ap_NS_fsm[128],5,0);
    VL_SIG8(__Vtableidx1,6,0);
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign98[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vdecode_motion_vector__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vdecode_motion_vector& operator= (const Vdecode_motion_vector&);	///< Copying not allowed
    Vdecode_motion_vector(const Vdecode_motion_vector&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vdecode_motion_vector(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vdecode_motion_vector();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vdecode_motion_vector__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vdecode_motion_vector__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vdecode_motion_vector__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_combo__TOP__8(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_eval(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vdecode_motion_vector__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vdecode_motion_vector__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
