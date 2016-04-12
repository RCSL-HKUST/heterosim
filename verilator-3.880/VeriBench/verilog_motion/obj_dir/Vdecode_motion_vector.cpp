// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_motion_vector.h for the primary calling header

#include "Vdecode_motion_vector.h" // For This
#include "Vdecode_motion_vector__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vdecode_motion_vector::__Vtable1_v__DOT__ap_NS_fsm[128],5,0);

//--------------------

VL_CTOR_IMP(Vdecode_motion_vector) {
    Vdecode_motion_vector__Syms* __restrict vlSymsp = __VlSymsp = new Vdecode_motion_vector__Syms(this, name());
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    buff_address0 = VL_RAND_RESET_I(3);
    buff_ce0 = VL_RAND_RESET_I(1);
    buff_q0 = VL_RAND_RESET_I(32);
    buff_address1 = VL_RAND_RESET_I(3);
    buff_ce1 = VL_RAND_RESET_I(1);
    buff_q1 = VL_RAND_RESET_I(32);
    m = VL_RAND_RESET_I(32);
    y = VL_RAND_RESET_I(32);
    y_ap_vld = VL_RAND_RESET_I(1);
    n = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(6);
    v__DOT__tmp_2_reg_396 = VL_RAND_RESET_I(1);
    v__DOT__tmp_6_reg_401 = VL_RAND_RESET_I(5);
    v__DOT__tmp_13_reg_406 = VL_RAND_RESET_I(5);
    v__DOT__tmp_reg_411 = VL_RAND_RESET_I(1);
    v__DOT__r_size_reg_422 = VL_RAND_RESET_I(32);
    v__DOT__vec_reg_429 = VL_RAND_RESET_I(32);
    v__DOT__buff_load_3_reg_436 = VL_RAND_RESET_I(32);
    v__DOT__tmp_4_reg_443 = VL_RAND_RESET_I(32);
    v__DOT__tmp_17_reg_453 = VL_RAND_RESET_I(1);
    v__DOT__lim_reg_458 = VL_RAND_RESET_I(32);
    v__DOT__tmp_3_reg_464 = VL_RAND_RESET_I(1);
    v__DOT__vec_1_reg_471 = VL_RAND_RESET_I(32);
    v__DOT__vec_4_reg_478 = VL_RAND_RESET_I(32);
    v__DOT__tmp_10_reg_485 = VL_RAND_RESET_I(32);
    v__DOT__sel_tmp2_reg_490 = VL_RAND_RESET_I(1);
    v__DOT__vec_7_reg_495 = VL_RAND_RESET_I(32);
    v__DOT__sel_tmp7_reg_500 = VL_RAND_RESET_I(1);
    v__DOT__tmp_9_fu_280_p2 = VL_RAND_RESET_I(1);
    v__DOT__vec_3_fu_355_p3 = VL_RAND_RESET_I(32);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(6);
    __Vtableidx1 = VL_RAND_RESET_I(7);
    __Vtable1_v__DOT__ap_NS_fsm[0] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[2] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[3] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[4] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[5] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[6] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[7] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[8] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[9] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[10] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[11] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[12] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[13] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[14] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[15] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[16] = 0x20U;
    __Vtable1_v__DOT__ap_NS_fsm[17] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[18] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[19] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[20] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[21] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[22] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[23] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[24] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[25] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[26] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[27] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[28] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[29] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[30] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[31] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[32] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[33] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[34] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[35] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[36] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[37] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[38] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[39] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[40] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[41] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[42] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[43] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[44] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[45] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[46] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[47] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[48] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[49] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[50] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[51] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[52] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[53] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[54] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[55] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[56] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[57] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[58] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[59] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[60] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[61] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[62] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[63] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[64] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[65] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[66] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[67] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[68] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[69] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[70] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[71] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[72] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[73] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[74] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[75] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[76] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[77] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[78] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[79] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[80] = 0x20U;
    __Vtable1_v__DOT__ap_NS_fsm[81] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[82] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[83] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[84] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[85] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[86] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[87] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[88] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[89] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[90] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[91] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[92] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[93] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[94] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[95] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[96] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[97] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[98] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[99] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[100] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[101] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[102] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[103] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[104] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[105] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[106] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[107] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[108] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[109] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[110] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[111] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[112] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[113] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[114] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[115] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[116] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[117] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[118] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[119] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[120] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[121] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[122] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[123] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[124] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[125] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[126] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[127] = 0U;
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vdecode_motion_vector::__Vconfigure(Vdecode_motion_vector__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vdecode_motion_vector::~Vdecode_motion_vector() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vdecode_motion_vector::eval() {
    Vdecode_motion_vector__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vdecode_motion_vector::eval\n"); );
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

void Vdecode_motion_vector::_eval_initial_loop(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vdecode_motion_vector::_combo__TOP__1(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_combo__TOP__1\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->n + vlTOPp->m);
}

VL_INLINE_OPT void Vdecode_motion_vector::_sequent__TOP__3(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_sequent__TOP__3\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at decode_motion_vector.v:191
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 4U) & (~ (IData)(vlTOPp->v__DOT__sel_tmp2_reg_490))))) {
	vlTOPp->v__DOT__sel_tmp7_reg_500 = ((IData)(vlTOPp->v__DOT__tmp_3_reg_464) 
					    & (IData)(vlTOPp->v__DOT__tmp_9_fu_280_p2));
	vlTOPp->v__DOT__vec_7_reg_495 = (((VL_LTS_III(1,32,32, vlTOPp->v__DOT__vec_4_reg_478, vlTOPp->v__DOT__tmp_10_reg_485) 
					   & (~ (IData)(vlTOPp->v__DOT__tmp_3_reg_464))) 
					  & (IData)(vlTOPp->v__DOT__tmp_17_reg_453))
					  ? (vlTOPp->v__DOT__vec_4_reg_478 
					     + (vlTOPp->v__DOT__lim_reg_458 
						<< 1U))
					  : (((IData)(vlTOPp->v__DOT__tmp_3_reg_464) 
					      & (~ (IData)(vlTOPp->v__DOT__tmp_9_fu_280_p2)))
					      ? (vlTOPp->v__DOT__vec_1_reg_471 
						 - 
						 (vlTOPp->v__DOT__lim_reg_458 
						  << 1U))
					      : vlTOPp->v__DOT__vec_4_reg_478));
    }
    // ALWAYS at decode_motion_vector.v:180
    if ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__lim_reg_458 = ((0x1fU >= vlTOPp->v__DOT__r_size_reg_422)
				        ? ((IData)(0x10U) 
					   << vlTOPp->v__DOT__r_size_reg_422)
				        : 0U);
	vlTOPp->v__DOT__sel_tmp2_reg_490 = (0U == vlTOPp->v__DOT__buff_load_3_reg_436);
	vlTOPp->v__DOT__tmp_10_reg_485 = VL_NEGATE_I(
						     ((0x1fU 
						       >= vlTOPp->v__DOT__r_size_reg_422)
						       ? 
						      ((IData)(0x10U) 
						       << vlTOPp->v__DOT__r_size_reg_422)
						       : 0U));
	vlTOPp->v__DOT__tmp_3_reg_464 = VL_LTS_III(1,32,32, 0U, vlTOPp->v__DOT__buff_load_3_reg_436);
	vlTOPp->v__DOT__vec_1_reg_471 = ((IData)(1U) 
					 + (vlTOPp->v__DOT__vec_reg_429 
					    + (vlTOPp->buff_q0 
					       + ((0x1fU 
						   >= vlTOPp->v__DOT__r_size_reg_422)
						   ? 
						  (vlTOPp->v__DOT__tmp_4_reg_443 
						   << vlTOPp->v__DOT__r_size_reg_422)
						   : 0U))));
	vlTOPp->v__DOT__vec_4_reg_478 = ((((IData)(0xffffffffU) 
					   + vlTOPp->v__DOT__vec_reg_429) 
					  - ((0x1fU 
					      >= vlTOPp->v__DOT__r_size_reg_422)
					      ? ((~ vlTOPp->v__DOT__buff_load_3_reg_436) 
						 << vlTOPp->v__DOT__r_size_reg_422)
					      : 0U)) 
					 - vlTOPp->buff_q0);
    }
    vlTOPp->v__DOT__tmp_9_fu_280_p2 = VL_LTS_III(1,32,32, vlTOPp->v__DOT__vec_1_reg_471, vlTOPp->v__DOT__lim_reg_458);
    // ALWAYS at decode_motion_vector.v:170
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__buff_load_3_reg_436 = vlTOPp->buff_q1;
	vlTOPp->v__DOT__r_size_reg_422 = ((IData)(vlTOPp->v__DOT__tmp_2_reg_396)
					   ? VL_NEGATE_I(
							 (0x1fU 
							  & VL_NEGATE_I((IData)(vlTOPp->v__DOT__tmp_13_reg_406))))
					   : (IData)(vlTOPp->v__DOT__tmp_6_reg_401));
	vlTOPp->v__DOT__tmp_17_reg_453 = (1U & (vlTOPp->buff_q1 
						>> 0x1fU));
	vlTOPp->v__DOT__tmp_4_reg_443 = ((IData)(0xffffffffU) 
					 + vlTOPp->buff_q1);
	vlTOPp->v__DOT__vec_reg_429 = ((IData)(vlTOPp->v__DOT__tmp_reg_411)
				        ? vlTOPp->buff_q0
				        : VL_EXTENDS_II(32,31, 
							(0x7fffffffU 
							 & (vlTOPp->buff_q0 
							    >> 1U))));
    }
    vlTOPp->v__DOT__vec_3_fu_355_p3 = ((IData)(vlTOPp->v__DOT__sel_tmp2_reg_490)
				        ? vlTOPp->v__DOT__vec_reg_429
				        : ((IData)(vlTOPp->v__DOT__sel_tmp7_reg_500)
					    ? vlTOPp->v__DOT__vec_1_reg_471
					    : vlTOPp->v__DOT__vec_7_reg_495));
    // ALWAYS at decode_motion_vector.v:198
    if ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__tmp_13_reg_406 = (0x1fU & vlTOPp->buff_q0);
	vlTOPp->v__DOT__tmp_2_reg_396 = (1U & (vlTOPp->buff_q0 
					       >> 0x1fU));
	vlTOPp->v__DOT__tmp_6_reg_401 = (0x1fU & vlTOPp->buff_q0);
	vlTOPp->v__DOT__tmp_reg_411 = (0U == vlTOPp->buff_q1);
    }
    // ALWAYS at decode_motion_vector.v:162
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

