// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinsertsort.h for the primary calling header

#include "Vinsertsort.h"       // For This
#include "Vinsertsort__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vinsertsort::__Vtable1_v__DOT__ap_NS_fsm[64],2,0);

//--------------------

VL_CTOR_IMP(Vinsertsort) {
    Vinsertsort__Syms* __restrict vlSymsp = __VlSymsp = new Vinsertsort__Syms(this, name());
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    a_address0 = VL_RAND_RESET_I(4);
    a_ce0 = VL_RAND_RESET_I(1);
    a_we0 = VL_RAND_RESET_I(1);
    a_d0 = VL_RAND_RESET_I(32);
    a_q0 = VL_RAND_RESET_I(32);
    a_address1 = VL_RAND_RESET_I(4);
    a_ce1 = VL_RAND_RESET_I(1);
    a_we1 = VL_RAND_RESET_I(1);
    a_d1 = VL_RAND_RESET_I(32);
    a_q1 = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(3);
    v__DOT__a_addr_reg_114 = VL_RAND_RESET_I(4);
    v__DOT__j_1_reg_119 = VL_RAND_RESET_I(32);
    v__DOT__a_addr_1_reg_124 = VL_RAND_RESET_I(4);
    v__DOT__temp_reg_129 = VL_RAND_RESET_I(32);
    v__DOT__i_fu_100_p2 = VL_RAND_RESET_I(4);
    v__DOT__tmp_3_fu_94_p2 = VL_RAND_RESET_I(1);
    v__DOT__j_reg_46 = VL_RAND_RESET_I(4);
    v__DOT__j1_reg_58 = VL_RAND_RESET_I(32);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(3);
    __Vtableidx1 = VL_RAND_RESET_I(6);
    __Vtable1_v__DOT__ap_NS_fsm[0] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[2] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[3] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[4] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[5] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[6] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[7] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[8] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[9] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[10] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[11] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[12] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[13] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[14] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[15] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[16] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[17] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[18] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[19] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[20] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[21] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[22] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[23] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[24] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[25] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[26] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[27] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[28] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[29] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[30] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[31] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[32] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[33] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[34] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[35] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[36] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[37] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[38] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[39] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[40] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[41] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[42] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[43] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[44] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[45] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[46] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[47] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[48] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[49] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[50] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[51] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[52] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[53] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[54] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[55] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[56] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[57] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[58] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[59] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[60] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[61] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[62] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[63] = 0U;
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vinsertsort::__Vconfigure(Vinsertsort__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vinsertsort::~Vinsertsort() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vinsertsort::eval() {
    Vinsertsort__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vinsertsort::eval\n"); );
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

void Vinsertsort::_eval_initial_loop(Vinsertsort__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vinsertsort::_combo__TOP__1(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_combo__TOP__1\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->a_d0 = vlTOPp->a_q1;
}

VL_INLINE_OPT void Vinsertsort::_sequent__TOP__3(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_sequent__TOP__3\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__v__DOT__j_1_reg_119,31,0);
    // Body
    __Vdly__v__DOT__j_1_reg_119 = vlTOPp->v__DOT__j_1_reg_119;
    // ALWAYS at insertsort.v:130
    if ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__temp_reg_129 = vlTOPp->a_q0;
    }
    // ALWAYS at insertsort.v:120
    if ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__a_addr_1_reg_124 = (0xfU & (IData)(
							   VL_EXTENDS_QI(64,32, 
									 ((IData)(0xffffffffU) 
									  + vlTOPp->v__DOT__j1_reg_58))));
	vlTOPp->v__DOT__a_addr_reg_114 = (0xfU & (IData)(
							 VL_EXTENDS_QI(64,32, vlTOPp->v__DOT__j1_reg_58)));
	__Vdly__v__DOT__j_1_reg_119 = ((IData)(0xffffffffU) 
				       + vlTOPp->v__DOT__j1_reg_58);
    }
    vlTOPp->a_d1 = vlTOPp->v__DOT__temp_reg_129;
    // ALWAYS at insertsort.v:100
    if (((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	 & (0xbU != (IData)(vlTOPp->v__DOT__j_reg_46)))) {
	vlTOPp->v__DOT__j1_reg_58 = vlTOPp->v__DOT__j_reg_46;
    } else {
	if ((4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__j1_reg_58 = vlTOPp->v__DOT__j_1_reg_119;
	}
    }
    vlTOPp->v__DOT__j_1_reg_119 = __Vdly__v__DOT__j_1_reg_119;
    // ALWAYS at insertsort.v:110
    if (((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	 & (~ (IData)(vlTOPp->v__DOT__tmp_3_fu_94_p2)))) {
	vlTOPp->v__DOT__j_reg_46 = vlTOPp->v__DOT__i_fu_100_p2;
    } else {
	if (((0U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	     & (IData)(vlTOPp->ap_start))) {
	    vlTOPp->v__DOT__j_reg_46 = 2U;
	}
    }
    vlTOPp->v__DOT__i_fu_100_p2 = (0xfU & ((IData)(1U) 
					   + (IData)(vlTOPp->v__DOT__j_reg_46)));
    // ALWAYS at insertsort.v:90
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 0U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

void Vinsertsort::_settle__TOP__4(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_settle__TOP__4\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->a_d1 = vlTOPp->v__DOT__temp_reg_129;
    vlTOPp->v__DOT__tmp_3_fu_94_p2 = VL_LTS_III(1,32,32, vlTOPp->a_q0, vlTOPp->a_q1);
    vlTOPp->v__DOT__i_fu_100_p2 = (0xfU & ((IData)(1U) 
					   + (IData)(vlTOPp->v__DOT__j_reg_46)));
}

VL_INLINE_OPT void Vinsertsort::_combo__TOP__5(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_combo__TOP__5\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_3_fu_94_p2 = VL_LTS_III(1,32,32, vlTOPp->a_q0, vlTOPp->a_q1);
}

void Vinsertsort::_initial__TOP__6(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_initial__TOP__6\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at insertsort.v:57
    vlTOPp->v__DOT__ap_CS_fsm = 0U;
}

VL_INLINE_OPT void Vinsertsort::_sequent__TOP__7(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_sequent__TOP__7\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at insertsort.v:164
    vlTOPp->a_ce0 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		     | (3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at insertsort.v:174
    vlTOPp->a_ce1 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		     | (4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at insertsort.v:194
    vlTOPp->a_we1 = (4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm));
    // ALWAYS at insertsort.v:204
    vlTOPp->ap_done = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		       & (0xbU == (IData)(vlTOPp->v__DOT__j_reg_46)));
    // ALWAYS at insertsort.v:224
    vlTOPp->ap_ready = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			& (0xbU == (IData)(vlTOPp->v__DOT__j_reg_46)));
    // ALWAYS at insertsort.v:138
    vlTOPp->a_address0 = (0xfU & ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? (IData)(vlTOPp->v__DOT__a_addr_reg_114)
				   : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? (IData)(VL_EXTENDS_QI(64,32, vlTOPp->v__DOT__j1_reg_58))
				       : 0U)));
    // ALWAYS at insertsort.v:151
    vlTOPp->a_address1 = (0xfU & ((4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? (IData)(vlTOPp->v__DOT__a_addr_1_reg_124)
				   : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? (IData)(VL_EXTENDS_QI(64,32, 
							       ((IData)(0xffffffffU) 
								+ vlTOPp->v__DOT__j1_reg_58)))
				       : 0U)));
}

void Vinsertsort::_settle__TOP__8(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_settle__TOP__8\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at insertsort.v:164
    vlTOPp->a_ce0 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		     | (3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at insertsort.v:174
    vlTOPp->a_ce1 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		     | (4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at insertsort.v:194
    vlTOPp->a_we1 = (4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm));
    // ALWAYS at insertsort.v:184
    vlTOPp->a_we0 = ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		     & (IData)(vlTOPp->v__DOT__tmp_3_fu_94_p2));
    // ALWAYS at insertsort.v:204
    vlTOPp->ap_done = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		       & (0xbU == (IData)(vlTOPp->v__DOT__j_reg_46)));
    // ALWAYS at insertsort.v:214
    vlTOPp->ap_idle = ((~ (IData)(vlTOPp->ap_start)) 
		       & (0U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at insertsort.v:224
    vlTOPp->ap_ready = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			& (0xbU == (IData)(vlTOPp->v__DOT__j_reg_46)));
    // ALWAYS at insertsort.v:138
    vlTOPp->a_address0 = (0xfU & ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? (IData)(vlTOPp->v__DOT__a_addr_reg_114)
				   : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? (IData)(VL_EXTENDS_QI(64,32, vlTOPp->v__DOT__j1_reg_58))
				       : 0U)));
    // ALWAYS at insertsort.v:151
    vlTOPp->a_address1 = (0xfU & ((4U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? (IData)(vlTOPp->v__DOT__a_addr_1_reg_124)
				   : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? (IData)(VL_EXTENDS_QI(64,32, 
							       ((IData)(0xffffffffU) 
								+ vlTOPp->v__DOT__j1_reg_58)))
				       : 0U)));
    // ALWAYS at insertsort.v:232
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 5U) | (((0xbU == (IData)(vlTOPp->v__DOT__j_reg_46)) 
					<< 4U) | (((IData)(vlTOPp->v__DOT__tmp_3_fu_94_p2) 
						   << 3U) 
						  | (IData)(vlTOPp->v__DOT__ap_CS_fsm))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vinsertsort::_combo__TOP__9(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_combo__TOP__9\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at insertsort.v:184
    vlTOPp->a_we0 = ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		     & (IData)(vlTOPp->v__DOT__tmp_3_fu_94_p2));
    // ALWAYS at insertsort.v:214
    vlTOPp->ap_idle = ((~ (IData)(vlTOPp->ap_start)) 
		       & (0U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at insertsort.v:232
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 5U) | (((0xbU == (IData)(vlTOPp->v__DOT__j_reg_46)) 
					<< 4U) | (((IData)(vlTOPp->v__DOT__tmp_3_fu_94_p2) 
						   << 3U) 
						  | (IData)(vlTOPp->v__DOT__ap_CS_fsm))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

void Vinsertsort::_eval(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_eval\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vinsertsort::_eval_initial(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_eval_initial\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__6(vlSymsp);
}

void Vinsertsort::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::final\n"); );
    // Variables
    Vinsertsort__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vinsertsort::_eval_settle(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_eval_settle\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
}

VL_INLINE_OPT QData Vinsertsort::_change_request(Vinsertsort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vinsertsort::_change_request\n"); );
    Vinsertsort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
