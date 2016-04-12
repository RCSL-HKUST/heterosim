// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfloat64_add.h for the primary calling header

#include "Vfloat64_add.h"      // For This
#include "Vfloat64_add__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vfloat64_add::__Vtable1_v__DOT__ap_NS_fsm[1024],4,0);

//--------------------

VL_CTOR_IMP(Vfloat64_add) {
    Vfloat64_add__Syms* __restrict vlSymsp = __VlSymsp = new Vfloat64_add__Syms(this, name());
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    buff_address0 = VL_RAND_RESET_I(1);
    buff_ce0 = VL_RAND_RESET_I(1);
    buff_q0 = VL_RAND_RESET_Q(64);
    buff_address1 = VL_RAND_RESET_I(1);
    buff_ce1 = VL_RAND_RESET_I(1);
    buff_q1 = VL_RAND_RESET_Q(64);
    m = VL_RAND_RESET_I(32);
    result = VL_RAND_RESET_Q(64);
    result_ap_vld = VL_RAND_RESET_I(1);
    n = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(5);
    v__DOT__a_reg_164 = VL_RAND_RESET_Q(64);
    v__DOT__b_reg_170 = VL_RAND_RESET_Q(64);
    v__DOT__tmp_reg_176 = VL_RAND_RESET_I(1);
    v__DOT__tmptmp_fu_134_p2 = VL_RAND_RESET_I(1);
    v__DOT__tmptmp_reg_182 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg = VL_RAND_RESET_I(1);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(5);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm = VL_RAND_RESET_I(14);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_q0 = VL_RAND_RESET_I(4);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__reg_294 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aExp_reg_1061 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bExp_reg_1066 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_13_reg_1071 = VL_RAND_RESET_Q(52);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_14_reg_1082 = VL_RAND_RESET_Q(52);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_fu_483_p3 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__count_assign_1_reg_1142 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_reg_1147 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_35_reg_1153 = VL_RAND_RESET_I(5);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_26_i_reg_1158 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_reg_1183 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp9_reg_1189 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_23_i_reg_1194 = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_4_reg_1202 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_1_reg_1207 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_reg_1212 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp1_reg_1217 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_fu_767_p3 = VL_RAND_RESET_I(32);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_reg_1222 = VL_RAND_RESET_I(32);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp2_reg_1228 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i5_reg_1235 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_2_i1_reg_1240 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_21_reg_1245 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_i1_reg_1250 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__sel_tmp1_i1_reg_1255 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_reg_1260 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp3_reg_1265 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp24_reg_1275 = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_return = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_s_reg_144 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_1_reg_162 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_reg_172 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_reg_182 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_5_fu_874_p3 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_s_reg_192 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp2_reg_210 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_1_reg_222 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_phi_fu_236_p16 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i_fu_641_p2 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i8_fu_802_p2 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3 = VL_RAND_RESET_I(32);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__shiftCount_1_fu_1020_p2 = VL_RAND_RESET_I(7);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_return_preg = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_NS_fsm = VL_RAND_RESET_I(14);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_U__DOT__float64_add_subFloat64Sigs_countLeadingZerosHigh_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(4);
    }}
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_reg_547 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp4_cast_reg_552 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_29_reg_562 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_reg_581 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_21_reg_592 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_23_reg_600 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_44_reg_604 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__count_assign_reg_611 = VL_RAND_RESET_I(7);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_47_reg_616 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_33_i_reg_621 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__z_6_fu_409_p3 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign_2_reg_647 = VL_RAND_RESET_Q(54);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_72_i8_reg_653 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign1_reg_102 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zExp_assign_1_reg_113 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundBits_1_reg_127 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_phi_fu_141_p4 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_reg_138 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_return_preg = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_NS_fsm = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_fu_144_p2 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__reg_214 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aExp_reg_785 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bExp_reg_795 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_62_reg_800 = VL_RAND_RESET_Q(52);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_63_reg_811 = VL_RAND_RESET_Q(52);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_51_reg_855 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_69_reg_860 = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_70_reg_865 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i7_reg_870 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_46_reg_888 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__expDiff_4_reg_893 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_66_reg_899 = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp_reg_904 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp8_reg_918 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i2_reg_923 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_72_reg_928 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_34_reg_933 = VL_RAND_RESET_Q(61);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i1_reg_949 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i_reg_955 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_68_reg_960 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_32_reg_965 = VL_RAND_RESET_Q(61);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_return = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_1_reg_112 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_1_reg_121 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_4_reg_130 = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_phi_fu_162_p16 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2 = VL_RAND_RESET_Q(61);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i1_fu_517_p2 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i_fu_623_p2 = VL_RAND_RESET_Q(62);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2 = VL_RAND_RESET_Q(63);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_return_preg = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_NS_fsm = VL_RAND_RESET_I(11);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm = VL_RAND_RESET_I(6);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_reg_547 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp4_cast_reg_552 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_29_reg_562 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_reg_581 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_21_reg_592 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_23_reg_600 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_44_reg_604 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__count_assign_reg_611 = VL_RAND_RESET_I(7);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_47_reg_616 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_33_i_reg_621 = VL_RAND_RESET_I(1);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__z_6_fu_409_p3 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign_2_reg_647 = VL_RAND_RESET_Q(54);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_72_i8_reg_653 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign1_reg_102 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zExp_assign_1_reg_113 = VL_RAND_RESET_I(12);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundBits_1_reg_127 = VL_RAND_RESET_I(10);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_phi_fu_141_p4 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_reg_138 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2 = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_return_preg = VL_RAND_RESET_Q(64);
    v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_NS_fsm = VL_RAND_RESET_I(6);
    __Vtableidx1 = VL_RAND_RESET_I(10);
    __Vtable1_v__DOT__ap_NS_fsm[0] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[2] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[3] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[4] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[5] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[6] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[7] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[8] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[9] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[10] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[11] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[12] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[13] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[14] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[15] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[16] = 8U;
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
    __Vtable1_v__DOT__ap_NS_fsm[32] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[33] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[34] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[35] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[36] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[37] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[38] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[39] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[40] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[41] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[42] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[43] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[44] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[45] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[46] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[47] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[48] = 8U;
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
    __Vtable1_v__DOT__ap_NS_fsm[65] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[66] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[67] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[68] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[69] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[70] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[71] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[72] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[73] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[74] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[75] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[76] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[77] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[78] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[79] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[80] = 8U;
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
    __Vtable1_v__DOT__ap_NS_fsm[96] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[97] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[98] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[99] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[100] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[101] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[102] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[103] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[104] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[105] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[106] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[107] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[108] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[109] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[110] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[111] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[112] = 8U;
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
    __Vtable1_v__DOT__ap_NS_fsm[128] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[129] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[130] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[131] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[132] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[133] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[134] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[135] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[136] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[137] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[138] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[139] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[140] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[141] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[142] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[143] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[144] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[145] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[146] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[147] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[148] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[149] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[150] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[151] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[152] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[153] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[154] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[155] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[156] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[157] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[158] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[159] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[160] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[161] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[162] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[163] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[164] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[165] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[166] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[167] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[168] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[169] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[170] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[171] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[172] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[173] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[174] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[175] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[176] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[177] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[178] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[179] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[180] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[181] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[182] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[183] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[184] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[185] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[186] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[187] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[188] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[189] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[190] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[191] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[192] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[193] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[194] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[195] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[196] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[197] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[198] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[199] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[200] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[201] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[202] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[203] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[204] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[205] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[206] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[207] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[208] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[209] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[210] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[211] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[212] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[213] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[214] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[215] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[216] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[217] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[218] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[219] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[220] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[221] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[222] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[223] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[224] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[225] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[226] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[227] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[228] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[229] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[230] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[231] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[232] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[233] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[234] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[235] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[236] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[237] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[238] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[239] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[240] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[241] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[242] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[243] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[244] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[245] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[246] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[247] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[248] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[249] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[250] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[251] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[252] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[253] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[254] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[255] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[256] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[257] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[258] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[259] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[260] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[261] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[262] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[263] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[264] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[265] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[266] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[267] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[268] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[269] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[270] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[271] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[272] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[273] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[274] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[275] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[276] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[277] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[278] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[279] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[280] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[281] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[282] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[283] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[284] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[285] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[286] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[287] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[288] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[289] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[290] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[291] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[292] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[293] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[294] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[295] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[296] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[297] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[298] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[299] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[300] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[301] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[302] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[303] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[304] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[305] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[306] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[307] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[308] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[309] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[310] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[311] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[312] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[313] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[314] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[315] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[316] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[317] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[318] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[319] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[320] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[321] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[322] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[323] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[324] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[325] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[326] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[327] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[328] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[329] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[330] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[331] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[332] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[333] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[334] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[335] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[336] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[337] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[338] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[339] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[340] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[341] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[342] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[343] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[344] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[345] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[346] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[347] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[348] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[349] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[350] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[351] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[352] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[353] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[354] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[355] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[356] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[357] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[358] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[359] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[360] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[361] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[362] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[363] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[364] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[365] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[366] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[367] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[368] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[369] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[370] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[371] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[372] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[373] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[374] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[375] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[376] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[377] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[378] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[379] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[380] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[381] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[382] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[383] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[384] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[385] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[386] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[387] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[388] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[389] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[390] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[391] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[392] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[393] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[394] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[395] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[396] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[397] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[398] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[399] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[400] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[401] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[402] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[403] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[404] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[405] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[406] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[407] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[408] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[409] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[410] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[411] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[412] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[413] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[414] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[415] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[416] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[417] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[418] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[419] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[420] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[421] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[422] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[423] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[424] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[425] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[426] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[427] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[428] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[429] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[430] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[431] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[432] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[433] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[434] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[435] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[436] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[437] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[438] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[439] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[440] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[441] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[442] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[443] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[444] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[445] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[446] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[447] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[448] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[449] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[450] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[451] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[452] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[453] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[454] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[455] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[456] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[457] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[458] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[459] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[460] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[461] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[462] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[463] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[464] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[465] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[466] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[467] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[468] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[469] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[470] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[471] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[472] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[473] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[474] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[475] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[476] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[477] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[478] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[479] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[480] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[481] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[482] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[483] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[484] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[485] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[486] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[487] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[488] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[489] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[490] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[491] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[492] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[493] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[494] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[495] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[496] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[497] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[498] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[499] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[500] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[501] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[502] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[503] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[504] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[505] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[506] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[507] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[508] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[509] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[510] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[511] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[512] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[513] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[514] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[515] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[516] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[517] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[518] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[519] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[520] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[521] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[522] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[523] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[524] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[525] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[526] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[527] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[528] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[529] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[530] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[531] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[532] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[533] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[534] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[535] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[536] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[537] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[538] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[539] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[540] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[541] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[542] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[543] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[544] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[545] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[546] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[547] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[548] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[549] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[550] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[551] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[552] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[553] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[554] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[555] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[556] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[557] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[558] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[559] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[560] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[561] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[562] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[563] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[564] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[565] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[566] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[567] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[568] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[569] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[570] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[571] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[572] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[573] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[574] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[575] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[576] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[577] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[578] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[579] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[580] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[581] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[582] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[583] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[584] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[585] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[586] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[587] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[588] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[589] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[590] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[591] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[592] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[593] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[594] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[595] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[596] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[597] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[598] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[599] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[600] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[601] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[602] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[603] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[604] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[605] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[606] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[607] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[608] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[609] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[610] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[611] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[612] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[613] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[614] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[615] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[616] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[617] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[618] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[619] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[620] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[621] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[622] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[623] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[624] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[625] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[626] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[627] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[628] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[629] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[630] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[631] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[632] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[633] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[634] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[635] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[636] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[637] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[638] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[639] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[640] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[641] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[642] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[643] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[644] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[645] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[646] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[647] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[648] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[649] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[650] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[651] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[652] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[653] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[654] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[655] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[656] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[657] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[658] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[659] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[660] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[661] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[662] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[663] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[664] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[665] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[666] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[667] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[668] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[669] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[670] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[671] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[672] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[673] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[674] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[675] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[676] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[677] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[678] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[679] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[680] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[681] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[682] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[683] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[684] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[685] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[686] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[687] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[688] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[689] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[690] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[691] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[692] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[693] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[694] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[695] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[696] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[697] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[698] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[699] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[700] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[701] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[702] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[703] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[704] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[705] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[706] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[707] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[708] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[709] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[710] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[711] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[712] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[713] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[714] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[715] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[716] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[717] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[718] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[719] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[720] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[721] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[722] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[723] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[724] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[725] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[726] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[727] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[728] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[729] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[730] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[731] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[732] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[733] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[734] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[735] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[736] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[737] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[738] = 4U;
    __Vtable1_v__DOT__ap_NS_fsm[739] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[740] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[741] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[742] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[743] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[744] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[745] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[746] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[747] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[748] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[749] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[750] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[751] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[752] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[753] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[754] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[755] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[756] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[757] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[758] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[759] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[760] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[761] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[762] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[763] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[764] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[765] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[766] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[767] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[768] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[769] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[770] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[771] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[772] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[773] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[774] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[775] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[776] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[777] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[778] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[779] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[780] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[781] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[782] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[783] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[784] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[785] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[786] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[787] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[788] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[789] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[790] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[791] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[792] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[793] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[794] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[795] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[796] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[797] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[798] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[799] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[800] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[801] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[802] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[803] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[804] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[805] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[806] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[807] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[808] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[809] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[810] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[811] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[812] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[813] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[814] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[815] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[816] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[817] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[818] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[819] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[820] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[821] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[822] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[823] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[824] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[825] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[826] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[827] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[828] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[829] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[830] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[831] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[832] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[833] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[834] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[835] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[836] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[837] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[838] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[839] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[840] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[841] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[842] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[843] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[844] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[845] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[846] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[847] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[848] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[849] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[850] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[851] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[852] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[853] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[854] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[855] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[856] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[857] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[858] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[859] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[860] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[861] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[862] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[863] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[864] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[865] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[866] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[867] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[868] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[869] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[870] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[871] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[872] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[873] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[874] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[875] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[876] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[877] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[878] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[879] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[880] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[881] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[882] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[883] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[884] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[885] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[886] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[887] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[888] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[889] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[890] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[891] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[892] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[893] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[894] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[895] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[896] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[897] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[898] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[899] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[900] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[901] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[902] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[903] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[904] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[905] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[906] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[907] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[908] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[909] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[910] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[911] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[912] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[913] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[914] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[915] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[916] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[917] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[918] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[919] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[920] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[921] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[922] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[923] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[924] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[925] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[926] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[927] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[928] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[929] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[930] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[931] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[932] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[933] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[934] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[935] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[936] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[937] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[938] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[939] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[940] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[941] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[942] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[943] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[944] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[945] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[946] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[947] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[948] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[949] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[950] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[951] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[952] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[953] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[954] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[955] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[956] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[957] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[958] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[959] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[960] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[961] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[962] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[963] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[964] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[965] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[966] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[967] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[968] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[969] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[970] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[971] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[972] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[973] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[974] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[975] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[976] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[977] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[978] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[979] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[980] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[981] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[982] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[983] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[984] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[985] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[986] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[987] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[988] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[989] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[990] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[991] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[992] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[993] = 2U;
    __Vtable1_v__DOT__ap_NS_fsm[994] = 0x10U;
    __Vtable1_v__DOT__ap_NS_fsm[995] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[996] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[997] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[998] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[999] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1000] = 1U;
    __Vtable1_v__DOT__ap_NS_fsm[1001] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1002] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1003] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1004] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1005] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1006] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1007] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1008] = 8U;
    __Vtable1_v__DOT__ap_NS_fsm[1009] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1010] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1011] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1012] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1013] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1014] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1015] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1016] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1017] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1018] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1019] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1020] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1021] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1022] = 0U;
    __Vtable1_v__DOT__ap_NS_fsm[1023] = 0U;
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vfloat64_add::__Vconfigure(Vfloat64_add__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfloat64_add::~Vfloat64_add() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vfloat64_add::eval() {
    Vfloat64_add__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vfloat64_add::eval\n"); );
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

void Vfloat64_add::_eval_initial_loop(Vfloat64_add__Syms* __restrict vlSymsp) {
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

void Vfloat64_add::_initial__TOP__1(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_initial__TOP__1\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at float64_add.v:373
    vlTOPp->buff_address0 = 0U;
    // INITIAL at float64_add.v:375
    vlTOPp->buff_address1 = 1U;
    // INITIAL at float64_add_subFloat64Sigs.v:327
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_return_preg = VL_ULL(0);
    // INITIAL at float64_add_addFloat64Sigs.v:267
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_return_preg = VL_ULL(0);
    // INITIAL at float64_add_roundAndPackFloat64.v:178
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_return_preg = VL_ULL(0);
    // INITIAL at float64_add_roundAndPackFloat64.v:178
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_return_preg = VL_ULL(0);
}

VL_INLINE_OPT void Vfloat64_add::_combo__TOP__2(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_combo__TOP__2\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ap_return = (vlTOPp->n + vlTOPp->m);
}

VL_INLINE_OPT void Vfloat64_add::_sequent__TOP__4(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_sequent__TOP__4\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg,0,0);
    VL_SIG8(__Vdly__v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg,0,0);
    //char	__VpadToAlign46[2];
    // Body
    __Vdly__v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg 
	= vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg;
    __Vdly__v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg 
	= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg;
    // ALWAYS at float64_add_roundAndPackFloat64.v:192
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_return_preg = VL_ULL(0);
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_return_preg 
		= vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_phi_fu_141_p4;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:192
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_return_preg = VL_ULL(0);
    } else {
	if ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_return_preg 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_phi_fu_141_p4;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:590
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557 
	= (0x200U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557));
    // ALWAYS at float64_add_roundAndPackFloat64.v:590
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557 
	= (0x200U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557));
    // ALWAYS at float64_add_subFloat64Sigs.v:566
    if ((0x200U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp24_reg_1275 
	    = (0x3fU & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp3_reg_1265)
			  ? ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp2_reg_1228)
			      ? 0x18U : 8U) : ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp2_reg_1228)
					        ? 0x10U
					        : 0U)) 
			+ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_q0)));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:556
    if ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__sel_tmp1_i1_reg_1255 
	    = ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp9_reg_1189) 
	       & (0U != (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_reg_1183)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_21_reg_1245 
	    = (VL_ULL(0x3fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i8_fu_802_p2 
					     >> 1U));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_i1_reg_1250 
	    = (VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175);
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_2_i1_reg_1240 
	    = (1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i8_fu_802_p2) 
		     | (VL_ULL(0) != (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175 
				      << (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_23_i_reg_1194)))));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i5_reg_1235 
	    = (0U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_reg_1183));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:234
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	  >> 1U) & (((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
		       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		      & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		     & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
			>> 0xbU)) | ((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
				       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
				      & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
					 >> 0xbU)) 
				     & (~ (IData)((vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
						   >> 0x3fU))))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__count_assign_reg_611 
	    = (0x7fU & VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_33_i_reg_621 
	    = (VL_ULL(0) != (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149 
			     << (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_47_reg_616 
	    = (1U & (VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
		     >> 6U));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:307
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_return_preg = VL_ULL(0);
    } else {
	if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		    >> 9U) & (~ (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
				    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
				   | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
				  | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
				     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done))))))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_return_preg 
		= vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_phi_fu_162_p16;
	}
    }
    // ALWAYS at float64_add.v:162
    if (vlTOPp->ap_rst) {
	__Vdly__v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg = 0U;
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    __Vdly__v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg = 1U;
	} else {
	    if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
			>> 9U) & (~ (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
				       | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
				      | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
					 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
				     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done))))))) {
		__Vdly__v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg = 0U;
	    }
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:381
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_return_preg = VL_ULL(0);
    } else {
	if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		    >> 0xcU) & (~ ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
				      | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
				     | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				    | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done))))))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_return_preg 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_phi_fu_236_p16;
	}
    }
    // ALWAYS at float64_add.v:174
    if (vlTOPp->ap_rst) {
	__Vdly__v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg = 0U;
    } else {
	if ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    __Vdly__v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg = 1U;
	} else {
	    if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
			>> 0xcU) & (~ ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
					  | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
					 | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
					    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
					| ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
					    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done))))))) {
		__Vdly__v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg = 0U;
	    }
	}
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:345
    if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	    & (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					    >> 0x34U))))) 
	   & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	  & (VL_ULL(0) == (VL_ULL(0x1ffffffffffffe00) 
			   & (vlTOPp->v__DOT__a_reg_164 
			      << 9U)))) | ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
					       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
					      & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
					     & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
						   >> 0xbU))) 
					    & (0x7ffU 
					       == (0x7ffU 
						   & (IData)(
							     (vlTOPp->v__DOT__a_reg_164 
							      >> 0x34U))))) 
					   & (VL_ULL(0) 
					      == vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159 
	    = vlTOPp->v__DOT__a_reg_164;
    } else {
	if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
		& VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	       & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		     >> 0xbU))) & (0x7ffU != (0x7ffU 
					      & (IData)(
							(vlTOPp->v__DOT__a_reg_164 
							 >> 0x34U))))) 
	     & (0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					 >> 0x34U)))))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159 
		= (((QData)((IData)(vlTOPp->v__DOT__tmp_reg_176)) 
		    << 0x3fU) | (VL_ULL(0x1fffffffffffff) 
				 & (((VL_ULL(0x1ffffffffffffe00) 
				      & (vlTOPp->v__DOT__a_reg_164 
					 << 9U)) + 
				     (VL_ULL(0x1ffffffffffffe00) 
				      & (vlTOPp->v__DOT__b_reg_170 
					 << 9U))) >> 9U)));
	} else {
	    if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
		    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
		   & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		      >> 0xbU)) & (0x7ffU == (0x7ffU 
					      & (IData)(
							(vlTOPp->v__DOT__b_reg_170 
							 >> 0x34U))))) 
		 & (VL_ULL(0) == (VL_ULL(0x1ffffffffffffe00) 
				  & (vlTOPp->v__DOT__b_reg_170 
				     << 9U))))) {
		vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159 
		    = (VL_ULL(0x7ff0000000000000) | 
		       ((QData)((IData)(vlTOPp->v__DOT__tmp_reg_176)) 
			<< 0x3fU));
	    } else {
		if ((1U & ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
			     >> 9U) & ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
					 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
					| (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
				       | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834))))) 
			   & (~ (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
				    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
				   | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
				  | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
				     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done))))))) {
		    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159 
			= vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_return;
		} else {
		    if ((1U & ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
				 >> 0xaU) | ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
					     >> 4U)) 
			       | ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
				  >> 1U)))) {
			vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159 
			    = vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__reg_214;
		    }
		}
	    }
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:429
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	   & (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					   >> 0x34U))))) 
	  & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	 & (VL_ULL(0) == (VL_ULL(0x3ffffffffffffc00) 
			  & (vlTOPp->v__DOT__a_reg_164 
			     << 0xaU))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232 
	    = vlTOPp->v__DOT__a_reg_164;
    } else {
	if ((((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
		 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
		& (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		      >> 0xbU))) & (0x7ffU != (0x7ffU 
					       & (IData)(
							 (vlTOPp->v__DOT__a_reg_164 
							  >> 0x34U))))) 
	      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
	     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2)))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232 = VL_ULL(0);
	} else {
	    if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
		    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
		   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
			 >> 0xbU))) & (0x7ffU == (0x7ffU 
						  & (IData)(
							    (vlTOPp->v__DOT__a_reg_164 
							     >> 0x34U))))) 
		 & (VL_ULL(0) == vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2))) {
		vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232 = VL_ULL(0x7fffffffffffffff);
	    } else {
		if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
			 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
			& VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
		       & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
			  >> 0xbU)) & (0x7ffU == (0x7ffU 
						  & (IData)(
							    (vlTOPp->v__DOT__b_reg_170 
							     >> 0x34U))))) 
		     & (VL_ULL(0) == (VL_ULL(0x3ffffffffffffc00) 
				      & (vlTOPp->v__DOT__b_reg_170 
					 << 0xaU))))) {
		    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232 
			= (VL_ULL(0x7ff0000000000000) 
			   | ((QData)((IData)((1U & 
					       (~ (IData)(vlTOPp->v__DOT__tmp_reg_176))))) 
			      << 0x3fU));
		} else {
		    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
			   >> 0xcU) & (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
					 | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
					     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
					| ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				       | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101))))) 
			 & (~ ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
				   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
				  | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
				     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
				 | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
				     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
				    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				| ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
				     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
				    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
				   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
			       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done)))))) {
			vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232 
			    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_return;
		    } else {
			if ((1U & ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
				     >> 0xdU) | ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
						 >> 5U)) 
				   | ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
				      >> 1U)))) {
			    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232 
				= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__reg_294;
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:337
    if ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_1_reg_112 
	    = vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816;
    } else {
	if ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_1_reg_112 
		= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i1_reg_949)
		    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943
		    : (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp_reg_904) 
			& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i1_reg_949)))
		        ? ((vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_32_reg_965 
			    << 1U) | (QData)((IData)(
						     ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_68_reg_960) 
						      | (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i_reg_955)))))
		        : (QData)((IData)((VL_ULL(0) 
					   != vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943)))));
	}
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:329
    if ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_1_reg_121 
	    = ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i7_reg_870)
	        ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912
	        : (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp8_reg_918) 
		    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i7_reg_870)))
		    ? ((vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_34_reg_933 
			<< 1U) | (QData)((IData)(((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_72_reg_928) 
						  | (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i2_reg_923)))))
		    : (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912)))));
    } else {
	if ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_1_reg_121 
		= vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:202
    if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
		>> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_21_reg_592)) 
			   | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596)) 
			      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_23_reg_600)))) 
			  | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596)) 
			     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_44_reg_604))))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_reg_138 
	    = vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_72_i8_reg_653;
    } else {
	if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	      >> 1U) & (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
			 & VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
			| (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
			    & (0x7fdU == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
			   & (IData)((vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
				      >> 0x3fU)))))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_reg_138 
		= ((VL_ULL(0x7ff0000000000000) | ((QData)((IData)(vlTOPp->v__DOT__tmp_reg_176)) 
						  << 0x3fU)) 
		   - (QData)((IData)((0U == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3)))));
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:234
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	  >> 1U) & (((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
		       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		      & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		     & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
			>> 0xbU)) | ((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
				       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
				      & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
					 >> 0xbU)) 
				     & (~ (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
						   >> 0x3fU))))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__count_assign_reg_611 
	    = (0x7fU & VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_33_i_reg_621 
	    = (VL_ULL(0) != (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285 
			     << (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_47_reg_616 
	    = (1U & (VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
		     >> 6U));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:202
    if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
		>> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_21_reg_592)) 
			   | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596)) 
			      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_23_reg_600)))) 
			  | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596)) 
			     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_44_reg_604))))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_reg_138 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_72_i8_reg_653;
    } else {
	if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	      >> 1U) & (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
			 & VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
			| (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
			    & (0x7fdU == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
			   & (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
				      >> 0x3fU)))))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_reg_138 
		= ((VL_ULL(0x7ff0000000000000) | ((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_1_reg_222)) 
						  << 0x3fU)) 
		   - (QData)((IData)((0U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3)))));
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:544
    if ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp3_reg_1265 
	    = (0U == (0xffU & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3 
			       >> 0x18U)));
    }
    // ALWAYS at float64_add_subFloat64Sigs_countLeadingZerosHigh.v:29
    if ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_q0 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_U__DOT__float64_add_subFloat64Sigs_countLeadingZerosHigh_rom_U__DOT__ram
	    [(0xffU & ((0U == (0xffU & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3 
					>> 0x18U)))
		        ? (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3 
			   >> 0x10U) : (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3 
					>> 0x18U)))];
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:536
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	  >> 4U) & ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
		      | (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
		     | (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093)) 
		    | (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp1_reg_1217 
	    = (0U == (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 
			      >> 0x20U)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp2_reg_1228 
	    = (0U == (0xffffU & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_fu_767_p3 
				 >> 0x10U)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_reg_1222 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_fu_767_p3;
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:1268
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175 
	= (VL_ULL(0x7ffffffffffffc00) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175);
    // ALWAYS at float64_add_subFloat64Sigs.v:527
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					  >> 0x34U))))) 
	 & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175 
	    = ((VL_ULL(0x3ff) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175) 
	       | (VL_ULL(0x7ffffffffffffc00) & ((0U 
						 == 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->v__DOT__b_reg_170 
							     >> 0x34U))))
						 ? 
						(VL_ULL(0x3ffffffffffffc00) 
						 & (vlTOPp->v__DOT__b_reg_170 
						    << 0xaU))
						 : 
						(VL_ULL(0x4000000000000000) 
						 | (VL_ULL(0x3ffffffffffffc00) 
						    & (vlTOPp->v__DOT__b_reg_170 
						       << 0xaU))))));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_reg_1183 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3;
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp9_reg_1189 
	    = (0U == (0x1fU & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3) 
			       >> 6U)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_23_i_reg_1194 
	    = (0x3fU & VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3)));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:462
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826 
	    = (1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		     >> 0xbU));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:468
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	 & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884 
	    = (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					    >> 0x34U))));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:441
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	 & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
	       >> 0xbU)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830 
	    = (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					    >> 0x34U))));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:456
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	   & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	  & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		>> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							  (vlTOPp->v__DOT__a_reg_164 
							   >> 0x34U)))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834 
	    = (0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					>> 0x34U))));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:435
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	 & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
	    >> 0xbU))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851 
	    = (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
					    >> 0x34U))));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:429
    if (((((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	      & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	     & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		   >> 0xbU))) & (0x7ffU == (0x7ffU 
					    & (IData)(
						      (vlTOPp->v__DOT__a_reg_164 
						       >> 0x34U))))) 
	   & (VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2)) 
	  | ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
		& VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	       & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		  >> 0xbU)) & (0x7ffU == (0x7ffU & (IData)(
							   (vlTOPp->v__DOT__b_reg_170 
							    >> 0x34U))))) 
	     & (VL_ULL(0) != (VL_ULL(0x1ffffffffffffe00) 
			      & (vlTOPp->v__DOT__b_reg_170 
				 << 9U))))) | (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
						  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
						 & (0x7ffU 
						    == 
						    (0x7ffU 
						     & (IData)(
							       (vlTOPp->v__DOT__a_reg_164 
								>> 0x34U))))) 
						& VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
					       & (VL_ULL(0) 
						  != 
						  (VL_ULL(0x1ffffffffffffe00) 
						   & (vlTOPp->v__DOT__a_reg_164 
						      << 9U)))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__reg_214 
	    = ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_fu_144_p2)
	        ? ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2)
		    ? (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__b_reg_170)
		    : (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__a_reg_164))
	        : ((VL_ULL(0xffe0000000000000) < (vlTOPp->v__DOT__b_reg_170 
						  << 1U))
		    ? (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__b_reg_170)
		    : (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__a_reg_164)));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:584
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	 & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171 
	    = (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					    >> 0x34U))));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:602
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	 & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
	       >> 0xbU)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101 
	    = (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					    >> 0x34U))));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:596
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	 & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
	    >> 0xbU))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131 
	    = (0x7ffU == (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
					    >> 0x34U))));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:550
    if (((((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	       & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	      & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	     & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		   >> 0xbU))) & (0x7ffU == (0x7ffU 
					    & (IData)(
						      (vlTOPp->v__DOT__a_reg_164 
						       >> 0x34U))))) 
	   & (VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2)) 
	  | ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
		& VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	       & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		  >> 0xbU)) & (0x7ffU == (0x7ffU & (IData)(
							   (vlTOPp->v__DOT__b_reg_170 
							    >> 0x34U))))) 
	     & (VL_ULL(0) != (VL_ULL(0x3ffffffffffffc00) 
			      & (vlTOPp->v__DOT__b_reg_170 
				 << 0xaU))))) | (((
						   ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
						   & (0x7ffU 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->v__DOT__a_reg_164 
								  >> 0x34U))))) 
						  & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						 & (VL_ULL(0) 
						    != 
						    (VL_ULL(0x3ffffffffffffc00) 
						     & (vlTOPp->v__DOT__a_reg_164 
							<< 0xaU)))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__reg_294 
	    = ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_fu_144_p2)
	        ? ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2)
		    ? (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__b_reg_170)
		    : (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__a_reg_164))
	        : ((VL_ULL(0xffe0000000000000) < (vlTOPp->v__DOT__b_reg_170 
						  << 1U))
		    ? (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__b_reg_170)
		    : (VL_ULL(0x8000000000000) | vlTOPp->v__DOT__a_reg_164)));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:954
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816 
	= (VL_ULL(0x3ffffffffffffe00) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816);
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816 
	= (VL_ULL(0x1fffffffffffffff) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816);
    // ALWAYS at float64_add_addFloat64Sigs.v:957
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943 
	= (VL_ULL(0x3ffffffffffffe00) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943);
    // ALWAYS at float64_add_addFloat64Sigs.v:401
    if ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943 
	    = ((VL_ULL(0x1ff) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943) 
	       | (VL_ULL(0x3ffffffffffffe00) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i_reg_955 
	    = (VL_ULL(0) != (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3 
			     << (0x3fU & VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_66_reg_899)))));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_32_reg_965 
	    = (VL_ULL(0x1fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i_fu_623_p2 
					     >> 1U));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_68_reg_960 
	    = (1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i_fu_623_p2));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i1_reg_949 
	    = (0U == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__expDiff_4_reg_893));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:956
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912 
	= (VL_ULL(0x3ffffffffffffe00) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912);
    // ALWAYS at float64_add_addFloat64Sigs.v:395
    if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912 
	    = ((VL_ULL(0x1ff) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912) 
	       | (VL_ULL(0x3ffffffffffffe00) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:952
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805 
	= (VL_ULL(0x3ffffffffffffe00) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805);
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805 
	= (VL_ULL(0x1fffffffffffffff) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805);
    // ALWAYS at float64_add_addFloat64Sigs.v:420
    if ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		>> 2U) & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i7_reg_870))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp8_reg_918 
	    = (0U == (0x1fU & (VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_70_reg_865)) 
			       >> 6U)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i2_reg_923 
	    = (VL_ULL(0) != (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3 
			     << (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_69_reg_860)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_34_reg_933 
	    = (VL_ULL(0x1fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i1_fu_517_p2 
					     >> 1U));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_72_reg_928 
	    = (1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i1_fu_517_p2));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:258
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	  >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596 
	    = VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:264
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	   >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
	 & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_23_reg_600 
	    = (0x7fdU == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:270
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	    >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
	  & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
	 & (0x7fdU == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_44_reg_604 
	    = (1U & (IData)((vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
			     >> 0x3fU)));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:276
    if ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_72_i8_reg_653 
	    = (((QData)((IData)(((VL_ULL(0) == vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign_2_reg_647)
				  ? 0U : (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zExp_assign_1_reg_113)))) 
		<< 0x34U) + (((QData)((IData)(vlTOPp->v__DOT__tmp_reg_176)) 
			      << 0x3fU) | vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign_2_reg_647));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:258
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	  >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596 
	    = VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:264
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	   >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
	 & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_23_reg_600 
	    = (0x7fdU == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:270
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	    >> 1U) & (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
	  & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
	 & (0x7fdU == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_44_reg_604 
	    = (1U & (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
			     >> 0x3fU)));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:276
    if ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_72_i8_reg_653 
	    = (((QData)((IData)(((VL_ULL(0) == vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign_2_reg_647)
				  ? 0U : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zExp_assign_1_reg_113)))) 
		<< 0x34U) + (((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_1_reg_222)) 
			      << 0x3fU) | vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign_2_reg_647));
    }
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp2_reg_1228)
	    ? (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_reg_1222 
	       << 0x10U) : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_reg_1222);
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i8_fu_802_p2 
	= (VL_ULL(0x7fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175 
					 >> (0x3fU 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_reg_1183))));
    // ALWAYS at float64_add_addFloat64Sigs.v:411
    if (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	  & (0x7ffU != (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					  >> 0x34U))))) 
	 & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__expDiff_4_reg_893 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3;
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp_reg_904 
	    = (0U == (0x1fU & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3) 
			       >> 6U)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_46_reg_888 
	    = (0U == (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
					>> 0x34U))));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_66_reg_899 
	    = (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3));
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:447
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
	   & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	  & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
	     >> 0xbU)) & (0x7ffU != (0x7ffU & (IData)(
						      (vlTOPp->v__DOT__b_reg_170 
						       >> 0x34U)))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_51_reg_855 
	    = (0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					>> 0x34U))));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_69_reg_860 
	    = (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_70_reg_865 
	    = (0x7ffU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i7_reg_870 
	    = (0U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:218
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
			& VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		      & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
			    >> 0xbU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
					    & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
					   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
						 >> 0xbU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zExp_assign_1_reg_113 
	    = vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139;
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zExp_assign_1_reg_113 = 0U;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:282
    if ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign_2_reg_647 
	    = (VL_ULL(0x3fffffffffffff) & ((((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_reg_581)) 
					     + vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign1_reg_102) 
					    >> 0xaU) 
					   & VL_EXTENDS_QI(54,32, 
							   (~ 
							    ((0x200U 
							      == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundBits_1_reg_127)) 
							     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_reg_547))))));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:497
    if ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	if (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_1_reg_222 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_reg_1212;
	} else {
	    if (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310) {
		vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_1_reg_222 
		    = vlTOPp->v__DOT__tmp_reg_176;
	    }
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:218
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
			& VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		      & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
			    >> 0xbU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
					    & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
					   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
						 >> 0xbU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zExp_assign_1_reg_113 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280;
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zExp_assign_1_reg_113 = 0U;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:282
    if ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign_2_reg_647 
	    = (VL_ULL(0x3fffffffffffff) & ((((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_reg_581)) 
					     + vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign1_reg_102) 
					    >> 0xaU) 
					   & VL_EXTENDS_QI(54,32, 
							   (~ 
							    ((0x200U 
							      == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundBits_1_reg_127)) 
							     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_reg_547))))));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:249
    if (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp4_cast_reg_552 = 0x3ffU;
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557 
	    = (0x200U | (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_29_reg_562 = 1U;
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_reg_547 = 1U;
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:242
    if ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_reg_581 
	    = vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3;
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_21_reg_592 
	    = (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:226
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
			& VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		      & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
			    >> 0xbU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
					    & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
					   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
						 >> 0xbU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign1_reg_102 
	    = vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149;
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign1_reg_102 
		= vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__z_6_fu_409_p3;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:210
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
			& VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
		      & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
			    >> 0xbU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
					    & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
					   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
						 >> 0xbU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundBits_1_reg_127 
	    = (0x3ffU & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149));
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundBits_1_reg_127 
		= (0x3ffU & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__z_6_fu_409_p3));
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:249
    if (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp4_cast_reg_552 = 0x3ffU;
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557 
	    = (0x200U | (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_29_reg_562 = 1U;
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_reg_547 = 1U;
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:242
    if ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_reg_581 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3;
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_21_reg_592 
	    = (0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280));
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:226
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
			& VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		      & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
			    >> 0xbU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
					    & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
					   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
						 >> 0xbU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign1_reg_102 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285;
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign1_reg_102 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__z_6_fu_409_p3;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:210
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
	  >> 1U) & ((((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
			& VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		       & (0x7fdU != (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
		      & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
			    >> 0xbU))) | ((((0x7fcU 
					     < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
					    & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
					   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
						 >> 0xbU))) 
					  & (~ (IData)(
						       (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
							>> 0x3fU))))) 
		    | (0x7fcU >= (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundBits_1_reg_127 
	    = (0x3ffU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285));
    } else {
	if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundBits_1_reg_127 
		= (0x3ffU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__z_6_fu_409_p3));
	}
    }
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_29_reg_562)
	    ? (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557)
	    : (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp4_cast_reg_552));
    // ALWAYS at float64_add_addFloat64Sigs.v:317
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg = 0U;
    } else {
	if ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg = 1U;
	} else {
	    if ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))) {
		vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg = 0U;
	    }
	}
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:375
    if ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149 
	    = ((1U & (IData)((vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2 
			      >> 0x3eU))) ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2
	        : (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2 
		   << 1U));
    } else {
	if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
		& VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	       & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		     >> 0xbU))) & (0x7ffU != (0x7ffU 
					      & (IData)(
							(vlTOPp->v__DOT__a_reg_164 
							 >> 0x34U))))) 
	     & (0U != (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					 >> 0x34U)))))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149 
		= ((VL_ULL(0x1ffffffffffffe00) & (vlTOPp->v__DOT__b_reg_170 
						  << 9U)) 
		   + (VL_ULL(0x4000000000000000) | 
		      (VL_ULL(0x1ffffffffffffe00) & 
		       (vlTOPp->v__DOT__a_reg_164 << 9U))));
	}
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:359
    if ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139 
	    = (0xfffU & ((1U & (IData)((vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2 
					>> 0x3eU)))
			  ? (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_4_reg_130)
			  : ((IData)(0xfffU) + (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_4_reg_130))));
    } else {
	if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
		& VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	       & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		     >> 0xbU))) & (0x7ffU != (0x7ffU 
					      & (IData)(
							(vlTOPp->v__DOT__a_reg_164 
							 >> 0x34U))))) 
	     & (0U != (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					 >> 0x34U)))))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139 
		= (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
				     >> 0x34U)));
	}
    }
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_29_reg_562)
	    ? (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557)
	    : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp4_cast_reg_552));
    // ALWAYS at float64_add_subFloat64Sigs.v:391
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg = 0U;
    } else {
	if ((0x800U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg = 1U;
	} else {
	    if ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))) {
		vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg = 0U;
	    }
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:608
    if ((0x400U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285 
	    = (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_reg_182 
	       << (0x3fU & VL_EXTENDS_II(6,7, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__shiftCount_1_fu_1020_p2))));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280 
	    = (0xfffU & (((IData)(0xfffU) + (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp2_reg_210)) 
			 - VL_EXTENDS_II(12,7, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__shiftCount_1_fu_1020_p2))));
    }
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2 
	= (VL_ULL(0x7fffffffffffffff) & ((VL_ULL(0x2000000000000000) 
					  | vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_1_reg_121) 
					 + vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_1_reg_112));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__shiftCount_1_fu_1020_p2 
	= (0x7fU & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp24_reg_1275) 
		    + ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp1_reg_1217)
		        ? 0x1fU : 0x7fU)));
    // ALWAYS at float64_add_roundAndPackFloat64.v:184
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->ap_rst) ? 1U : (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_NS_fsm));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2 
	= (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149 
	   >> (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__count_assign_reg_611)));
    // ALWAYS at float64_add_addFloat64Sigs.v:367
    if ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_4_reg_130 
	    = vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bExp_reg_795;
    } else {
	if ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_4_reg_130 
		= vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aExp_reg_785;
	}
    }
    // ALWAYS at float64_add_roundAndPackFloat64.v:184
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->ap_rst) ? 1U : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_NS_fsm));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2 
	= (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285 
	   >> (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__count_assign_reg_611)));
    // ALWAYS at float64_add_subFloat64Sigs.v:461
    if ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	if (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp2_reg_210 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_1_reg_162;
	} else {
	    if (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310) {
		vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp2_reg_210 
		    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_reg_172;
	    }
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:487
    if ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	if (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_reg_182 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_1_reg_1207;
	} else {
	    if (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310) {
		vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_reg_182 
		    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_reg_1260;
	    }
	}
    }
    // ALWAYS at float64_add_addFloat64Sigs.v:383
    if (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg))) {
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aExp_reg_785 
	    = (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
				 >> 0x34U)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805 
	    = ((VL_ULL(0x20000000000001ff) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805) 
	       | (VL_ULL(0x1ffffffffffffe00) & (vlTOPp->v__DOT__a_reg_164 
						<< 9U)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bExp_reg_795 
	    = (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
				 >> 0x34U)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816 
	    = ((VL_ULL(0x20000000000001ff) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816) 
	       | (VL_ULL(0x1ffffffffffffe00) & (vlTOPp->v__DOT__b_reg_170 
						<< 9U)));
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_62_reg_800 
	    = (VL_ULL(0xfffffffffffff) & vlTOPp->v__DOT__a_reg_164);
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_63_reg_811 
	    = (VL_ULL(0xfffffffffffff) & vlTOPp->v__DOT__b_reg_170);
	vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822 
	    = VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:471
    if ((((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	     & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	    & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		  >> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							    (vlTOPp->v__DOT__a_reg_164 
							     >> 0x34U))))) 
	  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_1_reg_162 
	    = (0x7ffU & ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
						   >> 0x34U))))
			  ? 1U : (IData)((vlTOPp->v__DOT__b_reg_170 
					  >> 0x34U))));
    } else {
	if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	      >> 3U) & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_1_reg_162 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bExp_reg_1066;
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:479
    if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		 >> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							   (vlTOPp->v__DOT__a_reg_164 
							    >> 0x34U))))) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_reg_172 
	    = (0x7ffU & ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
						   >> 0x34U))))
			  ? 1U : (IData)((vlTOPp->v__DOT__a_reg_164 
					  >> 0x34U))));
    } else {
	if (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
	     & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		>> 7U))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_reg_172 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aExp_reg_1061;
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:622
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	  >> 7U) & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
		    | (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_reg_1260 
	    = ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
		 & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		    >> 7U)) ? (VL_ULL(0x4000000000000000) 
			       | (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_13_reg_1071 
				  << 0xaU)) : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201) 
	       - (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
		   & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		      >> 7U)) ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_5_fu_874_p3
		   : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_s_reg_192));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:615
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	  >> 3U) & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
		    | (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_1_reg_1207 
	    = (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		  >> 3U) & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097))
		 ? (VL_ULL(0x4000000000000000) | (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_14_reg_1082 
						  << 0xaU))
		 : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153) 
	       - ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		    >> 3U) & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097))
		   ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_4_reg_1202
		   : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_s_reg_144));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_reg_1212 
	    = (1U & (~ (IData)(vlTOPp->v__DOT__tmp_reg_176)));
    }
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg 
	= __Vdly__v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg;
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_51_reg_855)
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805
	    : (VL_ULL(0x2000000000000000) | (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_62_reg_800 
					     << 9U)));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_46_reg_888)
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816
	    : (VL_ULL(0x2000000000000000) | (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_63_reg_811 
					     << 9U)));
    // ALWAYS at float64_add_addFloat64Sigs.v:299
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->ap_rst) ? 1U : (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_NS_fsm));
    // ALWAYS at float64_add_subFloat64Sigs.v:572
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	   & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	  & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		>> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							  (vlTOPp->v__DOT__a_reg_164 
							   >> 0x34U)))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2;
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:411
    if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		 >> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							   (vlTOPp->v__DOT__a_reg_164 
							    >> 0x34U))))) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_s_reg_192 
	    = (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__b_reg_170 
					     << 0xaU));
    } else {
	if (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
	     & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		>> 7U))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_s_reg_192 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_5_fu_874_p3;
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:1270
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201 
	= (VL_ULL(0x7ffffffffffffc00) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201);
    // ALWAYS at float64_add_subFloat64Sigs.v:445
    if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		 >> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							   (vlTOPp->v__DOT__a_reg_164 
							    >> 0x34U))))) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201 
	    = ((VL_ULL(0x3ff) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201) 
	       | (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
						<< 0xaU)));
    } else {
	if (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
	     & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		>> 7U))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201 
		= ((VL_ULL(0x3ff) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201) 
		   | (VL_ULL(0x4000000000000000) | 
		      (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_13_reg_1071 
		       << 0xaU)));
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:578
    if (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	   & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		 >> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							   (vlTOPp->v__DOT__a_reg_164 
							    >> 0x34U))))) 
	 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119 
	    = vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2;
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:1269
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153 
	= (VL_ULL(0x7ffffffffffffc00) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153);
    // ALWAYS at float64_add_subFloat64Sigs.v:453
    if ((((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	     & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	    & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		  >> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							    (vlTOPp->v__DOT__a_reg_164 
							     >> 0x34U))))) 
	  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153 
	    = ((VL_ULL(0x3ff) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153) 
	       | (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__b_reg_170 
						<< 0xaU)));
    } else {
	if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	      >> 3U) & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153 
		= ((VL_ULL(0x3ff) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153) 
		   | (VL_ULL(0x4000000000000000) | 
		      (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_14_reg_1082 
		       << 0xaU)));
	}
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:403
    if ((((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	     & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	    & (~ ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		  >> 0xbU))) & (0x7ffU != (0x7ffU & (IData)(
							    (vlTOPp->v__DOT__a_reg_164 
							     >> 0x34U))))) 
	  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_s_reg_144 
	    = (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
					     << 0xaU));
    } else {
	if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	      >> 3U) & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097))) {
	    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_s_reg_144 
		= vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_4_reg_1202;
	}
    }
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_5_fu_874_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i5_reg_1235)
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175
	    : ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__sel_tmp1_i1_reg_1255)
	        ? ((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_21_reg_1245 
		    << 1U) | (QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_2_i1_reg_1240)))
	        : (QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_i1_reg_1250))));
    // ALWAYS at float64_add_subFloat64Sigs.v:507
    if (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aExp_reg_1061 
	    = (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
				 >> 0x34U)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bExp_reg_1066 
	    = (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
				 >> 0x34U)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_13_reg_1071 
	    = (VL_ULL(0xfffffffffffff) & vlTOPp->v__DOT__a_reg_164);
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_14_reg_1082 
	    = (VL_ULL(0xfffffffffffff) & vlTOPp->v__DOT__b_reg_170);
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093 
	    = VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:590
    if ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097 
	    = (1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
		     >> 0xbU));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:628
    if ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_4_reg_1202 
	    = ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_reg_1147)
	        ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135
	        : (((0U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_35_reg_1153)) 
		    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_reg_1147)))
		    ? ((VL_ULL(0x7ffffffffffffffe) 
			& vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i_fu_641_p2) 
		       | (QData)((IData)((1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i_fu_641_p2) 
						| (VL_ULL(0) 
						   != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_26_i_reg_1158))))))
		    : (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135)))));
    }
    // ALWAYS at float64_add_subFloat64Sigs.v:986
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
	   | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
	      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)));
    // ALWAYS at float64_add_subFloat64Sigs.v:991
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315 
	= (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
	    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
	   | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119) 
	       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
	      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115))));
    // ALWAYS at float64_add_subFloat64Sigs.v:1267
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135 
	= (VL_ULL(0x7ffffffffffffc00) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135);
    // ALWAYS at float64_add_subFloat64Sigs.v:517
    if ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
	   & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
	  & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
	     >> 0xbU)) & (0x7ffU != (0x7ffU & (IData)(
						      (vlTOPp->v__DOT__b_reg_170 
						       >> 0x34U)))))) {
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135 
	    = ((VL_ULL(0x3ff) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135) 
	       | (VL_ULL(0x7ffffffffffffc00) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_fu_483_p3));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__count_assign_1_reg_1142 
	    = (0x7ffU & VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_26_i_reg_1158 
	    = (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_fu_483_p3 
	       << (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3)));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_35_reg_1153 
	    = (0x1fU & (VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3)) 
			>> 6U));
	vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_reg_1147 
	    = (0U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3));
    }
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg 
	= __Vdly__v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg;
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i_fu_641_p2 
	= (VL_ULL(0x7fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135 
					 >> (0x3fU 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__count_assign_1_reg_1142))));
    // ALWAYS at float64_add_subFloat64Sigs.v:373
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm 
	= ((IData)(vlTOPp->ap_rst) ? 1U : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_NS_fsm));
    // ALWAYS at float64_add.v:194
    if ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__a_reg_164 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__tmptmp_reg_182 = vlTOPp->v__DOT__tmptmp_fu_134_p2;
	vlTOPp->v__DOT__b_reg_170 = vlTOPp->buff_q1;
	vlTOPp->v__DOT__tmp_reg_176 = (1U & (IData)(
						    (vlTOPp->buff_q0 
						     >> 0x3fU)));
    }
    // ALWAYS at float64_add.v:154
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_fu_483_p3 
	= ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
				     >> 0x34U)))) ? 
	   (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
					  << 0xaU))
	    : (VL_ULL(0x4000000000000000) | (VL_ULL(0x3ffffffffffffc00) 
					     & (vlTOPp->v__DOT__a_reg_164 
						<< 0xaU))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2 
	= ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->v__DOT__b_reg_170 
								       >> 0x33U))))) 
					   << 0x33U)) 
	   & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			    & vlTOPp->v__DOT__b_reg_170)));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2 
	= (VL_ULL(0x1ffffffffffffe00) & ((vlTOPp->v__DOT__b_reg_170 
					  | vlTOPp->v__DOT__a_reg_164) 
					 << 9U));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2 
	= ((VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__b_reg_170 
					  << 0xaU)) 
	   < (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
					    << 0xaU)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2 
	= ((VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
					  << 0xaU)) 
	   < (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__b_reg_170 
					    << 0xaU)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2 
	= (VL_ULL(0x3ffffffffffffc00) & ((vlTOPp->v__DOT__b_reg_170 
					  | vlTOPp->v__DOT__a_reg_164) 
					 << 0xaU));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2 
	= (0xfffU & ((0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					>> 0x34U))) 
		     - (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
					  >> 0x34U)))));
}

