// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitcount.h for the primary calling header

#include "Vbitcount.h"         // For This
#include "Vbitcount__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vbitcount) {
    Vbitcount__Syms* __restrict vlSymsp = __VlSymsp = new Vbitcount__Syms(this, name());
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    v__DOT__tmp_65_reg_1004 = VL_RAND_RESET_I(5);
    v__DOT__tmp_66_reg_1009 = VL_RAND_RESET_I(8);
    v__DOT__tmp_67_reg_1014 = VL_RAND_RESET_I(8);
    v__DOT__tmp_68_reg_1019 = VL_RAND_RESET_I(8);
    v__DOT__i_1_fu_535_p2 = VL_RAND_RESET_I(32);
    v__DOT__i_2_fu_771_p2 = VL_RAND_RESET_I(31);
    v__DOT__i_3_fu_895_p2 = VL_RAND_RESET_I(29);
    v__DOT__i_4_fu_959_p2 = VL_RAND_RESET_I(25);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(2);
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vbitcount::__Vconfigure(Vbitcount__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbitcount::~Vbitcount() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vbitcount::eval() {
    Vbitcount__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vbitcount::eval\n"); );
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

void Vbitcount::_eval_initial_loop(Vbitcount__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vbitcount::_combo__TOP__1(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_combo__TOP__1\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->mm + vlTOPp->nn);
    vlTOPp->v__DOT__i_1_fu_535_p2 = (((0x40000000U 
				       & ((IData)((vlTOPp->in_r 
						   >> 0x1eU)) 
					  << 0x1eU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->in_r 
						      >> 0x1cU)) 
					     << 0x1cU)) 
					 | ((0x4000000U 
					     & ((IData)(
							(vlTOPp->in_r 
							 >> 0x1aU)) 
						<< 0x1aU)) 
					    | ((0x1000000U 
						& ((IData)(
							   (vlTOPp->in_r 
							    >> 0x18U)) 
						   << 0x18U)) 
					       | ((0x400000U 
						   & ((IData)(
							      (vlTOPp->in_r 
							       >> 0x16U)) 
						      << 0x16U)) 
						  | ((0x100000U 
						      & ((IData)(
								 (vlTOPp->in_r 
								  >> 0x14U)) 
							 << 0x14U)) 
						     | ((0x40000U 
							 & ((IData)(
								    (vlTOPp->in_r 
								     >> 0x12U)) 
							    << 0x12U)) 
							| ((0x10000U 
							    & ((IData)(
								       (vlTOPp->in_r 
									>> 0x10U)) 
							       << 0x10U)) 
							   | ((0x4000U 
							       & ((IData)(
									  (vlTOPp->in_r 
									   >> 0xeU)) 
								  << 0xeU)) 
							      | ((0x1000U 
								  & ((IData)(
									     (vlTOPp->in_r 
									      >> 0xcU)) 
								     << 0xcU)) 
								 | ((0x400U 
								     & ((IData)(
										(vlTOPp->in_r 
										>> 0xaU)) 
									<< 0xaU)) 
								    | ((0x100U 
									& ((IData)(
										(vlTOPp->in_r 
										>> 8U)) 
									   << 8U)) 
								       | ((0x40U 
									   & ((IData)(
										(vlTOPp->in_r 
										>> 6U)) 
									      << 6U)) 
									  | ((0x10U 
									      & ((IData)(
										(vlTOPp->in_r 
										>> 4U)) 
										<< 4U)) 
									     | ((4U 
										& ((IData)(
										(vlTOPp->in_r 
										>> 2U)) 
										<< 2U)) 
										| (1U 
										& (IData)(vlTOPp->in_r))))))))))))))))) 
				     + ((0x40000000U 
					 & ((IData)(
						    (vlTOPp->in_r 
						     >> 0x1fU)) 
					    << 0x1eU)) 
					| ((0x10000000U 
					    & ((IData)(
						       (vlTOPp->in_r 
							>> 0x1dU)) 
					       << 0x1cU)) 
					   | ((0x4000000U 
					       & ((IData)(
							  (vlTOPp->in_r 
							   >> 0x1bU)) 
						  << 0x1aU)) 
					      | ((0x1000000U 
						  & ((IData)(
							     (vlTOPp->in_r 
							      >> 0x19U)) 
						     << 0x18U)) 
						 | ((0x400000U 
						     & ((IData)(
								(vlTOPp->in_r 
								 >> 0x17U)) 
							<< 0x16U)) 
						    | ((0x100000U 
							& ((IData)(
								   (vlTOPp->in_r 
								    >> 0x15U)) 
							   << 0x14U)) 
						       | ((0x40000U 
							   & ((IData)(
								      (vlTOPp->in_r 
								       >> 0x13U)) 
							      << 0x12U)) 
							  | ((0x10000U 
							      & ((IData)(
									 (vlTOPp->in_r 
									  >> 0x11U)) 
								 << 0x10U)) 
							     | ((0x4000U 
								 & ((IData)(
									    (vlTOPp->in_r 
									     >> 0xfU)) 
								    << 0xeU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->in_r 
										>> 0xdU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((IData)(
										(vlTOPp->in_r 
										>> 0xbU)) 
									  << 0xaU)) 
								      | ((0x100U 
									  & ((IData)(
										(vlTOPp->in_r 
										>> 9U)) 
									     << 8U)) 
									 | ((0x40U 
									     & ((IData)(
										(vlTOPp->in_r 
										>> 7U)) 
										<< 6U)) 
									    | ((0x10U 
										& ((IData)(
										(vlTOPp->in_r 
										>> 5U)) 
										<< 4U)) 
									       | ((4U 
										& ((IData)(
										(vlTOPp->in_r 
										>> 3U)) 
										<< 2U)) 
										| (1U 
										& (IData)(
										(vlTOPp->in_r 
										>> 1U)))))))))))))))))));
}

