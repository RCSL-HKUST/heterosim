// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitcnt.h for the primary calling header

#include "Vbitcnt.h"           // For This
#include "Vbitcnt__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vbitcnt) {
    Vbitcnt__Syms* __restrict vlSymsp = __VlSymsp = new Vbitcnt__Syms(this, name());
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    out_r_address0 = VL_RAND_RESET_I(3);
    out_r_ce0 = VL_RAND_RESET_I(1);
    out_r_we0 = VL_RAND_RESET_I(1);
    out_r_d0 = VL_RAND_RESET_I(32);
    out_r_address1 = VL_RAND_RESET_I(3);
    out_r_ce1 = VL_RAND_RESET_I(1);
    out_r_we1 = VL_RAND_RESET_I(1);
    out_r_d1 = VL_RAND_RESET_I(32);
    nn = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(7);
    v__DOT__bits_q0 = VL_RAND_RESET_I(4);
    v__DOT__bits_q1 = VL_RAND_RESET_I(4);
    v__DOT__bits_q2 = VL_RAND_RESET_I(4);
    v__DOT__bits_q3 = VL_RAND_RESET_I(4);
    v__DOT__bits_q4 = VL_RAND_RESET_I(4);
    v__DOT__bits_q5 = VL_RAND_RESET_I(4);
    v__DOT__bits_q6 = VL_RAND_RESET_I(4);
    v__DOT__bits_q7 = VL_RAND_RESET_I(4);
    v__DOT__out_addr_5_reg_1691 = VL_RAND_RESET_I(3);
    v__DOT__tmp_i_reg_1696 = VL_RAND_RESET_I(1);
    v__DOT__x_1_fu_426_p2 = VL_RAND_RESET_Q(64);
    v__DOT__x_1_reg_1700 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_59_i_reg_1705 = VL_RAND_RESET_I(1);
    v__DOT__n_fu_438_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp_56_reg_1755 = VL_RAND_RESET_I(5);
    v__DOT__tmp_57_reg_1760 = VL_RAND_RESET_I(8);
    v__DOT__tmp_58_reg_1765 = VL_RAND_RESET_I(8);
    v__DOT__tmp_59_reg_1770 = VL_RAND_RESET_I(8);
    v__DOT__out_write_assign_1_reg_1775 = VL_RAND_RESET_I(7);
    v__DOT__out_addr_4_reg_1800 = VL_RAND_RESET_I(3);
    v__DOT__i_fu_1593_p2 = VL_RAND_RESET_I(7);
    v__DOT__n_1_fu_1607_p2 = VL_RAND_RESET_I(32);
    v__DOT__demorgan_fu_1587_p2 = VL_RAND_RESET_I(1);
    v__DOT__x_2_fu_1623_p1 = VL_RAND_RESET_Q(64);
    v__DOT__x3_i_reg_350 = VL_RAND_RESET_Q(64);
    v__DOT__n_i_reg_359 = VL_RAND_RESET_I(32);
    v__DOT__n_1_i_reg_370 = VL_RAND_RESET_I(32);
    v__DOT__x1_i_reg_382 = VL_RAND_RESET_Q(64);
    v__DOT__i_i_reg_391 = VL_RAND_RESET_I(7);
    v__DOT__out_write_assign_4_reg_402 = VL_RAND_RESET_I(32);
    v__DOT__i_1_fu_910_p2 = VL_RAND_RESET_I(32);
    v__DOT__i_2_fu_1146_p2 = VL_RAND_RESET_I(31);
    v__DOT__i_3_fu_1270_p2 = VL_RAND_RESET_I(29);
    v__DOT__i_4_fu_1432_p2 = VL_RAND_RESET_I(25);
    v__DOT__Accu_fu_1561_p2 = VL_RAND_RESET_I(6);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram0[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram1[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram2[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram3[__Vi0] = VL_RAND_RESET_I(4);
    }}
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vbitcnt::__Vconfigure(Vbitcnt__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vbitcnt::~Vbitcnt() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vbitcnt::eval() {
    Vbitcnt__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vbitcnt::eval\n"); );
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

void Vbitcnt::_eval_initial_loop(Vbitcnt__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vbitcnt::_combo__TOP__1(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_combo__TOP__1\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->nn + vlTOPp->mm);
    vlTOPp->v__DOT__i_1_fu_910_p2 = (((0x40000000U 
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

void Vbitcnt::_settle__TOP__2(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_settle__TOP__2\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->nn + vlTOPp->mm);
    vlTOPp->v__DOT__i_1_fu_910_p2 = (((0x40000000U 
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
    vlTOPp->v__DOT__i_2_fu_1146_p2 = (0x7fffffffU & 
				      ((0x33333333U 
					& vlTOPp->v__DOT__i_1_fu_910_p2) 
				       + ((0x30000000U 
					   & (vlTOPp->v__DOT__i_1_fu_910_p2 
					      >> 2U)) 
					  | ((0x3000000U 
					      & (vlTOPp->v__DOT__i_1_fu_910_p2 
						 >> 2U)) 
					     | ((0x300000U 
						 & (vlTOPp->v__DOT__i_1_fu_910_p2 
						    >> 2U)) 
						| ((0x30000U 
						    & (vlTOPp->v__DOT__i_1_fu_910_p2 
						       >> 2U)) 
						   | ((0x3000U 
						       & (vlTOPp->v__DOT__i_1_fu_910_p2 
							  >> 2U)) 
						      | ((0x300U 
							  & (vlTOPp->v__DOT__i_1_fu_910_p2 
							     >> 2U)) 
							 | ((0x30U 
							     & (vlTOPp->v__DOT__i_1_fu_910_p2 
								>> 2U)) 
							    | (3U 
							       & (vlTOPp->v__DOT__i_1_fu_910_p2 
								  >> 2U)))))))))));
}

VL_INLINE_OPT void Vbitcnt::_sequent__TOP__3(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_sequent__TOP__3\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bitcnt.v:1118
    vlTOPp->v__DOT__out_addr_5_reg_1691 = 0U;
    // ALWAYS at bitcnt.v:1119
    vlTOPp->v__DOT__out_addr_4_reg_1800 = 5U;
    // ALWAYS at bitcnt.v:401
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 6U) & (~ (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2))))) {
	vlTOPp->v__DOT__out_write_assign_4_reg_402 
	    = vlTOPp->v__DOT__n_1_fu_1607_p2;
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__out_write_assign_4_reg_402 = 0U;
	}
    }
    // ALWAYS at bitcnt.v:377
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 6U) & (~ (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2))))) {
	vlTOPp->v__DOT__i_i_reg_391 = vlTOPp->v__DOT__i_fu_1593_p2;
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__i_i_reg_391 = 0U;
	}
    }
    // ALWAYS at bitcnt.v:409
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 6U) & (~ (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2))))) {
	vlTOPp->v__DOT__x1_i_reg_382 = vlTOPp->v__DOT__x_2_fu_1623_p1;
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__x1_i_reg_382 = vlTOPp->in_r;
	}
    }
    // ALWAYS at bitcnt.v:417
    if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start)) 
	 & (VL_ULL(0) != vlTOPp->in_r))) {
	vlTOPp->v__DOT__x3_i_reg_350 = vlTOPp->in_r;
    } else {
	if ((1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		     >> 2U) & (~ (IData)(vlTOPp->v__DOT__tmp_i_reg_1696))) 
		   & (~ (IData)(vlTOPp->v__DOT__tmp_59_i_reg_1705))))) {
	    vlTOPp->v__DOT__x3_i_reg_350 = vlTOPp->v__DOT__x_1_reg_1700;
	}
    }
    // ALWAYS at bitcnt.v:385
    if (((((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 2U) 
	  & (~ (IData)(vlTOPp->v__DOT__tmp_i_reg_1696))) 
	 & (IData)(vlTOPp->v__DOT__tmp_59_i_reg_1705))) {
	vlTOPp->v__DOT__n_1_i_reg_370 = ((IData)(1U) 
					 + vlTOPp->v__DOT__n_i_reg_359);
    } else {
	if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start)) 
	     & (VL_ULL(0) == vlTOPp->in_r))) {
	    vlTOPp->v__DOT__n_1_i_reg_370 = 0U;
	}
    }
    // ALWAYS at bitcnt.v:425
    if ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__out_write_assign_1_reg_1775 
	    = (0x7fU & ((0x3fU & ((0x1fU & ((IData)(vlTOPp->v__DOT__bits_q1) 
					    + (IData)(vlTOPp->v__DOT__bits_q0))) 
				  + (0x1fU & ((IData)(vlTOPp->v__DOT__bits_q3) 
					      + (IData)(vlTOPp->v__DOT__bits_q2))))) 
			+ (0x3fU & ((0x1fU & ((IData)(vlTOPp->v__DOT__bits_q5) 
					      + (IData)(vlTOPp->v__DOT__bits_q4))) 
				    + (0x1fU & ((IData)(vlTOPp->v__DOT__bits_q7) 
						+ (IData)(vlTOPp->v__DOT__bits_q6)))))));
	vlTOPp->v__DOT__tmp_56_reg_1755 = (0x1fU & 
					   (vlTOPp->v__DOT__i_3_fu_1270_p2 
					    >> 0x18U));
	vlTOPp->v__DOT__tmp_57_reg_1760 = (0xffU & 
					   (vlTOPp->v__DOT__i_3_fu_1270_p2 
					    >> 8U));
	vlTOPp->v__DOT__tmp_58_reg_1765 = (0xffU & 
					   (vlTOPp->v__DOT__i_3_fu_1270_p2 
					    >> 0x10U));
	vlTOPp->v__DOT__tmp_59_reg_1770 = (0xffU & vlTOPp->v__DOT__i_3_fu_1270_p2);
    }
    vlTOPp->v__DOT__i_fu_1593_p2 = (0x7fU & ((IData)(1U) 
					     + (IData)(vlTOPp->v__DOT__i_i_reg_391)));
    vlTOPp->v__DOT__x_2_fu_1623_p1 = VL_EXTENDS_QQ(64,63, 
						   (VL_ULL(0x7fffffffffffffff) 
						    & (vlTOPp->v__DOT__x1_i_reg_382 
						       >> 1U)));
    vlTOPp->v__DOT__n_1_fu_1607_p2 = (vlTOPp->v__DOT__out_write_assign_4_reg_402 
				      + (1U & (IData)(vlTOPp->v__DOT__x1_i_reg_382)));
    vlTOPp->v__DOT__demorgan_fu_1587_p2 = (1U & (((IData)(vlTOPp->v__DOT__i_i_reg_391) 
						  >> 6U) 
						 | (VL_ULL(0) 
						    == vlTOPp->v__DOT__x1_i_reg_382)));
    // ALWAYS at bitcnt.v:393
    if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start)) 
	 & (VL_ULL(0) != vlTOPp->in_r))) {
	vlTOPp->v__DOT__n_i_reg_359 = 0U;
    } else {
	if ((1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		     >> 2U) & (~ (IData)(vlTOPp->v__DOT__tmp_i_reg_1696))) 
		   & (~ (IData)(vlTOPp->v__DOT__tmp_59_i_reg_1705))))) {
	    vlTOPp->v__DOT__n_i_reg_359 = vlTOPp->v__DOT__n_fu_438_p2;
	}
    }
    vlTOPp->v__DOT__i_4_fu_1432_p2 = (0x1ffffffU & 
				      ((((IData)(vlTOPp->v__DOT__tmp_58_reg_1765) 
					 << 0x10U) 
					| (IData)(vlTOPp->v__DOT__tmp_59_reg_1770)) 
				       + (((IData)(vlTOPp->v__DOT__tmp_56_reg_1755) 
					   << 0x10U) 
					  | (IData)(vlTOPp->v__DOT__tmp_57_reg_1760))));
    // ALWAYS at bitcnt_bits.v:106
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__bits_q5 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram2
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x14U)))))))];
    }
    // ALWAYS at bitcnt_bits.v:96
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__bits_q4 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram2
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x10U)))))))];
    }
    // ALWAYS at bitcnt_bits.v:126
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__bits_q7 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram3
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x1cU)))))))];
    }
    // ALWAYS at bitcnt_bits.v:116
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__bits_q6 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram3
	    [(0xffU & (IData)((QData)((IData)((0xfU 
					       & (IData)(
							 (vlTOPp->in_r 
							  >> 0x18U)))))))];
    }
    // ALWAYS at bitcnt_bits.v:66
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 2U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			  >> 4U)))) {
	vlTOPp->v__DOT__bits_q1 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram0
	    [(0xffU & ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
		        ? (IData)((vlTOPp->in_r >> 8U))
		        : ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			    ? (IData)((QData)((IData)(
						      (0xfU 
						       & (IData)(
								 (vlTOPp->in_r 
								  >> 4U))))))
			    : 0U)))];
    }
    // ALWAYS at bitcnt_bits.v:56
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 2U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			  >> 4U)))) {
	vlTOPp->v__DOT__bits_q0 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram0
	    [(0xffU & ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
		        ? (IData)(vlTOPp->in_r) : (
						   (4U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? (IData)((QData)((IData)(
									      (0xfU 
									       & (IData)(vlTOPp->in_r)))))
						    : 0U)))];
    }
    // ALWAYS at bitcnt_bits.v:86
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 2U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			  >> 4U)))) {
	vlTOPp->v__DOT__bits_q3 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram1
	    [(0xffU & ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
		        ? (IData)((vlTOPp->in_r >> 0x10U))
		        : ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			    ? (IData)((QData)((IData)(
						      (0xfU 
						       & (IData)(
								 (vlTOPp->in_r 
								  >> 0xcU))))))
			    : 0U)))];
    }
    // ALWAYS at bitcnt_bits.v:76
    if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		>> 2U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			  >> 4U)))) {
	vlTOPp->v__DOT__bits_q2 = vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram1
	    [(0xffU & ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
		        ? (IData)((vlTOPp->in_r >> 0x18U))
		        : ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			    ? (IData)((QData)((IData)(
						      (0xfU 
						       & (IData)(
								 (vlTOPp->in_r 
								  >> 8U))))))
			    : 0U)))];
    }
    vlTOPp->v__DOT__n_fu_438_p2 = ((IData)(1U) + vlTOPp->v__DOT__n_i_reg_359);
    // ALWAYS at bitcnt.v:435
    if ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__tmp_59_i_reg_1705 = (VL_ULL(0) 
					     == vlTOPp->v__DOT__x_1_fu_426_p2);
	vlTOPp->v__DOT__x_1_reg_1700 = vlTOPp->v__DOT__x_1_fu_426_p2;
    }
    // ALWAYS at bitcnt.v:442
    if (((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->ap_start))) {
	vlTOPp->v__DOT__tmp_i_reg_1696 = (VL_ULL(0) 
					  == vlTOPp->in_r);
    }
    vlTOPp->v__DOT__Accu_fu_1561_p2 = (0x3fU & ((0x1fU 
						 & ((IData)(vlTOPp->v__DOT__bits_q1) 
						    + (IData)(vlTOPp->v__DOT__bits_q0))) 
						+ (0x1fU 
						   & ((IData)(vlTOPp->v__DOT__bits_q3) 
						      + (IData)(vlTOPp->v__DOT__bits_q2)))));
    vlTOPp->v__DOT__x_1_fu_426_p2 = ((VL_ULL(0xffffffffffffffff) 
				      + vlTOPp->v__DOT__x3_i_reg_350) 
				     & vlTOPp->v__DOT__x3_i_reg_350);
    // ALWAYS at bitcnt.v:369
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void Vbitcnt::_combo__TOP__4(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_combo__TOP__4\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__i_2_fu_1146_p2 = (0x7fffffffU & 
				      ((0x33333333U 
					& vlTOPp->v__DOT__i_1_fu_910_p2) 
				       + ((0x30000000U 
					   & (vlTOPp->v__DOT__i_1_fu_910_p2 
					      >> 2U)) 
					  | ((0x3000000U 
					      & (vlTOPp->v__DOT__i_1_fu_910_p2 
						 >> 2U)) 
					     | ((0x300000U 
						 & (vlTOPp->v__DOT__i_1_fu_910_p2 
						    >> 2U)) 
						| ((0x30000U 
						    & (vlTOPp->v__DOT__i_1_fu_910_p2 
						       >> 2U)) 
						   | ((0x3000U 
						       & (vlTOPp->v__DOT__i_1_fu_910_p2 
							  >> 2U)) 
						      | ((0x300U 
							  & (vlTOPp->v__DOT__i_1_fu_910_p2 
							     >> 2U)) 
							 | ((0x30U 
							     & (vlTOPp->v__DOT__i_1_fu_910_p2 
								>> 2U)) 
							    | (3U 
							       & (vlTOPp->v__DOT__i_1_fu_910_p2 
								  >> 2U)))))))))));
    vlTOPp->v__DOT__i_3_fu_1270_p2 = (0x1fffffffU & 
				      ((0xf0f0f0fU 
					& vlTOPp->v__DOT__i_2_fu_1146_p2) 
				       + ((0x7000000U 
					   & (vlTOPp->v__DOT__i_2_fu_1146_p2 
					      >> 4U)) 
					  | ((0xf0000U 
					      & (vlTOPp->v__DOT__i_2_fu_1146_p2 
						 >> 4U)) 
					     | ((0xf00U 
						 & (vlTOPp->v__DOT__i_2_fu_1146_p2 
						    >> 4U)) 
						| (0xfU 
						   & (vlTOPp->v__DOT__i_2_fu_1146_p2 
						      >> 4U)))))));
}