void Vfloat64_add::_initial__TOP__5(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_initial__TOP__5\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign68[4];
    VL_SIGW(__Vtemp1,479,0,15);
    // Body
    // INITIAL at float64_add_subFloat64Sigs_countLeadingZerosHigh.v:23
    __Vtemp1[0U] = 0x2e646174U;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x48696768U;
    __Vtemp1[3U] = 0x65726f73U;
    __Vtemp1[4U] = 0x696e675aU;
    __Vtemp1[5U] = 0x4c656164U;
    __Vtemp1[6U] = 0x6f756e74U;
    __Vtemp1[7U] = 0x67735f63U;
    __Vtemp1[8U] = 0x36345369U;
    __Vtemp1[9U] = 0x6c6f6174U;
    __Vtemp1[0xaU] = 0x73756246U;
    __Vtemp1[0xbU] = 0x6164645fU;
    __Vtemp1[0xcU] = 0x7436345fU;
    __Vtemp1[0xdU] = 0x666c6f61U;
    __Vtemp1[0xeU] = 0x2e2fU;
    VL_READMEM_W (true,4,256, 0,15, __Vtemp1, vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_U__DOT__float64_add_subFloat64Sigs_countLeadingZerosHigh_rom_U__DOT__ram
		  ,0,~0);
    // INITIAL at float64_add_addFloat64Sigs.v:209
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg = 0U;
    // INITIAL at float64_add_subFloat64Sigs.v:249
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg = 0U;
    // INITIAL at float64_add_roundAndPackFloat64.v:85
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm = 1U;
    // INITIAL at float64_add_roundAndPackFloat64.v:85
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm = 1U;
    // INITIAL at float64_add.v:115
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg = 0U;
    // INITIAL at float64_add_addFloat64Sigs.v:95
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm = 1U;
    // INITIAL at float64_add.v:111
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg = 0U;
    // INITIAL at float64_add_subFloat64Sigs.v:101
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm = 1U;
    // INITIAL at float64_add.v:75
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

void Vfloat64_add::_settle__TOP__6(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_settle__TOP__6\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp2_reg_1228)
	    ? (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_reg_1222 
	       << 0x10U) : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_reg_1222);
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i8_fu_802_p2 
	= (VL_ULL(0x7fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175 
					 >> (0x3fU 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_reg_1183))));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_29_reg_562)
	    ? (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557)
	    : (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp4_cast_reg_552));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_29_reg_562)
	    ? (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557)
	    : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp4_cast_reg_552));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2 
	= (VL_ULL(0x7fffffffffffffff) & ((VL_ULL(0x2000000000000000) 
					  | vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_1_reg_121) 
					 + vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_1_reg_112));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__shiftCount_1_fu_1020_p2 
	= (0x7fU & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp24_reg_1275) 
		    + ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp1_reg_1217)
		        ? 0x1fU : 0x7fU)));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2 
	= (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149 
	   >> (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__count_assign_reg_611)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2 
	= (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285 
	   >> (0x3fU & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__count_assign_reg_611)));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_51_reg_855)
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805
	    : (VL_ULL(0x2000000000000000) | (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_62_reg_800 
					     << 9U)));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_46_reg_888)
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816
	    : (VL_ULL(0x2000000000000000) | (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_63_reg_811 
					     << 9U)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_5_fu_874_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i5_reg_1235)
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175
	    : ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__sel_tmp1_i1_reg_1255)
	        ? ((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_21_reg_1245 
		    << 1U) | (QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_2_i1_reg_1240)))
	        : (QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_i1_reg_1250))));
    // ALWAYS at float64_add_subFloat64Sigs.v:986
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
	   | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
	      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)));
    // ALWAYS at float64_add_subFloat64Sigs.v:991
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315 
	= (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
	    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
	   | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119) 
	       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
	      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i_fu_641_p2 
	= (VL_ULL(0x7fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135 
					 >> (0x3fU 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__count_assign_1_reg_1142))));
    vlTOPp->v__DOT__tmptmp_fu_134_p2 = (1U & ((IData)(
						      (vlTOPp->buff_q0 
						       >> 0x3fU)) 
					      ^ (IData)(
							(vlTOPp->buff_q1 
							 >> 0x3fU))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_fu_483_p3 
	= ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
				     >> 0x34U)))) ? 
	   (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
					  << 0xaU))
	    : (VL_ULL(0x4000000000000000) | (VL_ULL(0x3ffffffffffffc00) 
					     & (vlTOPp->v__DOT__a_reg_164 
						<< 0xaU))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2 
	= ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							   (0xfffU 
							    & (IData)(
								      (vlTOPp->v__DOT__b_reg_170 
								       >> 0x33U))))) 
					   << 0x33U)) 
	   & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			    & vlTOPp->v__DOT__b_reg_170)));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2 
	= (VL_ULL(0x1ffffffffffffe00) & ((vlTOPp->v__DOT__b_reg_170 
					  | vlTOPp->v__DOT__a_reg_164) 
					 << 9U));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2 
	= ((VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__b_reg_170 
					  << 0xaU)) 
	   < (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
					    << 0xaU)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2 
	= ((VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__a_reg_164 
					  << 0xaU)) 
	   < (VL_ULL(0x3ffffffffffffc00) & (vlTOPp->v__DOT__b_reg_170 
					    << 0xaU)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2 
	= (VL_ULL(0x3ffffffffffffc00) & ((vlTOPp->v__DOT__b_reg_170 
					  | vlTOPp->v__DOT__a_reg_164) 
					 << 0xaU));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2 
	= (0xfffU & ((0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					>> 0x34U))) 
		     - (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
					  >> 0x34U)))));
    // ALWAYS at float64_add_roundAndPackFloat64.v:288
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
		    >> 5U)));
    // ALWAYS at float64_add_roundAndPackFloat64.v:388
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_phi_fu_141_p4 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
		   >> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_21_reg_592)) 
			      | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_23_reg_600)))) 
			     | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596)) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_44_reg_604))))))
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_72_i8_reg_653
	    : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_reg_138);
    // ALWAYS at float64_add_roundAndPackFloat64.v:288
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
		    >> 5U)));
    // ALWAYS at float64_add_roundAndPackFloat64.v:388
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_phi_fu_141_p4 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
		   >> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_21_reg_592)) 
			      | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_23_reg_600)))) 
			     | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596)) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_44_reg_604))))))
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_72_i8_reg_653
	    : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_reg_138);
    // ALWAYS at float64_add.v:211
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at float64_add.v:267
    vlTOPp->buff_ce0 = ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			& (IData)(vlTOPp->ap_start));
    // ALWAYS at float64_add.v:275
    vlTOPp->buff_ce1 = ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			& (IData)(vlTOPp->ap_start));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
	= ((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3)) 
	   + vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149);
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
	= ((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3)) 
	   + vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285);
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__z_6_fu_409_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_47_reg_616)
	    ? (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149)))
	    : ((VL_ULL(0xfffffffffffffffe) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2) 
					| (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_33_i_reg_621)))))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__z_6_fu_409_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_47_reg_616)
	    ? (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285)))
	    : ((VL_ULL(0xfffffffffffffffe) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2) 
					| (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_33_i_reg_621)))))));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i1_fu_517_p2 
	= (VL_ULL(0x3fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3 
					 >> (0x3fU 
					     & VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_70_reg_865)))));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i_fu_623_p2 
	= (VL_ULL(0x3fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3 
					 >> (0x3fU 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__expDiff_4_reg_893))));
    // ALWAYS at float64_add_subFloat64Sigs.v:826
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 
	= ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
	    ? ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315)
	        ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_1_reg_1207
	        : ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310)
		    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_reg_1260
		    : VL_ULL(0))) : VL_ULL(0));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_fu_144_p2 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2) 
	   | ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->v__DOT__a_reg_164 
									  >> 0x33U))))) 
					      << 0x33U)) 
	      & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			       & vlTOPp->v__DOT__a_reg_164))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3 
	= (0x7ffU & ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
					       >> 0x34U))))
		      ? ((IData)(0x7ffU) + (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))
		      : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3 
	= (0xfffU & ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					       >> 0x34U))))
		      ? ((IData)(1U) + (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))
		      : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)));
}

