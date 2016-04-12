// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vencrypt_H_
#define _Vencrypt_H_

#include "verilated.h"
#include "Vencrypt__Inlines.h"
class Vencrypt__Syms;

//----------

VL_MODULE(Vencrypt) {
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
    VL_OUT8(buff_address0,6,0);
    VL_OUT8(buff_ce0,0,0);
    VL_OUT8(buff_we0,0,0);
    VL_OUT8(buff_address1,6,0);
    VL_OUT8(buff_ce1,0,0);
    VL_OUT8(buff_we1,0,0);
    VL_OUT(buff_d0,31,0);
    VL_IN(buff_q0,31,0);
    VL_OUT(buff_d1,31,0);
    VL_IN(buff_q1,31,0);
    VL_IN(m,31,0);
    VL_IN(n,31,0);
    VL_OUT(ap_return,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__out_enc_statemt_q0,7,0);
    VL_SIG8(v__DOT__tmp_1_fu_261_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158_ap_done,0,0);
    VL_SIG8(v__DOT__main_result_reg_336,6,0);
    VL_SIG8(v__DOT__i_3_reg_352,4,0);
    VL_SIG8(v__DOT__tmp_5_reg_367,0,0);
    VL_SIG8(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171_ap_done,0,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182_ap_done,0,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191_ap_done,0,0);
    VL_SIG8(v__DOT__i_1_reg_147,4,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191_ap_start_ap_start_reg,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__Sbox_q0,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__Rcon0_q0,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__reg_659,5,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__grp_fu_847_ap_done,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__reg_663,5,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__round_cast_cast_reg_1476,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__nb_cast_cast_reg_1481,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__j_4_reg_1496,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_s_reg_1501,4,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__exitcond3_fu_679_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_46_reg_1516,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__i_4_reg_1524,2,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_58_reg_1542,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__grp_fu_795_ap_done,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_50_reg_1547,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_78_reg_1614,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_79_reg_1619,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_80_reg_1624,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_98_reg_1634,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_99_reg_1639,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_100_reg_1644,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_1_reg_1649,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__Sbox_load_3_reg_1659,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_67_reg_1674,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_68_reg_1679,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_69_reg_1684,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_88_reg_1699,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_89_reg_1704,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_90_reg_1709,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__Sbox_load_reg_1714,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__or_cond_35_fu_1150_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__or_cond_35_reg_1729,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__i_5_reg_1736,2,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_115_reg_1741,1,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_116_reg_1748,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_117_reg_1753,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_124_reg_1758,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_130_reg_1763,5,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__i_6_reg_1806,2,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__j_reg_344,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__j4_reg_377,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__i_reg_388,2,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__i_1_reg_493,2,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__i_2_reg_552,2,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_0_fu_1122_p2,7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__or_cond_fu_1323_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_47_fu_790_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__start0,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__divisor0,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__divisor0,3,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__sign0,1,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__start0,0,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__divisor0,4,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__divisor0,4,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__sign0,1,0);
    VL_SIG8(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_s_fu_295_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_10_fu_795_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_address0,4,0);
    VL_SIG8(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_address1,4,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_q0,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_q1,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1303,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1307,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1312,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1317,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1322,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1327,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1331,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1335,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1339,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1343,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1347,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1351,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1355,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1359,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1363,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1367,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1371,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1375,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1379,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__reg_1383,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_reg_2103,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_8_reg_2128,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_9_reg_2133,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_52_reg_2188,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_53_reg_2193,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_56_reg_2228,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_59_reg_2253,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_60_reg_2268,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_67_reg_2333,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_68_reg_2348,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_69_reg_2353,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__temp_14_reg_2358,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_load_60_reg_2363,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__temp_15_reg_2383,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_load_62_reg_2388,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_load_63_reg_2413,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_load_64_reg_2418,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_load_65_reg_2443,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_load_66_reg_2448,7,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_75_reg_2463,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_76_reg_2468,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_27_reg_2513,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_28_reg_2518,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_31_reg_2553,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_33_reg_2573,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_34_reg_2578,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_37_reg_2613,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_38_reg_2618,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_40_reg_2638,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_44_reg_2688,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_45_reg_2693,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_10_reg_2718,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_11_reg_2723,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_12_reg_2738,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_14_reg_2758,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_16_reg_2778,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_18_reg_2798,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_20_reg_2818,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_21_reg_2833,6,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__statemt_addr_22_reg_2838,6,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__ap_CS_fsm,7,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__sel_tmp1_cast_reg_377,3,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__tmp_17_reg_382,0,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__nb_1_fu_253_p3,3,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__nb_1_reg_392,3,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__j_6_reg_410,3,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__exitcond_fu_273_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__tmp_62_reg_431,4,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__statemt_addr_reg_437,6,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__statemt_addr_77_reg_442,6,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__statemt_addr_78_reg_457,6,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__statemt_addr_79_reg_462,6,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__j_reg_146,3,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__sel_tmp9_fu_233_p2,0,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__ap_NS_fsm,7,0);
    VL_SIG8(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__encrypt_mul_32s_4ns_32_3_U10__DOT__encrypt_mul_32s_4ns_32_3_Mul3S_0_U__DOT__b_reg0,3,0);
    //char	__VpadToAlign195[1];
    VL_SIG16(v__DOT__ap_CS_fsm,15,0);
    VL_SIG16(v__DOT__word_address0,8,0);
    VL_SIG16(v__DOT__word_address1,8,0);
    VL_SIG16(v__DOT__ap_NS_fsm,15,0);
    VL_SIG16(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_44_cast_reg_1506,9,0);
    VL_SIG16(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_63_reg_1534,9,0);
    VL_SIG16(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_59_reg_1556,9,0);
    VL_SIG16(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_113_reg_1768,9,0);
    VL_SIG16(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_114_reg_1773,9,0);
    VL_SIG16(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_123_reg_1816,9,0);
    VL_SIG16(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_121_fu_1417_p2,9,0);
    VL_SIG16(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ap_CS_fsm,13,0);
    VL_SIG16(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_45_reg_910,9,0);
    VL_SIG16(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ap_NS_fsm,13,0);
    VL_SIG16(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__tmp_132_reg_415,9,0);
    //char	__VpadToAlign226[2];
    VL_SIG(v__DOT__word_q0,31,0);
    VL_SIG(v__DOT__word_q1,31,0);
    VL_SIG(v__DOT__round,31,0);
    VL_SIG(v__DOT__nb,31,0);
    VL_SIG(v__DOT__reg_233,31,0);
    VL_SIG(v__DOT__type_reg_320,31,0);
    VL_SIG(v__DOT__i_2_reg_344,31,0);
    VL_SIG(v__DOT__i_reg_135,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__j_cast_reg_1486,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_61_cast_reg_1511,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_0_1_reg_1589,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_1_1_reg_1594,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_77_reg_1694,30,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_3_fu_1337_p3,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_4_fu_1353_p3,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_7_fu_1369_p3,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_9_fu_1377_p3,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_14_reg_1821,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__j_5_fu_1456_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__j_1_reg_399,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_22_phi_fu_412_p4,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_22_reg_409,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_12_phi_fu_422_p4,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_12_reg_419,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_02_phi_fu_432_p4,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_02_reg_429,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_phi_fu_442_p4,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_reg_439,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_31_reg_449,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_2_s_reg_460,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_5_reg_471,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_8_reg_482,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_3_2_reg_504,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_2_3_reg_516,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_1_3_reg_528,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__temp_0_3_reg_540,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__grp_fu_795_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__grp_fu_847_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__dividend0,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__dividend0,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__dividend_tmp,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__remd_tmp,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__dividend_tmp_mux,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__comb_tmp,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__dividend0,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__dividend_tmp,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__remd_tmp,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__dividend_tmp_mux,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__comb_tmp,31,0);
    VL_SIG(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_mux_4to1_sel2_32_1_U3__DOT__mux_2_0,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_reg_866,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__j_3_reg_874,30,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_2_reg_879,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_24_fu_334_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_24_reg_905,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__x_6_reg_917,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_9_reg_924,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_load_1_reg_929,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__x_reg_934,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__storemerge_v_reg_940,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_33_tmp_9_reg_975,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__storemerge8_v_reg_990,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__word_load_1_reg_995,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp4_reg_1000,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_43_tmp_s_reg_1005,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__storemerge9_v_reg_1010,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp7_reg_1015,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp10_reg_1020,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp12_reg_1025,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_43_reg_1030,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__j_2_reg_1038,30,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_14_reg_1043,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_d0,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_q0,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_d1,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_q1,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__j_reg_243,30,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__j_1_reg_254,30,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__x_3_fu_538_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__x_5_fu_621_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__x_7_fu_697_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__encrypt_mul_32s_32s_32_6_U18__DOT__encrypt_mul_32s_32s_32_6_MulnS_0_U__DOT__a_reg0,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__encrypt_mul_32s_32s_32_6_U18__DOT__encrypt_mul_32s_32s_32_6_MulnS_0_U__DOT__b_reg0,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__encrypt_mul_32s_32s_32_6_U18__DOT__encrypt_mul_32s_32s_32_6_MulnS_0_U__DOT__buff0,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__encrypt_mul_32s_32s_32_6_U18__DOT__encrypt_mul_32s_32s_32_6_MulnS_0_U__DOT__buff1,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__encrypt_mul_32s_32s_32_6_U18__DOT__encrypt_mul_32s_32s_32_6_MulnS_0_U__DOT__buff2,31,0);
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__encrypt_mul_32s_32s_32_6_U18__DOT__encrypt_mul_32s_32s_32_6_MulnS_0_U__DOT__buff3,31,0);
    VL_SIGW(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__ap_CS_fsm,69,0,3);
    //char	__VpadToAlign588[4];
    VL_SIGW(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__ap_NS_fsm,69,0,3);
    VL_SIG(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__reg_169,31,0);
    VL_SIG(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__reg_174,31,0);
    VL_SIG(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__tmp_reg_402,31,0);
    VL_SIG(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__tmp_s_fu_284_p2,31,0);
    VL_SIG(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__encrypt_mul_32s_4ns_32_3_U10__DOT__encrypt_mul_32s_4ns_32_3_Mul3S_0_U__DOT__a_reg0,31,0);
    VL_SIG(v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__encrypt_mul_32s_4ns_32_3_U10__DOT__encrypt_mul_32s_4ns_32_3_Mul3S_0_U__DOT__buff0,31,0);
    //char	__VpadToAlign628[4];
    VL_SIG64(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__ap_CS_fsm,49,0);
    VL_SIG64(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__tmp_52_reg_1551,63,0);
    VL_SIG64(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__ap_NS_fsm,49,0);
    VL_SIG64(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__cal_tmp,32,0);
    VL_SIG64(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_srem_32ns_4ns_32_36_seq_U1__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_U__DOT__encrypt_srem_32ns_4ns_32_36_seq_div_u_0__DOT__r_stage,32,0);
    VL_SIG64(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__cal_tmp,32,0);
    VL_SIG64(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_U2__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_U__DOT__encrypt_sdiv_32ns_5ns_32_36_seq_div_u_0__DOT__r_stage,32,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_3_reg_885,63,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_8_reg_895,63,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_13_reg_945,63,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_23_reg_955,63,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_15_reg_1049,63,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_17_reg_1059,63,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_19_reg_1069,63,0);
    VL_SIG64(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__tmp_21_reg_1079,63,0);
    VL_SIG(v__DOT__word_U__DOT__encrypt_word_ram_U__DOT__ram[480],31,0);
    VL_SIG8(v__DOT__out_enc_statemt_U__DOT__encrypt_out_enc_statemt_rom_U__DOT__ram[16],7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__Sbox_U__DOT__encrypt_KeySchedule_Sbox_rom_U__DOT__ram[256],7,0);
    VL_SIG8(v__DOT__grp_encrypt_KeySchedule_fu_158__DOT__Rcon0_U__DOT__encrypt_KeySchedule_Rcon0_rom_U__DOT__ram[30],7,0);
    //char	__VpadToAlign2974[2];
    VL_SIG(v__DOT__grp_encrypt_MixColumn_AddRoundKey_fu_171__DOT__ret_U__DOT__encrypt_MixColumn_AddRoundKey_ret_ram_U__DOT__ram[32],31,0);
    VL_SIG8(v__DOT__grp_encrypt_ByteSub_ShiftRow_fu_182__DOT__Sbox_U__DOT__encrypt_ByteSub_ShiftRow_Sbox_rom_U__DOT__ram[256],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_v__DOT__grp_encrypt_AddRoundKey_fu_191__DOT__ap_NS_fsm[1024],7,0);
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign3365[1];
    VL_SIG16(__Vtableidx1,9,0);
    VL_SIG(v__DOT__word_U__DOT__encrypt_word_ram_U__DOT____Vlvbound1,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vencrypt__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vencrypt& operator= (const Vencrypt&);	///< Copying not allowed
    Vencrypt(const Vencrypt&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vencrypt(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vencrypt();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vencrypt__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vencrypt__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vencrypt__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(Vencrypt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__2(Vencrypt__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(Vencrypt__Syms* __restrict vlSymsp);
    static void	_eval(Vencrypt__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vencrypt__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vencrypt__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vencrypt__Syms* __restrict vlSymsp);
    static void	_initial__TOP__5(Vencrypt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(Vencrypt__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vencrypt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vencrypt__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vencrypt__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