void Vbitcnt::_settle__TOP__5(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_settle__TOP__5\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__i_fu_1593_p2 = (0x7fU & ((IData)(1U) 
					     + (IData)(vlTOPp->v__DOT__i_i_reg_391)));
    vlTOPp->v__DOT__x_2_fu_1623_p1 = VL_EXTENDS_QQ(64,63, 
						   (VL_ULL(0x7fffffffffffffff) 
						    & (vlTOPp->v__DOT__x1_i_reg_382 
						       >> 1U)));
    vlTOPp->v__DOT__n_1_fu_1607_p2 = (vlTOPp->v__DOT__out_write_assign_4_reg_402 
				      + (1U & (IData)(vlTOPp->v__DOT__x1_i_reg_382)));
    vlTOPp->v__DOT__demorgan_fu_1587_p2 = (1U & (((IData)(vlTOPp->v__DOT__i_i_reg_391) 
						  >> 6U) 
						 | (VL_ULL(0) 
						    == vlTOPp->v__DOT__x1_i_reg_382)));
    vlTOPp->v__DOT__i_4_fu_1432_p2 = (0x1ffffffU & 
				      ((((IData)(vlTOPp->v__DOT__tmp_58_reg_1765) 
					 << 0x10U) 
					| (IData)(vlTOPp->v__DOT__tmp_59_reg_1770)) 
				       + (((IData)(vlTOPp->v__DOT__tmp_56_reg_1755) 
					   << 0x10U) 
					  | (IData)(vlTOPp->v__DOT__tmp_57_reg_1760))));
    vlTOPp->v__DOT__n_fu_438_p2 = ((IData)(1U) + vlTOPp->v__DOT__n_i_reg_359);
    vlTOPp->v__DOT__Accu_fu_1561_p2 = (0x3fU & ((0x1fU 
						 & ((IData)(vlTOPp->v__DOT__bits_q1) 
						    + (IData)(vlTOPp->v__DOT__bits_q0))) 
						+ (0x1fU 
						   & ((IData)(vlTOPp->v__DOT__bits_q3) 
						      + (IData)(vlTOPp->v__DOT__bits_q2)))));
    vlTOPp->v__DOT__x_1_fu_426_p2 = ((VL_ULL(0xffffffffffffffff) 
				      + vlTOPp->v__DOT__x3_i_reg_350) 
				     & vlTOPp->v__DOT__x3_i_reg_350);
    vlTOPp->v__DOT__i_3_fu_1270_p2 = (0x1fffffffU & 
				      ((0xf0f0f0fU 
					& vlTOPp->v__DOT__i_2_fu_1146_p2) 
				       + ((0x7000000U 
					   & (vlTOPp->v__DOT__i_2_fu_1146_p2 
					      >> 4U)) 
					  | ((0xf0000U 
					      & (vlTOPp->v__DOT__i_2_fu_1146_p2 
						 >> 4U)) 
					     | ((0xf00U 
						 & (vlTOPp->v__DOT__i_2_fu_1146_p2 
						    >> 4U)) 
						| (0xfU 
						   & (vlTOPp->v__DOT__i_2_fu_1146_p2 
						      >> 4U)))))));
}

