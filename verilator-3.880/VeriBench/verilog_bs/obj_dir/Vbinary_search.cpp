// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbinary_search.h for the primary calling header

#include "Vbinary_search.h"    // For This
#include "Vbinary_search__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vbinary_search::__Vtable1_v__DOT__ap_NS_fsm[32],2,0);

//--------------------

VL_CTOR_IMP(Vbinary_search) {
    Vbinary_search__Syms* __restrict vlSymsp = __VlSymsp = new Vbinary_search__Syms(this, name());
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    x = VL_RAND_RESET_I(32);
    data_key_address0 = VL_RAND_RESET_I(4);
    data_key_ce0 = VL_RAND_RESET_I(1);
    data_key_q0 = VL_RAND_RESET_I(32);
    data_value_address0 = VL_RAND_RESET_I(4);
    data_value_ce0 = VL_RAND_RESET_I(1);
    data_value_q0 = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(3);
    v__DOT__tmp_7_reg_214 = VL_RAND_RESET_I(31);
    v__DOT__tmp_fu_106_p2 = VL_RAND_RESET_I(1);
    v__DOT__fvalue_1_fu_181_p3 = VL_RAND_RESET_I(32);
    v__DOT__up_2_fu_189_p3 = VL_RAND_RESET_I(32);
    v__DOT__low_2_fu_197_p3 = VL_RAND_RESET_I(32);
    v__DOT__fvalue_reg_70 = VL_RAND_RESET_I(32);
    v__DOT__up_reg_82 = VL_RAND_RESET_I(32);
    v__DOT__low_reg_94 = VL_RAND_RESET_I(32);
    v__DOT__tmp_1_fu_112_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp_5_fu_148_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmp_3_fu_137_p2 = VL_RAND_RESET_I(1);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(3);
    __Vtableidx1 = VL_RAND_RESET_I(5);
    __Vtable1_v__DOT__ap_NS_fsm[0] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[2] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[3] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[4] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[5] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[6] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[7] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[8] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[9] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[10] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[11] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[12] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[13] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[14] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[15] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[16] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[17] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[18] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[19] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[20] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[21] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[22] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[23] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[24] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[25] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[26] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[27] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[28] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[29] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[30] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[31] = 0U;
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vbinary_search::__Vconfigure(Vbinary_search__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbinary_search::~Vbinary_search() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vbinary_search::eval() {
    Vbinary_search__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vbinary_search::eval\n"); );
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

void Vbinary_search::_eval_initial_loop(Vbinary_search__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vbinary_search::_combo__TOP__1(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_combo__TOP__1\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_5_fu_148_p2 = VL_GTS_III(1,32,32, vlTOPp->data_key_q0, vlTOPp->x);
    vlTOPp->v__DOT__tmp_3_fu_137_p2 = (vlTOPp->data_key_q0 
				       == vlTOPp->x);
}

VL_INLINE_OPT void Vbinary_search::_sequent__TOP__3(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_sequent__TOP__3\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at binary_search.v:103
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__fvalue_reg_70 = vlTOPp->v__DOT__fvalue_1_fu_181_p3;
    } else {
	if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	    vlTOPp->v__DOT__fvalue_reg_70 = 0xffffffffU;
	}
    }
    // ALWAYS at binary_search.v:127
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 1U) & (~ (IData)(vlTOPp->v__DOT__tmp_fu_106_p2))))) {
	vlTOPp->v__DOT__tmp_7_reg_214 = (0x7fffffffU 
					 & (vlTOPp->v__DOT__tmp_1_fu_112_p2 
					    >> 1U));
    }
    // ALWAYS at binary_search.v:119
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__up_reg_82 = vlTOPp->v__DOT__up_2_fu_189_p3;
    } else {
	if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	    vlTOPp->v__DOT__up_reg_82 = 0xeU;
	}
    }
    // ALWAYS at binary_search.v:111
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__low_reg_94 = vlTOPp->v__DOT__low_2_fu_197_p3;
    } else {
	if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	    vlTOPp->v__DOT__low_reg_94 = 0U;
	}
    }
    vlTOPp->ap_return = vlTOPp->v__DOT__fvalue_reg_70;
    vlTOPp->v__DOT__tmp_1_fu_112_p2 = (vlTOPp->v__DOT__up_reg_82 
				       + vlTOPp->v__DOT__low_reg_94);
    vlTOPp->v__DOT__tmp_fu_106_p2 = VL_GTS_III(1,32,32, vlTOPp->v__DOT__low_reg_94, vlTOPp->v__DOT__up_reg_82);
    // ALWAYS at binary_search.v:95
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

