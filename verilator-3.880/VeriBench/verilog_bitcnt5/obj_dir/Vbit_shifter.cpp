// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbit_shifter.h for the primary calling header

#include "Vbit_shifter.h"      // For This
#include "Vbit_shifter__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vbit_shifter) {
    Vbit_shifter__Syms* __restrict vlSymsp = __VlSymsp = new Vbit_shifter__Syms(this, name());
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    v__DOT__i_1_fu_119_p2 = VL_RAND_RESET_I(7);
    v__DOT__n_1_fu_133_p2 = VL_RAND_RESET_I(32);
    v__DOT__demorgan_fu_113_p2 = VL_RAND_RESET_I(1);
    v__DOT__x_1_fu_149_p1 = VL_RAND_RESET_Q(64);
    v__DOT__x1_reg_67 = VL_RAND_RESET_Q(64);
    v__DOT__i_reg_76 = VL_RAND_RESET_I(7);
    v__DOT__n_reg_87 = VL_RAND_RESET_I(32);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(2);
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vbit_shifter::__Vconfigure(Vbit_shifter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbit_shifter::~Vbit_shifter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vbit_shifter::eval() {
    Vbit_shifter__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vbit_shifter::eval\n"); );
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

void Vbit_shifter::_eval_initial_loop(Vbit_shifter__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vbit_shifter::_combo__TOP__1(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_combo__TOP__1\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->nn + vlTOPp->mm);
}

VL_INLINE_OPT void Vbit_shifter::_sequent__TOP__3(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_sequent__TOP__3\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bit_shifter.v:97
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 1U) & (~ (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2))))) {
	vlTOPp->v__DOT__n_reg_87 = vlTOPp->v__DOT__n_1_fu_133_p2;
    } else {
	if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	    vlTOPp->v__DOT__n_reg_87 = 0U;
	}
    }
    // ALWAYS at bit_shifter.v:89
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 1U) & (~ (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2))))) {
	vlTOPp->v__DOT__i_reg_76 = vlTOPp->v__DOT__i_1_fu_119_p2;
    } else {
	if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	    vlTOPp->v__DOT__i_reg_76 = 0U;
	}
    }
    // ALWAYS at bit_shifter.v:105
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 1U) & (~ (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2))))) {
	vlTOPp->v__DOT__x1_reg_67 = vlTOPp->v__DOT__x_1_fu_149_p1;
    } else {
	if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	    vlTOPp->v__DOT__x1_reg_67 = vlTOPp->in_r;
	}
    }
    vlTOPp->out_r = vlTOPp->v__DOT__n_reg_87;
    vlTOPp->v__DOT__i_1_fu_119_p2 = (0x7fU & ((IData)(1U) 
					      + (IData)(vlTOPp->v__DOT__i_reg_76)));
    vlTOPp->v__DOT__x_1_fu_149_p1 = VL_EXTENDS_QQ(64,63, 
						  (VL_ULL(0x7fffffffffffffff) 
						   & (vlTOPp->v__DOT__x1_reg_67 
						      >> 1U)));
    vlTOPp->v__DOT__n_1_fu_133_p2 = (vlTOPp->v__DOT__n_reg_87 
				     + (1U & (IData)(vlTOPp->v__DOT__x1_reg_67)));
    vlTOPp->v__DOT__demorgan_fu_113_p2 = (1U & (((IData)(vlTOPp->v__DOT__i_reg_76) 
						 >> 6U) 
						| (VL_ULL(0) 
						   == vlTOPp->v__DOT__x1_reg_67)));
    // ALWAYS at bit_shifter.v:81
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

void Vbit_shifter::_initial__TOP__4(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_initial__TOP__4\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bit_shifter.v:59
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

void Vbit_shifter::_settle__TOP__5(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_settle__TOP__5\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out_r = vlTOPp->v__DOT__n_reg_87;
    vlTOPp->v__DOT__i_1_fu_119_p2 = (0x7fU & ((IData)(1U) 
					      + (IData)(vlTOPp->v__DOT__i_reg_76)));
    vlTOPp->v__DOT__x_1_fu_149_p1 = VL_EXTENDS_QQ(64,63, 
						  (VL_ULL(0x7fffffffffffffff) 
						   & (vlTOPp->v__DOT__x1_reg_67 
						      >> 1U)));
    vlTOPp->v__DOT__n_1_fu_133_p2 = (vlTOPp->v__DOT__n_reg_87 
				     + (1U & (IData)(vlTOPp->v__DOT__x1_reg_67)));
    vlTOPp->v__DOT__demorgan_fu_113_p2 = (1U & (((IData)(vlTOPp->v__DOT__i_reg_76) 
						 >> 6U) 
						| (VL_ULL(0) 
						   == vlTOPp->v__DOT__x1_reg_67)));
    // ALWAYS at bit_shifter.v:121
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bit_shifter.v:113
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 1U) & (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2));
    // ALWAYS at bit_shifter.v:129
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 1U) & (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2));
    // ALWAYS at bit_shifter.v:153
    vlTOPp->out_r_ap_vld = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 1U) & (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2));
    // ALWAYS at bit_shifter.v:160
    vlTOPp->v__DOT__ap_NS_fsm = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((IData)(vlTOPp->ap_start)
				      ? 2U : 1U) : 
				 ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? ((IData)(vlTOPp->v__DOT__demorgan_fu_113_p2)
				       ? 1U : 2U) : 0U));
}

VL_INLINE_OPT void Vbit_shifter::_combo__TOP__6(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_combo__TOP__6\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bit_shifter.v:121
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bit_shifter.v:160
    vlTOPp->v__DOT__ap_NS_fsm = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((IData)(vlTOPp->ap_start)
				      ? 2U : 1U) : 
				 ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? ((IData)(vlTOPp->v__DOT__demorgan_fu_113_p2)
				       ? 1U : 2U) : 0U));
}

VL_INLINE_OPT void Vbit_shifter::_sequent__TOP__7(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_sequent__TOP__7\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bit_shifter.v:113
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 1U) & (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2));
    // ALWAYS at bit_shifter.v:129
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 1U) & (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2));
    // ALWAYS at bit_shifter.v:153
    vlTOPp->out_r_ap_vld = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 1U) & (IData)(vlTOPp->v__DOT__demorgan_fu_113_p2));
}

void Vbit_shifter::_eval(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_eval\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vbit_shifter::_eval_initial(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_eval_initial\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vbit_shifter::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::final\n"); );
    // Variables
    Vbit_shifter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbit_shifter::_eval_settle(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_eval_settle\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData Vbit_shifter::_change_request(Vbit_shifter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_shifter::_change_request\n"); );
    Vbit_shifter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