void Vbitcnt::_initial__TOP__6(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_initial__TOP__6\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,191,0,6);
    VL_SIGW(__Vtemp2,191,0,6);
    VL_SIGW(__Vtemp3,191,0,6);
    VL_SIGW(__Vtemp4,191,0,6);
    // Body
    // INITIAL at bitcnt_bits.v:47
    __Vtemp1[0U] = 0x2e646174U;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x62697473U;
    __Vtemp1[3U] = 0x636e745fU;
    __Vtemp1[4U] = 0x2f626974U;
    __Vtemp1[5U] = 0x2eU;
    VL_READMEM_W (true,4,256, 0,6, __Vtemp1, vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram0
		  ,0,~0);
    __Vtemp2[0U] = 0x2e646174U;
    __Vtemp2[1U] = 0x5f726f6dU;
    __Vtemp2[2U] = 0x62697473U;
    __Vtemp2[3U] = 0x636e745fU;
    __Vtemp2[4U] = 0x2f626974U;
    __Vtemp2[5U] = 0x2eU;
    VL_READMEM_W (true,4,256, 0,6, __Vtemp2, vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram1
		  ,0,~0);
    __Vtemp3[0U] = 0x2e646174U;
    __Vtemp3[1U] = 0x5f726f6dU;
    __Vtemp3[2U] = 0x62697473U;
    __Vtemp3[3U] = 0x636e745fU;
    __Vtemp3[4U] = 0x2f626974U;
    __Vtemp3[5U] = 0x2eU;
    VL_READMEM_W (true,4,256, 0,6, __Vtemp3, vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram2
		  ,0,~0);
    __Vtemp4[0U] = 0x2e646174U;
    __Vtemp4[1U] = 0x5f726f6dU;
    __Vtemp4[2U] = 0x62697473U;
    __Vtemp4[3U] = 0x636e745fU;
    __Vtemp4[4U] = 0x2f626974U;
    __Vtemp4[5U] = 0x2eU;
    VL_READMEM_W (true,4,256, 0,6, __Vtemp4, vlTOPp->v__DOT__bits_U__DOT__bitcnt_bits_rom_U__DOT__ram3
		  ,0,~0);
    // INITIAL at bitcnt.v:121
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

