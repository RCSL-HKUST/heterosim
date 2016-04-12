// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbit_count.h for the primary calling header

#include "Vbit_count.h"        // For This
#include "Vbit_count__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vbit_count::__Vtable1_v__DOT__ap_NS_fsm[128],2,0);

//--------------------

VL_CTOR_IMP(Vbit_count) {
    Vbit_count__Syms* __restrict vlSymsp = __VlSymsp = new Vbit_count__Syms(this, name());
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(3);
    v__DOT__tmp_reg_139 = VL_RAND_RESET_I(1);
    v__DOT__x_1_fu_101_p2 = VL_RAND_RESET_Q(64);
    v__DOT__x_1_reg_143 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_4_reg_148 = VL_RAND_RESET_I(1);
    v__DOT__n_2_fu_113_p2 = VL_RAND_RESET_I(32);
    v__DOT__x1_reg_57 = VL_RAND_RESET_Q(64);
    v__DOT__n_reg_66 = VL_RAND_RESET_I(32);
    v__DOT__n_1_reg_77 = VL_RAND_RESET_I(32);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(3);
    __Vtableidx1 = VL_RAND_RESET_I(7);
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
    __Vtable1_v__DOT__ap_NS_fsm[18] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[19] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[20] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[21] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[22] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[23] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[24] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[25] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[26] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[27] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[28] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[29] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[30] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[31] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[32] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[33] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[34] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[35] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[36] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[37] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[38] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[39] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[40] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[41] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[42] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[43] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[44] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[45] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[46] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[47] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[48] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[49] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[50] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[51] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[52] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[53] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[54] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[55] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[56] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[57] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[58] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[59] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[60] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[61] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[62] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[63] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[64] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[65] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[66] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[67] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[68] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[69] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[70] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[71] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[72] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[73] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[74] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[75] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[76] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[77] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[78] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[79] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[80] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[81] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[82] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[83] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[84] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[85] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[86] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[87] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[88] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[89] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[90] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[91] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[92] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[93] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[94] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[95] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[96] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[97] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[98] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[99] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[100] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[101] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[102] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[103] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[104] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[105] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[106] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[107] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[108] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[109] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[110] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[111] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[112] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[113] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[114] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[115] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[116] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[117] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[118] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[119] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[120] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[121] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[122] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[123] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[124] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[125] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[126] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[127] = 0U;
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vbit_count::__Vconfigure(Vbit_count__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbit_count::~Vbit_count() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vbit_count::eval() {
    Vbit_count__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vbit_count::eval\n"); );
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

void Vbit_count::_eval_initial_loop(Vbit_count__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vbit_count::_combo__TOP__1(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_combo__TOP__1\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->nn + vlTOPp->mm);
}

VL_INLINE_OPT void Vbit_count::_sequent__TOP__3(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_sequent__TOP__3\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bit_count.v:106
    if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start)) 
	 & (VL_ULL(0) != vlTOPp->in_r))) {
	vlTOPp->v__DOT__x1_reg_57 = vlTOPp->in_r;
    } else {
	if ((1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		     >> 2U) & (~ (IData)(vlTOPp->v__DOT__tmp_reg_139))) 
		   & (~ (IData)(vlTOPp->v__DOT__tmp_4_reg_148))))) {
	    vlTOPp->v__DOT__x1_reg_57 = vlTOPp->v__DOT__x_1_reg_143;
	}
    }
    // ALWAYS at bit_count.v:90
    if (((((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 2U) 
	  & (~ (IData)(vlTOPp->v__DOT__tmp_reg_139))) 
	 & (IData)(vlTOPp->v__DOT__tmp_4_reg_148))) {
	vlTOPp->v__DOT__n_1_reg_77 = ((IData)(1U) + vlTOPp->v__DOT__n_reg_66);
    } else {
	if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start)) 
	     & (VL_ULL(0) == vlTOPp->in_r))) {
	    vlTOPp->v__DOT__n_1_reg_77 = 0U;
	}
    }
    // ALWAYS at bit_count.v:98
    if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start)) 
	 & (VL_ULL(0) != vlTOPp->in_r))) {
	vlTOPp->v__DOT__n_reg_66 = 0U;
    } else {
	if ((1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		     >> 2U) & (~ (IData)(vlTOPp->v__DOT__tmp_reg_139))) 
		   & (~ (IData)(vlTOPp->v__DOT__tmp_4_reg_148))))) {
	    vlTOPp->v__DOT__n_reg_66 = vlTOPp->v__DOT__n_2_fu_113_p2;
	}
    }
    vlTOPp->v__DOT__n_2_fu_113_p2 = ((IData)(1U) + vlTOPp->v__DOT__n_reg_66);
    // ALWAYS at bit_count.v:121
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__tmp_reg_139 = (VL_ULL(0) == vlTOPp->in_r);
    }
    // ALWAYS at bit_count.v:114
    if ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__tmp_4_reg_148 = (VL_ULL(0) 
					 == vlTOPp->v__DOT__x_1_fu_101_p2);
	vlTOPp->v__DOT__x_1_reg_143 = vlTOPp->v__DOT__x_1_fu_101_p2;
    }
    vlTOPp->v__DOT__x_1_fu_101_p2 = ((VL_ULL(0xffffffffffffffff) 
				      + vlTOPp->v__DOT__x1_reg_57) 
				     & vlTOPp->v__DOT__x1_reg_57);
    // ALWAYS at bit_count.v:82
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

