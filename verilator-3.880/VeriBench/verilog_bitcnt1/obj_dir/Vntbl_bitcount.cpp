// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntbl_bitcount.h for the primary calling header

#include "Vntbl_bitcount.h"    // For This
#include "Vntbl_bitcount__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vntbl_bitcount) {
    Vntbl_bitcount__Syms* __restrict vlSymsp = __VlSymsp = new Vntbl_bitcount__Syms(this, name());
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    in_r = VL_RAND_RESET_Q(64);
    mm = VL_RAND_RESET_I(32);
    out_r = VL_RAND_RESET_I(32);
    out_r_ap_vld = VL_RAND_RESET_I(1);
    nn = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(2);
    v__DOT__bits_q0 = VL_RAND_RESET_I(4);
    v__DOT__bits_q1 = VL_RAND_RESET_I(4);
    v__DOT__bits_q2 = VL_RAND_RESET_I(4);
    v__DOT__bits_q3 = VL_RAND_RESET_I(4);
    v__DOT__bits_q4 = VL_RAND_RESET_I(4);
    v__DOT__bits_q5 = VL_RAND_RESET_I(4);
    v__DOT__bits_q6 = VL_RAND_RESET_I(4);
    v__DOT__bits_q7 = VL_RAND_RESET_I(4);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram0[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram1[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram2[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram3[__Vi0] = VL_RAND_RESET_I(4);
    }}
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vntbl_bitcount::__Vconfigure(Vntbl_bitcount__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vntbl_bitcount::~Vntbl_bitcount() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vntbl_bitcount::eval() {
    Vntbl_bitcount__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vntbl_bitcount::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vntbl_bitcount::_eval_initial_loop(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vntbl_bitcount::_combo__TOP__1(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_combo__TOP__1\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->mm + vlTOPp->nn);
}

VL_INLINE_OPT void Vntbl_bitcount::_sequent__TOP__3(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_sequent__TOP__3\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ntbl_bitcount_bits.v:56
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q0 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram0
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(vlTOPp->in_r))))))];
    }
    // ALWAYS at ntbl_bitcount_bits.v:66
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q1 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram0
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 4U)))))))];
    }
    // ALWAYS at ntbl_bitcount_bits.v:76
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q2 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram1
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 8U)))))))];
    }
    // ALWAYS at ntbl_bitcount_bits.v:86
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q3 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram1
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0xcU)))))))];
    }
    // ALWAYS at ntbl_bitcount_bits.v:96
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q4 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram2
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x10U)))))))];
    }
    // ALWAYS at ntbl_bitcount_bits.v:106
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q5 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram2
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x14U)))))))];
    }
    // ALWAYS at ntbl_bitcount_bits.v:116
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q6 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram3
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x18U)))))))];
    }
    // ALWAYS at ntbl_bitcount_bits.v:126
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__bits_q7 = vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram3
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x1cU)))))))];
    }
    vlTOPp->out_r = (0x7fU & ((0x3fU & ((0x1fU & ((IData)(vlTOPp->v__DOT__bits_q6) 
						  + (IData)(vlTOPp->v__DOT__bits_q7))) 
					+ (0x1fU & 
					   ((IData)(vlTOPp->v__DOT__bits_q4) 
					    + (IData)(vlTOPp->v__DOT__bits_q5))))) 
			      + (0x3fU & ((0x1fU & 
					   ((IData)(vlTOPp->v__DOT__bits_q2) 
					    + (IData)(vlTOPp->v__DOT__bits_q3))) 
					  + (0x1fU 
					     & ((IData)(vlTOPp->v__DOT__bits_q0) 
						+ (IData)(vlTOPp->v__DOT__bits_q1)))))));
    // ALWAYS at ntbl_bitcount.v:171
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