VL_INLINE_OPT void Vbitcnt::_sequent__TOP__7(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_sequent__TOP__7\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bitcnt.v:656
    vlTOPp->out_r_ce0 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 3U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 4U)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 5U)));
    // ALWAYS at bitcnt.v:664
    vlTOPp->out_r_ce1 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 4U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 5U)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 6U)));
    // ALWAYS at bitcnt.v:696
    vlTOPp->out_r_we0 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 3U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 4U)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 5U)));
    // ALWAYS at bitcnt.v:448
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 6U) & (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2));
    // ALWAYS at bitcnt.v:464
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 6U) & (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2));
    // ALWAYS at bitcnt.v:632
    vlTOPp->out_r_address0 = ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			       ? 4U : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				        ? 1U : ((8U 
						 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						 ? (IData)(vlTOPp->v__DOT__out_addr_5_reg_1691)
						 : 0U)));
    // ALWAYS at bitcnt.v:644
    vlTOPp->out_r_address1 = ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			       ? (IData)(vlTOPp->v__DOT__out_addr_4_reg_1800)
			       : ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? 3U : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					    ? 2U : 0U)));
    // ALWAYS at bitcnt.v:704
    vlTOPp->out_r_we1 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 4U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 5U)) 
			       | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 6U) & (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2))));
    // ALWAYS at bitcnt.v:672
    vlTOPp->out_r_d0 = ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			 ? (IData)(vlTOPp->v__DOT__Accu_fu_1561_p2)
			 : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			     ? (0x1ffffU & ((0xffffU 
					     & vlTOPp->v__DOT__i_4_fu_1432_p2) 
					    + (0x1ffU 
					       & (vlTOPp->v__DOT__i_4_fu_1432_p2 
						  >> 0x10U))))
			     : ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				 ? vlTOPp->v__DOT__n_1_i_reg_370
				 : 0U)));
    // ALWAYS at bitcnt.v:684
    vlTOPp->out_r_d1 = ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			 ? vlTOPp->v__DOT__out_write_assign_4_reg_402
			 : ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			     ? (IData)(vlTOPp->v__DOT__Accu_fu_1561_p2)
			     : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				 ? (IData)(vlTOPp->v__DOT__out_write_assign_1_reg_1775)
				 : 0U)));
}