VL_INLINE_OPT void Vfloat64_add::_combo__TOP__7(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_combo__TOP__7\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmptmp_fu_134_p2 = (1U & ((IData)(
						      (vlTOPp->buff_q0 
						       >> 0x3fU)) 
					      ^ (IData)(
							(vlTOPp->buff_q1 
							 >> 0x3fU))));
    // ALWAYS at float64_add.v:211
    vlTOPp->ap_idle = (1U & ((~ (IData)(vlTOPp->ap_start)) 
			     & (IData)(vlTOPp->v__DOT__ap_CS_fsm)));
    // ALWAYS at float64_add.v:267
    vlTOPp->buff_ce0 = ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			& (IData)(vlTOPp->ap_start));
    // ALWAYS at float64_add.v:275
    vlTOPp->buff_ce1 = ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			& (IData)(vlTOPp->ap_start));
}

VL_INLINE_OPT void Vfloat64_add::_sequent__TOP__8(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_sequent__TOP__8\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_add_roundAndPackFloat64.v:288
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
		    >> 5U)));
    // ALWAYS at float64_add_roundAndPackFloat64.v:388
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_phi_fu_141_p4 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm) 
		   >> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_21_reg_592)) 
			      | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_23_reg_600)))) 
			     | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596)) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_44_reg_604))))))
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_72_i8_reg_653
	    : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_reg_138);
    // ALWAYS at float64_add_roundAndPackFloat64.v:288
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm)) 
		 | ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
		    >> 5U)));
    // ALWAYS at float64_add_roundAndPackFloat64.v:388
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_phi_fu_141_p4 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm) 
		   >> 5U) & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_21_reg_592)) 
			      | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_23_reg_600)))) 
			     | ((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596)) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_44_reg_604))))))
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_72_i8_reg_653
	    : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_reg_138);
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
	= ((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3)) 
	   + vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149);
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
	= ((QData)((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3)) 
	   + vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285);
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__z_6_fu_409_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_47_reg_616)
	    ? (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149)))
	    : ((VL_ULL(0xfffffffffffffffe) & vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2) 
					| (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_33_i_reg_621)))))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__z_6_fu_409_p3 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_47_reg_616)
	    ? (QData)((IData)((VL_ULL(0) != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285)))
	    : ((VL_ULL(0xfffffffffffffffe) & vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2) 
	       | (QData)((IData)((1U & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2) 
					| (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_33_i_reg_621)))))));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i1_fu_517_p2 
	= (VL_ULL(0x3fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3 
					 >> (0x3fU 
					     & VL_NEGATE_I((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_70_reg_865)))));
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i_fu_623_p2 
	= (VL_ULL(0x3fffffffffffffff) & (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3 
					 >> (0x3fU 
					     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__expDiff_4_reg_893))));
    // ALWAYS at float64_add_subFloat64Sigs.v:826
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 
	= ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
	    ? ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315)
	        ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_1_reg_1207
	        : ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310)
		    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_reg_1260
		    : VL_ULL(0))) : VL_ULL(0));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_fu_144_p2 
	= ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2) 
	   | ((VL_ULL(0x7ff0000000000000) == ((QData)((IData)(
							      (0xfffU 
							       & (IData)(
									 (vlTOPp->v__DOT__a_reg_164 
									  >> 0x33U))))) 
					      << 0x33U)) 
	      & (VL_ULL(0) != (VL_ULL(0x7ffffffffffff) 
			       & vlTOPp->v__DOT__a_reg_164))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3 
	= (0x7ffU & ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__b_reg_170 
					       >> 0x34U))))
		      ? ((IData)(0x7ffU) + (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))
		      : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3 
	= (0xfffU & ((0U == (0x7ffU & (IData)((vlTOPp->v__DOT__a_reg_164 
					       >> 0x34U))))
		      ? ((IData)(1U) + (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))
		      : (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)));
    // ALWAYS at float64_add_addFloat64Sigs.v:474
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm)) 
		 | (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		     >> 9U) & (~ (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
				     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
				    | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
				   | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
				  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done)))))));
    // ALWAYS at float64_add_addFloat64Sigs.v:621
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_NS_fsm 
	= ((0x400U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
	    ? ((0x200U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
	        ? 0U : ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			 ? 0U : ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				  ? 0U : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					   ? 0U : (
						   (0x20U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((0x10U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((8U 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((4U 
						       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						       ? 0U
						       : 
						      ((2U 
							& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						        ? 0U
						        : 
						       ((1U 
							 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
							 ? 0U
							 : 0x200U))))))))))
	    : ((0x200U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
	        ? ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		    ? 0U : ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			     ? 0U : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				      ? 0U : ((0x20U 
					       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					       ? 0U
					       : ((0x10U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((8U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((4U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((2U 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((1U 
						       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						       ? 0U
						       : 
						      ((1U 
							& (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
							      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
							     | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
								 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
								& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
							    | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
								 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
								& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
							       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
							   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done))))
						        ? 0x200U
						        : 1U))))))))))
	        : ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		    ? ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		        ? 0U : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				 ? 0U : ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					  ? 0U : ((0x10U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((8U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((4U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((2U 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((1U 
						       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						       ? 0U
						       : 0x200U))))))))
		    : ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		        ? ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			    ? 0U : ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				     ? 0U : ((0x10U 
					      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					       ? 0U
					       : ((4U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((2U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 0x100U)))))))
		        : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			    ? ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			        ? 0U : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					 ? 0U : ((8U 
						  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((4U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((2U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 0x80U))))))
			    : ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			        ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				    ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					     ? 0U : 
					    ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					       ? 0U
					       : ((1U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 0x40U)))))
			        : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				    ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				        ? 0U : ((4U 
						 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						 ? 0U
						 : 
						((2U 
						  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((1U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 0x200U))))
				    : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				        ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					    ? 0U : 
					   ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					     ? 0U : 
					    ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					      ? 0U : 0x80U)))
				        : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					    ? ((2U 
						& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					        ? 0U
					        : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 8U))
					    : ((2U 
						& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					        ? (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 0x200U)
					        : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 
						   (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
						       & (0x7ffU 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						     & (VL_ULL(0) 
							!= 
							(VL_ULL(0x1ffffffffffffe00) 
							 & (vlTOPp->v__DOT__a_reg_164 
							    << 9U))))
						     ? 0x400U
						     : 
						    ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
						       & (0x7ffU 
							  != 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))
						      ? 0x20U
						      : 
						     ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							 & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU)) 
							& (0x7ffU 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->v__DOT__b_reg_170 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  != 
							  (VL_ULL(0x1ffffffffffffe00) 
							   & (vlTOPp->v__DOT__b_reg_170 
							      << 9U))))
						       ? 0x10U
						       : 
						      (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							 & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU)) 
							& (0x7ffU 
							   != 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->v__DOT__b_reg_170 
								       >> 0x34U)))))
						        ? 4U
						        : 
						       ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							   & (~ 
							      ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							       >> 0xbU))) 
							  & (0x7ffU 
							     == 
							     (0x7ffU 
							      & (IData)(
									(vlTOPp->v__DOT__a_reg_164 
									 >> 0x34U))))) 
							 & (VL_ULL(0) 
							    != vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2))
							 ? 2U
							 : 
							(((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							  & ((((((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
								  & (~ 
								     ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								      >> 0xbU))) 
								 & (0x7ffU 
								    != 
								    (0x7ffU 
								     & (IData)(
									       (vlTOPp->v__DOT__a_reg_164 
										>> 0x34U))))) 
								& (0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->v__DOT__a_reg_164 
									       >> 0x34U))))) 
							       | (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
								    & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								       >> 0xbU)) 
								   & (0x7ffU 
								      == 
								      (0x7ffU 
								       & (IData)(
										(vlTOPp->v__DOT__b_reg_170 
										>> 0x34U))))) 
								  & (VL_ULL(0) 
								     == 
								     (VL_ULL(0x1ffffffffffffe00) 
								      & (vlTOPp->v__DOT__b_reg_170 
									 << 9U))))) 
							      | (((0x7ffU 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->v__DOT__a_reg_164 
									       >> 0x34U)))) 
								  & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
								 & (VL_ULL(0) 
								    == 
								    (VL_ULL(0x1ffffffffffffe00) 
								     & (vlTOPp->v__DOT__a_reg_164 
									<< 9U))))) 
							     | (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
								  & (~ 
								     ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								      >> 0xbU))) 
								 & (0x7ffU 
								    == 
								    (0x7ffU 
								     & (IData)(
									       (vlTOPp->v__DOT__a_reg_164 
										>> 0x34U))))) 
								& (VL_ULL(0) 
								   == vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2))))
							  ? 0x200U
							  : 
							 ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							      & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							     & (~ 
								((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU))) 
							    & (0x7ffU 
							       != 
							       (0x7ffU 
								& (IData)(
									  (vlTOPp->v__DOT__a_reg_164 
									   >> 0x34U))))) 
							   & (0U 
							      != 
							      (0x7ffU 
							       & (IData)(
									 (vlTOPp->v__DOT__a_reg_164 
									  >> 0x34U)))))
							   ? 0x100U
							   : 1U)))))))
						    : 0U)))))))))));
    // ALWAYS at float64_add_roundAndPackFloat64.v:312
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_return 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_phi_fu_141_p4
	    : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_return_preg);
    // ALWAYS at float64_add_subFloat64Sigs.v:642
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm)) 
		 | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		     >> 0xcU) & (~ ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
				       | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
				      | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
					 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				     | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
					 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done)))))));
    // ALWAYS at float64_add_subFloat64Sigs.v:839
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_NS_fsm 
	= (((((((((1U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm)) 
		  | (2U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
		 | (4U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
		| (8U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	       | (0x10U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	      | (0x20U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	     | (0x40U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	    | (0x80U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm)))
	    ? ((1U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
	        ? (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
		      & (0x7ffU == (0x7ffU & (IData)(
						     (vlTOPp->v__DOT__a_reg_164 
						      >> 0x34U))))) 
		     & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
		    & (VL_ULL(0) != (VL_ULL(0x3ffffffffffffc00) 
				     & (vlTOPp->v__DOT__a_reg_164 
					<< 0xaU))))
		    ? 0x2000U : ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
				   & (0x7ffU != (0x7ffU 
						 & (IData)(
							   (vlTOPp->v__DOT__a_reg_164 
							    >> 0x34U))))) 
				  & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))
				  ? 0x40U : ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						& ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
						   >> 0xbU)) 
					       & (0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->v__DOT__b_reg_170 
							      >> 0x34U))))) 
					      & (VL_ULL(0) 
						 != 
						 (VL_ULL(0x3ffffffffffffc00) 
						  & (vlTOPp->v__DOT__b_reg_170 
						     << 0xaU))))
					      ? 0x20U
					      : (((
						   ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						   & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
						      >> 0xbU)) 
						  & (0x7ffU 
						     != 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->v__DOT__b_reg_170 
								 >> 0x34U)))))
						  ? 4U
						  : 
						 ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						      & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						     & (~ 
							((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							 >> 0xbU))) 
						    & (0x7ffU 
						       == 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->v__DOT__a_reg_164 
								   >> 0x34U))))) 
						   & (VL_ULL(0) 
						      != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2))
						   ? 2U
						   : 
						  (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						    & (((((((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
							     & (~ 
								((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU))) 
							    & (0x7ffU 
							       != 
							       (0x7ffU 
								& (IData)(
									  (vlTOPp->v__DOT__a_reg_164 
									   >> 0x34U))))) 
							   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2))) 
							 | (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
							      & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU)) 
							     & (0x7ffU 
								== 
								(0x7ffU 
								 & (IData)(
									   (vlTOPp->v__DOT__b_reg_170 
									    >> 0x34U))))) 
							    & (VL_ULL(0) 
							       == 
							       (VL_ULL(0x3ffffffffffffc00) 
								& (vlTOPp->v__DOT__b_reg_170 
								   << 0xaU))))) 
							| (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
							     & (~ 
								((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU))) 
							    & (0x7ffU 
							       == 
							       (0x7ffU 
								& (IData)(
									  (vlTOPp->v__DOT__a_reg_164 
									   >> 0x34U))))) 
							   & (VL_ULL(0) 
							      == vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2))) 
						       | (((0x7ffU 
							    == 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->v__DOT__a_reg_164 
									>> 0x34U)))) 
							   & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							  & (VL_ULL(0) 
							     == 
							     (VL_ULL(0x3ffffffffffffc00) 
							      & (vlTOPp->v__DOT__a_reg_164 
								 << 0xaU))))))
						    ? 0x1000U
						    : 
						   (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
							 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							& (~ 
							   ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU))) 
						       & (0x7ffU 
							  != 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2))
						     ? 8U
						     : 
						    ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
							 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							& (~ 
							   ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU))) 
						       & (0x7ffU 
							  != 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))
						      ? 0x80U
						      : 1U))))))))
	        : ((2U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
		    ? 0x1000U : ((4U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
				  ? 8U : ((8U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					   ? 0x10U : 
					  ((0x10U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					    ? 0x100U
					    : ((0x20U 
						== (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					        ? 0x1000U
					        : (
						   (0x40U 
						    == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
						    ? 0x80U
						    : 0x10U)))))))
	    : ((0x100U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
	        ? 0x200U : ((0x200U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
			     ? 0x400U : ((0x400U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					  ? 0x800U : 
					 ((0x800U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					   ? 0x1000U
					   : ((0x1000U 
					       == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					       ? ((
						   (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
						       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
						      | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
							 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
						     | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
							 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
							& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
						    | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
							 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
							& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
						   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done)))
						   ? 0x1000U
						   : 1U)
					       : ((0x2000U 
						   == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
						   ? 0x1000U
						   : 0U)))))));
    // ALWAYS at float64_add_roundAndPackFloat64.v:312
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_return 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_phi_fu_141_p4
	    : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_return_preg);
    // ALWAYS at float64_add_roundAndPackFloat64.v:395
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_NS_fsm 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	    ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	        ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			 ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				  ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
					   ? 0U : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
						    ? 0U
						    : 1U)))))
	    : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	        ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		    ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			     ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				      ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
					       ? 0U
					       : 0x20U))))
	        : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		    ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		        ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				 ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
					  ? 0U : 0x10U)))
		    : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		        ? ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			    ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				     ? 0U : 8U)) : 
		       ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			 ? ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			     ? 0U : ((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
				       & VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
				      | (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
					  & (0x7fdU 
					     == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
					 & (IData)(
						   (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
						    >> 0x3fU))))
				      ? 0x20U : (((
						   (((0x7fcU 
						      < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
						     & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
						    & (0x7fdU 
						       != (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
						   & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
						      >> 0xbU)) 
						  | ((((0x7fcU 
							< (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
						       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
						      & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
							 >> 0xbU)) 
						     & (~ (IData)(
								  (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
								   >> 0x3fU)))))
						  ? 4U
						  : 8U)))
			 : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			     ? ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg)
				 ? 2U : 1U) : 0U))))));
    // ALWAYS at float64_add_roundAndPackFloat64.v:395
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_NS_fsm 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	    ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	        ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			 ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				  ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
					   ? 0U : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
						    ? 0U
						    : 1U)))))
	    : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	        ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		    ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			     ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				      ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
					       ? 0U
					       : 0x20U))))
	        : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		    ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		        ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				 ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
					  ? 0U : 0x10U)))
		    : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		        ? ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			    ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				     ? 0U : 8U)) : 
		       ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			 ? ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			     ? 0U : ((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
				       & VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
				      | (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
					  & (0x7fdU 
					     == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
					 & (IData)(
						   (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
						    >> 0x3fU))))
				      ? 0x20U : (((
						   (((0x7fcU 
						      < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
						     & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
						    & (0x7fdU 
						       != (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
						   & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
						      >> 0xbU)) 
						  | ((((0x7fcU 
							< (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
						       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
						      & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
							 >> 0xbU)) 
						     & (~ (IData)(
								  (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
								   >> 0x3fU)))))
						  ? 4U
						  : 8U)))
			 : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			     ? ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg)
				 ? 2U : 1U) : 0U))))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_fu_767_p3 
	= ((0U == (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 
			   >> 0x20U))) ? (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4)
	    : (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 
		       >> 0x20U)));
}