void Vbitcount::_settle__TOP__2(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_settle__TOP__2\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->mm + vlTOPp->nn);
    vlTOPp->v__DOT__i_1_fu_535_p2 = (((0x40000000U 
				       & ((IData)((vlTOPp->in_r 
						   >> 0x1eU)) 
					  << 0x1eU)) 
				      | ((0x10000000U 
					  & ((IData)(
						     (vlTOPp->in_r 
						      >> 0x1cU)) 
					     << 0x1cU)) 
					 | ((0x4000000U 
					     & ((IData)(
							(vlTOPp->in_r 
							 >> 0x1aU)) 
						<< 0x1aU)) 
					    | ((0x1000000U 
						& ((IData)(
							   (vlTOPp->in_r 
							    >> 0x18U)) 
						   << 0x18U)) 
					       | ((0x400000U 
						   & ((IData)(
							      (vlTOPp->in_r 
							       >> 0x16U)) 
						      << 0x16U)) 
						  | ((0x100000U 
						      & ((IData)(
								 (vlTOPp->in_r 
								  >> 0x14U)) 
							 << 0x14U)) 
						     | ((0x40000U 
							 & ((IData)(
								    (vlTOPp->in_r 
								     >> 0x12U)) 
							    << 0x12U)) 
							| ((0x10000U 
							    & ((IData)(
								       (vlTOPp->in_r 
									>> 0x10U)) 
							       << 0x10U)) 
							   | ((0x4000U 
							       & ((IData)(
									  (vlTOPp->in_r 
									   >> 0xeU)) 
								  << 0xeU)) 
							      | ((0x1000U 
								  & ((IData)(
									     (vlTOPp->in_r 
									      >> 0xcU)) 
								     << 0xcU)) 
								 | ((0x400U 
								     & ((IData)(
										(vlTOPp->in_r 
										>> 0xaU)) 
									<< 0xaU)) 
								    | ((0x100U 
									& ((IData)(
										(vlTOPp->in_r 
										>> 8U)) 
									   << 8U)) 
								       | ((0x40U 
									   & ((IData)(
										(vlTOPp->in_r 
										>> 6U)) 
									      << 6U)) 
									  | ((0x10U 
									      & ((IData)(
										(vlTOPp->in_r 
										>> 4U)) 
										<< 4U)) 
									     | ((4U 
										& ((IData)(
										(vlTOPp->in_r 
										>> 2U)) 
										<< 2U)) 
										| (1U 
										& (IData)(vlTOPp->in_r))))))))))))))))) 
				     + ((0x40000000U 
					 & ((IData)(
						    (vlTOPp->in_r 
						     >> 0x1fU)) 
					    << 0x1eU)) 
					| ((0x10000000U 
					    & ((IData)(
						       (vlTOPp->in_r 
							>> 0x1dU)) 
					       << 0x1cU)) 
					   | ((0x4000000U 
					       & ((IData)(
							  (vlTOPp->in_r 
							   >> 0x1bU)) 
						  << 0x1aU)) 
					      | ((0x1000000U 
						  & ((IData)(
							     (vlTOPp->in_r 
							      >> 0x19U)) 
						     << 0x18U)) 
						 | ((0x400000U 
						     & ((IData)(
								(vlTOPp->in_r 
								 >> 0x17U)) 
							<< 0x16U)) 
						    | ((0x100000U 
							& ((IData)(
								   (vlTOPp->in_r 
								    >> 0x15U)) 
							   << 0x14U)) 
						       | ((0x40000U 
							   & ((IData)(
								      (vlTOPp->in_r 
								       >> 0x13U)) 
							      << 0x12U)) 
							  | ((0x10000U 
							      & ((IData)(
									 (vlTOPp->in_r 
									  >> 0x11U)) 
								 << 0x10U)) 
							     | ((0x4000U 
								 & ((IData)(
									    (vlTOPp->in_r 
									     >> 0xfU)) 
								    << 0xeU)) 
								| ((0x1000U 
								    & ((IData)(
									       (vlTOPp->in_r 
										>> 0xdU)) 
								       << 0xcU)) 
								   | ((0x400U 
								       & ((IData)(
										(vlTOPp->in_r 
										>> 0xbU)) 
									  << 0xaU)) 
								      | ((0x100U 
									  & ((IData)(
										(vlTOPp->in_r 
										>> 9U)) 
									     << 8U)) 
									 | ((0x40U 
									     & ((IData)(
										(vlTOPp->in_r 
										>> 7U)) 
										<< 6U)) 
									    | ((0x10U 
										& ((IData)(
										(vlTOPp->in_r 
										>> 5U)) 
										<< 4U)) 
									       | ((4U 
										& ((IData)(
										(vlTOPp->in_r 
										>> 3U)) 
										<< 2U)) 
										| (1U 
										& (IData)(
										(vlTOPp->in_r 
										>> 1U)))))))))))))))))));
    vlTOPp->v__DOT__i_2_fu_771_p2 = (0x7fffffffU & 
				     ((0x33333333U 
				       & vlTOPp->v__DOT__i_1_fu_535_p2) 
				      + ((0x30000000U 
					  & (vlTOPp->v__DOT__i_1_fu_535_p2 
					     >> 2U)) 
					 | ((0x3000000U 
					     & (vlTOPp->v__DOT__i_1_fu_535_p2 
						>> 2U)) 
					    | ((0x300000U 
						& (vlTOPp->v__DOT__i_1_fu_535_p2 
						   >> 2U)) 
					       | ((0x30000U 
						   & (vlTOPp->v__DOT__i_1_fu_535_p2 
						      >> 2U)) 
						  | ((0x3000U 
						      & (vlTOPp->v__DOT__i_1_fu_535_p2 
							 >> 2U)) 
						     | ((0x300U 
							 & (vlTOPp->v__DOT__i_1_fu_535_p2 
							    >> 2U)) 
							| ((0x30U 
							    & (vlTOPp->v__DOT__i_1_fu_535_p2 
							       >> 2U)) 
							   | (3U 
							      & (vlTOPp->v__DOT__i_1_fu_535_p2 
								 >> 2U)))))))))));
}