void Vbitcnt::_settle__TOP__8(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_settle__TOP__8\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bitcnt.v:656
    vlTOPp->out_r_ce0 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 3U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 4U)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 5U)));
    // ALWAYS at bitcnt.v:664
    vlTOPp->out_r_ce1 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 4U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 5U)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 6U)));
    // ALWAYS at bitcnt.v:696
    vlTOPp->out_r_we0 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 3U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 4U)) 
			       | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				  >> 5U)));
    // ALWAYS at bitcnt.v:448
    vlTOPp->ap_done = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 6U) & (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2));
    // ALWAYS at bitcnt.v:456
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bitcnt.v:464
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 6U) & (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2));
    // ALWAYS at bitcnt.v:632
    vlTOPp->out_r_address0 = ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			       ? 4U : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				        ? 1U : ((8U 
						 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						 ? (IData)(vlTOPp->v__DOT__out_addr_5_reg_1691)
						 : 0U)));
    // ALWAYS at bitcnt.v:644
    vlTOPp->out_r_address1 = ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			       ? (IData)(vlTOPp->v__DOT__out_addr_4_reg_1800)
			       : ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				   ? 3U : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					    ? 2U : 0U)));
    // ALWAYS at bitcnt.v:704
    vlTOPp->out_r_we1 = (1U & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 4U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					   >> 5U)) 
			       | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 6U) & (IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2))));
    // ALWAYS at bitcnt.v:672
    vlTOPp->out_r_d0 = ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			 ? (IData)(vlTOPp->v__DOT__Accu_fu_1561_p2)
			 : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			     ? (0x1ffffU & ((0xffffU 
					     & vlTOPp->v__DOT__i_4_fu_1432_p2) 
					    + (0x1ffU 
					       & (vlTOPp->v__DOT__i_4_fu_1432_p2 
						  >> 0x10U))))
			     : ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				 ? vlTOPp->v__DOT__n_1_i_reg_370
				 : 0U)));
    // ALWAYS at bitcnt.v:684
    vlTOPp->out_r_d1 = ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			 ? vlTOPp->v__DOT__out_write_assign_4_reg_402
			 : ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			     ? (IData)(vlTOPp->v__DOT__Accu_fu_1561_p2)
			     : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				 ? (IData)(vlTOPp->v__DOT__out_write_assign_1_reg_1775)
				 : 0U)));
    // ALWAYS at bitcnt.v:711
    vlTOPp->v__DOT__ap_NS_fsm = ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? 0U : ((0x10U 
					       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((8U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2)
						       ? 1U
						       : 0x40U)))))))
				  : ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 0U : ((8U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 0x40U)))))
				      : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 0x20U))))
					  : ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? ((4U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 0x10U)))
					      : ((4U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   (((IData)(vlTOPp->v__DOT__tmp_i_reg_1696) 
						     | (IData)(vlTOPp->v__DOT__tmp_59_i_reg_1705))
						     ? 8U
						     : 2U)))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 4U)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 
						   (((IData)(vlTOPp->ap_start) 
						     & (VL_ULL(0) 
							== vlTOPp->in_r))
						     ? 4U
						     : 
						    (((IData)(vlTOPp->ap_start) 
						      & (VL_ULL(0) 
							 != vlTOPp->in_r))
						      ? 2U
						      : 1U))
						    : 0U)))))));
}