void Vbinary_search::_initial__TOP__4(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_initial__TOP__4\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at binary_search.v:64
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

void Vbinary_search::_settle__TOP__5(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_settle__TOP__5\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = vlTOPp->v__DOT__fvalue_reg_70;
    vlTOPp->v__DOT__fvalue_1_fu_181_p3 = ((IData)(vlTOPp->v__DOT__tmp_3_fu_137_p2)
					   ? vlTOPp->data_value_q0
					   : vlTOPp->v__DOT__fvalue_reg_70);
    vlTOPp->v__DOT__low_2_fu_197_p3 = ((IData)(vlTOPp->v__DOT__tmp_3_fu_137_p2)
				        ? vlTOPp->v__DOT__low_reg_94
				        : ((IData)(vlTOPp->v__DOT__tmp_5_fu_148_p2)
					    ? vlTOPp->v__DOT__low_reg_94
					    : ((IData)(1U) 
					       + VL_EXTENDS_II(32,31, vlTOPp->v__DOT__tmp_7_reg_214))));
    vlTOPp->v__DOT__up_2_fu_189_p3 = ((IData)(vlTOPp->v__DOT__tmp_3_fu_137_p2)
				       ? ((IData)(0xffffffffU) 
					  + vlTOPp->v__DOT__low_reg_94)
				       : ((IData)(vlTOPp->v__DOT__tmp_5_fu_148_p2)
					   ? ((IData)(0xffffffffU) 
					      + VL_EXTENDS_II(32,31, vlTOPp->v__DOT__tmp_7_reg_214))
					   : vlTOPp->v__DOT__up_reg_82));
    vlTOPp->v__DOT__tmp_1_fu_112_p2 = (vlTOPp->v__DOT__up_reg_82 
				       + vlTOPp->v__DOT__low_reg_94);
    vlTOPp->v__DOT__tmp_fu_106_p2 = VL_GTS_III(1,32,32, vlTOPp->v__DOT__low_reg_94, vlTOPp->v__DOT__up_reg_82);
    // ALWAYS at binary_search.v:181
    vlTOPp->data_key_ce0 = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U));
    // ALWAYS at binary_search.v:189
    vlTOPp->data_value_ce0 = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				    >> 1U));
    // ALWAYS at binary_search.v:141
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    vlTOPp->data_key_address0 = (0xfU & (IData)(VL_EXTENDS_QI(64,31, 
							      (0x7fffffffU 
							       & (vlTOPp->v__DOT__tmp_1_fu_112_p2 
								  >> 1U)))));
    vlTOPp->data_value_address0 = (0xfU & (IData)(VL_EXTENDS_QI(64,31, 
								(0x7fffffffU 
								 & (vlTOPp->v__DOT__tmp_1_fu_112_p2 
								    >> 1U)))));
    // ALWAYS at binary_search.v:133
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 1U) & (IData)(vlTOPp->v__DOT__tmp_fu_106_p2));
    // ALWAYS at binary_search.v:149
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 1U) & (IData)(vlTOPp->v__DOT__tmp_fu_106_p2));
    // ALWAYS at binary_search.v:196
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->v__DOT__tmp_fu_106_p2) 
			     << 4U) | (((IData)(vlTOPp->ap_start) 
					<< 3U) | (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vbinary_search::_combo__TOP__6(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_combo__TOP__6\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__fvalue_1_fu_181_p3 = ((IData)(vlTOPp->v__DOT__tmp_3_fu_137_p2)
					   ? vlTOPp->data_value_q0
					   : vlTOPp->v__DOT__fvalue_reg_70);
    vlTOPp->v__DOT__low_2_fu_197_p3 = ((IData)(vlTOPp->v__DOT__tmp_3_fu_137_p2)
				        ? vlTOPp->v__DOT__low_reg_94
				        : ((IData)(vlTOPp->v__DOT__tmp_5_fu_148_p2)
					    ? vlTOPp->v__DOT__low_reg_94
					    : ((IData)(1U) 
					       + VL_EXTENDS_II(32,31, vlTOPp->v__DOT__tmp_7_reg_214))));
    vlTOPp->v__DOT__up_2_fu_189_p3 = ((IData)(vlTOPp->v__DOT__tmp_3_fu_137_p2)
				       ? ((IData)(0xffffffffU) 
					  + vlTOPp->v__DOT__low_reg_94)
				       : ((IData)(vlTOPp->v__DOT__tmp_5_fu_148_p2)
					   ? ((IData)(0xffffffffU) 
					      + VL_EXTENDS_II(32,31, vlTOPp->v__DOT__tmp_7_reg_214))
					   : vlTOPp->v__DOT__up_reg_82));
    // ALWAYS at binary_search.v:141
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at binary_search.v:196
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->v__DOT__tmp_fu_106_p2) 
			     << 4U) | (((IData)(vlTOPp->ap_start) 
					<< 3U) | (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vbinary_search::_sequent__TOP__7(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_sequent__TOP__7\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at binary_search.v:181
    vlTOPp->data_key_ce0 = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U));
    // ALWAYS at binary_search.v:189
    vlTOPp->data_value_ce0 = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				    >> 1U));
    vlTOPp->data_key_address0 = (0xfU & (IData)(VL_EXTENDS_QI(64,31, 
							      (0x7fffffffU 
							       & (vlTOPp->v__DOT__tmp_1_fu_112_p2 
								  >> 1U)))));
    vlTOPp->data_value_address0 = (0xfU & (IData)(VL_EXTENDS_QI(64,31, 
								(0x7fffffffU 
								 & (vlTOPp->v__DOT__tmp_1_fu_112_p2 
								    >> 1U)))));
    // ALWAYS at binary_search.v:133
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 1U) & (IData)(vlTOPp->v__DOT__tmp_fu_106_p2));
    // ALWAYS at binary_search.v:149
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 1U) & (IData)(vlTOPp->v__DOT__tmp_fu_106_p2));
}

void Vbinary_search::_eval(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_eval\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vbinary_search::_eval_initial(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_eval_initial\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vbinary_search::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::final\n"); );
    // Variables
    Vbinary_search__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbinary_search::_eval_settle(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_eval_settle\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData Vbinary_search::_change_request(Vbinary_search__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbinary_search::_change_request\n"); );
    Vbinary_search* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