void Vdecode_motion_vector::_settle__TOP__4(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_settle__TOP__4\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp_9_fu_280_p2 = VL_LTS_III(1,32,32, vlTOPp->v__DOT__vec_1_reg_471, vlTOPp->v__DOT__lim_reg_458);
    vlTOPp->v__DOT__vec_3_fu_355_p3 = ((IData)(vlTOPp->v__DOT__sel_tmp2_reg_490)
				        ? vlTOPp->v__DOT__vec_reg_429
				        : ((IData)(vlTOPp->v__DOT__sel_tmp7_reg_500)
					    ? vlTOPp->v__DOT__vec_1_reg_471
					    : vlTOPp->v__DOT__vec_7_reg_495));
    vlTOPp->y = ((IData)(vlTOPp->v__DOT__tmp_reg_411)
		  ? vlTOPp->v__DOT__vec_3_fu_355_p3
		  : (vlTOPp->v__DOT__vec_3_fu_355_p3 
		     << 1U));
}

void Vdecode_motion_vector::_initial__TOP__5(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_initial__TOP__5\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at decode_motion_vector.v:86
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

VL_INLINE_OPT void Vdecode_motion_vector::_sequent__TOP__6(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_sequent__TOP__6\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->y = ((IData)(vlTOPp->v__DOT__tmp_reg_411)
		  ? vlTOPp->v__DOT__vec_3_fu_355_p3
		  : (vlTOPp->v__DOT__vec_3_fu_355_p3 
		     << 1U));
    // ALWAYS at decode_motion_vector.v:207
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 5U));
    // ALWAYS at decode_motion_vector.v:223
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 5U));
    // ALWAYS at decode_motion_vector.v:279
    vlTOPp->buff_address0 = ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			      ? 3U : ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? 0U : ((1U 
						& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					        ? 1U
					        : 0U)));
    // ALWAYS at decode_motion_vector.v:291
    vlTOPp->buff_address1 = ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			      ? 2U : ((1U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? 4U : 0U));
    // ALWAYS at decode_motion_vector.v:317
    vlTOPp->y_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 5U));
}

