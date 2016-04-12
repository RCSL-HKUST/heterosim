// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfloat64_add_H_
#define _Vfloat64_add_H_

#include "verilated.h"
#include "Vfloat64_add__Inlines.h"
class Vfloat64_add__Syms;

//----------

VL_MODULE(Vfloat64_add) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(ap_clk,0,0);
    VL_IN8(ap_rst,0,0);
    VL_IN8(ap_start,0,0);
    VL_OUT8(ap_done,0,0);
    VL_OUT8(ap_idle,0,0);
    VL_OUT8(ap_ready,0,0);
    VL_OUT8(buff_address0,0,0);
    VL_OUT8(buff_ce0,0,0);
    VL_OUT8(buff_address1,0,0);
    VL_OUT8(buff_ce1,0,0);
    VL_OUT8(result_ap_vld,0,0);
    //char	__VpadToAlign11[1];
    VL_IN(m,31,0);
    VL_IN(n,31,0);
    VL_OUT(ap_return,31,0);
    VL_IN64(buff_q0,63,0);
    VL_IN64(buff_q1,63,0);
    VL_OUT64(result,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__ap_CS_fsm,4,0);
    VL_SIG8(v__DOT__tmp_reg_176,0,0);
    VL_SIG8(v__DOT__tmptmp_fu_134_p2,0,0);
    VL_SIG8(v__DOT__tmptmp_reg_182,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_done,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_done,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__ap_NS_fsm,4,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_q0,3,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_reg_1093,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_25_reg_1097,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_6_reg_1101,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_fu_403_p2,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_12_reg_1115,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_fu_409_p2,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_18_reg_1119,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_5_reg_1131,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_reg_1147,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_35_reg_1153,4,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_1_reg_1171,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp9_reg_1189,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_23_i_reg_1194,5,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_reg_1212,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp1_reg_1217,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp2_reg_1228,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i5_reg_1235,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_2_i1_reg_1240,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_i1_reg_1250,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__sel_tmp1_i1_reg_1255,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__icmp3_reg_1265,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp24_reg_1275,5,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_done,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSign_assign_1_reg_222,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__shiftCount_1_fu_1020_p2,6,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_310,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_sig_bdd_315,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_CS_fsm,5,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_reg_547,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_29_reg_562,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_21_reg_592,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_22_reg_596,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_23_reg_600,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_44_reg_604,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__count_assign_reg_611,6,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_47_reg_616,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_33_i_reg_621,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_NS_fsm,5,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_fu_144_p2,0,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_propagateFloat64NaN_fu_268__DOT__tmp_78_i7_fu_126_p2,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_reg_822,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_64_reg_826,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_48_reg_830,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_54_reg_834,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_47_reg_851,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_51_reg_855,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_69_reg_860,5,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i7_reg_870,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_s_reg_884,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_46_reg_888,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_66_reg_899,5,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp_reg_904,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__icmp8_reg_918,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i2_reg_923,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_72_reg_928,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_i1_reg_949,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_27_i_reg_955,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_68_reg_960,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_done,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_CS_fsm,5,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_reg_547,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_29_reg_562,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_21_reg_592,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_22_reg_596,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_23_reg_600,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_44_reg_604,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__count_assign_reg_611,6,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_47_reg_616,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_33_i_reg_621,0,0);
    VL_SIG8(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_NS_fsm,5,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_CS_fsm,13,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aExp_reg_1061,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bExp_reg_1066,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__count_assign_1_reg_1142,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_fu_593_p3,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_1_reg_1183,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_i3_12_reg_1280,11,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_1_reg_162,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp_reg_172,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zExp2_reg_210,10,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_fu_331_p2,11,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__expDiff_3_fu_495_p3,11,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_NS_fsm,13,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp4_cast_reg_552,9,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__sel_tmp5_reg_557,9,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_fu_233_p3,9,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundIncrement_4_reg_581,9,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zExp_assign_1_reg_113,11,0);
    VL_SIG16(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__roundBits_1_reg_127,9,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_CS_fsm,10,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aExp_reg_785,10,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bExp_reg_795,10,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_70_reg_865,10,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__expDiff_4_reg_893,10,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_4_reg_130,10,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zExp_2_reg_139,11,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_NS_fsm,10,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp4_cast_reg_552,9,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__sel_tmp5_reg_557,9,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_fu_233_p3,9,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundIncrement_4_reg_581,9,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zExp_assign_1_reg_113,11,0);
    VL_SIG16(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__roundBits_1_reg_127,9,0);
    VL_SIG(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_fu_767_p3,31,0);
    VL_SIG(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_28_reg_1222,31,0);
    VL_SIG(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_a_i_i_i_fu_910_p3,31,0);
    //char	__VpadToAlign212[4];
    VL_SIG64(v__DOT__a_reg_164,63,0);
    VL_SIG64(v__DOT__b_reg_170,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__reg_294,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_13_reg_1071,51,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_14_reg_1082,51,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_fu_483_p3,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_3_reg_1135,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_26_i_reg_1158,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_2_reg_1175,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_4_reg_1202,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_1_reg_1207,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_21_reg_1245,61,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_reg_1260,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_74_i_reg_1285,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255_ap_return,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__aSig_s_reg_144,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_19_reg_153,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_phi_fu_185_p4,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__zSig_assign_reg_182,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__z_5_fu_874_p3,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__bSig_s_reg_192,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_17_reg_201,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_phi_fu_236_p16,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__p_0_reg_232,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_9_fu_433_p2,61,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i_fu_641_p2,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__tmp_22_i8_fu_802_p2,62,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__ap_return_preg,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__z_6_fu_409_p3,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign_2_reg_647,53,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_72_i8_reg_653,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__zSig_assign1_reg_102,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_phi_fu_141_p4,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__p_0_reg_138,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_25_fu_264_p2,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__tmp_28_i_fu_368_p2,63,0);
    VL_SIG64(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__grp_float64_add_roundAndPackFloat64_fu_255__DOT__ap_return_preg,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__reg_214,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_62_reg_800,51,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_cast3_cast_reg_805,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_63_reg_811,51,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_cast2_cast_reg_816,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_fu_482_p3,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_6_reg_912,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_34_reg_933,60,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_fu_605_p3,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_6_reg_943,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_32_reg_965,60,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180_ap_return,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__bSig_1_reg_112,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__aSig_1_reg_121,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_1_reg_149,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_phi_fu_162_p16,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__p_0_reg_159,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_52_fu_361_p2,60,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i1_fu_517_p2,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__tmp_22_i_fu_623_p2,61,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__zSig_2_fu_726_p2,62,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__ap_return_preg,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__z_6_fu_409_p3,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign_2_reg_647,53,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_72_i8_reg_653,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__zSig_assign1_reg_102,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_phi_fu_141_p4,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__p_0_reg_138,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_25_fu_264_p2,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__tmp_28_i_fu_368_p2,63,0);
    VL_SIG64(v__DOT__grp_float64_add_addFloat64Sigs_fu_106__DOT__grp_float64_add_roundAndPackFloat64_fu_180__DOT__ap_return_preg,63,0);
    VL_SIG8(v__DOT__grp_float64_add_subFloat64Sigs_fu_92__DOT__countLeadingZerosHigh_U__DOT__float64_add_subFloat64Sigs_countLeadingZerosHigh_rom_U__DOT__ram[256],3,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__ap_NS_fsm[1024],4,0);
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign1021[1];
    VL_SIG16(__Vtableidx1,9,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign1028[4];
    Vfloat64_add__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vfloat64_add& operator= (const Vfloat64_add&);	///< Copying not allowed
    Vfloat64_add(const Vfloat64_add&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vfloat64_add(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfloat64_add();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfloat64_add__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfloat64_add__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vfloat64_add__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__11(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_combo__TOP__2(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_eval(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vfloat64_add__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vfloat64_add__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
