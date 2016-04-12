// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBW_btbl_bitcount_H_
#define _VBW_btbl_bitcount_H_

#include "verilated.h"
class VBW_btbl_bitcount__Syms;

//----------

VL_MODULE(VBW_btbl_bitcount) {
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
    VL_SIG8(v__DOT__bits_q0,3,0);
    VL_SIG8(v__DOT__bits_q1,3,0);
    VL_SIG8(v__DOT__bits_q2,3,0);
    VL_SIG8(v__DOT__bits_q3,3,0);
    VL_SIG8(v__DOT__ap_NS_fsm,1,0);
    //char	__VpadToAlign42[6];
    VL_SIG8(v__DOT__bits_U__DOT__BW_btbl_bitcount_bits_rom_U__DOT__ram0[256],3,0);
    VL_SIG8(v__DOT__bits_U__DOT__BW_btbl_bitcount_bits_rom_U__DOT__ram1[256],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign565[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign572[4];
    VBW_btbl_bitcount__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VBW_btbl_bitcount& operator= (const VBW_btbl_bitcount&);	///< Copying not allowed
    VBW_btbl_bitcount(const VBW_btbl_bitcount&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VBW_btbl_bitcount(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VBW_btbl_bitcount();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VBW_btbl_bitcount__Syms* symsp, bool first);
  private:
    static QData	_change_request(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_eval(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_eval_initial(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_eval_settle(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_initial__TOP__4(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VBW_btbl_bitcount__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
