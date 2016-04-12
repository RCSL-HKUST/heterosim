// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbubblesort.h for the primary calling header

#include "Vbubblesort.h"       // For This
#include "Vbubblesort__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vbubblesort::__Vtable1_v__DOT__ap_NS_fsm[64],1,0);

//--------------------

VL_CTOR_IMP(Vbubblesort) {
    Vbubblesort__Syms* __restrict vlSymsp = __VlSymsp = new Vbubblesort__Syms(this, name());
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    Array_r_address0 = VL_RAND_RESET_I(5);
    Array_r_ce0 = VL_RAND_RESET_I(1);
    Array_r_we0 = VL_RAND_RESET_I(1);
    Array_r_d0 = VL_RAND_RESET_I(32);
    Array_r_q0 = VL_RAND_RESET_I(32);
    Array_r_address1 = VL_RAND_RESET_I(5);
    Array_r_ce1 = VL_RAND_RESET_I(1);
    Array_r_we1 = VL_RAND_RESET_I(1);
    Array_r_d1 = VL_RAND_RESET_I(32);
    Array_r_q1 = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(2);
    v__DOT__tmp_1_cast_reg_191 = VL_RAND_RESET_I(32);
    v__DOT__tmp_2_reg_196 = VL_RAND_RESET_I(1);
    v__DOT__Array_addr_reg_203 = VL_RAND_RESET_I(5);
    v__DOT__exitcond_fu_146_p2 = VL_RAND_RESET_I(1);
    v__DOT__Index_1_reg_208 = VL_RAND_RESET_I(32);
    v__DOT__Array_addr_1_reg_214 = VL_RAND_RESET_I(5);
    v__DOT__i_1_fu_173_p2 = VL_RAND_RESET_I(5);
    v__DOT__indvars_iv_next_fu_179_p2 = VL_RAND_RESET_I(6);
    v__DOT__indvars_iv_reg_57 = VL_RAND_RESET_I(6);
    v__DOT__i_reg_69 = VL_RAND_RESET_I(5);
    v__DOT__Index_reg_81 = VL_RAND_RESET_I(32);
    v__DOT__tmp_7_fu_185_p2 = VL_RAND_RESET_I(1);
    v__DOT__Sorted_reg_94 = VL_RAND_RESET_I(2);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(2);
    __Vtableidx1 = VL_RAND_RESET_I(6);
    __Vtable1_v__DOT__ap_NS_fsm[0] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[2] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[3] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[4] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[5] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[6] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[7] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[8] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[9] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[10] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[11] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[12] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[13] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[14] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[15] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[16] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[17] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[18] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[19] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[20] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[21] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[22] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[23] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[24] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[25] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[26] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[27] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[28] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[29] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[30] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[31] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[32] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[33] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[34] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[35] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[36] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[37] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[38] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[39] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[40] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[41] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[42] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[43] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[44] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[45] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[46] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[47] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[48] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[49] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[50] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[51] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[52] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[53] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[54] = 3U;
    __Vtable1_v__DOT__ap_NS_fsm[55] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[56] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[57] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[58] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[59] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[60] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[61] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[62] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[63] = 2U;
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vbubblesort::__Vconfigure(Vbubblesort__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbubblesort::~Vbubblesort() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vbubblesort::eval() {
    Vbubblesort__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vbubblesort::eval\n"); );
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

void Vbubblesort::_eval_initial_loop(Vbubblesort__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vbubblesort::_combo__TOP__1(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_combo__TOP__1\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Array_r_d0 = vlTOPp->Array_r_q1;
    vlTOPp->Array_r_d1 = vlTOPp->Array_r_q0;
}

VL_INLINE_OPT void Vbubblesort::_sequent__TOP__3(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_sequent__TOP__3\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__Sorted_reg_94,1,0);
    VL_SIG8(__Vdly__v__DOT__tmp_2_reg_196,0,0);
    //char	__VpadToAlign26[2];
    VL_SIG(__Vdly__v__DOT__Index_reg_81,31,0);
    // Body
    __Vdly__v__DOT__Sorted_reg_94 = vlTOPp->v__DOT__Sorted_reg_94;
    __Vdly__v__DOT__tmp_2_reg_196 = vlTOPp->v__DOT__tmp_2_reg_196;
    __Vdly__v__DOT__Index_reg_81 = vlTOPp->v__DOT__Index_reg_81;
    // ALWAYS at bubblesort.v:123
    if (((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	 & (~ (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2)))) {
	__Vdly__v__DOT__Sorted_reg_94 = vlTOPp->v__DOT__Sorted_reg_94;
    } else {
	if (((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	     & (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2))) {
	    __Vdly__v__DOT__Sorted_reg_94 = 0U;
	} else {
	    if (((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		 & (0x14U > (IData)(vlTOPp->v__DOT__i_reg_69)))) {
		__Vdly__v__DOT__Sorted_reg_94 = 1U;
	    }
	}
    }
    // ALWAYS at bubblesort.v:319
    vlTOPp->v__DOT__tmp_1_cast_reg_191 = (0x1fU & vlTOPp->v__DOT__tmp_1_cast_reg_191);
    // ALWAYS at bubblesort.v:165
    if ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__tmp_1_cast_reg_191 = ((0xfffffffeU 
					       & vlTOPp->v__DOT__tmp_1_cast_reg_191) 
					      | (1U 
						 & ((0x2cU 
						     < (IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     ? 
						    VL_NEGATE_I((IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     : 0x14U)));
	__Vdly__v__DOT__tmp_2_reg_196 = (0x14U > (IData)(vlTOPp->v__DOT__i_reg_69));
	vlTOPp->v__DOT__tmp_1_cast_reg_191 = ((0xfffffffdU 
					       & vlTOPp->v__DOT__tmp_1_cast_reg_191) 
					      | (2U 
						 & ((0x2cU 
						     < (IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     ? 
						    VL_NEGATE_I((IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     : 0x14U)));
	vlTOPp->v__DOT__tmp_1_cast_reg_191 = ((0xfffffffbU 
					       & vlTOPp->v__DOT__tmp_1_cast_reg_191) 
					      | (4U 
						 & ((0x2cU 
						     < (IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     ? 
						    VL_NEGATE_I((IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     : 0x14U)));
	vlTOPp->v__DOT__tmp_1_cast_reg_191 = ((0xfffffff7U 
					       & vlTOPp->v__DOT__tmp_1_cast_reg_191) 
					      | (8U 
						 & ((0x2cU 
						     < (IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     ? 
						    VL_NEGATE_I((IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     : 0x14U)));
	vlTOPp->v__DOT__tmp_1_cast_reg_191 = ((0xffffffefU 
					       & vlTOPp->v__DOT__tmp_1_cast_reg_191) 
					      | (0x10U 
						 & ((0x2cU 
						     < (IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     ? 
						    VL_NEGATE_I((IData)(vlTOPp->v__DOT__indvars_iv_reg_57))
						     : 0x14U)));
    }
    // ALWAYS at bubblesort.v:113
    if ((((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	  & (~ (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2))) 
	 | ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	    & (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2)))) {
	__Vdly__v__DOT__Index_reg_81 = vlTOPp->v__DOT__Index_1_reg_208;
    } else {
	if (((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	     & (0x14U > (IData)(vlTOPp->v__DOT__i_reg_69)))) {
	    __Vdly__v__DOT__Index_reg_81 = 1U;
	}
    }
    // ALWAYS at bubblesort.v:145
    if (((0U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	 & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__indvars_iv_reg_57 = 0x2cU;
    } else {
	if (((((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	       & (IData)(vlTOPp->v__DOT__tmp_2_reg_196)) 
	      & (IData)(vlTOPp->v__DOT__exitcond_fu_146_p2)) 
	     & (1U != (IData)(vlTOPp->v__DOT__Sorted_reg_94)))) {
	    vlTOPp->v__DOT__indvars_iv_reg_57 = vlTOPp->v__DOT__indvars_iv_next_fu_179_p2;
	}
    }
    // ALWAYS at bubblesort.v:135
    if (((0U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	 & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__i_reg_69 = 1U;
    } else {
	if (((((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	       & (IData)(vlTOPp->v__DOT__tmp_2_reg_196)) 
	      & (IData)(vlTOPp->v__DOT__exitcond_fu_146_p2)) 
	     & (1U != (IData)(vlTOPp->v__DOT__Sorted_reg_94)))) {
	    vlTOPp->v__DOT__i_reg_69 = vlTOPp->v__DOT__i_1_fu_173_p2;
	}
    }
    // ALWAYS at bubblesort.v:155
    if ((((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
	  & (IData)(vlTOPp->v__DOT__tmp_2_reg_196)) 
	 & (~ (IData)(vlTOPp->v__DOT__exitcond_fu_146_p2)))) {
	vlTOPp->v__DOT__Array_addr_1_reg_214 = (0x1fU 
						& (IData)((QData)((IData)(
									  ((IData)(1U) 
									   + vlTOPp->v__DOT__Index_reg_81)))));
	vlTOPp->v__DOT__Array_addr_reg_203 = (0x1fU 
					      & (IData)((QData)((IData)(vlTOPp->v__DOT__Index_reg_81))));
	vlTOPp->v__DOT__Index_1_reg_208 = ((IData)(1U) 
					   + vlTOPp->v__DOT__Index_reg_81);
    }
    vlTOPp->v__DOT__Sorted_reg_94 = __Vdly__v__DOT__Sorted_reg_94;
    vlTOPp->v__DOT__tmp_2_reg_196 = __Vdly__v__DOT__tmp_2_reg_196;
    vlTOPp->v__DOT__Index_reg_81 = __Vdly__v__DOT__Index_reg_81;
    vlTOPp->v__DOT__indvars_iv_next_fu_179_p2 = (0x3fU 
						 & ((IData)(1U) 
						    + (IData)(vlTOPp->v__DOT__indvars_iv_reg_57)));
    vlTOPp->v__DOT__i_1_fu_173_p2 = (0x1fU & ((IData)(1U) 
					      + (IData)(vlTOPp->v__DOT__i_reg_69)));
    vlTOPp->v__DOT__exitcond_fu_146_p2 = (vlTOPp->v__DOT__Index_reg_81 
					  == vlTOPp->v__DOT__tmp_1_cast_reg_191);
    // ALWAYS at bubblesort.v:103
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 0U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void Vbubblesort::_combo__TOP__4(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_combo__TOP__4\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_7_fu_185_p2 = (vlTOPp->Array_r_q0 
				       > vlTOPp->Array_r_q1);
}

void Vbubblesort::_settle__TOP__5(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_settle__TOP__5\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_7_fu_185_p2 = (vlTOPp->Array_r_q0 
				       > vlTOPp->Array_r_q1);
    vlTOPp->v__DOT__indvars_iv_next_fu_179_p2 = (0x3fU 
						 & ((IData)(1U) 
						    + (IData)(vlTOPp->v__DOT__indvars_iv_reg_57)));
    vlTOPp->v__DOT__i_1_fu_173_p2 = (0x1fU & ((IData)(1U) 
					      + (IData)(vlTOPp->v__DOT__i_reg_69)));
    vlTOPp->v__DOT__exitcond_fu_146_p2 = (vlTOPp->v__DOT__Index_reg_81 
					  == vlTOPp->v__DOT__tmp_1_cast_reg_191);
}

void Vbubblesort::_initial__TOP__6(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_initial__TOP__6\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bubblesort.v:57
    vlTOPp->v__DOT__ap_CS_fsm = 0U;
}

VL_INLINE_OPT void Vbubblesort::_sequent__TOP__7(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_sequent__TOP__7\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bubblesort.v:204
    vlTOPp->Array_r_ce0 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   | (3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bubblesort.v:214
    vlTOPp->Array_r_ce1 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   | (3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bubblesort.v:178
    vlTOPp->Array_r_address0 = (0x1fU & ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? (IData)(vlTOPp->v__DOT__Array_addr_reg_203)
					  : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? (IData)((QData)((IData)(vlTOPp->v__DOT__Index_reg_81)))
					      : 0U)));
    // ALWAYS at bubblesort.v:191
    vlTOPp->Array_r_address1 = (0x1fU & ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? (IData)(vlTOPp->v__DOT__Array_addr_1_reg_214)
					  : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? (IData)((QData)((IData)(
									((IData)(1U) 
									 + vlTOPp->v__DOT__Index_reg_81))))
					      : 0U)));
    // ALWAYS at bubblesort.v:244
    vlTOPp->ap_done = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		       & ((~ (IData)(vlTOPp->v__DOT__tmp_2_reg_196)) 
			  | ((IData)(vlTOPp->v__DOT__exitcond_fu_146_p2) 
			     & (1U == (IData)(vlTOPp->v__DOT__Sorted_reg_94)))));
    // ALWAYS at bubblesort.v:264
    vlTOPp->ap_ready = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			& ((~ (IData)(vlTOPp->v__DOT__tmp_2_reg_196)) 
			   | ((IData)(vlTOPp->v__DOT__exitcond_fu_146_p2) 
			      & (1U == (IData)(vlTOPp->v__DOT__Sorted_reg_94)))));
}

void Vbubblesort::_settle__TOP__8(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_settle__TOP__8\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bubblesort.v:204
    vlTOPp->Array_r_ce0 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   | (3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bubblesort.v:214
    vlTOPp->Array_r_ce1 = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   | (3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bubblesort.v:224
    vlTOPp->Array_r_we0 = ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   & (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2));
    // ALWAYS at bubblesort.v:234
    vlTOPp->Array_r_we1 = ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   & (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2));
    // ALWAYS at bubblesort.v:254
    vlTOPp->ap_idle = ((~ (IData)(vlTOPp->ap_start)) 
		       & (0U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bubblesort.v:178
    vlTOPp->Array_r_address0 = (0x1fU & ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? (IData)(vlTOPp->v__DOT__Array_addr_reg_203)
					  : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? (IData)((QData)((IData)(vlTOPp->v__DOT__Index_reg_81)))
					      : 0U)));
    // ALWAYS at bubblesort.v:191
    vlTOPp->Array_r_address1 = (0x1fU & ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? (IData)(vlTOPp->v__DOT__Array_addr_1_reg_214)
					  : ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? (IData)((QData)((IData)(
									((IData)(1U) 
									 + vlTOPp->v__DOT__Index_reg_81))))
					      : 0U)));
    // ALWAYS at bubblesort.v:244
    vlTOPp->ap_done = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
		       & ((~ (IData)(vlTOPp->v__DOT__tmp_2_reg_196)) 
			  | ((IData)(vlTOPp->v__DOT__exitcond_fu_146_p2) 
			     & (1U == (IData)(vlTOPp->v__DOT__Sorted_reg_94)))));
    // ALWAYS at bubblesort.v:264
    vlTOPp->ap_ready = ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			& ((~ (IData)(vlTOPp->v__DOT__tmp_2_reg_196)) 
			   | ((IData)(vlTOPp->v__DOT__exitcond_fu_146_p2) 
			      & (1U == (IData)(vlTOPp->v__DOT__Sorted_reg_94)))));
    // ALWAYS at bubblesort.v:272
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 5U) | (((1U == (IData)(vlTOPp->v__DOT__Sorted_reg_94)) 
					<< 4U) | (((IData)(vlTOPp->v__DOT__exitcond_fu_146_p2) 
						   << 3U) 
						  | (((IData)(vlTOPp->v__DOT__tmp_2_reg_196) 
						      << 2U) 
						     | (IData)(vlTOPp->v__DOT__ap_CS_fsm)))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vbubblesort::_combo__TOP__9(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_combo__TOP__9\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bubblesort.v:224
    vlTOPp->Array_r_we0 = ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   & (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2));
    // ALWAYS at bubblesort.v:234
    vlTOPp->Array_r_we1 = ((3U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
			   & (IData)(vlTOPp->v__DOT__tmp_7_fu_185_p2));
    // ALWAYS at bubblesort.v:254
    vlTOPp->ap_idle = ((~ (IData)(vlTOPp->ap_start)) 
		       & (0U == (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bubblesort.v:272
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 5U) | (((1U == (IData)(vlTOPp->v__DOT__Sorted_reg_94)) 
					<< 4U) | (((IData)(vlTOPp->v__DOT__exitcond_fu_146_p2) 
						   << 3U) 
						  | (((IData)(vlTOPp->v__DOT__tmp_2_reg_196) 
						      << 2U) 
						     | (IData)(vlTOPp->v__DOT__ap_CS_fsm)))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

void Vbubblesort::_eval(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_eval\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vbubblesort::_eval_initial(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_eval_initial\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__6(vlSymsp);
}

void Vbubblesort::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::final\n"); );
    // Variables
    Vbubblesort__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbubblesort::_eval_settle(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_eval_settle\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
}

VL_INLINE_OPT QData Vbubblesort::_change_request(Vbubblesort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbubblesort::_change_request\n"); );
    Vbubblesort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