VL_INLINE_OPT void Vbitcnt::_combo__TOP__9(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_combo__TOP__9\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bitcnt.v:456
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at bitcnt.v:711
    vlTOPp->v__DOT__ap_NS_fsm = ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? 0U : ((0x10U 
					       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((8U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((IData)(vlTOPp->v__DOT__demorgan_fu_1587_p2)
						       ? 1U
						       : 0x40U)))))))
				  : ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 0U : ((8U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((4U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((2U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((1U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 0x40U)))))
				      : ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 0x20U))))
					  : ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? ((4U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 0x10U)))
					      : ((4U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 
						 ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   (((IData)(vlTOPp->v__DOT__tmp_i_reg_1696) 
						     | (IData)(vlTOPp->v__DOT__tmp_59_i_reg_1705))
						     ? 8U
						     : 2U)))
						  : 
						 ((2U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 4U)
						   : 
						  ((1U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 
						   (((IData)(vlTOPp->ap_start) 
						     & (VL_ULL(0) 
							== vlTOPp->in_r))
						     ? 4U
						     : 
						    (((IData)(vlTOPp->ap_start) 
						      & (VL_ULL(0) 
							 != vlTOPp->in_r))
						      ? 2U
						      : 1U))
						    : 0U)))))));
}

void Vbitcnt::_eval(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_eval\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vbitcnt::_eval_initial(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_eval_initial\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__6(vlSymsp);
}

void Vbitcnt::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::final\n"); );
    // Variables
    Vbitcnt__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbitcnt::_eval_settle(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_eval_settle\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
}

VL_INLINE_OPT QData Vbitcnt::_change_request(Vbitcnt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vbitcnt::_change_request\n"); );
    Vbitcnt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