void Vdecode_motion_vector::_settle__TOP__7(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_settle__TOP__7\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at decode_motion_vector.v:207
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 5U));
    // ALWAYS at decode_motion_vector.v:223
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 5U));
    // ALWAYS at decode_motion_vector.v:279
    vlTOPp->buff_address0 = ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			      ? 3U : ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? 0U : ((1U 
						& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					        ? 1U
					        : 0U)));
    // ALWAYS at decode_motion_vector.v:291
    vlTOPp->buff_address1 = ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			      ? 2U : ((1U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				       ? 4U : 0U));
    // ALWAYS at decode_motion_vector.v:317
    vlTOPp->y_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 5U));
    // ALWAYS at decode_motion_vector.v:215
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at decode_motion_vector.v:301
    vlTOPp->buff_ce0 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				& (IData)(vlTOPp->ap_start)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					     >> 2U)));
    // ALWAYS at decode_motion_vector.v:309
    vlTOPp->buff_ce1 = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       & (IData)(vlTOPp->ap_start)) 
			      | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 1U)));
    // ALWAYS at decode_motion_vector.v:324
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 6U) | (IData)(vlTOPp->v__DOT__ap_CS_fsm));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vdecode_motion_vector::_combo__TOP__8(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_combo__TOP__8\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at decode_motion_vector.v:215
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at decode_motion_vector.v:301
    vlTOPp->buff_ce0 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				& (IData)(vlTOPp->ap_start)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					     >> 2U)));
    // ALWAYS at decode_motion_vector.v:309
    vlTOPp->buff_ce1 = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       & (IData)(vlTOPp->ap_start)) 
			      | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 1U)));
    // ALWAYS at decode_motion_vector.v:324
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 6U) | (IData)(vlTOPp->v__DOT__ap_CS_fsm));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

void Vdecode_motion_vector::_eval(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_eval\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vdecode_motion_vector::_eval_initial(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_eval_initial\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void Vdecode_motion_vector::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::final\n"); );
    // Variables
    Vdecode_motion_vector__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdecode_motion_vector::_eval_settle(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_eval_settle\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
}

VL_INLINE_OPT QData Vdecode_motion_vector::_change_request(Vdecode_motion_vector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode_motion_vector::_change_request\n"); );
    Vdecode_motion_vector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