void Vfloat64_add::_settle__TOP__9(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_settle__TOP__9\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_add_addFloat64Sigs.v:474
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm)) 
		 | (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		     >> 9U) & (~ (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
				     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
				    | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
				   | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
				       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
				      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
				  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done)))))));
    // ALWAYS at float64_add_addFloat64Sigs.v:621
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_NS_fsm 
	= ((0x400U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
	    ? ((0x200U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
	        ? 0U : ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			 ? 0U : ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				  ? 0U : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					   ? 0U : (
						   (0x20U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((0x10U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((8U 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((4U 
						       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						       ? 0U
						       : 
						      ((2U 
							& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						        ? 0U
						        : 
						       ((1U 
							 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
							 ? 0U
							 : 0x200U))))))))))
	    : ((0x200U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
	        ? ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		    ? 0U : ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			     ? 0U : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				      ? 0U : ((0x20U 
					       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					       ? 0U
					       : ((0x10U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((8U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((4U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((2U 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((1U 
						       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						       ? 0U
						       : 
						      ((1U 
							& (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
							      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
							     | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
								 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
								& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
							    | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
								 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
								& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
							       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
							   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done))))
						        ? 0x200U
						        : 1U))))))))))
	        : ((0x100U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		    ? ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		        ? 0U : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				 ? 0U : ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					  ? 0U : ((0x10U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((8U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((4U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((2U 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((1U 
						       & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						       ? 0U
						       : 0x200U))))))))
		    : ((0x80U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
		        ? ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			    ? 0U : ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				     ? 0U : ((0x10U 
					      & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					       ? 0U
					       : ((4U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((2U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 0x100U)))))))
		        : ((0x40U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			    ? ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			        ? 0U : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					 ? 0U : ((8U 
						  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((4U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((2U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						     ? 0U
						     : 0x80U))))))
			    : ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
			        ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				    ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					     ? 0U : 
					    ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					       ? 0U
					       : ((1U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 0x40U)))))
			        : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				    ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				        ? 0U : ((4U 
						 & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						 ? 0U
						 : 
						((2U 
						  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((1U 
						   & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						   ? 0U
						   : 0x200U))))
				    : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
				        ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					    ? 0U : 
					   ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					     ? 0U : 
					    ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					      ? 0U : 0x80U)))
				        : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					    ? ((2U 
						& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					        ? 0U
					        : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 8U))
					    : ((2U 
						& (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
					        ? (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 0U
						    : 0x200U)
					        : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm))
						    ? 
						   (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
						       & (0x7ffU 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						     & (VL_ULL(0) 
							!= 
							(VL_ULL(0x1ffffffffffffe00) 
							 & (vlTOPp->v__DOT__a_reg_164 
							    << 9U))))
						     ? 0x400U
						     : 
						    ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
						       & (0x7ffU 
							  != 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))
						      ? 0x20U
						      : 
						     ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							 & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU)) 
							& (0x7ffU 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->v__DOT__b_reg_170 
								       >> 0x34U))))) 
						       & (VL_ULL(0) 
							  != 
							  (VL_ULL(0x1ffffffffffffe00) 
							   & (vlTOPp->v__DOT__b_reg_170 
							      << 9U))))
						       ? 0x10U
						       : 
						      (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							  & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							 & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU)) 
							& (0x7ffU 
							   != 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->v__DOT__b_reg_170 
								       >> 0x34U)))))
						        ? 4U
						        : 
						       ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							   & (~ 
							      ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							       >> 0xbU))) 
							  & (0x7ffU 
							     == 
							     (0x7ffU 
							      & (IData)(
									(vlTOPp->v__DOT__a_reg_164 
									 >> 0x34U))))) 
							 & (VL_ULL(0) 
							    != vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2))
							 ? 2U
							 : 
							(((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							  & ((((((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
								  & (~ 
								     ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								      >> 0xbU))) 
								 & (0x7ffU 
								    != 
								    (0x7ffU 
								     & (IData)(
									       (vlTOPp->v__DOT__a_reg_164 
										>> 0x34U))))) 
								& (0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->v__DOT__a_reg_164 
									       >> 0x34U))))) 
							       | (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
								    & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								       >> 0xbU)) 
								   & (0x7ffU 
								      == 
								      (0x7ffU 
								       & (IData)(
										(vlTOPp->v__DOT__b_reg_170 
										>> 0x34U))))) 
								  & (VL_ULL(0) 
								     == 
								     (VL_ULL(0x1ffffffffffffe00) 
								      & (vlTOPp->v__DOT__b_reg_170 
									 << 9U))))) 
							      | (((0x7ffU 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->v__DOT__a_reg_164 
									       >> 0x34U)))) 
								  & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
								 & (VL_ULL(0) 
								    == 
								    (VL_ULL(0x1ffffffffffffe00) 
								     & (vlTOPp->v__DOT__a_reg_164 
									<< 9U))))) 
							     | (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
								  & (~ 
								     ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								      >> 0xbU))) 
								 & (0x7ffU 
								    == 
								    (0x7ffU 
								     & (IData)(
									       (vlTOPp->v__DOT__a_reg_164 
										>> 0x34U))))) 
								& (VL_ULL(0) 
								   == vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2))))
							  ? 0x200U
							  : 
							 ((((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg) 
							      & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							     & (~ 
								((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU))) 
							    & (0x7ffU 
							       != 
							       (0x7ffU 
								& (IData)(
									  (vlTOPp->v__DOT__a_reg_164 
									   >> 0x34U))))) 
							   & (0U 
							      != 
							      (0x7ffU 
							       & (IData)(
									 (vlTOPp->v__DOT__a_reg_164 
									  >> 0x34U)))))
							   ? 0x100U
							   : 1U)))))))
						    : 0U)))))))))));
    // ALWAYS at float64_add_roundAndPackFloat64.v:312
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_return 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_phi_fu_141_p4
	    : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_return_preg);
    // ALWAYS at float64_add_subFloat64Sigs.v:642
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done 
	= (1U & (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg)) 
		  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm)) 
		 | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
		     >> 0xcU) & (~ ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
				       | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
				      | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
					 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				     | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
					  & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
					 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
					& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
				    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done)))))));
    // ALWAYS at float64_add_subFloat64Sigs.v:839
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_NS_fsm 
	= (((((((((1U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm)) 
		  | (2U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
		 | (4U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
		| (8U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	       | (0x10U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	      | (0x20U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	     | (0x40U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))) 
	    | (0x80U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm)))
	    ? ((1U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
	        ? (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
		      & (0x7ffU == (0x7ffU & (IData)(
						     (vlTOPp->v__DOT__a_reg_164 
						      >> 0x34U))))) 
		     & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
		    & (VL_ULL(0) != (VL_ULL(0x3ffffffffffffc00) 
				     & (vlTOPp->v__DOT__a_reg_164 
					<< 0xaU))))
		    ? 0x2000U : ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
				   & (0x7ffU != (0x7ffU 
						 & (IData)(
							   (vlTOPp->v__DOT__a_reg_164 
							    >> 0x34U))))) 
				  & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)))
				  ? 0x40U : ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						& ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
						   >> 0xbU)) 
					       & (0x7ffU 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->v__DOT__b_reg_170 
							      >> 0x34U))))) 
					      & (VL_ULL(0) 
						 != 
						 (VL_ULL(0x3ffffffffffffc00) 
						  & (vlTOPp->v__DOT__b_reg_170 
						     << 0xaU))))
					      ? 0x20U
					      : (((
						   ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						    & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						   & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
						      >> 0xbU)) 
						  & (0x7ffU 
						     != 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->v__DOT__b_reg_170 
								 >> 0x34U)))))
						  ? 4U
						  : 
						 ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						      & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
						     & (~ 
							((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							 >> 0xbU))) 
						    & (0x7ffU 
						       == 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->v__DOT__a_reg_164 
								   >> 0x34U))))) 
						   & (VL_ULL(0) 
						      != vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2))
						   ? 2U
						   : 
						  (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
						    & (((((((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
							     & (~ 
								((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU))) 
							    & (0x7ffU 
							       != 
							       (0x7ffU 
								& (IData)(
									  (vlTOPp->v__DOT__a_reg_164 
									   >> 0x34U))))) 
							   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2))) 
							 | (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
							      & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU)) 
							     & (0x7ffU 
								== 
								(0x7ffU 
								 & (IData)(
									   (vlTOPp->v__DOT__b_reg_170 
									    >> 0x34U))))) 
							    & (VL_ULL(0) 
							       == 
							       (VL_ULL(0x3ffffffffffffc00) 
								& (vlTOPp->v__DOT__b_reg_170 
								   << 0xaU))))) 
							| (((VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2)) 
							     & (~ 
								((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
								 >> 0xbU))) 
							    & (0x7ffU 
							       == 
							       (0x7ffU 
								& (IData)(
									  (vlTOPp->v__DOT__a_reg_164 
									   >> 0x34U))))) 
							   & (VL_ULL(0) 
							      == vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2))) 
						       | (((0x7ffU 
							    == 
							    (0x7ffU 
							     & (IData)(
								       (vlTOPp->v__DOT__a_reg_164 
									>> 0x34U)))) 
							   & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							  & (VL_ULL(0) 
							     == 
							     (VL_ULL(0x3ffffffffffffc00) 
							      & (vlTOPp->v__DOT__a_reg_164 
								 << 0xaU))))))
						    ? 0x1000U
						    : 
						   (((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
							 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							& (~ 
							   ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU))) 
						       & (0x7ffU 
							  != 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))) 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2))
						     ? 8U
						     : 
						    ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg) 
							 & VL_GTES_III(1,12,12, 0U, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2))) 
							& (~ 
							   ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2) 
							    >> 0xbU))) 
						       & (0x7ffU 
							  != 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->v__DOT__a_reg_164 
								      >> 0x34U))))) 
						      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2))
						      ? 0x80U
						      : 1U))))))))
	        : ((2U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
		    ? 0x1000U : ((4U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
				  ? 8U : ((8U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					   ? 0x10U : 
					  ((0x10U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					    ? 0x100U
					    : ((0x20U 
						== (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					        ? 0x1000U
					        : (
						   (0x40U 
						    == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
						    ? 0x80U
						    : 0x10U)))))))
	    : ((0x100U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
	        ? 0x200U : ((0x200U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
			     ? 0x400U : ((0x400U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					  ? 0x800U : 
					 ((0x800U == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					   ? 0x1000U
					   : ((0x1000U 
					       == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
					       ? ((
						   (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
						       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
						      | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
							 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
						     | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
							 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
							& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
						    | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
							 & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
							& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
						   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done)))
						   ? 0x1000U
						   : 1U)
					       : ((0x2000U 
						   == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm))
						   ? 0x1000U
						   : 0U)))))));
    // ALWAYS at float64_add_roundAndPackFloat64.v:312
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_return 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_phi_fu_141_p4
	    : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_return_preg);
    // ALWAYS at float64_add_roundAndPackFloat64.v:395
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_NS_fsm 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	    ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	        ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			 ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				  ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
					   ? 0U : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
						    ? 0U
						    : 1U)))))
	    : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
	        ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		    ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			     ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				      ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
					       ? 0U
					       : 0x20U))))
	        : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		    ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		        ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				 ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
					  ? 0U : 0x10U)))
		    : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
		        ? ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			    ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
				     ? 0U : 8U)) : 
		       ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			 ? ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			     ? 0U : ((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
				       & VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
				      | (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
					  & (0x7fdU 
					     == (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
					 & (IData)(
						   (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
						    >> 0x3fU))))
				      ? 0x20U : (((
						   (((0x7fcU 
						      < (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
						     & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
						    & (0x7fdU 
						       != (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
						   & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
						      >> 0xbU)) 
						  | ((((0x7fcU 
							< (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139)) 
						       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139))) 
						      & ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139) 
							 >> 0xbU)) 
						     & (~ (IData)(
								  (vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2 
								   >> 0x3fU)))))
						  ? 4U
						  : 8U)))
			 : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm))
			     ? ((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg)
				 ? 2U : 1U) : 0U))))));
    // ALWAYS at float64_add_roundAndPackFloat64.v:395
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_NS_fsm 
	= ((0x20U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	    ? ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	        ? 0U : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			 ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				  ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
					   ? 0U : (
						   (1U 
						    & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
						    ? 0U
						    : 1U)))))
	    : ((0x10U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
	        ? ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		    ? 0U : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			     ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				      ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
					       ? 0U
					       : 0x20U))))
	        : ((8U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		    ? ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		        ? 0U : ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				 ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
					  ? 0U : 0x10U)))
		    : ((4U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
		        ? ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			    ? 0U : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
				     ? 0U : 8U)) : 
		       ((2U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			 ? ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			     ? 0U : ((((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
				       & VL_LTS_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
				      | (((0x7fcU < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
					  & (0x7fdU 
					     == (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
					 & (IData)(
						   (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
						    >> 0x3fU))))
				      ? 0x20U : (((
						   (((0x7fcU 
						      < (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
						     & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
						    & (0x7fdU 
						       != (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
						   & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
						      >> 0xbU)) 
						  | ((((0x7fcU 
							< (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280)) 
						       & VL_GTES_III(1,12,12, 0x7fdU, (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280))) 
						      & ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280) 
							 >> 0xbU)) 
						     & (~ (IData)(
								  (vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2 
								   >> 0x3fU)))))
						  ? 4U
						  : 8U)))
			 : ((1U & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm))
			     ? ((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg)
				 ? 2U : 1U) : 0U))))));
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_fu_767_p3 
	= ((0U == (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 
			   >> 0x20U))) ? (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4)
	    : (IData)((vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4 
		       >> 0x20U)));
    // ALWAYS at float64_add_addFloat64Sigs.v:614
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_phi_fu_162_p16 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		   >> 9U) & ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
			       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
			      | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
			     | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834))))))
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_return
	    : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159);
    // ALWAYS at float64_add.v:203
    vlTOPp->ap_done = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 3U) & (~ (((~ (IData)(vlTOPp->v__DOT__tmptmp_reg_182)) 
					    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done))) 
					   | ((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done)))))));
    // ALWAYS at float64_add.v:219
    vlTOPp->ap_ready = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       >> 3U) & (~ (((~ (IData)(vlTOPp->v__DOT__tmptmp_reg_182)) 
					     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done))) 
					    | ((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
					       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done)))))));
    // ALWAYS at float64_add.v:283
    vlTOPp->result_ap_vld = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				    >> 3U) & (~ (((~ (IData)(vlTOPp->v__DOT__tmptmp_reg_182)) 
						  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done))) 
						 | ((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
						    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done)))))));
    // ALWAYS at float64_add.v:304
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 9U) | (((IData)(vlTOPp->v__DOT__tmptmp_fu_134_p2) 
					<< 8U) | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done) 
						   << 7U) 
						  | (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done) 
						      << 6U) 
						     | (((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
							 << 5U) 
							| (IData)(vlTOPp->v__DOT__ap_CS_fsm))))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
    // ALWAYS at float64_add_subFloat64Sigs.v:802
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_phi_fu_236_p16 
	= ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	     >> 0xcU) & (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
			    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
			   | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
			       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
			      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
			  | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
			       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
			      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
			     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
			 | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
			      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
			     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
			    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))))
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_return
	    : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232);
}

