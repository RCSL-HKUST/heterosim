// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vicrc_H_
#define _Vicrc_H_

#include "verilated.h"
class Vicrc__Syms;

//----------

VL_MODULE(Vicrc) {
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
    VL_OUT8(lin_ce0,0,0);
    VL_IN8(lin_q0,7,0);
    VL_OUT8(lin_ce1,0,0);
    VL_IN8(lin_q1,7,0);
    VL_OUT8(buff_ap_vld,0,0);
    //char	__VpadToAlign11[1];
    VL_OUT16(lin_address0,8,0);
    VL_OUT16(lin_address1,8,0);
    VL_OUT16(buff,15,0);
    //char	__VpadToAlign18[2];
    VL_IN(x,31,0);
    VL_IN(y,31,0);
    VL_OUT(ap_return,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__init,0,0);
    VL_SIG8(v__DOT__rchr_address0,7,0);
    VL_SIG8(v__DOT__rchr_d0,7,0);
    VL_SIG8(v__DOT__rchr_q0,7,0);
    VL_SIG8(v__DOT__rchr_address1,7,0);
    VL_SIG8(v__DOT__rchr_d1,7,0);
    VL_SIG8(v__DOT__rchr_q1,7,0);
    VL_SIG8(v__DOT__icrctb_address0,7,0);
    VL_SIG8(v__DOT__reg_3358,7,0);
    VL_SIG8(v__DOT__reg_3363,7,0);
    VL_SIG8(v__DOT__lin_load_2_reg_3548,7,0);
    VL_SIG8(v__DOT__lin_load_3_reg_3554,7,0);
    VL_SIG8(v__DOT__lin_load_4_reg_3570,7,0);
    VL_SIG8(v__DOT__lin_load_6_reg_3585,7,0);
    VL_SIG8(v__DOT__lin_load_7_reg_3590,7,0);
    VL_SIG8(v__DOT__init_load_load_fu_3385_p1,0,0);
    VL_SIG8(v__DOT__init_load_reg_3625,0,0);
    VL_SIG8(v__DOT__tmp_reg_3629,0,0);
    VL_SIG8(v__DOT__tmp_1_reg_3645,0,0);
    VL_SIG8(v__DOT__tmp_7_fu_3448_p2,0,0);
    VL_SIG8(v__DOT__tmp_2_reg_3668,0,0);
    //char	__VpadToAlign57[1];
    VL_SIG16(v__DOT__icrctb_d0,15,0);
    VL_SIG16(v__DOT__icrctb_q0,15,0);
    VL_SIG16(v__DOT__crc_reg_3615,15,0);
    VL_SIG16(v__DOT__j_reg_3663,15,0);
    VL_SIG16(v__DOT__cword_3_fu_3511_p2,15,0);
    VL_SIG16(v__DOT__j_1_reg_3319,15,0);
    VL_SIG16(v__DOT__tmp2_reg_3330,15,0);
    VL_SIG16(v__DOT__grp_fu_3347_p1,15,0);
    //char	__VpadToAlign74[6];
    VL_SIGW(v__DOT__ap_CS_fsm,139,0,5);
    VL_SIG(v__DOT__len_reg_3620,31,0);
    VL_SIG(v__DOT__tmp_10_reg_3683,31,0);
    //char	__VpadToAlign108[4];
    VL_SIGW(v__DOT__ap_NS_fsm,139,0,5);
    //char	__VpadToAlign132[4];
    VL_SIG8(v__DOT__rchr_U__DOT__icrc_rchr_ram_U__DOT__ram[256],7,0);
    VL_SIG16(v__DOT__icrctb_U__DOT__icrc_icrctb_ram_U__DOT__ram[256],15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign909[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign916[4];
    Vicrc__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vicrc& operator= (const Vicrc&);	///< Copying not allowed
    Vicrc(const Vicrc&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vicrc(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vicrc();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vicrc__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vicrc__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vicrc__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__5(Vicrc__Syms* __restrict vlSymsp);
    static void	_eval(Vicrc__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vicrc__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vicrc__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(Vicrc__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vicrc__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vicrc__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vicrc__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vicrc__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