void Vbit_count::_settle__TOP__4(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_settle__TOP__4\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__n_2_fu_113_p2 = ((IData)(1U) + vlTOPp->v__DOT__n_reg_66);
    vlTOPp->v__DOT__x_1_fu_101_p2 = ((VL_ULL(0xffffffffffffffff) 
				      + vlTOPp->v__DOT__x1_reg_57) 
				     & vlTOPp->v__DOT__x1_reg_57);
}

void Vbit_count::_initial__TOP__5(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_initial__TOP__5\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bit_count.v:58
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

VL_INLINE_OPT void Vbit_count::_combo__TOP__6(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_combo__TOP__6\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bit_count.v:135
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bit_count.v:190
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->v__DOT__tmp_reg_139) 
			     << 6U) | (((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
					<< 5U) | ((
						   (VL_ULL(0) 
						    == vlTOPp->in_r) 
						   << 4U) 
						  | (((IData)(vlTOPp->ap_start) 
						      << 3U) 
						     | (IData)(vlTOPp->v__DOT__ap_CS_fsm)))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

void Vbit_count::_settle__TOP__7(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_settle__TOP__7\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bit_count.v:135
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bit_count.v:127
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 2U) & ((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
				  | (IData)(vlTOPp->v__DOT__tmp_reg_139)));
    // ALWAYS at bit_count.v:143
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 2U) & ((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
				   | (IData)(vlTOPp->v__DOT__tmp_reg_139)));
    // ALWAYS at bit_count.v:183
    vlTOPp->out_r_ap_vld = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 2U) & ((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
				       | (IData)(vlTOPp->v__DOT__tmp_reg_139)));
    vlTOPp->out_r = (((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 2U) & (~ (IData)(vlTOPp->v__DOT__tmp_reg_139))) 
		      & (IData)(vlTOPp->v__DOT__tmp_4_reg_148))
		      ? ((IData)(1U) + vlTOPp->v__DOT__n_reg_66)
		      : vlTOPp->v__DOT__n_1_reg_77);
    // ALWAYS at bit_count.v:190
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->v__DOT__tmp_reg_139) 
			     << 6U) | (((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
					<< 5U) | ((
						   (VL_ULL(0) 
						    == vlTOPp->in_r) 
						   << 4U) 
						  | (((IData)(vlTOPp->ap_start) 
						      << 3U) 
						     | (IData)(vlTOPp->v__DOT__ap_CS_fsm)))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vbit_count::_sequent__TOP__8(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_sequent__TOP__8\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bit_count.v:127
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 2U) & ((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
				  | (IData)(vlTOPp->v__DOT__tmp_reg_139)));
    // ALWAYS at bit_count.v:143
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 2U) & ((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
				   | (IData)(vlTOPp->v__DOT__tmp_reg_139)));
    // ALWAYS at bit_count.v:183
    vlTOPp->out_r_ap_vld = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 2U) & ((IData)(vlTOPp->v__DOT__tmp_4_reg_148) 
				       | (IData)(vlTOPp->v__DOT__tmp_reg_139)));
    vlTOPp->out_r = (((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 2U) & (~ (IData)(vlTOPp->v__DOT__tmp_reg_139))) 
		      & (IData)(vlTOPp->v__DOT__tmp_4_reg_148))
		      ? ((IData)(1U) + vlTOPp->v__DOT__n_reg_66)
		      : vlTOPp->v__DOT__n_1_reg_77);
}

void Vbit_count::_eval(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_eval\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vbit_count::_eval_initial(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_eval_initial\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void Vbit_count::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::final\n"); );
    // Variables
    Vbit_count__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbit_count::_eval_settle(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_eval_settle\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
}

VL_INLINE_OPT QData Vbit_count::_change_request(Vbit_count__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbit_count::_change_request\n"); );
    Vbit_count* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