void Vntbl_bitcount::_initial__TOP__4(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_initial__TOP__4\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign44[4];
    VL_SIGW(__Vtemp1,223,0,7);
    //char	__VpadToAlign76[4];
    VL_SIGW(__Vtemp2,223,0,7);
    //char	__VpadToAlign108[4];
    VL_SIGW(__Vtemp3,223,0,7);
    //char	__VpadToAlign140[4];
    VL_SIGW(__Vtemp4,223,0,7);
    // Body
    // INITIAL at ntbl_bitcount_bits.v:47
    __Vtemp1[0U] = 0x2e646174U;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x62697473U;
    __Vtemp1[3U] = 0x756e745fU;
    __Vtemp1[4U] = 0x6974636fU;
    __Vtemp1[5U] = 0x626c5f62U;
    __Vtemp1[6U] = 0x2e2f6e74U;
    VL_READMEM_W (true,4,256, 0,7, __Vtemp1, vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram0
		  ,0,~0);
    __Vtemp2[0U] = 0x2e646174U;
    __Vtemp2[1U] = 0x5f726f6dU;
    __Vtemp2[2U] = 0x62697473U;
    __Vtemp2[3U] = 0x756e745fU;
    __Vtemp2[4U] = 0x6974636fU;
    __Vtemp2[5U] = 0x626c5f62U;
    __Vtemp2[6U] = 0x2e2f6e74U;
    VL_READMEM_W (true,4,256, 0,7, __Vtemp2, vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram1
		  ,0,~0);
    __Vtemp3[0U] = 0x2e646174U;
    __Vtemp3[1U] = 0x5f726f6dU;
    __Vtemp3[2U] = 0x62697473U;
    __Vtemp3[3U] = 0x756e745fU;
    __Vtemp3[4U] = 0x6974636fU;
    __Vtemp3[5U] = 0x626c5f62U;
    __Vtemp3[6U] = 0x2e2f6e74U;
    VL_READMEM_W (true,4,256, 0,7, __Vtemp3, vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram2
		  ,0,~0);
    __Vtemp4[0U] = 0x2e646174U;
    __Vtemp4[1U] = 0x5f726f6dU;
    __Vtemp4[2U] = 0x62697473U;
    __Vtemp4[3U] = 0x756e745fU;
    __Vtemp4[4U] = 0x6974636fU;
    __Vtemp4[5U] = 0x626c5f62U;
    __Vtemp4[6U] = 0x2e2f6e74U;
    VL_READMEM_W (true,4,256, 0,7, __Vtemp4, vlTOPp->v__DOT__bits_U__DOT__ntbl_bitcount_bits_rom_U__DOT__ram3
		  ,0,~0);
    // INITIAL at ntbl_bitcount.v:67
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

void Vntbl_bitcount::_settle__TOP__5(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_settle__TOP__5\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out_r = (0x7fU & ((0x3fU & ((0x1fU & ((IData)(vlTOPp->v__DOT__bits_q6) 
						  + (IData)(vlTOPp->v__DOT__bits_q7))) 
					+ (0x1fU & 
					   ((IData)(vlTOPp->v__DOT__bits_q4) 
					    + (IData)(vlTOPp->v__DOT__bits_q5))))) 
			      + (0x3fU & ((0x1fU & 
					   ((IData)(vlTOPp->v__DOT__bits_q2) 
					    + (IData)(vlTOPp->v__DOT__bits_q3))) 
					  + (0x1fU 
					     & ((IData)(vlTOPp->v__DOT__bits_q0) 
						+ (IData)(vlTOPp->v__DOT__bits_q1)))))));
    // ALWAYS at ntbl_bitcount.v:179
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 1U));
    // ALWAYS at ntbl_bitcount.v:195
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 1U));
    // ALWAYS at ntbl_bitcount.v:283
    vlTOPp->out_r_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U));
    // ALWAYS at ntbl_bitcount.v:187
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at ntbl_bitcount.v:290
    vlTOPp->v__DOT__ap_NS_fsm = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((IData)(vlTOPp->ap_start)
				      ? 2U : 1U) : 
				 ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? 1U : 0U));
}

VL_INLINE_OPT void Vntbl_bitcount::_sequent__TOP__6(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_sequent__TOP__6\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ntbl_bitcount.v:179
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 1U));
    // ALWAYS at ntbl_bitcount.v:195
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 1U));
    // ALWAYS at ntbl_bitcount.v:283
    vlTOPp->out_r_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U));
}

VL_INLINE_OPT void Vntbl_bitcount::_combo__TOP__7(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_combo__TOP__7\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ntbl_bitcount.v:187
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at ntbl_bitcount.v:290
    vlTOPp->v__DOT__ap_NS_fsm = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((IData)(vlTOPp->ap_start)
				      ? 2U : 1U) : 
				 ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? 1U : 0U));
}

void Vntbl_bitcount::_eval(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_eval\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vntbl_bitcount::_eval_initial(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_eval_initial\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vntbl_bitcount::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::final\n"); );
    // Variables
    Vntbl_bitcount__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vntbl_bitcount::_eval_settle(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_eval_settle\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData Vntbl_bitcount::_change_request(Vntbl_bitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vntbl_bitcount::_change_request\n"); );
    Vntbl_bitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
