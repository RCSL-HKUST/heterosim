// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vbit_shifter_H_
#define _Vbit_shifter_H_

#include "verilated.h"
class Vbit_shifter__Syms;

//----------

VL_MODULE(Vbit_shifter) {
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
    VL_SIG8(v__DOT__i_1_fu_119_p2,6,0);
    VL_SIG8(v__DOT__demorgan_fu_113_p2,0,0);
    VL_SIG8(v__DOT__i_reg_76,6,0);
    VL_SIG8(v__DOT__ap_NS_fsm,1,0);
    //char	__VpadToAlign41[3];
    VL_SIG(v__DOT__n_1_fu_133_p2,31,0);
    VL_SIG(v__DOT__n_reg_87,31,0);
    //char	__VpadToAlign52[4];
    VL_SIG64(v__DOT__x_1_fu_149_p1,63,0);
    VL_SIG64(v__DOT__x1_reg_67,63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign77[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign84[4];
    Vbit_shifter__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vbit_shifter& operator= (const Vbit_shifter&);	///< Copying not allowed
    Vbit_shifter(const Vbit_shifter&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vbit_shifter(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbit_shifter();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vbit_shifter__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbit_shifter__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vbit_shifter__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_eval(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_initial__TOP__4(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(Vbit_shifter__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vbit_shifter__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