VL_INLINE_OPT void Vbitcount::_sequent__TOP__3(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_sequent__TOP__3\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bitcount.v:191
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__tmp_65_reg_1004 = (0x1fU & 
					   (vlTOPp->v__DOT__i_3_fu_895_p2 
					    >> 0x18U));
	vlTOPp->v__DOT__tmp_66_reg_1009 = (0xffU & 
					   (vlTOPp->v__DOT__i_3_fu_895_p2 
					    >> 8U));
	vlTOPp->v__DOT__tmp_67_reg_1014 = (0xffU & 
					   (vlTOPp->v__DOT__i_3_fu_895_p2 
					    >> 0x10U));
	vlTOPp->v__DOT__tmp_68_reg_1019 = (0xffU & vlTOPp->v__DOT__i_3_fu_895_p2);
    }
    vlTOPp->v__DOT__i_4_fu_959_p2 = (0x1ffffffU & (
						   (((IData)(vlTOPp->v__DOT__tmp_67_reg_1014) 
						     << 0x10U) 
						    | (IData)(vlTOPp->v__DOT__tmp_68_reg_1019)) 
						   + 
						   (((IData)(vlTOPp->v__DOT__tmp_65_reg_1004) 
						     << 0x10U) 
						    | (IData)(vlTOPp->v__DOT__tmp_66_reg_1009))));
    // ALWAYS at bitcount.v:183
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void Vbitcount::_combo__TOP__4(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_combo__TOP__4\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__i_2_fu_771_p2 = (0x7fffffffU & 
				     ((0x33333333U 
				       & vlTOPp->v__DOT__i_1_fu_535_p2) 
				      + ((0x30000000U 
					  & (vlTOPp->v__DOT__i_1_fu_535_p2 
					     >> 2U)) 
					 | ((0x3000000U 
					     & (vlTOPp->v__DOT__i_1_fu_535_p2 
						>> 2U)) 
					    | ((0x300000U 
						& (vlTOPp->v__DOT__i_1_fu_535_p2 
						   >> 2U)) 
					       | ((0x30000U 
						   & (vlTOPp->v__DOT__i_1_fu_535_p2 
						      >> 2U)) 
						  | ((0x3000U 
						      & (vlTOPp->v__DOT__i_1_fu_535_p2 
							 >> 2U)) 
						     | ((0x300U 
							 & (vlTOPp->v__DOT__i_1_fu_535_p2 
							    >> 2U)) 
							| ((0x30U 
							    & (vlTOPp->v__DOT__i_1_fu_535_p2 
							       >> 2U)) 
							   | (3U 
							      & (vlTOPp->v__DOT__i_1_fu_535_p2 
								 >> 2U)))))))))));
    vlTOPp->v__DOT__i_3_fu_895_p2 = (0x1fffffffU & 
				     ((0xf0f0f0fU & vlTOPp->v__DOT__i_2_fu_771_p2) 
				      + ((0x7000000U 
					  & (vlTOPp->v__DOT__i_2_fu_771_p2 
					     >> 4U)) 
					 | ((0xf0000U 
					     & (vlTOPp->v__DOT__i_2_fu_771_p2 
						>> 4U)) 
					    | ((0xf00U 
						& (vlTOPp->v__DOT__i_2_fu_771_p2 
						   >> 4U)) 
					       | (0xfU 
						  & (vlTOPp->v__DOT__i_2_fu_771_p2 
						     >> 4U)))))));
}