VL_INLINE_OPT void Vfloat64_add::_sequent__TOP__10(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_sequent__TOP__10\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_add_addFloat64Sigs.v:614
    vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_phi_fu_162_p16 
	= ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
		   >> 9U) & ((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
			       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
			      | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				  & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
			     | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
				  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
				 & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
				& (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834))))))
	    ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_return
	    : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159);
    // ALWAYS at float64_add.v:203
    vlTOPp->ap_done = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			      >> 3U) & (~ (((~ (IData)(vlTOPp->v__DOT__tmptmp_reg_182)) 
					    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done))) 
					   | ((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
					      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done)))))));
    // ALWAYS at float64_add.v:219
    vlTOPp->ap_ready = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       >> 3U) & (~ (((~ (IData)(vlTOPp->v__DOT__tmptmp_reg_182)) 
					     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done))) 
					    | ((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
					       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done)))))));
    // ALWAYS at float64_add.v:283
    vlTOPp->result_ap_vld = (1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				    >> 3U) & (~ (((~ (IData)(vlTOPp->v__DOT__tmptmp_reg_182)) 
						  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done))) 
						 | ((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
						    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done)))))));
    // ALWAYS at float64_add_subFloat64Sigs.v:802
    vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_phi_fu_236_p16 
	= ((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
	     >> 0xcU) & (((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
			    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
			   | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
			       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
			      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
			  | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
			       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
			      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
			     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
			 | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
			      & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
			     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
			    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))))
	    ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_return
	    : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232);
    vlTOPp->result = ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
		       ? ((IData)(vlTOPp->v__DOT__tmptmp_reg_182)
			   ? ((IData)(vlTOPp->v__DOT__tmptmp_reg_182)
			       ? ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
					  >> 0xcU) 
					 & (~ ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
						   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
						  | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
						    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
						    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
					       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done))))))
				   ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_phi_fu_236_p16
				   : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_return_preg)
			       : VL_ULL(0)) : ((1U 
						& (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
						    >> 9U) 
						   & (~ 
						      (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
							 | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
							     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
							    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
							| ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
							     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
							    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
							   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
						       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done))))))
					        ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_phi_fu_162_p16
					        : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_return_preg))
		       : VL_ULL(0));
}

VL_INLINE_OPT void Vfloat64_add::_combo__TOP__11(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_combo__TOP__11\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at float64_add.v:304
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ap_start) 
			     << 9U) | (((IData)(vlTOPp->v__DOT__tmptmp_fu_134_p2) 
					<< 8U) | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done) 
						   << 7U) 
						  | (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done) 
						      << 6U) 
						     | (((IData)(vlTOPp->v__DOT__tmptmp_reg_182) 
							 << 5U) 
							| (IData)(vlTOPp->v__DOT__ap_CS_fsm))))));
    vlTOPp->v__DOT__ap_NS_fsm = vlTOPp->__Vtable1_v__DOT__ap_NS_fsm
	[vlTOPp->__Vtableidx1];
}

void Vfloat64_add::_settle__TOP__12(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_settle__TOP__12\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->result = ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
		       ? ((IData)(vlTOPp->v__DOT__tmptmp_reg_182)
			   ? ((IData)(vlTOPp->v__DOT__tmptmp_reg_182)
			       ? ((1U & (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm) 
					  >> 0xcU) 
					 & (~ ((((((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093) 
						   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171))) 
						  | (((IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131)))) 
						 | ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
						      & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115)) 
						    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
						| ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097)) 
						     & (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119)) 
						    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093))) 
						   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101)))) 
					       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done))))))
				   ? vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_phi_fu_236_p16
				   : vlTOPp->v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_return_preg)
			       : VL_ULL(0)) : ((1U 
						& (((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm) 
						    >> 9U) 
						   & (~ 
						      (((((IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822) 
							  & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884))) 
							 | (((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
							     & (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826)) 
							    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851)))) 
							| ((((~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822)) 
							     & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826))) 
							    & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830))) 
							   & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834)))) 
						       & (~ (IData)(vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done))))))
					        ? vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_phi_fu_162_p16
					        : vlTOPp->v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_return_preg))
		       : VL_ULL(0));
}

void Vfloat64_add::_eval(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_eval\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vfloat64_add::_eval_initial(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_eval_initial\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void Vfloat64_add::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::final\n"); );
    // Variables
    Vfloat64_add__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfloat64_add::_eval_settle(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_eval_settle\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
}

VL_INLINE_OPT QData Vfloat64_add::_change_request(Vfloat64_add__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vfloat64_add::_change_request\n"); );
    Vfloat64_add* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