void Vbitcount::_initial__TOP__5(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_initial__TOP__5\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bitcount.v:87
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

void Vbitcount::_settle__TOP__6(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_settle__TOP__6\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__i_4_fu_959_p2 = (0x1ffffffU & (
						   (((IData)(vlTOPp->v__DOT__tmp_67_reg_1014) 
						     << 0x10U) 
						    | (IData)(vlTOPp->v__DOT__tmp_68_reg_1019)) 
						   + 
						   (((IData)(vlTOPp->v__DOT__tmp_65_reg_1004) 
						     << 0x10U) 
						    | (IData)(vlTOPp->v__DOT__tmp_66_reg_1009))));
    vlTOPp->v__DOT__i_3_fu_895_p2 = (0x1fffffffU & 
				     ((0xf0f0f0fU & vlTOPp->v__DOT__i_2_fu_771_p2) 
				      + ((0x7000000U 
					  & (vlTOPp->v__DOT__i_2_fu_771_p2 
					     >> 4U)) 
					 | ((0xf0000U 
					     & (vlTOPp->v__DOT__i_2_fu_771_p2 
						>> 4U)) 
					    | ((0xf00U 
						& (vlTOPp->v__DOT__i_2_fu_771_p2 
						   >> 4U)) 
					       | (0xfU 
						  & (vlTOPp->v__DOT__i_2_fu_771_p2 
						     >> 4U)))))));
    // ALWAYS at bitcount.v:200
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 1U));
    // ALWAYS at bitcount.v:216
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 1U));
    // ALWAYS at bitcount.v:240
    vlTOPp->out_r_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U));
    // ALWAYS at bitcount.v:208
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bitcount.v:247
    vlTOPp->v__DOT__ap_NS_fsm = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((IData)(vlTOPp->ap_start)
				      ? 2U : 1U) : 
				 ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? 1U : 0U));
    vlTOPp->out_r = (0x1ffffU & ((0xffffU & vlTOPp->v__DOT__i_4_fu_959_p2) 
				 + (0x1ffU & (vlTOPp->v__DOT__i_4_fu_959_p2 
					      >> 0x10U))));
}

VL_INLINE_OPT void Vbitcount::_sequent__TOP__7(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_sequent__TOP__7\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bitcount.v:200
    vlTOPp->ap_done = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			     >> 1U));
    // ALWAYS at bitcount.v:216
    vlTOPp->ap_ready = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 1U));
    // ALWAYS at bitcount.v:240
    vlTOPp->out_r_ap_vld = (1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 1U));
    vlTOPp->out_r = (0x1ffffU & ((0xffffU & vlTOPp->v__DOT__i_4_fu_959_p2) 
				 + (0x1ffU & (vlTOPp->v__DOT__i_4_fu_959_p2 
					      >> 0x10U))));
}

VL_INLINE_OPT void Vbitcount::_combo__TOP__8(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_combo__TOP__8\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bitcount.v:208
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bitcount.v:247
    vlTOPp->v__DOT__ap_NS_fsm = ((1U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((IData)(vlTOPp->ap_start)
				      ? 2U : 1U) : 
				 ((2U == (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? 1U : 0U));
}

void Vbitcount::_eval(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_eval\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vbitcount::_eval_initial(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_eval_initial\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void Vbitcount::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::final\n"); );
    // Variables
    Vbitcount__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbitcount::_eval_settle(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_eval_settle\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData Vbitcount::_change_request(Vbitcount__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcount::_change_request\n"); );
    Vbitcount* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
