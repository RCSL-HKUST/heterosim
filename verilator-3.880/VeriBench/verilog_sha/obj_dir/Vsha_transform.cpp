// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha_transform.h for the primary calling header

#include "Vsha_transform.h"    // For This
#include "Vsha_transform__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vsha_transform) {
    Vsha_transform__Syms* __restrict vlSymsp = __VlSymsp = new Vsha_transform__Syms(this, name());
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    ap_clk = VL_RAND_RESET_I(1);
    ap_rst = VL_RAND_RESET_I(1);
    ap_start = VL_RAND_RESET_I(1);
    ap_done = VL_RAND_RESET_I(1);
    ap_idle = VL_RAND_RESET_I(1);
    ap_ready = VL_RAND_RESET_I(1);
    buff_address0 = VL_RAND_RESET_I(5);
    buff_ce0 = VL_RAND_RESET_I(1);
    buff_q0 = VL_RAND_RESET_I(32);
    buff_address1 = VL_RAND_RESET_I(5);
    buff_ce1 = VL_RAND_RESET_I(1);
    buff_q1 = VL_RAND_RESET_I(32);
    m = VL_RAND_RESET_I(32);
    y_address0 = VL_RAND_RESET_I(3);
    y_ce0 = VL_RAND_RESET_I(1);
    y_we0 = VL_RAND_RESET_I(1);
    y_d0 = VL_RAND_RESET_I(32);
    y_address1 = VL_RAND_RESET_I(3);
    y_ce1 = VL_RAND_RESET_I(1);
    y_we1 = VL_RAND_RESET_I(1);
    y_d1 = VL_RAND_RESET_I(32);
    n = VL_RAND_RESET_I(32);
    ap_return = VL_RAND_RESET_I(32);
    v__DOT__ap_CS_fsm = VL_RAND_RESET_I(11);
    v__DOT__ap_reg_ppiten_pp0_it0 = VL_RAND_RESET_I(1);
    v__DOT__ap_reg_ppiten_pp0_it1 = VL_RAND_RESET_I(1);
    v__DOT__ap_reg_ppiten_pp0_it2 = VL_RAND_RESET_I(1);
    v__DOT__ap_reg_ppiten_pp0_it3 = VL_RAND_RESET_I(1);
    v__DOT__ap_reg_ppiten_pp0_it4 = VL_RAND_RESET_I(1);
    v__DOT__ap_reg_ppiten_pp0_it5 = VL_RAND_RESET_I(1);
    v__DOT__ap_reg_ppiten_pp0_it6 = VL_RAND_RESET_I(1);
    v__DOT__B_reg_7564 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it6 = VL_RAND_RESET_I(32);
    v__DOT__C_reg_7571 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it5 = VL_RAND_RESET_I(32);
    v__DOT__tmp_131_reg_7584 = VL_RAND_RESET_I(2);
    v__DOT__tmp_2_reg_7589 = VL_RAND_RESET_I(30);
    v__DOT__W_0_reg_7599 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_0_reg_7599_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__D_reg_7605 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it5 = VL_RAND_RESET_I(32);
    v__DOT__A_reg_7627 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5 = VL_RAND_RESET_I(32);
    v__DOT__E_reg_7634 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it5 = VL_RAND_RESET_I(32);
    v__DOT__temp_fu_423_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_reg_7639 = VL_RAND_RESET_I(32);
    v__DOT__tmp_132_reg_7645 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_1_reg_7650 = VL_RAND_RESET_I(5);
    v__DOT__tmp_134_reg_7655 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_1_reg_7660 = VL_RAND_RESET_I(30);
    v__DOT__tmp_137_reg_7665 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_2_reg_7670 = VL_RAND_RESET_I(30);
    v__DOT__W_1_reg_7675 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_1_reg_7675_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__W_2_reg_7680 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_2_reg_7680_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__C_1_fu_461_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_reg_7697 = VL_RAND_RESET_I(32);
    v__DOT__temp_s_fu_511_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_s_reg_7703 = VL_RAND_RESET_I(32);
    v__DOT__tmp_135_reg_7709 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_2_reg_7714 = VL_RAND_RESET_I(5);
    v__DOT__tmp_140_reg_7719 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_3_reg_7724 = VL_RAND_RESET_I(30);
    v__DOT__W_3_reg_7729 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__W_4_reg_7736 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_4_reg_7736_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__C_1_1_fu_545_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_1_reg_7753 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_fu_594_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_reg_7759 = VL_RAND_RESET_I(32);
    v__DOT__tmp_138_reg_7765 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_3_reg_7770 = VL_RAND_RESET_I(5);
    v__DOT__tmp_143_reg_7775 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_4_reg_7780 = VL_RAND_RESET_I(30);
    v__DOT__W_5_reg_7785 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__W_6_reg_7792 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__C_1_2_fu_628_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_2_reg_7809 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_fu_677_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_reg_7815 = VL_RAND_RESET_I(32);
    v__DOT__tmp_141_reg_7821 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_4_reg_7826 = VL_RAND_RESET_I(5);
    v__DOT__tmp_146_reg_7831 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_5_reg_7836 = VL_RAND_RESET_I(30);
    v__DOT__W_7_reg_7841 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_7_reg_7841_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__W_8_reg_7848 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__C_1_3_fu_711_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_3_reg_7866 = VL_RAND_RESET_I(32);
    v__DOT__temp_4_fu_760_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_4_reg_7872 = VL_RAND_RESET_I(32);
    v__DOT__tmp_144_reg_7878 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_5_reg_7883 = VL_RAND_RESET_I(5);
    v__DOT__tmp_149_reg_7888 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_6_reg_7893 = VL_RAND_RESET_I(30);
    v__DOT__W_9_reg_7898 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_9_reg_7898_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__W_10_reg_7906 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__C_1_4_fu_794_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_4_reg_7924 = VL_RAND_RESET_I(32);
    v__DOT__temp_5_fu_843_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_5_reg_7930 = VL_RAND_RESET_I(32);
    v__DOT__tmp_147_reg_7936 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_6_reg_7941 = VL_RAND_RESET_I(5);
    v__DOT__tmp_152_reg_7946 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_7_reg_7951 = VL_RAND_RESET_I(30);
    v__DOT__W_11_reg_7956 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_11_reg_7956_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__W_12_reg_7964 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__C_1_5_fu_877_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_5_reg_7982 = VL_RAND_RESET_I(32);
    v__DOT__temp_6_fu_926_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_6_reg_7988 = VL_RAND_RESET_I(32);
    v__DOT__tmp_150_reg_7994 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_7_reg_7999 = VL_RAND_RESET_I(5);
    v__DOT__tmp_155_reg_8004 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_8_reg_8009 = VL_RAND_RESET_I(30);
    v__DOT__W_13_reg_8014 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__W_14_reg_8023 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_14_reg_8023_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__C_1_6_fu_960_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_6_reg_8037 = VL_RAND_RESET_I(32);
    v__DOT__temp_7_fu_1009_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_7_reg_8043 = VL_RAND_RESET_I(32);
    v__DOT__tmp_153_reg_8049 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_8_reg_8054 = VL_RAND_RESET_I(5);
    v__DOT__tmp_158_reg_8059 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_9_reg_8064 = VL_RAND_RESET_I(30);
    v__DOT__tmp_27_reg_8069 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it5 = VL_RAND_RESET_I(32);
    v__DOT__W_15_reg_8073 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2 = VL_RAND_RESET_I(32);
    v__DOT__C_1_7_fu_1049_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_7_reg_8082 = VL_RAND_RESET_I(32);
    v__DOT__temp_8_fu_1098_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_8_reg_8088 = VL_RAND_RESET_I(32);
    v__DOT__tmp_156_reg_8094 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_9_reg_8099 = VL_RAND_RESET_I(5);
    v__DOT__tmp_161_reg_8104 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_s_reg_8109 = VL_RAND_RESET_I(30);
    v__DOT__C_1_8_fu_1132_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_8_reg_8114 = VL_RAND_RESET_I(32);
    v__DOT__temp_9_fu_1181_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_9_reg_8120 = VL_RAND_RESET_I(32);
    v__DOT__tmp_159_reg_8126 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_s_reg_8131 = VL_RAND_RESET_I(5);
    v__DOT__tmp_164_reg_8136 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_10_reg_8141 = VL_RAND_RESET_I(30);
    v__DOT__C_1_9_fu_1215_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_9_reg_8146 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_fu_1264_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_reg_8152 = VL_RAND_RESET_I(32);
    v__DOT__tmp_162_reg_8158 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_10_reg_8163 = VL_RAND_RESET_I(5);
    v__DOT__tmp_167_reg_8168 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_11_reg_8173 = VL_RAND_RESET_I(30);
    v__DOT__C_1_s_fu_1298_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_s_reg_8178 = VL_RAND_RESET_I(32);
    v__DOT__temp_10_fu_1347_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_10_reg_8184 = VL_RAND_RESET_I(32);
    v__DOT__tmp_165_reg_8190 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_11_reg_8195 = VL_RAND_RESET_I(5);
    v__DOT__tmp_170_reg_8200 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_12_reg_8205 = VL_RAND_RESET_I(30);
    v__DOT__C_1_10_fu_1381_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_10_reg_8210 = VL_RAND_RESET_I(32);
    v__DOT__temp_11_fu_1430_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_11_reg_8216 = VL_RAND_RESET_I(32);
    v__DOT__tmp_168_reg_8222 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_12_reg_8227 = VL_RAND_RESET_I(5);
    v__DOT__tmp_173_reg_8232 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_13_reg_8237 = VL_RAND_RESET_I(30);
    v__DOT__C_1_11_fu_1464_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_11_reg_8242 = VL_RAND_RESET_I(32);
    v__DOT__temp_12_fu_1513_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_12_reg_8248 = VL_RAND_RESET_I(32);
    v__DOT__tmp_171_reg_8254 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_13_reg_8259 = VL_RAND_RESET_I(5);
    v__DOT__tmp_176_reg_8264 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_14_reg_8269 = VL_RAND_RESET_I(30);
    v__DOT__C_1_12_fu_1547_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_12_reg_8274 = VL_RAND_RESET_I(32);
    v__DOT__temp_13_fu_1596_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_13_reg_8280 = VL_RAND_RESET_I(32);
    v__DOT__tmp_174_reg_8286 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_14_reg_8291 = VL_RAND_RESET_I(5);
    v__DOT__tmp_179_reg_8296 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_15_reg_8301 = VL_RAND_RESET_I(30);
    v__DOT__W_16_reg_8306 = VL_RAND_RESET_I(32);
    v__DOT__C_1_13_fu_1644_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_13_reg_8316 = VL_RAND_RESET_I(32);
    v__DOT__temp_14_fu_1693_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_14_reg_8321 = VL_RAND_RESET_I(32);
    v__DOT__C_1_14_fu_1699_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_14_reg_8327 = VL_RAND_RESET_I(32);
    v__DOT__tmp_177_reg_8333 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_15_reg_8338 = VL_RAND_RESET_I(5);
    v__DOT__tmp_20_15_reg_8343 = VL_RAND_RESET_I(32);
    v__DOT__tmp_182_reg_8348 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_16_reg_8353 = VL_RAND_RESET_I(30);
    v__DOT__W_17_fu_1763_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_17_reg_8358 = VL_RAND_RESET_I(32);
    v__DOT__temp_15_fu_1790_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_15_reg_8367 = VL_RAND_RESET_I(32);
    v__DOT__C_1_15_fu_1796_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_15_reg_8373 = VL_RAND_RESET_I(32);
    v__DOT__tmp_20_16_reg_8379 = VL_RAND_RESET_I(32);
    v__DOT__tmp181_reg_8384 = VL_RAND_RESET_I(32);
    v__DOT__tmp_185_reg_8389 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_17_reg_8394 = VL_RAND_RESET_I(30);
    v__DOT__W_18_fu_1879_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_18_reg_8399 = VL_RAND_RESET_I(32);
    v__DOT__W_19_reg_8407 = VL_RAND_RESET_I(32);
    v__DOT__C_1_16_fu_1908_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_16_reg_8416 = VL_RAND_RESET_I(32);
    v__DOT__temp_17_fu_1974_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_17_reg_8421 = VL_RAND_RESET_I(32);
    v__DOT__C_1_17_fu_1980_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_17_reg_8426 = VL_RAND_RESET_I(32);
    v__DOT__tmp_186_reg_8432 = VL_RAND_RESET_I(27);
    v__DOT__tmp_15_18_reg_8437 = VL_RAND_RESET_I(5);
    v__DOT__tmp_20_18_reg_8442 = VL_RAND_RESET_I(32);
    v__DOT__tmp_188_reg_8447 = VL_RAND_RESET_I(2);
    v__DOT__tmp_26_18_reg_8452 = VL_RAND_RESET_I(30);
    v__DOT__tmp_192_reg_8457 = VL_RAND_RESET_I(2);
    v__DOT__tmp_11_reg_8462 = VL_RAND_RESET_I(30);
    v__DOT__W_20_fu_2060_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_20_reg_8467 = VL_RAND_RESET_I(32);
    v__DOT__temp_18_fu_2087_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_18_reg_8475 = VL_RAND_RESET_I(32);
    v__DOT__C_1_18_fu_2093_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_1_18_reg_8480 = VL_RAND_RESET_I(32);
    v__DOT__tmp_10_reg_8486 = VL_RAND_RESET_I(32);
    v__DOT__tmp191_reg_8491 = VL_RAND_RESET_I(32);
    v__DOT__tmp_196_reg_8496 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_1_reg_8501 = VL_RAND_RESET_I(30);
    v__DOT__W_21_fu_2165_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_21_reg_8506 = VL_RAND_RESET_I(32);
    v__DOT__W_22_reg_8514 = VL_RAND_RESET_I(32);
    v__DOT__temp_19_fu_2189_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_19_reg_8523 = VL_RAND_RESET_I(32);
    v__DOT__C_2_fu_2194_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_reg_8528 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_1_fu_2249_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_1_reg_8534 = VL_RAND_RESET_I(32);
    v__DOT__tmp_197_reg_8539 = VL_RAND_RESET_I(27);
    v__DOT__tmp_28_2_reg_8544 = VL_RAND_RESET_I(5);
    v__DOT__tmp_200_reg_8549 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_2_reg_8554 = VL_RAND_RESET_I(30);
    v__DOT__tmp_204_reg_8559 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_3_reg_8564 = VL_RAND_RESET_I(30);
    v__DOT__W_23_fu_2305_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_23_reg_8569 = VL_RAND_RESET_I(32);
    v__DOT__C_2_1_fu_2311_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_1_reg_8577 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_2_fu_2349_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_2_reg_8582 = VL_RAND_RESET_I(32);
    v__DOT__C_2_2_fu_2355_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_2_reg_8587 = VL_RAND_RESET_I(32);
    v__DOT__tmp_31_3_reg_8593 = VL_RAND_RESET_I(32);
    v__DOT__tmp203_reg_8598 = VL_RAND_RESET_I(32);
    v__DOT__tmp_208_reg_8603 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_4_reg_8608 = VL_RAND_RESET_I(30);
    v__DOT__tmp16_fu_2420_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp16_reg_8613 = VL_RAND_RESET_I(32);
    v__DOT__W_24_fu_2428_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_24_reg_8619 = VL_RAND_RESET_I(32);
    v__DOT__tmp18_fu_2434_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp18_reg_8625 = VL_RAND_RESET_I(32);
    v__DOT__W_25_reg_8631 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_3_fu_2452_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_3_reg_8638 = VL_RAND_RESET_I(32);
    v__DOT__C_2_3_fu_2457_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_3_reg_8643 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_4_fu_2512_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_4_reg_8649 = VL_RAND_RESET_I(32);
    v__DOT__tmp_209_reg_8654 = VL_RAND_RESET_I(27);
    v__DOT__tmp_28_5_reg_8659 = VL_RAND_RESET_I(5);
    v__DOT__tmp_212_reg_8664 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_5_reg_8669 = VL_RAND_RESET_I(30);
    v__DOT__tmp_216_reg_8674 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_6_reg_8679 = VL_RAND_RESET_I(30);
    v__DOT__tmp20_fu_2560_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp20_reg_8684 = VL_RAND_RESET_I(32);
    v__DOT__W_26_fu_2568_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_26_reg_8690 = VL_RAND_RESET_I(32);
    v__DOT__tmp22_fu_2574_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp22_reg_8696 = VL_RAND_RESET_I(32);
    v__DOT__W_27_reg_8702 = VL_RAND_RESET_I(32);
    v__DOT__tmp24_fu_2588_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp24_reg_8709 = VL_RAND_RESET_I(32);
    v__DOT__W_28_reg_8715 = VL_RAND_RESET_I(32);
    v__DOT__C_2_4_fu_2602_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_4_reg_8722 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_5_fu_2640_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_5_reg_8727 = VL_RAND_RESET_I(32);
    v__DOT__C_2_5_fu_2646_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_5_reg_8732 = VL_RAND_RESET_I(32);
    v__DOT__tmp_31_6_reg_8738 = VL_RAND_RESET_I(32);
    v__DOT__tmp215_reg_8743 = VL_RAND_RESET_I(32);
    v__DOT__tmp_220_reg_8748 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_7_reg_8753 = VL_RAND_RESET_I(30);
    v__DOT__W_29_fu_2719_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_29_reg_8758 = VL_RAND_RESET_I(32);
    v__DOT__W_30_fu_2733_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_30_reg_8764 = VL_RAND_RESET_I(32);
    v__DOT__W_31_fu_2747_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_31_reg_8770 = VL_RAND_RESET_I(32);
    v__DOT__W_32_reg_8776 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_33_reg_8784 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_34_reg_8792 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_35_reg_8800 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_35_reg_8800_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_36_reg_8808 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_36_reg_8808_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_37_reg_8816 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_37_reg_8816_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_38_reg_8824 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_38_reg_8824_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_39_reg_8833 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_39_reg_8833_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_40_reg_8842 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_40_reg_8842_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__tmp51_reg_8851 = VL_RAND_RESET_I(32);
    v__DOT__tmp53_reg_8856 = VL_RAND_RESET_I(32);
    v__DOT__tmp55_reg_8861 = VL_RAND_RESET_I(32);
    v__DOT__tmp57_reg_8866 = VL_RAND_RESET_I(32);
    v__DOT__tmp59_reg_8871 = VL_RAND_RESET_I(32);
    v__DOT__tmp61_reg_8876 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_tmp61_reg_8876_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__tmp63_reg_8881 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_tmp63_reg_8881_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_6_fu_2932_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_6_reg_8886 = VL_RAND_RESET_I(32);
    v__DOT__C_2_6_fu_2937_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_6_reg_8891 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_7_fu_2991_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_7_reg_8897 = VL_RAND_RESET_I(32);
    v__DOT__tmp_221_reg_8902 = VL_RAND_RESET_I(27);
    v__DOT__tmp_28_8_reg_8907 = VL_RAND_RESET_I(5);
    v__DOT__tmp_224_reg_8912 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_8_reg_8917 = VL_RAND_RESET_I(30);
    v__DOT__tmp_228_reg_8922 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_9_reg_8927 = VL_RAND_RESET_I(30);
    v__DOT__W_41_reg_8932 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_42_reg_8941 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__W_43_reg_8950 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_7_fu_3066_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_7_reg_8959 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_8_fu_3104_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_8_reg_8964 = VL_RAND_RESET_I(32);
    v__DOT__C_2_8_fu_3110_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_8_reg_8969 = VL_RAND_RESET_I(32);
    v__DOT__tmp_31_9_reg_8975 = VL_RAND_RESET_I(32);
    v__DOT__tmp227_reg_8980 = VL_RAND_RESET_I(32);
    v__DOT__tmp_232_reg_8985 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_s_reg_8990 = VL_RAND_RESET_I(30);
    v__DOT__W_44_reg_8995 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_9_fu_3187_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_9_reg_9004 = VL_RAND_RESET_I(32);
    v__DOT__C_2_9_fu_3192_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_9_reg_9009 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_s_fu_3246_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_s_reg_9015 = VL_RAND_RESET_I(32);
    v__DOT__tmp_233_reg_9020 = VL_RAND_RESET_I(27);
    v__DOT__tmp_28_10_reg_9025 = VL_RAND_RESET_I(5);
    v__DOT__tmp_236_reg_9030 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_10_reg_9035 = VL_RAND_RESET_I(30);
    v__DOT__tmp_240_reg_9040 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_11_reg_9045 = VL_RAND_RESET_I(30);
    v__DOT__W_45_reg_9050 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_s_fu_3303_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_s_reg_9059 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_10_fu_3341_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_10_reg_9064 = VL_RAND_RESET_I(32);
    v__DOT__C_2_10_fu_3347_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_10_reg_9069 = VL_RAND_RESET_I(32);
    v__DOT__tmp_31_11_reg_9075 = VL_RAND_RESET_I(32);
    v__DOT__tmp239_reg_9080 = VL_RAND_RESET_I(32);
    v__DOT__tmp_244_reg_9085 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_12_reg_9090 = VL_RAND_RESET_I(30);
    v__DOT__temp_1_11_fu_3415_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_11_reg_9095 = VL_RAND_RESET_I(32);
    v__DOT__C_2_11_fu_3420_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_11_reg_9100 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_12_fu_3474_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_12_reg_9106 = VL_RAND_RESET_I(32);
    v__DOT__tmp_245_reg_9111 = VL_RAND_RESET_I(27);
    v__DOT__tmp_28_13_reg_9116 = VL_RAND_RESET_I(5);
    v__DOT__tmp_248_reg_9121 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_13_reg_9126 = VL_RAND_RESET_I(30);
    v__DOT__tmp_252_reg_9131 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_14_reg_9136 = VL_RAND_RESET_I(30);
    v__DOT__C_2_12_fu_3522_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_12_reg_9141 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_13_fu_3560_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_13_reg_9146 = VL_RAND_RESET_I(32);
    v__DOT__C_2_13_fu_3566_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_13_reg_9151 = VL_RAND_RESET_I(32);
    v__DOT__tmp_31_14_reg_9157 = VL_RAND_RESET_I(32);
    v__DOT__tmp251_reg_9162 = VL_RAND_RESET_I(32);
    v__DOT__tmp_256_reg_9167 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_15_reg_9172 = VL_RAND_RESET_I(30);
    v__DOT__temp_1_14_fu_3634_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_14_reg_9177 = VL_RAND_RESET_I(32);
    v__DOT__C_2_14_fu_3639_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_14_reg_9182 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_15_fu_3693_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_15_reg_9188 = VL_RAND_RESET_I(32);
    v__DOT__tmp_257_reg_9193 = VL_RAND_RESET_I(27);
    v__DOT__tmp_28_16_reg_9198 = VL_RAND_RESET_I(5);
    v__DOT__tmp_260_reg_9203 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_16_reg_9208 = VL_RAND_RESET_I(30);
    v__DOT__tmp_264_reg_9213 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_17_reg_9218 = VL_RAND_RESET_I(30);
    v__DOT__C_2_15_fu_3741_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_15_reg_9223 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_16_fu_3779_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_16_reg_9228 = VL_RAND_RESET_I(32);
    v__DOT__C_2_16_fu_3785_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_16_reg_9233 = VL_RAND_RESET_I(32);
    v__DOT__tmp_31_17_reg_9239 = VL_RAND_RESET_I(32);
    v__DOT__tmp263_reg_9244 = VL_RAND_RESET_I(32);
    v__DOT__tmp_268_reg_9249 = VL_RAND_RESET_I(2);
    v__DOT__tmp_37_18_reg_9254 = VL_RAND_RESET_I(30);
    v__DOT__temp_1_17_fu_3853_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_17_reg_9259 = VL_RAND_RESET_I(32);
    v__DOT__C_2_17_fu_3858_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_17_reg_9264 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_18_fu_3912_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_1_18_reg_9271 = VL_RAND_RESET_I(32);
    v__DOT__tmp_269_reg_9276 = VL_RAND_RESET_I(27);
    v__DOT__tmp_12_reg_9281 = VL_RAND_RESET_I(5);
    v__DOT__tmp_271_reg_9286 = VL_RAND_RESET_I(2);
    v__DOT__tmp_18_reg_9291 = VL_RAND_RESET_I(30);
    v__DOT__tmp_274_reg_9296 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_1_reg_9301 = VL_RAND_RESET_I(30);
    v__DOT__C_2_18_fu_3960_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_2_18_reg_9306 = VL_RAND_RESET_I(32);
    v__DOT__temp_20_fu_4009_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_20_reg_9313 = VL_RAND_RESET_I(32);
    v__DOT__tmp_272_reg_9318 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_1_reg_9323 = VL_RAND_RESET_I(5);
    v__DOT__tmp_277_reg_9328 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_2_reg_9333 = VL_RAND_RESET_I(30);
    v__DOT__C_3_fu_4043_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_reg_9338 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_1_fu_4092_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_1_reg_9345 = VL_RAND_RESET_I(32);
    v__DOT__tmp_275_reg_9350 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_2_reg_9355 = VL_RAND_RESET_I(5);
    v__DOT__tmp_280_reg_9360 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_3_reg_9365 = VL_RAND_RESET_I(30);
    v__DOT__C_3_1_fu_4126_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_1_reg_9370 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_2_fu_4175_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_2_reg_9377 = VL_RAND_RESET_I(32);
    v__DOT__tmp_278_reg_9382 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_3_reg_9387 = VL_RAND_RESET_I(5);
    v__DOT__tmp_283_reg_9392 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_4_reg_9397 = VL_RAND_RESET_I(30);
    v__DOT__C_3_2_fu_4209_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_2_reg_9402 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_3_fu_4258_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_3_reg_9409 = VL_RAND_RESET_I(32);
    v__DOT__tmp_281_reg_9414 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_4_reg_9419 = VL_RAND_RESET_I(5);
    v__DOT__tmp_286_reg_9424 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_5_reg_9429 = VL_RAND_RESET_I(30);
    v__DOT__C_3_3_fu_4292_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_3_reg_9434 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_4_fu_4341_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_4_reg_9441 = VL_RAND_RESET_I(32);
    v__DOT__tmp_284_reg_9446 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_5_reg_9451 = VL_RAND_RESET_I(5);
    v__DOT__tmp_289_reg_9456 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_6_reg_9461 = VL_RAND_RESET_I(30);
    v__DOT__C_3_4_fu_4375_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_4_reg_9466 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_5_fu_4424_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_5_reg_9473 = VL_RAND_RESET_I(32);
    v__DOT__tmp_287_reg_9478 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_6_reg_9483 = VL_RAND_RESET_I(5);
    v__DOT__tmp_292_reg_9488 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_7_reg_9493 = VL_RAND_RESET_I(30);
    v__DOT__W_46_fu_4462_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_46_reg_9498 = VL_RAND_RESET_I(32);
    v__DOT__C_3_5_fu_4467_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_5_reg_9506 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_6_fu_4517_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_6_reg_9513 = VL_RAND_RESET_I(32);
    v__DOT__tmp_290_reg_9518 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_7_reg_9523 = VL_RAND_RESET_I(5);
    v__DOT__tmp_295_reg_9528 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_8_reg_9533 = VL_RAND_RESET_I(30);
    v__DOT__W_47_fu_4555_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_47_reg_9538 = VL_RAND_RESET_I(32);
    v__DOT__C_3_6_fu_4560_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_6_reg_9546 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_7_fu_4610_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_7_reg_9553 = VL_RAND_RESET_I(32);
    v__DOT__tmp_293_reg_9558 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_8_reg_9563 = VL_RAND_RESET_I(5);
    v__DOT__tmp_298_reg_9568 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_9_reg_9573 = VL_RAND_RESET_I(30);
    v__DOT__W_48_fu_4652_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_48_reg_9578 = VL_RAND_RESET_I(32);
    v__DOT__tmp81_reg_9584 = VL_RAND_RESET_I(32);
    v__DOT__C_3_7_fu_4663_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_7_reg_9589 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_8_fu_4713_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_8_reg_9596 = VL_RAND_RESET_I(32);
    v__DOT__tmp_296_reg_9601 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_9_reg_9606 = VL_RAND_RESET_I(5);
    v__DOT__tmp_301_reg_9611 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_s_reg_9616 = VL_RAND_RESET_I(30);
    v__DOT__W_49_fu_4755_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_49_reg_9621 = VL_RAND_RESET_I(32);
    v__DOT__tmp83_reg_9627 = VL_RAND_RESET_I(32);
    v__DOT__C_3_8_fu_4766_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_8_reg_9632 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_9_fu_4816_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_9_reg_9639 = VL_RAND_RESET_I(32);
    v__DOT__tmp_299_reg_9644 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_s_reg_9649 = VL_RAND_RESET_I(5);
    v__DOT__tmp_304_reg_9654 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_10_reg_9659 = VL_RAND_RESET_I(30);
    v__DOT__W_50_fu_4858_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_50_reg_9664 = VL_RAND_RESET_I(32);
    v__DOT__tmp85_reg_9670 = VL_RAND_RESET_I(32);
    v__DOT__C_3_9_fu_4869_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_9_reg_9675 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_s_fu_4919_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_s_reg_9682 = VL_RAND_RESET_I(32);
    v__DOT__tmp_302_reg_9687 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_10_reg_9692 = VL_RAND_RESET_I(5);
    v__DOT__tmp_307_reg_9697 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_11_reg_9702 = VL_RAND_RESET_I(30);
    v__DOT__W_51_fu_4961_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_51_reg_9707 = VL_RAND_RESET_I(32);
    v__DOT__W_52_fu_4975_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_52_reg_9712 = VL_RAND_RESET_I(32);
    v__DOT__W_53_fu_4989_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_53_reg_9718 = VL_RAND_RESET_I(32);
    v__DOT__W_54_fu_5004_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_54_reg_9724 = VL_RAND_RESET_I(32);
    v__DOT__W_55_reg_9730 = VL_RAND_RESET_I(32);
    v__DOT__W_56_reg_9737 = VL_RAND_RESET_I(32);
    v__DOT__W_57_reg_9745 = VL_RAND_RESET_I(32);
    v__DOT__tmp87_reg_9753 = VL_RAND_RESET_I(32);
    v__DOT__tmp89_reg_9758 = VL_RAND_RESET_I(32);
    v__DOT__tmp91_reg_9763 = VL_RAND_RESET_I(32);
    v__DOT__tmp93_reg_9768 = VL_RAND_RESET_I(32);
    v__DOT__tmp95_reg_9773 = VL_RAND_RESET_I(32);
    v__DOT__tmp97_reg_9778 = VL_RAND_RESET_I(32);
    v__DOT__tmp99_reg_9783 = VL_RAND_RESET_I(32);
    v__DOT__C_3_s_fu_5080_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_s_reg_9788 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_10_fu_5130_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_10_reg_9795 = VL_RAND_RESET_I(32);
    v__DOT__tmp_305_reg_9800 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_11_reg_9805 = VL_RAND_RESET_I(5);
    v__DOT__tmp_310_reg_9810 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_12_reg_9815 = VL_RAND_RESET_I(30);
    v__DOT__W_58_fu_5168_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_58_reg_9820 = VL_RAND_RESET_I(32);
    v__DOT__W_59_fu_5177_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_59_reg_9827 = VL_RAND_RESET_I(32);
    v__DOT__W_60_fu_5186_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_60_reg_9834 = VL_RAND_RESET_I(32);
    v__DOT__W_61_fu_5196_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_61_reg_9841 = VL_RAND_RESET_I(32);
    v__DOT__W_62_fu_5206_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_62_reg_9848 = VL_RAND_RESET_I(32);
    v__DOT__W_63_fu_5216_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_63_reg_9855 = VL_RAND_RESET_I(32);
    v__DOT__W_64_reg_9862 = VL_RAND_RESET_I(32);
    v__DOT__W_65_reg_9870 = VL_RAND_RESET_I(32);
    v__DOT__W_66_reg_9878 = VL_RAND_RESET_I(32);
    v__DOT__tmp103_reg_9885 = VL_RAND_RESET_I(32);
    v__DOT__tmp105_reg_9890 = VL_RAND_RESET_I(32);
    v__DOT__tmp107_reg_9895 = VL_RAND_RESET_I(32);
    v__DOT__tmp109_reg_9900 = VL_RAND_RESET_I(32);
    v__DOT__tmp111_reg_9905 = VL_RAND_RESET_I(32);
    v__DOT__C_3_10_fu_5282_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_10_reg_9910 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_11_fu_5331_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_11_reg_9917 = VL_RAND_RESET_I(32);
    v__DOT__tmp_308_reg_9922 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_12_reg_9927 = VL_RAND_RESET_I(5);
    v__DOT__tmp_313_reg_9932 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_13_reg_9937 = VL_RAND_RESET_I(30);
    v__DOT__W_67_reg_9942 = VL_RAND_RESET_I(32);
    v__DOT__C_3_11_fu_5374_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_11_reg_9949 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_12_fu_5423_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_12_reg_9956 = VL_RAND_RESET_I(32);
    v__DOT__tmp_311_reg_9961 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_13_reg_9966 = VL_RAND_RESET_I(5);
    v__DOT__tmp_316_reg_9971 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_14_reg_9976 = VL_RAND_RESET_I(30);
    v__DOT__W_68_reg_9981 = VL_RAND_RESET_I(32);
    v__DOT__C_3_12_fu_5466_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_12_reg_9988 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_13_fu_5515_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_13_reg_9995 = VL_RAND_RESET_I(32);
    v__DOT__tmp_314_reg_10000 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_14_reg_10005 = VL_RAND_RESET_I(5);
    v__DOT__tmp_319_reg_10010 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_15_reg_10015 = VL_RAND_RESET_I(30);
    v__DOT__W_69_reg_10020 = VL_RAND_RESET_I(32);
    v__DOT__C_3_13_fu_5558_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_13_reg_10027 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_14_fu_5607_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_14_reg_10034 = VL_RAND_RESET_I(32);
    v__DOT__tmp_317_reg_10039 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_15_reg_10044 = VL_RAND_RESET_I(5);
    v__DOT__tmp_322_reg_10049 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_16_reg_10054 = VL_RAND_RESET_I(30);
    v__DOT__C_3_14_fu_5641_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_14_reg_10059 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_15_fu_5690_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_15_reg_10066 = VL_RAND_RESET_I(32);
    v__DOT__tmp_320_reg_10071 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_16_reg_10076 = VL_RAND_RESET_I(5);
    v__DOT__tmp_325_reg_10081 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_17_reg_10086 = VL_RAND_RESET_I(30);
    v__DOT__C_3_15_fu_5724_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_15_reg_10091 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_16_fu_5773_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_16_reg_10098 = VL_RAND_RESET_I(32);
    v__DOT__tmp_323_reg_10103 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_17_reg_10108 = VL_RAND_RESET_I(5);
    v__DOT__tmp_328_reg_10113 = VL_RAND_RESET_I(2);
    v__DOT__tmp_50_18_reg_10118 = VL_RAND_RESET_I(30);
    v__DOT__C_3_16_fu_5807_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_16_reg_10123 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_17_fu_5856_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_17_reg_10129 = VL_RAND_RESET_I(32);
    v__DOT__C_3_17_fu_5862_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_17_reg_10134 = VL_RAND_RESET_I(32);
    v__DOT__tmp_326_reg_10141 = VL_RAND_RESET_I(27);
    v__DOT__tmp_39_18_reg_10146 = VL_RAND_RESET_I(5);
    v__DOT__tmp_42_18_reg_10151 = VL_RAND_RESET_I(32);
    v__DOT__tmp_332_reg_10156 = VL_RAND_RESET_I(2);
    v__DOT__tmp_22_reg_10161 = VL_RAND_RESET_I(30);
    v__DOT__temp_2_18_fu_5938_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_2_18_reg_10166 = VL_RAND_RESET_I(32);
    v__DOT__C_3_18_fu_5944_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_3_18_reg_10171 = VL_RAND_RESET_I(32);
    v__DOT__tmp_21_reg_10177 = VL_RAND_RESET_I(32);
    v__DOT__tmp331_reg_10182 = VL_RAND_RESET_I(32);
    v__DOT__tmp_336_reg_10187 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_1_reg_10192 = VL_RAND_RESET_I(30);
    v__DOT__temp_21_fu_6011_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_21_reg_10197 = VL_RAND_RESET_I(32);
    v__DOT__C_4_fu_6016_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_reg_10202 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_1_fu_6070_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_1_reg_10208 = VL_RAND_RESET_I(32);
    v__DOT__tmp_337_reg_10213 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_2_reg_10218 = VL_RAND_RESET_I(5);
    v__DOT__tmp_340_reg_10223 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_2_reg_10228 = VL_RAND_RESET_I(30);
    v__DOT__tmp_344_reg_10233 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_3_reg_10238 = VL_RAND_RESET_I(30);
    v__DOT__C_4_1_fu_6118_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_1_reg_10243 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_2_fu_6156_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_2_reg_10248 = VL_RAND_RESET_I(32);
    v__DOT__C_4_2_fu_6162_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_2_reg_10253 = VL_RAND_RESET_I(32);
    v__DOT__tmp_61_3_reg_10259 = VL_RAND_RESET_I(32);
    v__DOT__tmp343_reg_10264 = VL_RAND_RESET_I(32);
    v__DOT__tmp_348_reg_10269 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_4_reg_10274 = VL_RAND_RESET_I(30);
    v__DOT__W_70_fu_6230_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_70_reg_10279 = VL_RAND_RESET_I(32);
    v__DOT__W_71_fu_6239_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_71_reg_10285 = VL_RAND_RESET_I(32);
    v__DOT__W_72_fu_6252_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_72_reg_10291 = VL_RAND_RESET_I(32);
    v__DOT__W_73_fu_6267_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_73_reg_10297 = VL_RAND_RESET_I(32);
    v__DOT__W_74_reg_10302 = VL_RAND_RESET_I(32);
    v__DOT__W_76_reg_10308 = VL_RAND_RESET_I(32);
    v__DOT__tmp125_reg_10314 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_3_fu_6311_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_3_reg_10319 = VL_RAND_RESET_I(32);
    v__DOT__C_4_3_fu_6316_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_3_reg_10324 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_4_fu_6370_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_4_reg_10330 = VL_RAND_RESET_I(32);
    v__DOT__tmp_349_reg_10335 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_5_reg_10340 = VL_RAND_RESET_I(5);
    v__DOT__tmp_352_reg_10345 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_5_reg_10350 = VL_RAND_RESET_I(30);
    v__DOT__tmp_356_reg_10355 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_6_reg_10360 = VL_RAND_RESET_I(30);
    v__DOT__W_75_fu_6426_p2 = VL_RAND_RESET_I(32);
    v__DOT__W_75_reg_10365 = VL_RAND_RESET_I(32);
    v__DOT__tmp123_fu_6432_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp123_reg_10371 = VL_RAND_RESET_I(32);
    v__DOT__tmp127_fu_6436_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp127_reg_10376 = VL_RAND_RESET_I(32);
    v__DOT__C_4_4_fu_6440_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_4_reg_10381 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_5_fu_6478_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_5_reg_10386 = VL_RAND_RESET_I(32);
    v__DOT__C_4_5_fu_6484_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_5_reg_10391 = VL_RAND_RESET_I(32);
    v__DOT__tmp_61_6_reg_10397 = VL_RAND_RESET_I(32);
    v__DOT__tmp355_fu_6528_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp355_reg_10402 = VL_RAND_RESET_I(32);
    v__DOT__tmp_360_reg_10407 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_7_reg_10412 = VL_RAND_RESET_I(30);
    v__DOT__temp_3_6_fu_6552_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_6_reg_10417 = VL_RAND_RESET_I(32);
    v__DOT__C_4_6_fu_6557_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_6_reg_10422 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_7_fu_6611_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_7_reg_10428 = VL_RAND_RESET_I(32);
    v__DOT__tmp_361_reg_10433 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_8_reg_10438 = VL_RAND_RESET_I(5);
    v__DOT__tmp_364_reg_10443 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_8_reg_10448 = VL_RAND_RESET_I(30);
    v__DOT__tmp_368_reg_10453 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_9_reg_10458 = VL_RAND_RESET_I(30);
    v__DOT__W_77_reg_10463 = VL_RAND_RESET_I(32);
    v__DOT__C_4_7_fu_6668_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_7_reg_10468 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_8_fu_6706_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_8_reg_10473 = VL_RAND_RESET_I(32);
    v__DOT__C_4_8_fu_6712_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_8_reg_10478 = VL_RAND_RESET_I(32);
    v__DOT__tmp_61_9_reg_10484 = VL_RAND_RESET_I(32);
    v__DOT__tmp367_reg_10489 = VL_RAND_RESET_I(32);
    v__DOT__tmp_372_reg_10494 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_s_reg_10499 = VL_RAND_RESET_I(30);
    v__DOT__W_78_reg_10504 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_9_fu_6789_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_9_reg_10509 = VL_RAND_RESET_I(32);
    v__DOT__C_4_9_fu_6794_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_9_reg_10514 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_s_fu_6848_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_s_reg_10520 = VL_RAND_RESET_I(32);
    v__DOT__tmp_373_reg_10525 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_10_reg_10530 = VL_RAND_RESET_I(5);
    v__DOT__tmp_376_reg_10535 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_10_reg_10540 = VL_RAND_RESET_I(30);
    v__DOT__tmp_380_reg_10545 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_11_reg_10550 = VL_RAND_RESET_I(30);
    v__DOT__W_79_reg_10555 = VL_RAND_RESET_I(32);
    v__DOT__C_4_s_fu_6905_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_s_reg_10560 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_10_fu_6943_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_10_reg_10565 = VL_RAND_RESET_I(32);
    v__DOT__C_4_10_fu_6949_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_10_reg_10570 = VL_RAND_RESET_I(32);
    v__DOT__tmp_61_11_reg_10576 = VL_RAND_RESET_I(32);
    v__DOT__tmp379_reg_10581 = VL_RAND_RESET_I(32);
    v__DOT__tmp_384_reg_10586 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_12_reg_10591 = VL_RAND_RESET_I(30);
    v__DOT__temp_3_11_fu_7017_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_11_reg_10596 = VL_RAND_RESET_I(32);
    v__DOT__C_4_11_fu_7022_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_11_reg_10601 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_12_fu_7076_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_12_reg_10607 = VL_RAND_RESET_I(32);
    v__DOT__tmp_385_reg_10612 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_13_reg_10617 = VL_RAND_RESET_I(5);
    v__DOT__tmp_388_reg_10622 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_13_reg_10627 = VL_RAND_RESET_I(30);
    v__DOT__tmp_392_reg_10632 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_14_reg_10637 = VL_RAND_RESET_I(30);
    v__DOT__C_4_12_fu_7124_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_12_reg_10642 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_13_fu_7162_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_13_reg_10648 = VL_RAND_RESET_I(32);
    v__DOT__tmp_389_reg_10653 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_14_reg_10658 = VL_RAND_RESET_I(5);
    v__DOT__tmp_396_reg_10663 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_15_reg_10668 = VL_RAND_RESET_I(30);
    v__DOT__C_4_13_fu_7196_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_13_reg_10673 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_14_fu_7234_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_14_reg_10679 = VL_RAND_RESET_I(32);
    v__DOT__tmp_393_reg_10684 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_15_reg_10689 = VL_RAND_RESET_I(5);
    v__DOT__tmp_400_reg_10694 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_16_reg_10699 = VL_RAND_RESET_I(30);
    v__DOT__C_4_14_fu_7268_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_14_reg_10704 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_15_fu_7306_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_15_reg_10709 = VL_RAND_RESET_I(32);
    v__DOT__tmp_397_reg_10714 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_16_reg_10719 = VL_RAND_RESET_I(5);
    v__DOT__tmp396_reg_10724 = VL_RAND_RESET_I(32);
    v__DOT__C_4_16_fu_7331_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_16_reg_10729 = VL_RAND_RESET_I(32);
    v__DOT__tmp_404_reg_10735 = VL_RAND_RESET_I(2);
    v__DOT__tmp_67_17_reg_10740 = VL_RAND_RESET_I(30);
    v__DOT__C_4_15_fu_7357_p3 = VL_RAND_RESET_I(32);
    v__DOT__C_4_15_reg_10745 = VL_RAND_RESET_I(32);
    v__DOT__tmp_401_reg_10750 = VL_RAND_RESET_I(27);
    v__DOT__tmp_58_17_reg_10755 = VL_RAND_RESET_I(5);
    v__DOT__tmp_61_17_reg_10760 = VL_RAND_RESET_I(32);
    v__DOT__tmp_61_18_reg_10765 = VL_RAND_RESET_I(32);
    v__DOT__tmp_24_fu_7459_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp_24_reg_10770 = VL_RAND_RESET_I(32);
    v__DOT__tmp405_reg_10775 = VL_RAND_RESET_I(32);
    v__DOT__tmp408_reg_10780 = VL_RAND_RESET_I(32);
    v__DOT__tmp_23_reg_10785 = VL_RAND_RESET_I(32);
    v__DOT__ap_reg_ppiten_pp0_it0_preg = VL_RAND_RESET_I(1);
    v__DOT__temp_16_fu_1903_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp26_fu_2711_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp28_fu_2725_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp30_fu_2739_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp32_fu_2753_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp34_fu_2768_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp36_fu_2783_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp38_fu_2798_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp40_fu_2813_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp42_fu_2828_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp44_fu_2844_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp46_fu_2860_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp64_fu_4644_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp66_fu_4747_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp68_fu_4850_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp70_fu_4953_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp72_fu_4967_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp74_fu_4981_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp76_fu_4995_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp78_fu_5010_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp80_fu_5025_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp82_fu_5035_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp84_fu_5164_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp86_fu_5173_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp88_fu_5182_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp90_fu_5191_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp92_fu_5201_p2 = VL_RAND_RESET_I(32);
    v__DOT__tmp94_fu_5211_p2 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_16_fu_7390_p2 = VL_RAND_RESET_I(32);
    v__DOT__C_4_17_fu_7420_p3 = VL_RAND_RESET_I(32);
    v__DOT__temp_3_17_fu_7491_p2 = VL_RAND_RESET_I(32);
    v__DOT__ap_NS_fsm = VL_RAND_RESET_I(11);
    __Vclklast__TOP__ap_clk = VL_RAND_RESET_I(1);
}

void Vsha_transform::__Vconfigure(Vsha_transform__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vsha_transform::~Vsha_transform() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vsha_transform::eval() {
    Vsha_transform__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vsha_transform::eval\n"); );
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

void Vsha_transform::_eval_initial_loop(Vsha_transform__Syms* __restrict vlSymsp) {
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

void Vsha_transform::_initial__TOP__1(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_initial__TOP__1\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at sha_transform.v:5332
    vlTOPp->y_address1 = 1U;
    // INITIAL at sha_transform.v:139
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6 = 0U;
    // INITIAL at sha_transform.v:1207
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0_preg = 0U;
}

VL_INLINE_OPT void Vsha_transform::_sequent__TOP__2(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_sequent__TOP__2\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__W_32_reg_8776,31,0);
    VL_SIG(__Vdly__v__DOT__W_33_reg_8784,31,0);
    VL_SIG(__Vdly__v__DOT__W_34_reg_8792,31,0);
    VL_SIG(__Vdly__v__DOT__W_35_reg_8800,31,0);
    VL_SIG(__Vdly__v__DOT__W_36_reg_8808,31,0);
    VL_SIG(__Vdly__v__DOT__W_37_reg_8816,31,0);
    VL_SIG(__Vdly__v__DOT__W_38_reg_8824,31,0);
    VL_SIG(__Vdly__v__DOT__W_39_reg_8833,31,0);
    VL_SIG(__Vdly__v__DOT__W_40_reg_8842,31,0);
    VL_SIG(__Vdly__v__DOT__tmp61_reg_8876,31,0);
    VL_SIG(__Vdly__v__DOT__tmp63_reg_8881,31,0);
    VL_SIG(__Vdly__v__DOT__W_68_reg_9981,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__W_41_reg_8932,31,0);
    VL_SIG(__Vdly__v__DOT__W_42_reg_8941,31,0);
    VL_SIG(__Vdly__v__DOT__W_43_reg_8950,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__W_44_reg_8995,31,0);
    VL_SIG(__Vdly__v__DOT__W_16_reg_8306,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__W_45_reg_9050,31,0);
    VL_SIG(__Vdly__v__DOT__W_17_reg_8358,31,0);
    VL_SIG(__Vdly__v__DOT__W_46_reg_9498,31,0);
    VL_SIG(__Vdly__v__DOT__temp_1_12_reg_9106,31,0);
    VL_SIG(__Vdly__v__DOT__temp_2_16_reg_10098,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__tmp_27_reg_8069,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__W_24_reg_8619,31,0);
    VL_SIG(__Vdly__v__DOT__W_25_reg_8631,31,0);
    VL_SIG(__Vdly__v__DOT__W_53_reg_9718,31,0);
    VL_SIG(__Vdly__v__DOT__tmp16_reg_8613,31,0);
    VL_SIG(__Vdly__v__DOT__tmp18_reg_8625,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__W_26_reg_8690,31,0);
    VL_SIG(__Vdly__v__DOT__W_58_reg_9820,31,0);
    VL_SIG(__Vdly__v__DOT__W_60_reg_9834,31,0);
    VL_SIG(__Vdly__v__DOT__W_62_reg_9848,31,0);
    VL_SIG(__Vdly__v__DOT__W_63_reg_9855,31,0);
    VL_SIG(__Vdly__v__DOT__W_64_reg_9862,31,0);
    VL_SIG(__Vdly__v__DOT__W_66_reg_9878,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5,31,0);
    VL_SIG(__Vdly__v__DOT__tmp103_reg_9885,31,0);
    VL_SIG(__Vdly__v__DOT__tmp20_reg_8684,31,0);
    VL_SIG(__Vdly__v__DOT__tmp22_reg_8696,31,0);
    VL_SIG(__Vdly__v__DOT__tmp24_reg_8709,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1,31,0);
    VL_SIG(__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1,31,0);
    // Body
    __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4 
	= vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4;
    __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2 
	= vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2;
    __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1;
    __Vdly__v__DOT__tmp_27_reg_8069 = vlTOPp->v__DOT__tmp_27_reg_8069;
    __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5 
	= vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5;
    __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4 
	= vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4;
    __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4 
	= vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4;
    __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2 
	= vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2;
    __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2 
	= vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2;
    __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1;
    __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1;
    __Vdly__v__DOT__W_32_reg_8776 = vlTOPp->v__DOT__W_32_reg_8776;
    __Vdly__v__DOT__W_35_reg_8800 = vlTOPp->v__DOT__W_35_reg_8800;
    __Vdly__v__DOT__W_38_reg_8824 = vlTOPp->v__DOT__W_38_reg_8824;
    __Vdly__v__DOT__tmp61_reg_8876 = vlTOPp->v__DOT__tmp61_reg_8876;
    __Vdly__v__DOT__tmp63_reg_8881 = vlTOPp->v__DOT__tmp63_reg_8881;
    __Vdly__v__DOT__W_33_reg_8784 = vlTOPp->v__DOT__W_33_reg_8784;
    __Vdly__v__DOT__W_36_reg_8808 = vlTOPp->v__DOT__W_36_reg_8808;
    __Vdly__v__DOT__W_39_reg_8833 = vlTOPp->v__DOT__W_39_reg_8833;
    __Vdly__v__DOT__W_34_reg_8792 = vlTOPp->v__DOT__W_34_reg_8792;
    __Vdly__v__DOT__W_37_reg_8816 = vlTOPp->v__DOT__W_37_reg_8816;
    __Vdly__v__DOT__W_40_reg_8842 = vlTOPp->v__DOT__W_40_reg_8842;
    __Vdly__v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3;
    __Vdly__v__DOT__W_24_reg_8619 = vlTOPp->v__DOT__W_24_reg_8619;
    __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4 
	= vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4;
    __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2 
	= vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2;
    __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1;
    __Vdly__v__DOT__W_25_reg_8631 = vlTOPp->v__DOT__W_25_reg_8631;
    __Vdly__v__DOT__W_53_reg_9718 = vlTOPp->v__DOT__W_53_reg_9718;
    __Vdly__v__DOT__tmp16_reg_8613 = vlTOPp->v__DOT__tmp16_reg_8613;
    __Vdly__v__DOT__tmp18_reg_8625 = vlTOPp->v__DOT__tmp18_reg_8625;
    __Vdly__v__DOT__W_60_reg_9834 = vlTOPp->v__DOT__W_60_reg_9834;
    __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5 
	= vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5;
    __Vdly__v__DOT__tmp103_reg_9885 = vlTOPp->v__DOT__tmp103_reg_9885;
    __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4 
	= vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4;
    __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4 
	= vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4;
    __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2 
	= vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2;
    __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2 
	= vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2;
    __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1;
    __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1;
    __Vdly__v__DOT__W_66_reg_9878 = vlTOPp->v__DOT__W_66_reg_9878;
    __Vdly__v__DOT__tmp20_reg_8684 = vlTOPp->v__DOT__tmp20_reg_8684;
    __Vdly__v__DOT__tmp22_reg_8696 = vlTOPp->v__DOT__tmp22_reg_8696;
    __Vdly__v__DOT__tmp24_reg_8709 = vlTOPp->v__DOT__tmp24_reg_8709;
    __Vdly__v__DOT__W_62_reg_9848 = vlTOPp->v__DOT__W_62_reg_9848;
    __Vdly__v__DOT__W_63_reg_9855 = vlTOPp->v__DOT__W_63_reg_9855;
    __Vdly__v__DOT__W_64_reg_9862 = vlTOPp->v__DOT__W_64_reg_9862;
    __Vdly__v__DOT__W_58_reg_9820 = vlTOPp->v__DOT__W_58_reg_9820;
    __Vdly__v__DOT__W_26_reg_8690 = vlTOPp->v__DOT__W_26_reg_8690;
    __Vdly__v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1;
    __Vdly__v__DOT__W_44_reg_8995 = vlTOPp->v__DOT__W_44_reg_8995;
    __Vdly__v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1;
    __Vdly__v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1;
    __Vdly__v__DOT__W_41_reg_8932 = vlTOPp->v__DOT__W_41_reg_8932;
    __Vdly__v__DOT__W_42_reg_8941 = vlTOPp->v__DOT__W_42_reg_8941;
    __Vdly__v__DOT__W_43_reg_8950 = vlTOPp->v__DOT__W_43_reg_8950;
    __Vdly__v__DOT__W_68_reg_9981 = vlTOPp->v__DOT__W_68_reg_9981;
    __Vdly__v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3;
    __Vdly__v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3;
    __Vdly__v__DOT__W_45_reg_9050 = vlTOPp->v__DOT__W_45_reg_9050;
    __Vdly__v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1;
    __Vdly__v__DOT__W_16_reg_8306 = vlTOPp->v__DOT__W_16_reg_8306;
    __Vdly__v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
	= vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3;
    __Vdly__v__DOT__temp_1_12_reg_9106 = vlTOPp->v__DOT__temp_1_12_reg_9106;
    __Vdly__v__DOT__temp_2_16_reg_10098 = vlTOPp->v__DOT__temp_2_16_reg_10098;
    __Vdly__v__DOT__W_17_reg_8358 = vlTOPp->v__DOT__W_17_reg_8358;
    __Vdly__v__DOT__W_46_reg_9498 = vlTOPp->v__DOT__W_46_reg_9498;
    // ALWAYS at sha_transform.v:1913
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0_preg = 0U;
    } else {
	if ((1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		   & (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			 & (~ (IData)(vlTOPp->ap_start))))))) {
	    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0_preg 
		= vlTOPp->ap_start;
	}
    }
    // ALWAYS at sha_transform.v:1973
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6 = 0U;
    } else {
	if ((1U & (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
		    >> 3U) & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5))))) {
	    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6 = 0U;
	} else {
	    if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
		vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6 
		    = vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5;
	    }
	}
    }
    // ALWAYS at sha_transform.v:2081
    if ((0x20U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_11_reg_8242 = vlTOPp->v__DOT__C_1_11_fu_1464_p3;
	vlTOPp->v__DOT__C_1_1_reg_7753 = vlTOPp->v__DOT__C_1_1_fu_545_p3;
	vlTOPp->v__DOT__C_2_7_reg_8959 = vlTOPp->v__DOT__C_2_7_fu_3066_p3;
	vlTOPp->v__DOT__C_2_8_reg_8969 = vlTOPp->v__DOT__C_2_8_fu_3110_p3;
	vlTOPp->v__DOT__C_3_12_reg_9988 = vlTOPp->v__DOT__C_3_12_fu_5466_p3;
	vlTOPp->v__DOT__C_3_2_reg_9402 = vlTOPp->v__DOT__C_3_2_fu_4209_p3;
	vlTOPp->v__DOT__C_4_7_reg_10468 = vlTOPp->v__DOT__C_4_7_fu_6668_p3;
	vlTOPp->v__DOT__C_4_8_reg_10478 = vlTOPp->v__DOT__C_4_8_fu_6712_p3;
	__Vdly__v__DOT__W_68_reg_9981 = (vlTOPp->v__DOT__tmp105_reg_9890 
					 ^ (vlTOPp->v__DOT__W_65_reg_9870 
					    ^ vlTOPp->v__DOT__W_54_reg_9724));
	vlTOPp->v__DOT__W_77_reg_10463 = (vlTOPp->v__DOT__tmp123_reg_10371 
					  ^ (vlTOPp->v__DOT__W_69_reg_10020 
					     ^ vlTOPp->v__DOT__W_74_reg_10302));
	__Vdly__v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1 
	    = vlTOPp->v__DOT__W_3_reg_7729;
	__Vdly__v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3 
	    = vlTOPp->v__DOT__W_41_reg_8932;
	__Vdly__v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3 
	    = vlTOPp->v__DOT__W_42_reg_8941;
	__Vdly__v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
	    = vlTOPp->v__DOT__W_43_reg_8950;
	vlTOPp->v__DOT__ap_reg_ppstg_W_4_reg_7736_pp0_it1 
	    = vlTOPp->v__DOT__W_4_reg_7736;
	vlTOPp->v__DOT__temp_12_reg_8248 = vlTOPp->v__DOT__temp_12_fu_1513_p2;
	vlTOPp->v__DOT__temp_1_8_reg_8964 = vlTOPp->v__DOT__temp_1_8_fu_3104_p2;
	vlTOPp->v__DOT__temp_1_reg_7759 = vlTOPp->v__DOT__temp_1_fu_594_p2;
	vlTOPp->v__DOT__temp_2_13_reg_9995 = vlTOPp->v__DOT__temp_2_13_fu_5515_p2;
	vlTOPp->v__DOT__temp_2_3_reg_9409 = vlTOPp->v__DOT__temp_2_3_fu_4258_p2;
	vlTOPp->v__DOT__temp_3_8_reg_10473 = vlTOPp->v__DOT__temp_3_8_fu_6706_p2;
	vlTOPp->v__DOT__tmp227_reg_8980 = ((IData)(0x6ed9eba1U) 
					   + (vlTOPp->v__DOT__W_29_reg_8758 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_1_8_fu_3104_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_1_8_fu_3104_p2 
						       >> 0x1bU)))));
	vlTOPp->v__DOT__tmp367_reg_10489 = ((IData)(0xca62c1d6U) 
					    + (vlTOPp->v__DOT__W_69_reg_10020 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_8_fu_6706_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_8_fu_6706_p2 
							>> 0x1bU)))));
	vlTOPp->v__DOT__tmp_138_reg_7765 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_fu_594_p2);
	vlTOPp->v__DOT__tmp_143_reg_7775 = (3U & vlTOPp->v__DOT__temp_1_fu_594_p2);
	vlTOPp->v__DOT__tmp_15_13_reg_8259 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_12_fu_1513_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_15_3_reg_7770 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_1_fu_594_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_171_reg_8254 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_12_fu_1513_p2);
	vlTOPp->v__DOT__tmp_176_reg_8264 = (3U & vlTOPp->v__DOT__temp_12_fu_1513_p2);
	vlTOPp->v__DOT__tmp_232_reg_8985 = (3U & vlTOPp->v__DOT__temp_1_8_fu_3104_p2);
	vlTOPp->v__DOT__tmp_26_14_reg_8269 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_12_fu_1513_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_26_4_reg_7780 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_fu_594_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_281_reg_9414 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_3_fu_4258_p2);
	vlTOPp->v__DOT__tmp_286_reg_9424 = (3U & vlTOPp->v__DOT__temp_2_3_fu_4258_p2);
	vlTOPp->v__DOT__tmp_314_reg_10000 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_2_13_fu_5515_p2);
	vlTOPp->v__DOT__tmp_319_reg_10010 = (3U & vlTOPp->v__DOT__temp_2_13_fu_5515_p2);
	vlTOPp->v__DOT__tmp_31_9_reg_8975 = ((vlTOPp->v__DOT__temp_1_7_reg_8897 
					      ^ vlTOPp->v__DOT__C_2_7_fu_3066_p3) 
					     ^ vlTOPp->v__DOT__C_2_8_fu_3110_p3);
	vlTOPp->v__DOT__tmp_372_reg_10494 = (3U & vlTOPp->v__DOT__temp_3_8_fu_6706_p2);
	vlTOPp->v__DOT__tmp_37_s_reg_8990 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_8_fu_3104_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_39_14_reg_10005 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_2_13_fu_5515_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_4_reg_9419 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_3_fu_4258_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_50_15_reg_10015 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_2_13_fu_5515_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_50_5_reg_9429 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_3_fu_4258_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_61_9_reg_10484 = ((vlTOPp->v__DOT__temp_3_7_reg_10428 
					       ^ vlTOPp->v__DOT__C_4_7_fu_6668_p3) 
					      ^ vlTOPp->v__DOT__C_4_8_fu_6712_p3);
	vlTOPp->v__DOT__tmp_67_s_reg_10499 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_8_fu_6706_p2 
						 >> 2U));
	__Vdly__v__DOT__W_41_reg_8932 = (vlTOPp->v__DOT__tmp51_reg_8851 
					 ^ (vlTOPp->v__DOT__W_38_reg_8824 
					    ^ vlTOPp->v__DOT__W_27_reg_8702));
	__Vdly__v__DOT__W_42_reg_8941 = (vlTOPp->v__DOT__tmp53_reg_8856 
					 ^ (vlTOPp->v__DOT__W_39_reg_8833 
					    ^ vlTOPp->v__DOT__W_28_reg_8715));
	__Vdly__v__DOT__W_43_reg_8950 = (vlTOPp->v__DOT__tmp55_reg_8861 
					 ^ (vlTOPp->v__DOT__W_40_reg_8842 
					    ^ vlTOPp->v__DOT__W_29_reg_8758));
    }
    // ALWAYS at sha_transform.v:2238
    if ((0x100U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_15_reg_8373 = vlTOPp->v__DOT__C_1_15_fu_1796_p3;
	vlTOPp->v__DOT__C_1_4_reg_7924 = vlTOPp->v__DOT__C_1_4_fu_794_p3;
	vlTOPp->v__DOT__C_2_11_reg_9100 = vlTOPp->v__DOT__C_2_11_fu_3420_p3;
	vlTOPp->v__DOT__C_3_15_reg_10091 = vlTOPp->v__DOT__C_3_15_fu_5724_p3;
	vlTOPp->v__DOT__C_3_5_reg_9506 = vlTOPp->v__DOT__C_3_5_fu_4467_p3;
	vlTOPp->v__DOT__C_4_11_reg_10601 = vlTOPp->v__DOT__C_4_11_fu_7022_p3;
	__Vdly__v__DOT__W_17_reg_8358 = vlTOPp->v__DOT__W_17_fu_1763_p2;
	__Vdly__v__DOT__W_46_reg_9498 = vlTOPp->v__DOT__W_46_fu_4462_p2;
	vlTOPp->v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1 
	    = vlTOPp->v__DOT__W_10_reg_7906;
	vlTOPp->v__DOT__ap_reg_ppstg_W_9_reg_7898_pp0_it1 
	    = vlTOPp->v__DOT__W_9_reg_7898;
	vlTOPp->v__DOT__temp_15_reg_8367 = vlTOPp->v__DOT__temp_15_fu_1790_p2;
	vlTOPp->v__DOT__temp_1_11_reg_9095 = vlTOPp->v__DOT__temp_1_11_fu_3415_p2;
	__Vdly__v__DOT__temp_1_12_reg_9106 = vlTOPp->v__DOT__temp_1_12_fu_3474_p2;
	__Vdly__v__DOT__temp_2_16_reg_10098 = vlTOPp->v__DOT__temp_2_16_fu_5773_p2;
	vlTOPp->v__DOT__temp_2_6_reg_9513 = vlTOPp->v__DOT__temp_2_6_fu_4517_p2;
	vlTOPp->v__DOT__temp_3_11_reg_10596 = vlTOPp->v__DOT__temp_3_11_fu_7017_p2;
	vlTOPp->v__DOT__temp_3_12_reg_10607 = vlTOPp->v__DOT__temp_3_12_fu_7076_p2;
	vlTOPp->v__DOT__temp_5_reg_7930 = vlTOPp->v__DOT__temp_5_fu_843_p2;
	vlTOPp->v__DOT__tmp181_reg_8384 = ((IData)(0x5a827999U) 
					   + (vlTOPp->v__DOT__W_17_fu_1763_p2 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_15_fu_1790_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_15_fu_1790_p2 
						       >> 0x1bU)))));
	vlTOPp->v__DOT__tmp_147_reg_7936 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_5_fu_843_p2);
	vlTOPp->v__DOT__tmp_152_reg_7946 = (3U & vlTOPp->v__DOT__temp_5_fu_843_p2);
	vlTOPp->v__DOT__tmp_15_6_reg_7941 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_5_fu_843_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_185_reg_8389 = (3U & vlTOPp->v__DOT__temp_15_fu_1790_p2);
	vlTOPp->v__DOT__tmp_20_16_reg_8379 = ((vlTOPp->v__DOT__C_1_14_reg_8327 
					       & (~ vlTOPp->v__DOT__temp_14_reg_8321)) 
					      | (vlTOPp->v__DOT__C_1_15_fu_1796_p3 
						 & vlTOPp->v__DOT__temp_14_reg_8321));
	vlTOPp->v__DOT__tmp_245_reg_9111 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_12_fu_3474_p2);
	vlTOPp->v__DOT__tmp_248_reg_9121 = (3U & vlTOPp->v__DOT__temp_1_11_fu_3415_p2);
	vlTOPp->v__DOT__tmp_252_reg_9131 = (3U & vlTOPp->v__DOT__temp_1_12_fu_3474_p2);
	vlTOPp->v__DOT__tmp_26_17_reg_8394 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_15_fu_1790_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_26_7_reg_7951 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_5_fu_843_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_28_13_reg_9116 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_1_12_fu_3474_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_290_reg_9518 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_6_fu_4517_p2);
	vlTOPp->v__DOT__tmp_295_reg_9528 = (3U & vlTOPp->v__DOT__temp_2_6_fu_4517_p2);
	vlTOPp->v__DOT__tmp_323_reg_10103 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_2_16_fu_5773_p2);
	vlTOPp->v__DOT__tmp_328_reg_10113 = (3U & vlTOPp->v__DOT__temp_2_16_fu_5773_p2);
	vlTOPp->v__DOT__tmp_37_13_reg_9126 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_11_fu_3415_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_37_14_reg_9136 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_12_fu_3474_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_385_reg_10612 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_12_fu_7076_p2);
	vlTOPp->v__DOT__tmp_388_reg_10622 = (3U & vlTOPp->v__DOT__temp_3_11_fu_7017_p2);
	vlTOPp->v__DOT__tmp_392_reg_10632 = (3U & vlTOPp->v__DOT__temp_3_12_fu_7076_p2);
	vlTOPp->v__DOT__tmp_39_17_reg_10108 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_2_16_fu_5773_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_7_reg_9523 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_6_fu_4517_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_50_18_reg_10118 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_2_16_fu_5773_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_50_8_reg_9533 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_6_fu_4517_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_58_13_reg_10617 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_3_12_fu_7076_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_67_13_reg_10627 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_11_fu_7017_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_67_14_reg_10637 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_12_fu_7076_p2 
						  >> 2U));
    }
    vlTOPp->v__DOT__W_43_reg_8950 = __Vdly__v__DOT__W_43_reg_8950;
    // ALWAYS at sha_transform.v:1963
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5 = 0U;
    } else {
	if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5 = vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4;
	}
    }
    vlTOPp->v__DOT__C_1_4_fu_794_p3 = (((IData)(vlTOPp->v__DOT__tmp_143_reg_7775) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_4_reg_7780);
    vlTOPp->v__DOT__C_3_15_fu_5724_p3 = (((IData)(vlTOPp->v__DOT__tmp_319_reg_10010) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_15_reg_10015);
    vlTOPp->v__DOT__C_3_5_fu_4467_p3 = (((IData)(vlTOPp->v__DOT__tmp_286_reg_9424) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_5_reg_9429);
    // ALWAYS at sha_transform.v:2705
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 5U))) {
	vlTOPp->v__DOT__W_3_reg_7729 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__W_4_reg_7736 = vlTOPp->buff_q1;
    }
    // ALWAYS at sha_transform.v:2671
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 8U))) {
	vlTOPp->v__DOT__W_10_reg_7906 = vlTOPp->buff_q1;
	vlTOPp->v__DOT__W_9_reg_7898 = vlTOPp->buff_q0;
    }
    // ALWAYS at sha_transform.v:2187
    if ((0x80U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_13_reg_8316 = vlTOPp->v__DOT__C_1_13_fu_1644_p3;
	vlTOPp->v__DOT__C_1_14_reg_8327 = vlTOPp->v__DOT__C_1_14_fu_1699_p3;
	vlTOPp->v__DOT__C_1_3_reg_7866 = vlTOPp->v__DOT__C_1_3_fu_711_p3;
	vlTOPp->v__DOT__C_2_10_reg_9069 = vlTOPp->v__DOT__C_2_10_fu_3347_p3;
	vlTOPp->v__DOT__C_2_s_reg_9059 = vlTOPp->v__DOT__C_2_s_fu_3303_p3;
	vlTOPp->v__DOT__C_3_14_reg_10059 = vlTOPp->v__DOT__C_3_14_fu_5641_p3;
	vlTOPp->v__DOT__C_3_4_reg_9466 = vlTOPp->v__DOT__C_3_4_fu_4375_p3;
	vlTOPp->v__DOT__C_4_10_reg_10570 = vlTOPp->v__DOT__C_4_10_fu_6949_p3;
	vlTOPp->v__DOT__C_4_s_reg_10560 = vlTOPp->v__DOT__C_4_s_fu_6905_p3;
	__Vdly__v__DOT__W_16_reg_8306 = ((vlTOPp->v__DOT__W_8_reg_7848 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_0_reg_7599_pp0_it1) 
					 ^ (vlTOPp->v__DOT__W_13_reg_8014 
					    ^ vlTOPp->v__DOT__ap_reg_ppstg_W_2_reg_7680_pp0_it1));
	vlTOPp->v__DOT__W_79_reg_10555 = (vlTOPp->v__DOT__tmp127_reg_10376 
					  ^ (vlTOPp->v__DOT__W_71_reg_10285 
					     ^ vlTOPp->v__DOT__W_76_reg_10308));
	__Vdly__v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
	    = vlTOPp->v__DOT__W_45_reg_9050;
	vlTOPp->v__DOT__ap_reg_ppstg_W_7_reg_7841_pp0_it1 
	    = vlTOPp->v__DOT__W_7_reg_7841;
	__Vdly__v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1 
	    = vlTOPp->v__DOT__W_8_reg_7848;
	vlTOPp->v__DOT__temp_14_reg_8321 = vlTOPp->v__DOT__temp_14_fu_1693_p2;
	vlTOPp->v__DOT__temp_1_10_reg_9064 = vlTOPp->v__DOT__temp_1_10_fu_3341_p2;
	vlTOPp->v__DOT__temp_2_15_reg_10066 = vlTOPp->v__DOT__temp_2_15_fu_5690_p2;
	vlTOPp->v__DOT__temp_2_5_reg_9473 = vlTOPp->v__DOT__temp_2_5_fu_4424_p2;
	vlTOPp->v__DOT__temp_3_10_reg_10565 = vlTOPp->v__DOT__temp_3_10_fu_6943_p2;
	vlTOPp->v__DOT__temp_4_reg_7872 = vlTOPp->v__DOT__temp_4_fu_760_p2;
	vlTOPp->v__DOT__tmp239_reg_9080 = ((IData)(0x6ed9eba1U) 
					   + (vlTOPp->v__DOT__W_32_reg_8776 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_1_10_fu_3341_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_1_10_fu_3341_p2 
						       >> 0x1bU)))));
	vlTOPp->v__DOT__tmp379_reg_10581 = ((IData)(0xca62c1d6U) 
					    + (vlTOPp->v__DOT__W_72_reg_10291 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_10_fu_6943_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_10_fu_6943_p2 
							>> 0x1bU)))));
	vlTOPp->v__DOT__tmp_144_reg_7878 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_4_fu_760_p2);
	vlTOPp->v__DOT__tmp_149_reg_7888 = (3U & vlTOPp->v__DOT__temp_4_fu_760_p2);
	vlTOPp->v__DOT__tmp_15_15_reg_8338 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_14_fu_1693_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_15_5_reg_7883 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_4_fu_760_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_177_reg_8333 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_14_fu_1693_p2);
	vlTOPp->v__DOT__tmp_182_reg_8348 = (3U & vlTOPp->v__DOT__temp_14_fu_1693_p2);
	vlTOPp->v__DOT__tmp_20_15_reg_8343 = ((vlTOPp->v__DOT__C_1_13_fu_1644_p3 
					       & (~ vlTOPp->v__DOT__temp_13_reg_8280)) 
					      | (vlTOPp->v__DOT__C_1_14_fu_1699_p3 
						 & vlTOPp->v__DOT__temp_13_reg_8280));
	vlTOPp->v__DOT__tmp_244_reg_9085 = (3U & vlTOPp->v__DOT__temp_1_10_fu_3341_p2);
	vlTOPp->v__DOT__tmp_26_16_reg_8353 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_14_fu_1693_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_26_6_reg_7893 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_4_fu_760_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_287_reg_9478 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_5_fu_4424_p2);
	vlTOPp->v__DOT__tmp_292_reg_9488 = (3U & vlTOPp->v__DOT__temp_2_5_fu_4424_p2);
	vlTOPp->v__DOT__tmp_31_11_reg_9075 = ((vlTOPp->v__DOT__temp_1_s_reg_9015 
					       ^ vlTOPp->v__DOT__C_2_s_fu_3303_p3) 
					      ^ vlTOPp->v__DOT__C_2_10_fu_3347_p3);
	vlTOPp->v__DOT__tmp_320_reg_10071 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_2_15_fu_5690_p2);
	vlTOPp->v__DOT__tmp_325_reg_10081 = (3U & vlTOPp->v__DOT__temp_2_15_fu_5690_p2);
	vlTOPp->v__DOT__tmp_37_12_reg_9090 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_10_fu_3341_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_384_reg_10586 = (3U & vlTOPp->v__DOT__temp_3_10_fu_6943_p2);
	vlTOPp->v__DOT__tmp_39_16_reg_10076 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_2_15_fu_5690_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_6_reg_9483 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_5_fu_4424_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_50_17_reg_10086 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_2_15_fu_5690_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_50_7_reg_9493 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_5_fu_4424_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_61_11_reg_10576 = ((vlTOPp->v__DOT__temp_3_s_reg_10520 
						^ vlTOPp->v__DOT__C_4_s_fu_6905_p3) 
					       ^ vlTOPp->v__DOT__C_4_10_fu_6949_p3);
	vlTOPp->v__DOT__tmp_67_12_reg_10591 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_10_fu_6943_p2 
						  >> 2U));
	__Vdly__v__DOT__W_45_reg_9050 = (vlTOPp->v__DOT__tmp59_reg_8871 
					 ^ (vlTOPp->v__DOT__W_42_reg_8941 
					    ^ vlTOPp->v__DOT__W_31_reg_8770));
    }
    vlTOPp->v__DOT__C_1_14_fu_1699_p3 = (((IData)(vlTOPp->v__DOT__tmp_176_reg_8264) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_14_reg_8269);
    vlTOPp->v__DOT__W_45_reg_9050 = __Vdly__v__DOT__W_45_reg_9050;
    vlTOPp->v__DOT__W_42_reg_8941 = __Vdly__v__DOT__W_42_reg_8941;
    vlTOPp->v__DOT__C_2_s_fu_3303_p3 = (((IData)(vlTOPp->v__DOT__tmp_232_reg_8985) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_s_reg_8990);
    vlTOPp->v__DOT__C_4_s_fu_6905_p3 = (((IData)(vlTOPp->v__DOT__tmp_372_reg_10494) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_s_reg_10499);
    // ALWAYS at sha_transform.v:1953
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4 = 0U;
    } else {
	if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4 = vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3;
	}
    }
    // ALWAYS at sha_transform.v:2719
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 7U))) {
	vlTOPp->v__DOT__W_7_reg_7841 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__W_8_reg_7848 = vlTOPp->buff_q1;
    }
    // ALWAYS at sha_transform.v:2134
    if ((0x40U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_12_reg_8274 = vlTOPp->v__DOT__C_1_12_fu_1547_p3;
	vlTOPp->v__DOT__C_1_2_reg_7809 = vlTOPp->v__DOT__C_1_2_fu_628_p3;
	vlTOPp->v__DOT__C_2_9_reg_9009 = vlTOPp->v__DOT__C_2_9_fu_3192_p3;
	vlTOPp->v__DOT__C_3_13_reg_10027 = vlTOPp->v__DOT__C_3_13_fu_5558_p3;
	vlTOPp->v__DOT__C_3_3_reg_9434 = vlTOPp->v__DOT__C_3_3_fu_4292_p3;
	vlTOPp->v__DOT__C_4_9_reg_10514 = vlTOPp->v__DOT__C_4_9_fu_6794_p3;
	vlTOPp->v__DOT__W_69_reg_10020 = (vlTOPp->v__DOT__tmp107_reg_9895 
					  ^ (vlTOPp->v__DOT__W_66_reg_9878 
					     ^ vlTOPp->v__DOT__W_55_reg_9730));
	vlTOPp->v__DOT__W_78_reg_10504 = (vlTOPp->v__DOT__tmp125_reg_10314 
					  ^ (vlTOPp->v__DOT__W_70_reg_10279 
					     ^ vlTOPp->v__DOT__W_75_reg_10365));
	__Vdly__v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
	    = vlTOPp->v__DOT__W_44_reg_8995;
	__Vdly__v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1 
	    = vlTOPp->v__DOT__W_5_reg_7785;
	__Vdly__v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1 
	    = vlTOPp->v__DOT__W_6_reg_7792;
	vlTOPp->v__DOT__temp_13_reg_8280 = vlTOPp->v__DOT__temp_13_fu_1596_p2;
	vlTOPp->v__DOT__temp_1_9_reg_9004 = vlTOPp->v__DOT__temp_1_9_fu_3187_p2;
	vlTOPp->v__DOT__temp_1_s_reg_9015 = vlTOPp->v__DOT__temp_1_s_fu_3246_p2;
	vlTOPp->v__DOT__temp_2_14_reg_10034 = vlTOPp->v__DOT__temp_2_14_fu_5607_p2;
	vlTOPp->v__DOT__temp_2_4_reg_9441 = vlTOPp->v__DOT__temp_2_4_fu_4341_p2;
	vlTOPp->v__DOT__temp_2_reg_7815 = vlTOPp->v__DOT__temp_2_fu_677_p2;
	vlTOPp->v__DOT__temp_3_9_reg_10509 = vlTOPp->v__DOT__temp_3_9_fu_6789_p2;
	vlTOPp->v__DOT__temp_3_s_reg_10520 = vlTOPp->v__DOT__temp_3_s_fu_6848_p2;
	vlTOPp->v__DOT__tmp_141_reg_7821 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_fu_677_p2);
	vlTOPp->v__DOT__tmp_146_reg_7831 = (3U & vlTOPp->v__DOT__temp_2_fu_677_p2);
	vlTOPp->v__DOT__tmp_15_14_reg_8291 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_13_fu_1596_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_15_4_reg_7826 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_fu_677_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_174_reg_8286 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_13_fu_1596_p2);
	vlTOPp->v__DOT__tmp_179_reg_8296 = (3U & vlTOPp->v__DOT__temp_13_fu_1596_p2);
	vlTOPp->v__DOT__tmp_233_reg_9020 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_s_fu_3246_p2);
	vlTOPp->v__DOT__tmp_236_reg_9030 = (3U & vlTOPp->v__DOT__temp_1_9_fu_3187_p2);
	vlTOPp->v__DOT__tmp_240_reg_9040 = (3U & vlTOPp->v__DOT__temp_1_s_fu_3246_p2);
	vlTOPp->v__DOT__tmp_26_15_reg_8301 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_13_fu_1596_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_26_5_reg_7836 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_fu_677_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_284_reg_9446 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_4_fu_4341_p2);
	vlTOPp->v__DOT__tmp_289_reg_9456 = (3U & vlTOPp->v__DOT__temp_2_4_fu_4341_p2);
	vlTOPp->v__DOT__tmp_28_10_reg_9025 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_1_s_fu_3246_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_317_reg_10039 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_2_14_fu_5607_p2);
	vlTOPp->v__DOT__tmp_322_reg_10049 = (3U & vlTOPp->v__DOT__temp_2_14_fu_5607_p2);
	vlTOPp->v__DOT__tmp_373_reg_10525 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_s_fu_6848_p2);
	vlTOPp->v__DOT__tmp_376_reg_10535 = (3U & vlTOPp->v__DOT__temp_3_9_fu_6789_p2);
	vlTOPp->v__DOT__tmp_37_10_reg_9035 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_9_fu_3187_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_37_11_reg_9045 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_s_fu_3246_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_380_reg_10545 = (3U & vlTOPp->v__DOT__temp_3_s_fu_6848_p2);
	vlTOPp->v__DOT__tmp_39_15_reg_10044 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_2_14_fu_5607_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_5_reg_9451 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_4_fu_4341_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_50_16_reg_10054 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_2_14_fu_5607_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_50_6_reg_9461 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_4_fu_4341_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_58_10_reg_10530 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_3_s_fu_6848_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_67_10_reg_10540 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_9_fu_6789_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_67_11_reg_10550 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_s_fu_6848_p2 
						  >> 2U));
	__Vdly__v__DOT__W_44_reg_8995 = (vlTOPp->v__DOT__tmp57_reg_8866 
					 ^ (vlTOPp->v__DOT__W_41_reg_8932 
					    ^ vlTOPp->v__DOT__W_30_reg_8764));
    }
    vlTOPp->v__DOT__W_44_reg_8995 = __Vdly__v__DOT__W_44_reg_8995;
    vlTOPp->v__DOT__W_41_reg_8932 = __Vdly__v__DOT__W_41_reg_8932;
    // ALWAYS at sha_transform.v:1943
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3 = 0U;
    } else {
	if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3 = vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2;
	}
    }
    vlTOPp->v__DOT__C_1_15_fu_1796_p3 = (((IData)(vlTOPp->v__DOT__tmp_179_reg_8296) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_15_reg_8301);
    vlTOPp->v__DOT__C_2_10_fu_3347_p3 = (((IData)(vlTOPp->v__DOT__tmp_236_reg_9030) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_10_reg_9035);
    vlTOPp->v__DOT__C_4_10_fu_6949_p3 = (((IData)(vlTOPp->v__DOT__tmp_376_reg_10535) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_10_reg_10540);
    vlTOPp->v__DOT__C_2_11_fu_3420_p3 = (((IData)(vlTOPp->v__DOT__tmp_240_reg_9040) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_11_reg_9045);
    vlTOPp->v__DOT__C_4_11_fu_7022_p3 = (((IData)(vlTOPp->v__DOT__tmp_380_reg_10545) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_11_reg_10550);
    vlTOPp->v__DOT__temp_1_11_fu_3415_p2 = (vlTOPp->v__DOT__tmp239_reg_9080 
					    + (vlTOPp->v__DOT__C_2_9_reg_9009 
					       + vlTOPp->v__DOT__tmp_31_11_reg_9075));
    vlTOPp->v__DOT__temp_3_11_fu_7017_p2 = (vlTOPp->v__DOT__tmp379_reg_10581 
					    + (vlTOPp->v__DOT__C_4_9_reg_10514 
					       + vlTOPp->v__DOT__tmp_61_11_reg_10576));
    // ALWAYS at sha_transform.v:2712
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 6U))) {
	vlTOPp->v__DOT__W_5_reg_7785 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__W_6_reg_7792 = vlTOPp->buff_q1;
    }
    // ALWAYS at sha_transform.v:2588
    if ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_s_reg_8178 = vlTOPp->v__DOT__C_1_s_fu_1298_p3;
	vlTOPp->v__DOT__C_2_4_reg_8722 = vlTOPp->v__DOT__C_2_4_fu_2602_p3;
	vlTOPp->v__DOT__C_2_5_reg_8732 = vlTOPp->v__DOT__C_2_5_fu_2646_p3;
	vlTOPp->v__DOT__C_3_10_reg_9910 = vlTOPp->v__DOT__C_3_10_fu_5282_p3;
	vlTOPp->v__DOT__C_3_reg_9338 = vlTOPp->v__DOT__C_3_fu_4043_p3;
	vlTOPp->v__DOT__C_4_4_reg_10381 = vlTOPp->v__DOT__C_4_4_fu_6440_p3;
	vlTOPp->v__DOT__C_4_5_reg_10391 = vlTOPp->v__DOT__C_4_5_fu_6484_p3;
	__Vdly__v__DOT__W_26_reg_8690 = vlTOPp->v__DOT__W_26_fu_2568_p2;
	vlTOPp->v__DOT__W_27_reg_8702 = ((vlTOPp->v__DOT__W_19_reg_8407 
					  ^ vlTOPp->v__DOT__W_24_reg_8619) 
					 ^ vlTOPp->v__DOT__tmp22_fu_2574_p2);
	vlTOPp->v__DOT__W_28_reg_8715 = ((vlTOPp->v__DOT__W_20_reg_8467 
					  ^ vlTOPp->v__DOT__W_25_reg_8631) 
					 ^ vlTOPp->v__DOT__tmp24_fu_2588_p2);
	__Vdly__v__DOT__W_58_reg_9820 = vlTOPp->v__DOT__W_58_fu_5168_p2;
	vlTOPp->v__DOT__W_59_reg_9827 = vlTOPp->v__DOT__W_59_fu_5177_p2;
	__Vdly__v__DOT__W_60_reg_9834 = vlTOPp->v__DOT__W_60_fu_5186_p2;
	vlTOPp->v__DOT__W_61_reg_9841 = vlTOPp->v__DOT__W_61_fu_5196_p2;
	__Vdly__v__DOT__W_62_reg_9848 = vlTOPp->v__DOT__W_62_fu_5206_p2;
	__Vdly__v__DOT__W_63_reg_9855 = vlTOPp->v__DOT__W_63_fu_5216_p2;
	__Vdly__v__DOT__W_64_reg_9862 = (vlTOPp->v__DOT__tmp97_reg_9778 
					 ^ (vlTOPp->v__DOT__W_61_fu_5196_p2 
					    ^ vlTOPp->v__DOT__W_50_reg_9664));
	vlTOPp->v__DOT__W_65_reg_9870 = (vlTOPp->v__DOT__tmp99_reg_9783 
					 ^ (vlTOPp->v__DOT__W_62_fu_5206_p2 
					    ^ vlTOPp->v__DOT__W_51_reg_9707));
	__Vdly__v__DOT__W_66_reg_9878 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp84_fu_5164_p2) 
					 ^ (vlTOPp->v__DOT__W_63_fu_5216_p2 
					    ^ vlTOPp->v__DOT__W_52_reg_9712));
	vlTOPp->v__DOT__W_75_reg_10365 = vlTOPp->v__DOT__W_75_fu_6426_p2;
	__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5 
	    = vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4;
	vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it5 
	    = vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4;
	vlTOPp->v__DOT__temp_10_reg_8184 = vlTOPp->v__DOT__temp_10_fu_1347_p2;
	vlTOPp->v__DOT__temp_1_5_reg_8727 = vlTOPp->v__DOT__temp_1_5_fu_2640_p2;
	vlTOPp->v__DOT__temp_2_11_reg_9917 = vlTOPp->v__DOT__temp_2_11_fu_5331_p2;
	vlTOPp->v__DOT__temp_2_1_reg_9345 = vlTOPp->v__DOT__temp_2_1_fu_4092_p2;
	vlTOPp->v__DOT__temp_3_5_reg_10386 = vlTOPp->v__DOT__temp_3_5_fu_6478_p2;
	vlTOPp->v__DOT__temp_reg_7639 = vlTOPp->v__DOT__temp_fu_423_p2;
	__Vdly__v__DOT__tmp103_reg_9885 = (vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
					   ^ vlTOPp->v__DOT__tmp86_fu_5173_p2);
	vlTOPp->v__DOT__tmp105_reg_9890 = (vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
					   ^ vlTOPp->v__DOT__tmp88_fu_5182_p2);
	vlTOPp->v__DOT__tmp107_reg_9895 = (vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
					   ^ vlTOPp->v__DOT__tmp90_fu_5191_p2);
	vlTOPp->v__DOT__tmp109_reg_9900 = (vlTOPp->v__DOT__W_46_reg_9498 
					   ^ vlTOPp->v__DOT__tmp92_fu_5201_p2);
	vlTOPp->v__DOT__tmp111_reg_9905 = (vlTOPp->v__DOT__W_47_reg_9538 
					   ^ vlTOPp->v__DOT__tmp94_fu_5211_p2);
	vlTOPp->v__DOT__tmp123_reg_10371 = vlTOPp->v__DOT__tmp123_fu_6432_p2;
	vlTOPp->v__DOT__tmp127_reg_10376 = vlTOPp->v__DOT__tmp127_fu_6436_p2;
	__Vdly__v__DOT__tmp20_reg_8684 = vlTOPp->v__DOT__tmp20_fu_2560_p2;
	vlTOPp->v__DOT__tmp215_reg_8743 = ((IData)(0x6ed9eba1U) 
					   + (vlTOPp->v__DOT__W_26_fu_2568_p2 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_1_5_fu_2640_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_1_5_fu_2640_p2 
						       >> 0x1bU)))));
	__Vdly__v__DOT__tmp22_reg_8696 = vlTOPp->v__DOT__tmp22_fu_2574_p2;
	__Vdly__v__DOT__tmp24_reg_8709 = vlTOPp->v__DOT__tmp24_fu_2588_p2;
	vlTOPp->v__DOT__tmp355_reg_10402 = vlTOPp->v__DOT__tmp355_fu_6528_p2;
	vlTOPp->v__DOT__tmp_132_reg_7645 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_fu_423_p2);
	vlTOPp->v__DOT__tmp_134_reg_7655 = (3U & vlTOPp->buff_q0);
	vlTOPp->v__DOT__tmp_137_reg_7665 = (3U & vlTOPp->v__DOT__temp_fu_423_p2);
	vlTOPp->v__DOT__tmp_15_11_reg_8195 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_10_fu_1347_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_15_1_reg_7650 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_fu_423_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_165_reg_8190 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_10_fu_1347_p2);
	vlTOPp->v__DOT__tmp_170_reg_8200 = (3U & vlTOPp->v__DOT__temp_10_fu_1347_p2);
	vlTOPp->v__DOT__tmp_220_reg_8748 = (3U & vlTOPp->v__DOT__temp_1_5_fu_2640_p2);
	vlTOPp->v__DOT__tmp_26_12_reg_8205 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_10_fu_1347_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_26_2_reg_7670 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_fu_423_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_275_reg_9350 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_1_fu_4092_p2);
	vlTOPp->v__DOT__tmp_280_reg_9360 = (3U & vlTOPp->v__DOT__temp_2_1_fu_4092_p2);
	vlTOPp->v__DOT__tmp_308_reg_9922 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_11_fu_5331_p2);
	vlTOPp->v__DOT__tmp_313_reg_9932 = (3U & vlTOPp->v__DOT__temp_2_11_fu_5331_p2);
	vlTOPp->v__DOT__tmp_31_6_reg_8738 = ((vlTOPp->v__DOT__temp_1_4_reg_8649 
					      ^ vlTOPp->v__DOT__C_2_4_fu_2602_p3) 
					     ^ vlTOPp->v__DOT__C_2_5_fu_2646_p3);
	vlTOPp->v__DOT__tmp_360_reg_10407 = (3U & vlTOPp->v__DOT__temp_3_5_fu_6478_p2);
	vlTOPp->v__DOT__tmp_37_7_reg_8753 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_5_fu_2640_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_39_12_reg_9927 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_2_11_fu_5331_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_2_reg_9355 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_1_fu_4092_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_50_13_reg_9937 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_2_11_fu_5331_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_50_3_reg_9365 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_1_fu_4092_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_61_6_reg_10397 = ((vlTOPp->v__DOT__temp_3_4_reg_10330 
					       ^ vlTOPp->v__DOT__C_4_4_fu_6440_p3) 
					      ^ vlTOPp->v__DOT__C_4_5_fu_6484_p3);
	vlTOPp->v__DOT__tmp_67_7_reg_10412 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_5_fu_6478_p2 
						 >> 2U));
	__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4 
	    = vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3;
	__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4 
	    = vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3;
	__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3 
	    = vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2;
	__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3 
	    = vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2;
	__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2 
	    = vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1;
	__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2 
	    = vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1;
	__Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1 
	    = vlTOPp->v__DOT__A_reg_7627;
	__Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1 
	    = vlTOPp->v__DOT__E_reg_7634;
    }
    vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4 
	= __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it4;
    vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4 
	= __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it4;
    vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2 
	= __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it2;
    vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2 
	= __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it2;
    vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it1;
    vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it1;
    vlTOPp->v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3;
    vlTOPp->v__DOT__W_46_reg_9498 = __Vdly__v__DOT__W_46_reg_9498;
    // ALWAYS at sha_transform.v:1933
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2 = 0U;
    } else {
	if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2 = vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1;
	}
    }
    vlTOPp->v__DOT__C_1_12_fu_1547_p3 = (((IData)(vlTOPp->v__DOT__tmp_170_reg_8200) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_12_reg_8205);
    vlTOPp->v__DOT__C_1_2_fu_628_p3 = (((IData)(vlTOPp->v__DOT__tmp_137_reg_7665) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_2_reg_7670);
    vlTOPp->v__DOT__C_2_7_fu_3066_p3 = (((IData)(vlTOPp->v__DOT__tmp_220_reg_8748) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_7_reg_8753);
    vlTOPp->v__DOT__C_3_13_fu_5558_p3 = (((IData)(vlTOPp->v__DOT__tmp_313_reg_9932) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_13_reg_9937);
    vlTOPp->v__DOT__C_3_3_fu_4292_p3 = (((IData)(vlTOPp->v__DOT__tmp_280_reg_9360) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_3_reg_9365);
    vlTOPp->v__DOT__C_4_7_fu_6668_p3 = (((IData)(vlTOPp->v__DOT__tmp_360_reg_10407) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_7_reg_10412);
    // ALWAYS at sha_transform.v:1985
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 3U))) {
	vlTOPp->v__DOT__A_reg_7627 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__E_reg_7634 = vlTOPp->buff_q1;
	vlTOPp->v__DOT__tmp_26_1_reg_7660 = (0x3fffffffU 
					     & (vlTOPp->buff_q0 
						>> 2U));
    }
    // ALWAYS at sha_transform.v:2513
    if ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_9_reg_8146 = vlTOPp->v__DOT__C_1_9_fu_1215_p3;
	vlTOPp->v__DOT__C_2_18_reg_9306 = vlTOPp->v__DOT__C_2_18_fu_3960_p3;
	vlTOPp->v__DOT__C_2_3_reg_8643 = vlTOPp->v__DOT__C_2_3_fu_2457_p3;
	vlTOPp->v__DOT__C_3_s_reg_9788 = vlTOPp->v__DOT__C_3_s_fu_5080_p3;
	vlTOPp->v__DOT__C_4_3_reg_10324 = vlTOPp->v__DOT__C_4_3_fu_6316_p3;
	__Vdly__v__DOT__W_24_reg_8619 = vlTOPp->v__DOT__W_24_fu_2428_p2;
	__Vdly__v__DOT__W_25_reg_8631 = ((vlTOPp->v__DOT__W_17_reg_8358 
					  ^ vlTOPp->v__DOT__W_22_reg_8514) 
					 ^ vlTOPp->v__DOT__tmp18_fu_2434_p2);
	vlTOPp->v__DOT__W_51_reg_9707 = vlTOPp->v__DOT__W_51_fu_4961_p2;
	vlTOPp->v__DOT__W_52_reg_9712 = vlTOPp->v__DOT__W_52_fu_4975_p2;
	__Vdly__v__DOT__W_53_reg_9718 = vlTOPp->v__DOT__W_53_fu_4989_p2;
	vlTOPp->v__DOT__W_54_reg_9724 = vlTOPp->v__DOT__W_54_fu_5004_p2;
	vlTOPp->v__DOT__W_55_reg_9730 = ((vlTOPp->v__DOT__W_47_reg_9538 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_39_reg_8833_pp0_it3) 
					 ^ vlTOPp->v__DOT__tmp78_fu_5010_p2);
	vlTOPp->v__DOT__W_56_reg_9737 = (vlTOPp->v__DOT__tmp81_reg_9584 
					 ^ vlTOPp->v__DOT__tmp80_fu_5025_p2);
	vlTOPp->v__DOT__W_57_reg_9745 = (vlTOPp->v__DOT__tmp83_reg_9627 
					 ^ vlTOPp->v__DOT__tmp82_fu_5035_p2);
	vlTOPp->v__DOT__W_70_reg_10279 = vlTOPp->v__DOT__W_70_fu_6230_p2;
	vlTOPp->v__DOT__W_71_reg_10285 = vlTOPp->v__DOT__W_71_fu_6239_p2;
	vlTOPp->v__DOT__W_72_reg_10291 = vlTOPp->v__DOT__W_72_fu_6252_p2;
	vlTOPp->v__DOT__W_73_reg_10297 = vlTOPp->v__DOT__W_73_fu_6267_p2;
	vlTOPp->v__DOT__W_74_reg_10302 = ((vlTOPp->v__DOT__W_66_reg_9878 
					   ^ vlTOPp->v__DOT__W_58_reg_9820) 
					  ^ (vlTOPp->v__DOT__W_71_fu_6239_p2 
					     ^ vlTOPp->v__DOT__W_60_reg_9834));
	vlTOPp->v__DOT__W_76_reg_10308 = ((vlTOPp->v__DOT__W_68_reg_9981 
					   ^ vlTOPp->v__DOT__W_60_reg_9834) 
					  ^ (vlTOPp->v__DOT__W_73_fu_6267_p2 
					     ^ vlTOPp->v__DOT__W_62_reg_9848));
	vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it5 
	    = vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4;
	vlTOPp->v__DOT__ap_reg_ppstg_W_0_reg_7599_pp0_it1 
	    = vlTOPp->v__DOT__W_0_reg_7599;
	vlTOPp->v__DOT__temp_1_3_reg_8638 = vlTOPp->v__DOT__temp_1_3_fu_2452_p2;
	vlTOPp->v__DOT__temp_1_4_reg_8649 = vlTOPp->v__DOT__temp_1_4_fu_2512_p2;
	vlTOPp->v__DOT__temp_20_reg_9313 = vlTOPp->v__DOT__temp_20_fu_4009_p2;
	vlTOPp->v__DOT__temp_2_10_reg_9795 = vlTOPp->v__DOT__temp_2_10_fu_5130_p2;
	vlTOPp->v__DOT__temp_3_3_reg_10319 = vlTOPp->v__DOT__temp_3_3_fu_6311_p2;
	vlTOPp->v__DOT__temp_3_4_reg_10330 = vlTOPp->v__DOT__temp_3_4_fu_6370_p2;
	vlTOPp->v__DOT__temp_3_reg_8152 = vlTOPp->v__DOT__temp_3_fu_1264_p2;
	vlTOPp->v__DOT__tmp125_reg_10314 = (vlTOPp->v__DOT__W_64_reg_9862 
					    ^ vlTOPp->v__DOT__W_62_reg_9848);
	__Vdly__v__DOT__tmp16_reg_8613 = vlTOPp->v__DOT__tmp16_fu_2420_p2;
	__Vdly__v__DOT__tmp18_reg_8625 = vlTOPp->v__DOT__tmp18_fu_2434_p2;
	vlTOPp->v__DOT__tmp405_reg_10775 = (vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5 
					    + ((0xffffffe0U 
						& (vlTOPp->v__DOT__temp_3_17_fu_7491_p2 
						   << 5U)) 
					       | (0x1fU 
						  & (vlTOPp->v__DOT__temp_3_17_fu_7491_p2 
						     >> 0x1bU))));
	vlTOPp->v__DOT__tmp408_reg_10780 = ((IData)(0xca62c1d6U) 
					    + (vlTOPp->v__DOT__C_4_15_reg_10745 
					       + vlTOPp->v__DOT__tmp_61_18_reg_10765));
	vlTOPp->v__DOT__tmp87_reg_9753 = (vlTOPp->v__DOT__ap_reg_ppstg_W_35_reg_8800_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp70_fu_4953_p2);
	vlTOPp->v__DOT__tmp89_reg_9758 = (vlTOPp->v__DOT__ap_reg_ppstg_W_36_reg_8808_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp72_fu_4967_p2);
	vlTOPp->v__DOT__tmp91_reg_9763 = (vlTOPp->v__DOT__ap_reg_ppstg_W_37_reg_8816_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp74_fu_4981_p2);
	vlTOPp->v__DOT__tmp93_reg_9768 = (vlTOPp->v__DOT__ap_reg_ppstg_W_38_reg_8824_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp76_fu_4995_p2);
	vlTOPp->v__DOT__tmp95_reg_9773 = (vlTOPp->v__DOT__ap_reg_ppstg_W_39_reg_8833_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp78_fu_5010_p2);
	vlTOPp->v__DOT__tmp97_reg_9778 = (vlTOPp->v__DOT__ap_reg_ppstg_W_40_reg_8842_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp80_fu_5025_p2);
	vlTOPp->v__DOT__tmp99_reg_9783 = (vlTOPp->v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp82_fu_5035_p2);
	vlTOPp->v__DOT__tmp_15_10_reg_8163 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_3_fu_1264_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_162_reg_8158 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_3_fu_1264_p2);
	vlTOPp->v__DOT__tmp_167_reg_8168 = (3U & vlTOPp->v__DOT__temp_3_fu_1264_p2);
	vlTOPp->v__DOT__tmp_209_reg_8654 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_4_fu_2512_p2);
	vlTOPp->v__DOT__tmp_212_reg_8664 = (3U & vlTOPp->v__DOT__temp_1_3_fu_2452_p2);
	vlTOPp->v__DOT__tmp_216_reg_8674 = (3U & vlTOPp->v__DOT__temp_1_4_fu_2512_p2);
	vlTOPp->v__DOT__tmp_23_reg_10785 = (vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it6 
					    + vlTOPp->v__DOT__temp_3_17_fu_7491_p2);
	vlTOPp->v__DOT__tmp_26_11_reg_8173 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_fu_1264_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_272_reg_9318 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_20_fu_4009_p2);
	vlTOPp->v__DOT__tmp_277_reg_9328 = (3U & vlTOPp->v__DOT__temp_20_fu_4009_p2);
	vlTOPp->v__DOT__tmp_28_5_reg_8659 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_1_4_fu_2512_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_305_reg_9800 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_10_fu_5130_p2);
	vlTOPp->v__DOT__tmp_310_reg_9810 = (3U & vlTOPp->v__DOT__temp_2_10_fu_5130_p2);
	vlTOPp->v__DOT__tmp_349_reg_10335 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_4_fu_6370_p2);
	vlTOPp->v__DOT__tmp_352_reg_10345 = (3U & vlTOPp->v__DOT__temp_3_3_fu_6311_p2);
	vlTOPp->v__DOT__tmp_356_reg_10355 = (3U & vlTOPp->v__DOT__temp_3_4_fu_6370_p2);
	vlTOPp->v__DOT__tmp_37_5_reg_8669 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_3_fu_2452_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_37_6_reg_8679 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_4_fu_2512_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_39_11_reg_9805 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_2_10_fu_5130_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_1_reg_9323 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_20_fu_4009_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_50_12_reg_9815 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_2_10_fu_5130_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_50_2_reg_9333 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_20_fu_4009_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_58_5_reg_10340 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_3_4_fu_6370_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_67_5_reg_10350 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_3_fu_6311_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_67_6_reg_10360 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_4_fu_6370_p2 
						 >> 2U));
	__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4 
	    = vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3;
	__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3 
	    = vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2;
	__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2 
	    = vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1;
	__Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1 
	    = vlTOPp->v__DOT__D_reg_7605;
    }
    vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4 
	= __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it4;
    vlTOPp->v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5 
	= __Vdly__v__DOT__ap_reg_ppstg_A_reg_7627_pp0_it5;
    vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2 
	= __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it2;
    vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it1;
    vlTOPp->v__DOT__W_66_reg_9878 = __Vdly__v__DOT__W_66_reg_9878;
    vlTOPp->v__DOT__W_62_reg_9848 = __Vdly__v__DOT__W_62_reg_9848;
    vlTOPp->v__DOT__W_68_reg_9981 = __Vdly__v__DOT__W_68_reg_9981;
    vlTOPp->v__DOT__W_58_reg_9820 = __Vdly__v__DOT__W_58_reg_9820;
    vlTOPp->v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3;
    vlTOPp->v__DOT__C_1_1_fu_545_p3 = (((IData)(vlTOPp->v__DOT__tmp_134_reg_7655) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_1_reg_7660);
    vlTOPp->y_d1 = vlTOPp->v__DOT__tmp_23_reg_10785;
    vlTOPp->v__DOT__C_2_5_fu_2646_p3 = (((IData)(vlTOPp->v__DOT__tmp_212_reg_8664) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_5_reg_8669);
    vlTOPp->v__DOT__C_4_5_fu_6484_p3 = (((IData)(vlTOPp->v__DOT__tmp_352_reg_10345) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_5_reg_10350);
    vlTOPp->v__DOT__C_1_11_fu_1464_p3 = (((IData)(vlTOPp->v__DOT__tmp_167_reg_8168) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_11_reg_8173);
    vlTOPp->v__DOT__C_3_12_fu_5466_p3 = (((IData)(vlTOPp->v__DOT__tmp_310_reg_9810) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_12_reg_9815);
    vlTOPp->v__DOT__C_3_2_fu_4209_p3 = (((IData)(vlTOPp->v__DOT__tmp_277_reg_9328) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_2_reg_9333);
    vlTOPp->v__DOT__tmp84_fu_5164_p2 = (vlTOPp->v__DOT__W_55_reg_9730 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3);
    vlTOPp->v__DOT__W_71_fu_6239_p2 = (vlTOPp->v__DOT__tmp111_reg_9905 
				       ^ (vlTOPp->v__DOT__W_68_reg_9981 
					  ^ vlTOPp->v__DOT__W_57_reg_9745));
    vlTOPp->v__DOT__tmp88_fu_5182_p2 = (vlTOPp->v__DOT__W_57_reg_9745 
					^ vlTOPp->v__DOT__W_46_reg_9498);
    vlTOPp->v__DOT__tmp86_fu_5173_p2 = (vlTOPp->v__DOT__W_56_reg_9737 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3);
    // ALWAYS at sha_transform.v:2664
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 2U))) {
	vlTOPp->v__DOT__D_reg_7605 = vlTOPp->buff_q1;
	vlTOPp->v__DOT__W_0_reg_7599 = vlTOPp->buff_q0;
    }
    // ALWAYS at sha_transform.v:2001
    if ((0x10U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_10_reg_8210 = vlTOPp->v__DOT__C_1_10_fu_1381_p3;
	vlTOPp->v__DOT__C_1_reg_7697 = vlTOPp->v__DOT__C_1_fu_461_p3;
	vlTOPp->v__DOT__C_2_6_reg_8891 = vlTOPp->v__DOT__C_2_6_fu_2937_p3;
	vlTOPp->v__DOT__C_3_11_reg_9949 = vlTOPp->v__DOT__C_3_11_fu_5374_p3;
	vlTOPp->v__DOT__C_3_1_reg_9370 = vlTOPp->v__DOT__C_3_1_fu_4126_p3;
	vlTOPp->v__DOT__C_4_6_reg_10422 = vlTOPp->v__DOT__C_4_6_fu_6557_p3;
	vlTOPp->v__DOT__W_29_reg_8758 = vlTOPp->v__DOT__W_29_fu_2719_p2;
	vlTOPp->v__DOT__W_30_reg_8764 = vlTOPp->v__DOT__W_30_fu_2733_p2;
	vlTOPp->v__DOT__W_31_reg_8770 = vlTOPp->v__DOT__W_31_fu_2747_p2;
	vlTOPp->v__DOT__W_67_reg_9942 = (vlTOPp->v__DOT__tmp103_reg_9885 
					 ^ (vlTOPp->v__DOT__W_64_reg_9862 
					    ^ vlTOPp->v__DOT__W_53_reg_9718));
	vlTOPp->v__DOT__ap_reg_ppstg_W_1_reg_7675_pp0_it1 
	    = vlTOPp->v__DOT__W_1_reg_7675;
	vlTOPp->v__DOT__ap_reg_ppstg_W_2_reg_7680_pp0_it1 
	    = vlTOPp->v__DOT__W_2_reg_7680;
	__Vdly__v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3 
	    = vlTOPp->v__DOT__W_32_reg_8776;
	__Vdly__v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3 
	    = vlTOPp->v__DOT__W_33_reg_8784;
	__Vdly__v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3 
	    = vlTOPp->v__DOT__W_34_reg_8792;
	vlTOPp->v__DOT__ap_reg_ppstg_W_35_reg_8800_pp0_it3 
	    = vlTOPp->v__DOT__W_35_reg_8800;
	vlTOPp->v__DOT__ap_reg_ppstg_W_36_reg_8808_pp0_it3 
	    = vlTOPp->v__DOT__W_36_reg_8808;
	vlTOPp->v__DOT__ap_reg_ppstg_W_37_reg_8816_pp0_it3 
	    = vlTOPp->v__DOT__W_37_reg_8816;
	vlTOPp->v__DOT__ap_reg_ppstg_W_38_reg_8824_pp0_it3 
	    = vlTOPp->v__DOT__W_38_reg_8824;
	vlTOPp->v__DOT__ap_reg_ppstg_W_39_reg_8833_pp0_it3 
	    = vlTOPp->v__DOT__W_39_reg_8833;
	vlTOPp->v__DOT__ap_reg_ppstg_W_40_reg_8842_pp0_it3 
	    = vlTOPp->v__DOT__W_40_reg_8842;
	vlTOPp->v__DOT__ap_reg_ppstg_tmp61_reg_8876_pp0_it3 
	    = vlTOPp->v__DOT__tmp61_reg_8876;
	vlTOPp->v__DOT__ap_reg_ppstg_tmp63_reg_8881_pp0_it3 
	    = vlTOPp->v__DOT__tmp63_reg_8881;
	vlTOPp->v__DOT__temp_11_reg_8216 = vlTOPp->v__DOT__temp_11_fu_1430_p2;
	vlTOPp->v__DOT__temp_1_6_reg_8886 = vlTOPp->v__DOT__temp_1_6_fu_2932_p2;
	vlTOPp->v__DOT__temp_1_7_reg_8897 = vlTOPp->v__DOT__temp_1_7_fu_2991_p2;
	vlTOPp->v__DOT__temp_2_12_reg_9956 = vlTOPp->v__DOT__temp_2_12_fu_5423_p2;
	vlTOPp->v__DOT__temp_2_2_reg_9377 = vlTOPp->v__DOT__temp_2_2_fu_4175_p2;
	vlTOPp->v__DOT__temp_3_6_reg_10417 = vlTOPp->v__DOT__temp_3_6_fu_6552_p2;
	vlTOPp->v__DOT__temp_3_7_reg_10428 = vlTOPp->v__DOT__temp_3_7_fu_6611_p2;
	vlTOPp->v__DOT__temp_s_reg_7703 = vlTOPp->v__DOT__temp_s_fu_511_p2;
	vlTOPp->v__DOT__tmp51_reg_8851 = (vlTOPp->v__DOT__W_17_reg_8358 
					  ^ vlTOPp->v__DOT__tmp34_fu_2768_p2);
	vlTOPp->v__DOT__tmp53_reg_8856 = (vlTOPp->v__DOT__W_18_reg_8399 
					  ^ vlTOPp->v__DOT__tmp36_fu_2783_p2);
	vlTOPp->v__DOT__tmp55_reg_8861 = (vlTOPp->v__DOT__W_19_reg_8407 
					  ^ vlTOPp->v__DOT__tmp38_fu_2798_p2);
	vlTOPp->v__DOT__tmp57_reg_8866 = (vlTOPp->v__DOT__W_20_reg_8467 
					  ^ vlTOPp->v__DOT__tmp40_fu_2813_p2);
	vlTOPp->v__DOT__tmp59_reg_8871 = (vlTOPp->v__DOT__W_21_reg_8506 
					  ^ vlTOPp->v__DOT__tmp42_fu_2828_p2);
	vlTOPp->v__DOT__tmp_135_reg_7709 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_s_fu_511_p2);
	vlTOPp->v__DOT__tmp_140_reg_7719 = (3U & vlTOPp->v__DOT__temp_s_fu_511_p2);
	vlTOPp->v__DOT__tmp_15_12_reg_8227 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_11_fu_1430_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_15_2_reg_7714 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_s_fu_511_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_168_reg_8222 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_11_fu_1430_p2);
	vlTOPp->v__DOT__tmp_173_reg_8232 = (3U & vlTOPp->v__DOT__temp_11_fu_1430_p2);
	vlTOPp->v__DOT__tmp_221_reg_8902 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_7_fu_2991_p2);
	vlTOPp->v__DOT__tmp_224_reg_8912 = (3U & vlTOPp->v__DOT__temp_1_6_fu_2932_p2);
	vlTOPp->v__DOT__tmp_228_reg_8922 = (3U & vlTOPp->v__DOT__temp_1_7_fu_2991_p2);
	vlTOPp->v__DOT__tmp_26_13_reg_8237 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_11_fu_1430_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_26_3_reg_7724 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_s_fu_511_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_278_reg_9382 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_2_fu_4175_p2);
	vlTOPp->v__DOT__tmp_283_reg_9392 = (3U & vlTOPp->v__DOT__temp_2_2_fu_4175_p2);
	vlTOPp->v__DOT__tmp_28_8_reg_8907 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_1_7_fu_2991_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_311_reg_9961 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_12_fu_5423_p2);
	vlTOPp->v__DOT__tmp_316_reg_9971 = (3U & vlTOPp->v__DOT__temp_2_12_fu_5423_p2);
	vlTOPp->v__DOT__tmp_361_reg_10433 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_7_fu_6611_p2);
	vlTOPp->v__DOT__tmp_364_reg_10443 = (3U & vlTOPp->v__DOT__temp_3_6_fu_6552_p2);
	vlTOPp->v__DOT__tmp_368_reg_10453 = (3U & vlTOPp->v__DOT__temp_3_7_fu_6611_p2);
	vlTOPp->v__DOT__tmp_37_8_reg_8917 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_6_fu_2932_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_37_9_reg_8927 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_7_fu_2991_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_39_13_reg_9966 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_2_12_fu_5423_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_3_reg_9387 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_2_fu_4175_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_50_14_reg_9976 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_2_12_fu_5423_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_50_4_reg_9397 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_2_fu_4175_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_58_8_reg_10438 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_3_7_fu_6611_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_67_8_reg_10448 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_6_fu_6552_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_67_9_reg_10458 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_7_fu_6611_p2 
						 >> 2U));
	__Vdly__v__DOT__W_32_reg_8776 = ((vlTOPp->v__DOT__W_21_reg_8506 
					  ^ vlTOPp->v__DOT__tmp16_reg_8613) 
					 ^ vlTOPp->v__DOT__tmp32_fu_2753_p2);
	__Vdly__v__DOT__W_33_reg_8784 = ((vlTOPp->v__DOT__W_22_reg_8514 
					  ^ vlTOPp->v__DOT__tmp18_reg_8625) 
					 ^ vlTOPp->v__DOT__tmp34_fu_2768_p2);
	__Vdly__v__DOT__W_34_reg_8792 = ((vlTOPp->v__DOT__W_23_reg_8569 
					  ^ vlTOPp->v__DOT__tmp20_reg_8684) 
					 ^ vlTOPp->v__DOT__tmp36_fu_2783_p2);
	__Vdly__v__DOT__W_35_reg_8800 = ((vlTOPp->v__DOT__W_24_reg_8619 
					  ^ vlTOPp->v__DOT__tmp22_reg_8696) 
					 ^ vlTOPp->v__DOT__tmp38_fu_2798_p2);
	__Vdly__v__DOT__W_36_reg_8808 = ((vlTOPp->v__DOT__W_25_reg_8631 
					  ^ vlTOPp->v__DOT__tmp24_reg_8709) 
					 ^ vlTOPp->v__DOT__tmp40_fu_2813_p2);
	__Vdly__v__DOT__W_37_reg_8816 = ((vlTOPp->v__DOT__W_26_reg_8690 
					  ^ vlTOPp->v__DOT__tmp26_fu_2711_p2) 
					 ^ vlTOPp->v__DOT__tmp42_fu_2828_p2);
	__Vdly__v__DOT__W_38_reg_8824 = ((vlTOPp->v__DOT__W_16_reg_8306 
					  ^ vlTOPp->v__DOT__tmp28_fu_2725_p2) 
					 ^ vlTOPp->v__DOT__tmp44_fu_2844_p2);
	__Vdly__v__DOT__W_39_reg_8833 = ((vlTOPp->v__DOT__W_17_reg_8358 
					  ^ vlTOPp->v__DOT__tmp30_fu_2739_p2) 
					 ^ vlTOPp->v__DOT__tmp46_fu_2860_p2);
	__Vdly__v__DOT__W_40_reg_8842 = ((vlTOPp->v__DOT__W_16_reg_8306 
					  ^ vlTOPp->v__DOT__tmp32_fu_2753_p2) 
					 ^ (vlTOPp->v__DOT__tmp26_fu_2711_p2 
					    ^ vlTOPp->v__DOT__tmp42_fu_2828_p2));
	__Vdly__v__DOT__tmp61_reg_8876 = (vlTOPp->v__DOT__W_22_reg_8514 
					  ^ vlTOPp->v__DOT__tmp44_fu_2844_p2);
	__Vdly__v__DOT__tmp63_reg_8881 = (vlTOPp->v__DOT__W_23_reg_8569 
					  ^ vlTOPp->v__DOT__tmp46_fu_2860_p2);
    }
    vlTOPp->v__DOT__tmp103_reg_9885 = __Vdly__v__DOT__tmp103_reg_9885;
    vlTOPp->v__DOT__tmp61_reg_8876 = __Vdly__v__DOT__tmp61_reg_8876;
    vlTOPp->v__DOT__tmp63_reg_8881 = __Vdly__v__DOT__tmp63_reg_8881;
    vlTOPp->v__DOT__W_32_reg_8776 = __Vdly__v__DOT__W_32_reg_8776;
    vlTOPp->v__DOT__W_24_reg_8619 = __Vdly__v__DOT__W_24_reg_8619;
    vlTOPp->v__DOT__tmp20_reg_8684 = __Vdly__v__DOT__tmp20_reg_8684;
    vlTOPp->v__DOT__tmp22_reg_8696 = __Vdly__v__DOT__tmp22_reg_8696;
    vlTOPp->v__DOT__tmp24_reg_8709 = __Vdly__v__DOT__tmp24_reg_8709;
    vlTOPp->v__DOT__W_33_reg_8784 = __Vdly__v__DOT__W_33_reg_8784;
    vlTOPp->v__DOT__W_36_reg_8808 = __Vdly__v__DOT__W_36_reg_8808;
    vlTOPp->v__DOT__W_39_reg_8833 = __Vdly__v__DOT__W_39_reg_8833;
    vlTOPp->v__DOT__W_53_reg_9718 = __Vdly__v__DOT__W_53_reg_9718;
    vlTOPp->v__DOT__W_34_reg_8792 = __Vdly__v__DOT__W_34_reg_8792;
    vlTOPp->v__DOT__W_37_reg_8816 = __Vdly__v__DOT__W_37_reg_8816;
    vlTOPp->v__DOT__W_40_reg_8842 = __Vdly__v__DOT__W_40_reg_8842;
    vlTOPp->v__DOT__W_25_reg_8631 = __Vdly__v__DOT__W_25_reg_8631;
    vlTOPp->v__DOT__tmp16_reg_8613 = __Vdly__v__DOT__tmp16_reg_8613;
    vlTOPp->v__DOT__tmp18_reg_8625 = __Vdly__v__DOT__tmp18_reg_8625;
    vlTOPp->v__DOT__W_64_reg_9862 = __Vdly__v__DOT__W_64_reg_9862;
    vlTOPp->v__DOT__C_2_6_fu_2937_p3 = (((IData)(vlTOPp->v__DOT__tmp_216_reg_8674) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_6_reg_8679);
    vlTOPp->v__DOT__C_4_6_fu_6557_p3 = (((IData)(vlTOPp->v__DOT__tmp_356_reg_10355) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_6_reg_10360);
    vlTOPp->v__DOT__temp_1_6_fu_2932_p2 = (vlTOPp->v__DOT__tmp215_reg_8743 
					   + (vlTOPp->v__DOT__C_2_3_reg_8643 
					      + vlTOPp->v__DOT__tmp_31_6_reg_8738));
    vlTOPp->v__DOT__temp_3_6_fu_6552_p2 = (vlTOPp->v__DOT__tmp355_reg_10402 
					   + (vlTOPp->v__DOT__C_4_3_reg_10324 
					      + vlTOPp->v__DOT__tmp_61_6_reg_10397));
    vlTOPp->v__DOT__W_17_reg_8358 = __Vdly__v__DOT__W_17_reg_8358;
    vlTOPp->v__DOT__W_26_reg_8690 = __Vdly__v__DOT__W_26_reg_8690;
    vlTOPp->v__DOT__C_2_8_fu_3110_p3 = (((IData)(vlTOPp->v__DOT__tmp_224_reg_8912) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_8_reg_8917);
    vlTOPp->v__DOT__C_4_8_fu_6712_p3 = (((IData)(vlTOPp->v__DOT__tmp_364_reg_10443) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_8_reg_10448);
    vlTOPp->v__DOT__W_72_fu_6252_p2 = ((vlTOPp->v__DOT__W_64_reg_9862 
					^ vlTOPp->v__DOT__W_56_reg_9737) 
				       ^ (vlTOPp->v__DOT__W_69_reg_10020 
					  ^ vlTOPp->v__DOT__W_58_reg_9820));
    vlTOPp->v__DOT__C_2_9_fu_3192_p3 = (((IData)(vlTOPp->v__DOT__tmp_228_reg_8922) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_9_reg_8927);
    vlTOPp->v__DOT__C_4_9_fu_6794_p3 = (((IData)(vlTOPp->v__DOT__tmp_368_reg_10453) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_9_reg_10458);
    vlTOPp->v__DOT__C_1_13_fu_1644_p3 = (((IData)(vlTOPp->v__DOT__tmp_173_reg_8232) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_13_reg_8237);
    vlTOPp->v__DOT__C_1_3_fu_711_p3 = (((IData)(vlTOPp->v__DOT__tmp_140_reg_7719) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_3_reg_7724);
    vlTOPp->v__DOT__C_3_14_fu_5641_p3 = (((IData)(vlTOPp->v__DOT__tmp_316_reg_9971) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_14_reg_9976);
    vlTOPp->v__DOT__C_3_4_fu_4375_p3 = (((IData)(vlTOPp->v__DOT__tmp_283_reg_9392) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_4_reg_9397);
    vlTOPp->v__DOT__temp_1_9_fu_3187_p2 = (vlTOPp->v__DOT__tmp227_reg_8980 
					   + (vlTOPp->v__DOT__C_2_6_reg_8891 
					      + vlTOPp->v__DOT__tmp_31_9_reg_8975));
    vlTOPp->v__DOT__temp_3_9_fu_6789_p2 = (vlTOPp->v__DOT__tmp367_reg_10489 
					   + (vlTOPp->v__DOT__C_4_6_reg_10422 
					      + vlTOPp->v__DOT__tmp_61_9_reg_10484));
    vlTOPp->v__DOT__W_75_fu_6426_p2 = ((vlTOPp->v__DOT__W_67_reg_9942 
					^ vlTOPp->v__DOT__W_59_reg_9827) 
				       ^ (vlTOPp->v__DOT__W_72_reg_10291 
					  ^ vlTOPp->v__DOT__W_61_reg_9841));
    vlTOPp->v__DOT__W_70_fu_6230_p2 = (vlTOPp->v__DOT__tmp109_reg_9900 
				       ^ (vlTOPp->v__DOT__W_67_reg_9942 
					  ^ vlTOPp->v__DOT__W_56_reg_9737));
    // ALWAYS at sha_transform.v:2698
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 4U))) {
	vlTOPp->v__DOT__W_1_reg_7675 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__W_2_reg_7680 = vlTOPp->buff_q1;
    }
    // ALWAYS at sha_transform.v:2452
    if ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_8_reg_8114 = vlTOPp->v__DOT__C_1_8_fu_1132_p3;
	vlTOPp->v__DOT__C_2_17_reg_9264 = vlTOPp->v__DOT__C_2_17_fu_3858_p3;
	vlTOPp->v__DOT__C_2_1_reg_8577 = vlTOPp->v__DOT__C_2_1_fu_2311_p3;
	vlTOPp->v__DOT__C_2_2_reg_8587 = vlTOPp->v__DOT__C_2_2_fu_2355_p3;
	vlTOPp->v__DOT__C_3_9_reg_9675 = vlTOPp->v__DOT__C_3_9_fu_4869_p3;
	vlTOPp->v__DOT__C_4_15_reg_10745 = vlTOPp->v__DOT__C_4_15_fu_7357_p3;
	vlTOPp->v__DOT__C_4_1_reg_10243 = vlTOPp->v__DOT__C_4_1_fu_6118_p3;
	vlTOPp->v__DOT__C_4_2_reg_10253 = vlTOPp->v__DOT__C_4_2_fu_6162_p3;
	vlTOPp->v__DOT__W_23_reg_8569 = vlTOPp->v__DOT__W_23_fu_2305_p2;
	vlTOPp->v__DOT__W_50_reg_9664 = vlTOPp->v__DOT__W_50_fu_4858_p2;
	vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it6 
	    = vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5;
	vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it5 
	    = vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4;
	vlTOPp->v__DOT__temp_1_17_reg_9259 = vlTOPp->v__DOT__temp_1_17_fu_3853_p2;
	vlTOPp->v__DOT__temp_1_18_reg_9271 = vlTOPp->v__DOT__temp_1_18_fu_3912_p2;
	vlTOPp->v__DOT__temp_1_2_reg_8582 = vlTOPp->v__DOT__temp_1_2_fu_2349_p2;
	vlTOPp->v__DOT__temp_2_s_reg_9682 = vlTOPp->v__DOT__temp_2_s_fu_4919_p2;
	vlTOPp->v__DOT__temp_3_2_reg_10248 = vlTOPp->v__DOT__temp_3_2_fu_6156_p2;
	vlTOPp->v__DOT__temp_9_reg_8120 = vlTOPp->v__DOT__temp_9_fu_1181_p2;
	vlTOPp->v__DOT__tmp203_reg_8598 = ((IData)(0x6ed9eba1U) 
					   + (vlTOPp->v__DOT__W_23_fu_2305_p2 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_1_2_fu_2349_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_1_2_fu_2349_p2 
						       >> 0x1bU)))));
	vlTOPp->v__DOT__tmp343_reg_10264 = ((IData)(0xca62c1d6U) 
					    + (vlTOPp->v__DOT__W_63_reg_9855 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_2_fu_6156_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_2_fu_6156_p2 
							>> 0x1bU)))));
	vlTOPp->v__DOT__tmp85_reg_9670 = (vlTOPp->v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp68_fu_4850_p2);
	vlTOPp->v__DOT__tmp_12_reg_9281 = (0x1fU & 
					   (vlTOPp->v__DOT__temp_1_18_fu_3912_p2 
					    >> 0x1bU));
	vlTOPp->v__DOT__tmp_131_reg_7584 = (3U & vlTOPp->buff_q0);
	vlTOPp->v__DOT__tmp_159_reg_8126 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_9_fu_1181_p2);
	vlTOPp->v__DOT__tmp_15_s_reg_8131 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_9_fu_1181_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_164_reg_8136 = (3U & vlTOPp->v__DOT__temp_9_fu_1181_p2);
	vlTOPp->v__DOT__tmp_18_reg_9291 = (0x3fffffffU 
					   & (vlTOPp->v__DOT__temp_1_17_fu_3853_p2 
					      >> 2U));
	vlTOPp->v__DOT__tmp_208_reg_8603 = (3U & vlTOPp->v__DOT__temp_1_2_fu_2349_p2);
	vlTOPp->v__DOT__tmp_24_reg_10770 = vlTOPp->v__DOT__tmp_24_fu_7459_p2;
	vlTOPp->v__DOT__tmp_269_reg_9276 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_18_fu_3912_p2);
	vlTOPp->v__DOT__tmp_26_10_reg_8141 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_9_fu_1181_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_271_reg_9286 = (3U & vlTOPp->v__DOT__temp_1_17_fu_3853_p2);
	vlTOPp->v__DOT__tmp_274_reg_9296 = (3U & vlTOPp->v__DOT__temp_1_18_fu_3912_p2);
	vlTOPp->v__DOT__tmp_302_reg_9687 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_s_fu_4919_p2);
	vlTOPp->v__DOT__tmp_307_reg_9697 = (3U & vlTOPp->v__DOT__temp_2_s_fu_4919_p2);
	vlTOPp->v__DOT__tmp_31_3_reg_8593 = ((vlTOPp->v__DOT__temp_1_1_reg_8534 
					      ^ vlTOPp->v__DOT__C_2_1_fu_2311_p3) 
					     ^ vlTOPp->v__DOT__C_2_2_fu_2355_p3);
	vlTOPp->v__DOT__tmp_348_reg_10269 = (3U & vlTOPp->v__DOT__temp_3_2_fu_6156_p2);
	vlTOPp->v__DOT__tmp_37_4_reg_8608 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_2_fu_2349_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_39_10_reg_9692 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_2_s_fu_4919_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_401_reg_10750 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_16_fu_7390_p2);
	vlTOPp->v__DOT__tmp_50_11_reg_9702 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_2_s_fu_4919_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_50_1_reg_9301 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_18_fu_3912_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_58_17_reg_10755 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_3_16_fu_7390_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_61_17_reg_10760 = ((vlTOPp->v__DOT__temp_3_15_reg_10709 
						^ vlTOPp->v__DOT__C_4_15_fu_7357_p3) 
					       ^ vlTOPp->v__DOT__C_4_16_reg_10729);
	vlTOPp->v__DOT__tmp_61_18_reg_10765 = ((vlTOPp->v__DOT__temp_3_16_fu_7390_p2 
						^ vlTOPp->v__DOT__C_4_16_reg_10729) 
					       ^ vlTOPp->v__DOT__C_4_17_fu_7420_p3);
	vlTOPp->v__DOT__tmp_61_3_reg_10259 = ((vlTOPp->v__DOT__temp_3_1_reg_10208 
					       ^ vlTOPp->v__DOT__C_4_1_fu_6118_p3) 
					      ^ vlTOPp->v__DOT__C_4_2_fu_6162_p3);
	vlTOPp->v__DOT__tmp_67_4_reg_10274 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_2_fu_6156_p2 
						 >> 2U));
	__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5 
	    = vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4;
	__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4 
	    = vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3;
	__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4 
	    = vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3;
	__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3 
	    = vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2;
	__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3 
	    = vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2;
	__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2 
	    = vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1;
	__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2 
	    = vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1;
	__Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1 
	    = vlTOPp->v__DOT__C_reg_7571;
	__Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1 
	    = vlTOPp->v__DOT__B_reg_7564;
    }
    vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5 
	= __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it5;
    vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4 
	= __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it4;
    vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4 
	= __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it4;
    vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2 
	= __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it2;
    vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2 
	= __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it2;
    vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it1;
    vlTOPp->v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_B_reg_7564_pp0_it1;
    vlTOPp->v__DOT__W_63_reg_9855 = __Vdly__v__DOT__W_63_reg_9855;
    vlTOPp->v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3;
    vlTOPp->v__DOT__tmp123_fu_6432_p2 = (vlTOPp->v__DOT__W_63_reg_9855 
					 ^ vlTOPp->v__DOT__W_61_reg_9841);
    vlTOPp->v__DOT__tmp127_fu_6436_p2 = (vlTOPp->v__DOT__W_65_reg_9870 
					 ^ vlTOPp->v__DOT__W_63_reg_9855);
    vlTOPp->v__DOT__C_1_10_fu_1381_p3 = (((IData)(vlTOPp->v__DOT__tmp_164_reg_8136) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_10_reg_8141);
    vlTOPp->v__DOT__C_3_fu_4043_p3 = (((IData)(vlTOPp->v__DOT__tmp_271_reg_9286) 
				       << 0x1eU) | vlTOPp->v__DOT__tmp_18_reg_9291);
    vlTOPp->v__DOT__C_2_4_fu_2602_p3 = (((IData)(vlTOPp->v__DOT__tmp_208_reg_8603) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_4_reg_8608);
    vlTOPp->v__DOT__C_3_11_fu_5374_p3 = (((IData)(vlTOPp->v__DOT__tmp_307_reg_9697) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_11_reg_9702);
    vlTOPp->v__DOT__C_3_1_fu_4126_p3 = (((IData)(vlTOPp->v__DOT__tmp_274_reg_9296) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_1_reg_9301);
    vlTOPp->v__DOT__tmp74_fu_4981_p2 = (vlTOPp->v__DOT__W_50_reg_9664 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_39_reg_8833_pp0_it3);
    vlTOPp->v__DOT__C_4_4_fu_6440_p3 = (((IData)(vlTOPp->v__DOT__tmp_348_reg_10269) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_4_reg_10274);
    // ALWAYS at sha_transform.v:1993
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 1U))) {
	vlTOPp->v__DOT__B_reg_7564 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__C_reg_7571 = vlTOPp->buff_q1;
	vlTOPp->v__DOT__tmp_2_reg_7589 = (0x3fffffffU 
					  & (vlTOPp->buff_q0 
					     >> 2U));
    }
    // ALWAYS at sha_transform.v:2397
    if ((1U & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) & 
	       (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
		   & (~ (IData)(vlTOPp->ap_start))))))) {
	vlTOPp->v__DOT__C_1_7_reg_8082 = vlTOPp->v__DOT__C_1_7_fu_1049_p3;
	vlTOPp->v__DOT__C_2_15_reg_9223 = vlTOPp->v__DOT__C_2_15_fu_3741_p3;
	vlTOPp->v__DOT__C_2_16_reg_9233 = vlTOPp->v__DOT__C_2_16_fu_3785_p3;
	vlTOPp->v__DOT__C_2_reg_8528 = vlTOPp->v__DOT__C_2_fu_2194_p3;
	vlTOPp->v__DOT__C_3_8_reg_9632 = vlTOPp->v__DOT__C_3_8_fu_4766_p3;
	vlTOPp->v__DOT__C_4_14_reg_10704 = vlTOPp->v__DOT__C_4_14_fu_7268_p3;
	vlTOPp->v__DOT__C_4_16_reg_10729 = vlTOPp->v__DOT__C_4_16_fu_7331_p3;
	vlTOPp->v__DOT__C_4_reg_10202 = vlTOPp->v__DOT__C_4_fu_6016_p3;
	vlTOPp->v__DOT__W_21_reg_8506 = vlTOPp->v__DOT__W_21_fu_2165_p2;
	vlTOPp->v__DOT__W_22_reg_8514 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1 
					  ^ vlTOPp->v__DOT__W_19_reg_8407) 
					 ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1 
					    ^ vlTOPp->v__DOT__ap_reg_ppstg_W_14_reg_8023_pp0_it1));
	vlTOPp->v__DOT__W_49_reg_9621 = vlTOPp->v__DOT__W_49_fu_4755_p2;
	vlTOPp->v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2 
	    = vlTOPp->v__DOT__W_15_reg_8073;
	vlTOPp->v__DOT__temp_19_reg_8523 = vlTOPp->v__DOT__temp_19_fu_2189_p2;
	vlTOPp->v__DOT__temp_1_16_reg_9228 = vlTOPp->v__DOT__temp_1_16_fu_3779_p2;
	vlTOPp->v__DOT__temp_1_1_reg_8534 = vlTOPp->v__DOT__temp_1_1_fu_2249_p2;
	vlTOPp->v__DOT__temp_21_reg_10197 = vlTOPp->v__DOT__temp_21_fu_6011_p2;
	vlTOPp->v__DOT__temp_2_9_reg_9639 = vlTOPp->v__DOT__temp_2_9_fu_4816_p2;
	vlTOPp->v__DOT__temp_3_15_reg_10709 = vlTOPp->v__DOT__temp_3_15_fu_7306_p2;
	vlTOPp->v__DOT__temp_3_1_reg_10208 = vlTOPp->v__DOT__temp_3_1_fu_6070_p2;
	vlTOPp->v__DOT__temp_8_reg_8088 = vlTOPp->v__DOT__temp_8_fu_1098_p2;
	vlTOPp->v__DOT__tmp263_reg_9244 = ((IData)(0x6ed9eba1U) 
					   + (vlTOPp->v__DOT__W_38_reg_8824 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_1_16_fu_3779_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_1_16_fu_3779_p2 
						       >> 0x1bU)))));
	vlTOPp->v__DOT__tmp396_reg_10724 = (vlTOPp->v__DOT__temp_3_14_reg_10679 
					    ^ vlTOPp->v__DOT__C_4_14_fu_7268_p3);
	vlTOPp->v__DOT__tmp83_reg_9627 = (vlTOPp->v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp66_fu_4747_p2);
	vlTOPp->v__DOT__tmp_156_reg_8094 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_8_fu_1098_p2);
	vlTOPp->v__DOT__tmp_15_9_reg_8099 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_8_fu_1098_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_161_reg_8104 = (3U & vlTOPp->v__DOT__temp_8_fu_1098_p2);
	vlTOPp->v__DOT__tmp_197_reg_8539 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_1_fu_2249_p2);
	vlTOPp->v__DOT__tmp_200_reg_8549 = (3U & vlTOPp->v__DOT__temp_19_fu_2189_p2);
	vlTOPp->v__DOT__tmp_204_reg_8559 = (3U & vlTOPp->v__DOT__temp_1_1_fu_2249_p2);
	vlTOPp->v__DOT__tmp_268_reg_9249 = (3U & vlTOPp->v__DOT__temp_1_16_fu_3779_p2);
	vlTOPp->v__DOT__tmp_26_s_reg_8109 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_8_fu_1098_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_28_2_reg_8544 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_1_1_fu_2249_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_299_reg_9644 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_9_fu_4816_p2);
	vlTOPp->v__DOT__tmp_304_reg_9654 = (3U & vlTOPp->v__DOT__temp_2_9_fu_4816_p2);
	vlTOPp->v__DOT__tmp_31_17_reg_9239 = ((vlTOPp->v__DOT__temp_1_15_reg_9188 
					       ^ vlTOPp->v__DOT__C_2_15_fu_3741_p3) 
					      ^ vlTOPp->v__DOT__C_2_16_fu_3785_p3);
	vlTOPp->v__DOT__tmp_337_reg_10213 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_1_fu_6070_p2);
	vlTOPp->v__DOT__tmp_340_reg_10223 = (3U & vlTOPp->v__DOT__temp_21_fu_6011_p2);
	vlTOPp->v__DOT__tmp_344_reg_10233 = (3U & vlTOPp->v__DOT__temp_3_1_fu_6070_p2);
	vlTOPp->v__DOT__tmp_37_18_reg_9254 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_16_fu_3779_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_37_2_reg_8554 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_19_fu_2189_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_37_3_reg_8564 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_1_1_fu_2249_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_397_reg_10714 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_15_fu_7306_p2);
	vlTOPp->v__DOT__tmp_39_s_reg_9649 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_9_fu_4816_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_404_reg_10735 = (3U & vlTOPp->v__DOT__temp_3_15_fu_7306_p2);
	vlTOPp->v__DOT__tmp_50_10_reg_9659 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_2_9_fu_4816_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_58_16_reg_10719 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_3_15_fu_7306_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_58_2_reg_10218 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_3_1_fu_6070_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_67_17_reg_10740 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_15_fu_7306_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_67_2_reg_10228 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_21_fu_6011_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_67_3_reg_10238 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_3_1_fu_6070_p2 
						 >> 2U));
    }
    vlTOPp->v__DOT__W_38_reg_8824 = __Vdly__v__DOT__W_38_reg_8824;
    vlTOPp->v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1;
    vlTOPp->v__DOT__C_1_7_fu_1049_p3 = (((IData)(vlTOPp->v__DOT__tmp_152_reg_7946) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_7_reg_7951);
    vlTOPp->v__DOT__C_3_8_fu_4766_p3 = (((IData)(vlTOPp->v__DOT__tmp_295_reg_9528) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_8_reg_9533);
    vlTOPp->v__DOT__C_4_14_fu_7268_p3 = (((IData)(vlTOPp->v__DOT__tmp_392_reg_10632) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_14_reg_10637);
    vlTOPp->v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1;
    vlTOPp->v__DOT__tmp66_fu_4747_p2 = (vlTOPp->v__DOT__W_46_reg_9498 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_35_reg_8800_pp0_it3);
    vlTOPp->v__DOT__C_1_fu_461_p3 = (((IData)(vlTOPp->v__DOT__tmp_131_reg_7584) 
				      << 0x1eU) | vlTOPp->v__DOT__tmp_2_reg_7589);
    vlTOPp->v__DOT__C_2_2_fu_2355_p3 = (((IData)(vlTOPp->v__DOT__tmp_200_reg_8549) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_2_reg_8554);
    vlTOPp->v__DOT__C_4_2_fu_6162_p3 = (((IData)(vlTOPp->v__DOT__tmp_340_reg_10223) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_2_reg_10228);
    vlTOPp->v__DOT__temp_3_17_fu_7491_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_401_reg_10750 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_17_reg_10755)) 
						+ vlTOPp->v__DOT__tmp_61_17_reg_10760) 
					       + (vlTOPp->v__DOT__W_78_reg_10504 
						  + vlTOPp->v__DOT__C_4_14_reg_10704)));
    vlTOPp->v__DOT__C_2_3_fu_2457_p3 = (((IData)(vlTOPp->v__DOT__tmp_204_reg_8559) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_3_reg_8564);
    vlTOPp->v__DOT__C_4_3_fu_6316_p3 = (((IData)(vlTOPp->v__DOT__tmp_344_reg_10233) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_3_reg_10238);
    vlTOPp->v__DOT__C_1_s_fu_1298_p3 = (((IData)(vlTOPp->v__DOT__tmp_161_reg_8104) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_s_reg_8109);
    vlTOPp->v__DOT__C_2_18_fu_3960_p3 = (((IData)(vlTOPp->v__DOT__tmp_268_reg_9249) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_18_reg_9254);
    vlTOPp->v__DOT__C_3_10_fu_5282_p3 = (((IData)(vlTOPp->v__DOT__tmp_304_reg_9654) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_10_reg_9659);
    vlTOPp->v__DOT__C_4_17_fu_7420_p3 = (((IData)(vlTOPp->v__DOT__tmp_404_reg_10735) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_17_reg_10740);
    vlTOPp->v__DOT__temp_1_3_fu_2452_p2 = (vlTOPp->v__DOT__tmp203_reg_8598 
					   + (vlTOPp->v__DOT__C_2_reg_8528 
					      + vlTOPp->v__DOT__tmp_31_3_reg_8593));
    vlTOPp->v__DOT__temp_3_3_fu_6311_p2 = (vlTOPp->v__DOT__tmp343_reg_10264 
					   + (vlTOPp->v__DOT__C_4_reg_10202 
					      + vlTOPp->v__DOT__tmp_61_3_reg_10259));
    vlTOPp->v__DOT__tmp72_fu_4967_p2 = (vlTOPp->v__DOT__W_49_reg_9621 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_38_reg_8824_pp0_it3);
    vlTOPp->v__DOT__tmp16_fu_2420_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1);
    vlTOPp->v__DOT__tmp30_fu_2739_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2 
					^ vlTOPp->v__DOT__W_28_reg_8715);
    // ALWAYS at sha_transform.v:2692
    if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1)) 
	 & (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	       & (~ (IData)(vlTOPp->ap_start)))))) {
	vlTOPp->v__DOT__W_15_reg_8073 = vlTOPp->buff_q0;
    }
    // ALWAYS at sha_transform.v:2342
    if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_18_reg_8480 = vlTOPp->v__DOT__C_1_18_fu_2093_p3;
	vlTOPp->v__DOT__C_1_6_reg_8037 = vlTOPp->v__DOT__C_1_6_fu_960_p3;
	vlTOPp->v__DOT__C_2_14_reg_9182 = vlTOPp->v__DOT__C_2_14_fu_3639_p3;
	vlTOPp->v__DOT__C_3_18_reg_10171 = vlTOPp->v__DOT__C_3_18_fu_5944_p3;
	vlTOPp->v__DOT__C_3_7_reg_9589 = vlTOPp->v__DOT__C_3_7_fu_4663_p3;
	vlTOPp->v__DOT__C_4_13_reg_10673 = vlTOPp->v__DOT__C_4_13_fu_7196_p3;
	vlTOPp->v__DOT__W_20_reg_8467 = vlTOPp->v__DOT__W_20_fu_2060_p2;
	vlTOPp->v__DOT__W_48_reg_9578 = vlTOPp->v__DOT__W_48_fu_4652_p2;
	vlTOPp->v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1 
	    = vlTOPp->v__DOT__W_13_reg_8014;
	vlTOPp->v__DOT__ap_reg_ppstg_W_14_reg_8023_pp0_it1 
	    = vlTOPp->v__DOT__W_14_reg_8023;
	vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it5 
	    = vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4;
	vlTOPp->v__DOT__temp_18_reg_8475 = vlTOPp->v__DOT__temp_18_fu_2087_p2;
	vlTOPp->v__DOT__temp_1_14_reg_9177 = vlTOPp->v__DOT__temp_1_14_fu_3634_p2;
	vlTOPp->v__DOT__temp_1_15_reg_9188 = vlTOPp->v__DOT__temp_1_15_fu_3693_p2;
	vlTOPp->v__DOT__temp_2_18_reg_10166 = vlTOPp->v__DOT__temp_2_18_fu_5938_p2;
	vlTOPp->v__DOT__temp_2_8_reg_9596 = vlTOPp->v__DOT__temp_2_8_fu_4713_p2;
	vlTOPp->v__DOT__temp_3_14_reg_10679 = vlTOPp->v__DOT__temp_3_14_fu_7234_p2;
	vlTOPp->v__DOT__temp_7_reg_8043 = vlTOPp->v__DOT__temp_7_fu_1009_p2;
	vlTOPp->v__DOT__tmp191_reg_8491 = ((IData)(0x6ed9eba1U) 
					   + (vlTOPp->v__DOT__W_20_fu_2060_p2 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_18_fu_2087_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_18_fu_2087_p2 
						       >> 0x1bU)))));
	vlTOPp->v__DOT__tmp331_reg_10182 = ((IData)(0xca62c1d6U) 
					    + (vlTOPp->v__DOT__W_60_reg_9834 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_2_18_fu_5938_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_2_18_fu_5938_p2 
							>> 0x1bU)))));
	vlTOPp->v__DOT__tmp81_reg_9584 = (vlTOPp->v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3 
					  ^ vlTOPp->v__DOT__tmp64_fu_4644_p2);
	vlTOPp->v__DOT__tmp_10_reg_8486 = ((vlTOPp->v__DOT__temp_17_reg_8421 
					    ^ vlTOPp->v__DOT__C_1_17_reg_8426) 
					   ^ vlTOPp->v__DOT__C_1_18_fu_2093_p3);
	vlTOPp->v__DOT__tmp_153_reg_8049 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_7_fu_1009_p2);
	vlTOPp->v__DOT__tmp_158_reg_8059 = (3U & vlTOPp->v__DOT__temp_7_fu_1009_p2);
	vlTOPp->v__DOT__tmp_15_8_reg_8054 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_7_fu_1009_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_196_reg_8496 = (3U & vlTOPp->v__DOT__temp_18_fu_2087_p2);
	vlTOPp->v__DOT__tmp_21_reg_10177 = ((vlTOPp->v__DOT__temp_2_17_reg_10129 
					     ^ vlTOPp->v__DOT__C_3_17_reg_10134) 
					    ^ vlTOPp->v__DOT__C_3_18_fu_5944_p3);
	vlTOPp->v__DOT__tmp_257_reg_9193 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_1_15_fu_3693_p2);
	vlTOPp->v__DOT__tmp_260_reg_9203 = (3U & vlTOPp->v__DOT__temp_1_14_fu_3634_p2);
	vlTOPp->v__DOT__tmp_264_reg_9213 = (3U & vlTOPp->v__DOT__temp_1_15_fu_3693_p2);
	vlTOPp->v__DOT__tmp_26_9_reg_8064 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_7_fu_1009_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_28_16_reg_9198 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_1_15_fu_3693_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_296_reg_9601 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_8_fu_4713_p2);
	vlTOPp->v__DOT__tmp_301_reg_9611 = (3U & vlTOPp->v__DOT__temp_2_8_fu_4713_p2);
	vlTOPp->v__DOT__tmp_336_reg_10187 = (3U & vlTOPp->v__DOT__temp_2_18_fu_5938_p2);
	vlTOPp->v__DOT__tmp_37_16_reg_9208 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_14_fu_3634_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_37_17_reg_9218 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_15_fu_3693_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_37_1_reg_8501 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_18_fu_2087_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_393_reg_10684 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_14_fu_7234_p2);
	vlTOPp->v__DOT__tmp_39_9_reg_9606 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_8_fu_4713_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_400_reg_10694 = (3U & vlTOPp->v__DOT__temp_3_14_fu_7234_p2);
	vlTOPp->v__DOT__tmp_50_s_reg_9616 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_8_fu_4713_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_58_15_reg_10689 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_3_14_fu_7234_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_67_16_reg_10699 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_14_fu_7234_p2 
						  >> 2U));
	vlTOPp->v__DOT__tmp_67_1_reg_10192 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_2_18_fu_5938_p2 
						 >> 2U));
	__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4 
	    = vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3;
	__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3 
	    = vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2;
	__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2 
	    = vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1;
	__Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1 
	    = vlTOPp->v__DOT__tmp_27_reg_8069;
	__Vdly__v__DOT__tmp_27_reg_8069 = (vlTOPp->n 
					   + vlTOPp->m);
    }
    vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4 
	= __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it4;
    vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it3;
    vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2 
	= __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it2;
    vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it1;
    vlTOPp->v__DOT__tmp_27_reg_8069 = __Vdly__v__DOT__tmp_27_reg_8069;
    vlTOPp->v__DOT__W_60_reg_9834 = __Vdly__v__DOT__W_60_reg_9834;
    vlTOPp->v__DOT__C_3_18_fu_5944_p3 = (((IData)(vlTOPp->v__DOT__tmp_328_reg_10113) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_18_reg_10118);
    vlTOPp->v__DOT__C_2_14_fu_3639_p3 = (((IData)(vlTOPp->v__DOT__tmp_252_reg_9131) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_14_reg_9136);
    vlTOPp->v__DOT__C_1_6_fu_960_p3 = (((IData)(vlTOPp->v__DOT__tmp_149_reg_7888) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_6_reg_7893);
    vlTOPp->v__DOT__C_3_7_fu_4663_p3 = (((IData)(vlTOPp->v__DOT__tmp_292_reg_9488) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_7_reg_9493);
    vlTOPp->v__DOT__C_4_13_fu_7196_p3 = (((IData)(vlTOPp->v__DOT__tmp_388_reg_10622) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_13_reg_10627);
    vlTOPp->v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3 
	= __Vdly__v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3;
    vlTOPp->v__DOT__tmp64_fu_4644_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3);
    // ALWAYS at sha_transform.v:1923
    if (vlTOPp->ap_rst) {
	vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1 = 0U;
    } else {
	if ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1 = vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0;
	}
    }
    vlTOPp->ap_return = vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it5;
    vlTOPp->v__DOT__C_2_16_fu_3785_p3 = (((IData)(vlTOPp->v__DOT__tmp_260_reg_9203) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_16_reg_9208);
    vlTOPp->v__DOT__W_23_fu_2305_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_7_reg_7841_pp0_it1 
					^ vlTOPp->v__DOT__W_20_reg_8467) 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_9_reg_7898_pp0_it1 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2));
    vlTOPp->v__DOT__C_2_17_fu_3858_p3 = (((IData)(vlTOPp->v__DOT__tmp_264_reg_9213) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_17_reg_9218);
    vlTOPp->v__DOT__C_1_9_fu_1215_p3 = (((IData)(vlTOPp->v__DOT__tmp_158_reg_8059) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_9_reg_8064);
    vlTOPp->v__DOT__C_2_1_fu_2311_p3 = (((IData)(vlTOPp->v__DOT__tmp_196_reg_8496) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_1_reg_8501);
    vlTOPp->v__DOT__C_3_s_fu_5080_p3 = (((IData)(vlTOPp->v__DOT__tmp_301_reg_9611) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_s_reg_9616);
    vlTOPp->v__DOT__C_4_1_fu_6118_p3 = (((IData)(vlTOPp->v__DOT__tmp_336_reg_10187) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_1_reg_10192);
    vlTOPp->v__DOT__C_4_16_fu_7331_p3 = (((IData)(vlTOPp->v__DOT__tmp_400_reg_10694) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_16_reg_10699);
    vlTOPp->v__DOT__temp_1_17_fu_3853_p2 = (vlTOPp->v__DOT__tmp263_reg_9244 
					    + (vlTOPp->v__DOT__C_2_14_reg_9182 
					       + vlTOPp->v__DOT__tmp_31_17_reg_9239));
    vlTOPp->v__DOT__W_46_fu_4462_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_tmp61_reg_8876_pp0_it3 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3));
    vlTOPp->v__DOT__tmp28_fu_2725_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_14_reg_8023_pp0_it1 
					^ vlTOPp->v__DOT__W_27_reg_8702);
    vlTOPp->v__DOT__tmp26_fu_2711_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1);
    vlTOPp->v__DOT__tmp70_fu_4953_p2 = (vlTOPp->v__DOT__W_48_reg_9578 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_37_reg_8816_pp0_it3);
    // ALWAYS at sha_transform.v:2685
    if ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 0xaU) 
	 & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0))) {
	vlTOPp->v__DOT__W_13_reg_8014 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__W_14_reg_8023 = vlTOPp->buff_q1;
    }
    // ALWAYS at sha_transform.v:2289
    if ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))) {
	vlTOPp->v__DOT__C_1_16_reg_8416 = vlTOPp->v__DOT__C_1_16_fu_1908_p3;
	vlTOPp->v__DOT__C_1_17_reg_8426 = vlTOPp->v__DOT__C_1_17_fu_1980_p3;
	vlTOPp->v__DOT__C_1_5_reg_7982 = vlTOPp->v__DOT__C_1_5_fu_877_p3;
	vlTOPp->v__DOT__C_2_12_reg_9141 = vlTOPp->v__DOT__C_2_12_fu_3522_p3;
	vlTOPp->v__DOT__C_2_13_reg_9151 = vlTOPp->v__DOT__C_2_13_fu_3566_p3;
	vlTOPp->v__DOT__C_3_16_reg_10123 = vlTOPp->v__DOT__C_3_16_fu_5807_p3;
	vlTOPp->v__DOT__C_3_17_reg_10134 = vlTOPp->v__DOT__C_3_17_fu_5862_p3;
	vlTOPp->v__DOT__C_3_6_reg_9546 = vlTOPp->v__DOT__C_3_6_fu_4560_p3;
	vlTOPp->v__DOT__C_4_12_reg_10642 = vlTOPp->v__DOT__C_4_12_fu_7124_p3;
	vlTOPp->v__DOT__W_18_reg_8399 = vlTOPp->v__DOT__W_18_fu_1879_p2;
	vlTOPp->v__DOT__W_19_reg_8407 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1 
					  ^ vlTOPp->v__DOT__W_16_reg_8306) 
					 ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1 
					    ^ vlTOPp->v__DOT__W_11_reg_7956));
	vlTOPp->v__DOT__W_47_reg_9538 = vlTOPp->v__DOT__W_47_fu_4555_p2;
	vlTOPp->v__DOT__ap_reg_ppstg_W_11_reg_7956_pp0_it1 
	    = vlTOPp->v__DOT__W_11_reg_7956;
	vlTOPp->v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1 
	    = vlTOPp->v__DOT__W_12_reg_7964;
	vlTOPp->v__DOT__temp_17_reg_8421 = vlTOPp->v__DOT__temp_17_fu_1974_p2;
	vlTOPp->v__DOT__temp_1_13_reg_9146 = vlTOPp->v__DOT__temp_1_13_fu_3560_p2;
	vlTOPp->v__DOT__temp_2_17_reg_10129 = vlTOPp->v__DOT__temp_2_17_fu_5856_p2;
	vlTOPp->v__DOT__temp_2_7_reg_9553 = vlTOPp->v__DOT__temp_2_7_fu_4610_p2;
	vlTOPp->v__DOT__temp_3_13_reg_10648 = vlTOPp->v__DOT__temp_3_13_fu_7162_p2;
	vlTOPp->v__DOT__temp_6_reg_7988 = vlTOPp->v__DOT__temp_6_fu_926_p2;
	vlTOPp->v__DOT__tmp251_reg_9162 = ((IData)(0x6ed9eba1U) 
					   + (vlTOPp->v__DOT__W_35_reg_8800 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_1_13_fu_3560_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_1_13_fu_3560_p2 
						       >> 0x1bU)))));
	vlTOPp->v__DOT__tmp_11_reg_8462 = (0x3fffffffU 
					   & (vlTOPp->v__DOT__temp_17_fu_1974_p2 
					      >> 2U));
	vlTOPp->v__DOT__tmp_150_reg_7994 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_6_fu_926_p2);
	vlTOPp->v__DOT__tmp_155_reg_8004 = (3U & vlTOPp->v__DOT__temp_6_fu_926_p2);
	vlTOPp->v__DOT__tmp_15_18_reg_8437 = (0x1fU 
					      & (vlTOPp->v__DOT__temp_17_fu_1974_p2 
						 >> 0x1bU));
	vlTOPp->v__DOT__tmp_15_7_reg_7999 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_6_fu_926_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_186_reg_8432 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_17_fu_1974_p2);
	vlTOPp->v__DOT__tmp_188_reg_8447 = (3U & vlTOPp->v__DOT__temp_16_fu_1903_p2);
	vlTOPp->v__DOT__tmp_192_reg_8457 = (3U & vlTOPp->v__DOT__temp_17_fu_1974_p2);
	vlTOPp->v__DOT__tmp_20_18_reg_8442 = ((vlTOPp->v__DOT__C_1_16_fu_1908_p3 
					       & (~ vlTOPp->v__DOT__temp_16_fu_1903_p2)) 
					      | (vlTOPp->v__DOT__C_1_17_fu_1980_p3 
						 & vlTOPp->v__DOT__temp_16_fu_1903_p2));
	vlTOPp->v__DOT__tmp_22_reg_10161 = (0x3fffffffU 
					    & (vlTOPp->v__DOT__temp_2_17_fu_5856_p2 
					       >> 2U));
	vlTOPp->v__DOT__tmp_256_reg_9167 = (3U & vlTOPp->v__DOT__temp_1_13_fu_3560_p2);
	vlTOPp->v__DOT__tmp_26_18_reg_8452 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_16_fu_1903_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_26_8_reg_8009 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_6_fu_926_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_293_reg_9558 = (0x7ffffffU 
					    & vlTOPp->v__DOT__temp_2_7_fu_4610_p2);
	vlTOPp->v__DOT__tmp_298_reg_9568 = (3U & vlTOPp->v__DOT__temp_2_7_fu_4610_p2);
	vlTOPp->v__DOT__tmp_31_14_reg_9157 = ((vlTOPp->v__DOT__temp_1_12_reg_9106 
					       ^ vlTOPp->v__DOT__C_2_12_fu_3522_p3) 
					      ^ vlTOPp->v__DOT__C_2_13_fu_3566_p3);
	vlTOPp->v__DOT__tmp_326_reg_10141 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_2_17_fu_5856_p2);
	vlTOPp->v__DOT__tmp_332_reg_10156 = (3U & vlTOPp->v__DOT__temp_2_17_fu_5856_p2);
	vlTOPp->v__DOT__tmp_37_15_reg_9172 = (0x3fffffffU 
					      & (vlTOPp->v__DOT__temp_1_13_fu_3560_p2 
						 >> 2U));
	vlTOPp->v__DOT__tmp_389_reg_10653 = (0x7ffffffU 
					     & vlTOPp->v__DOT__temp_3_13_fu_7162_p2);
	vlTOPp->v__DOT__tmp_396_reg_10663 = (3U & vlTOPp->v__DOT__temp_3_13_fu_7162_p2);
	vlTOPp->v__DOT__tmp_39_18_reg_10146 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_2_17_fu_5856_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_39_8_reg_9563 = (0x1fU 
					     & (vlTOPp->v__DOT__temp_2_7_fu_4610_p2 
						>> 0x1bU));
	vlTOPp->v__DOT__tmp_42_18_reg_10151 = ((vlTOPp->v__DOT__C_3_16_fu_5807_p3 
						| vlTOPp->v__DOT__C_3_17_fu_5862_p3) 
					       & vlTOPp->v__DOT__temp_2_16_reg_10098);
	vlTOPp->v__DOT__tmp_50_9_reg_9573 = (0x3fffffffU 
					     & (vlTOPp->v__DOT__temp_2_7_fu_4610_p2 
						>> 2U));
	vlTOPp->v__DOT__tmp_58_14_reg_10658 = (0x1fU 
					       & (vlTOPp->v__DOT__temp_3_13_fu_7162_p2 
						  >> 0x1bU));
	vlTOPp->v__DOT__tmp_67_15_reg_10668 = (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_13_fu_7162_p2 
						  >> 2U));
    }
    vlTOPp->v__DOT__temp_1_12_reg_9106 = __Vdly__v__DOT__temp_1_12_reg_9106;
    vlTOPp->v__DOT__temp_2_16_reg_10098 = __Vdly__v__DOT__temp_2_16_reg_10098;
    vlTOPp->v__DOT__W_35_reg_8800 = __Vdly__v__DOT__W_35_reg_8800;
    vlTOPp->v__DOT__C_1_17_fu_1980_p3 = (((IData)(vlTOPp->v__DOT__tmp_185_reg_8389) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_17_reg_8394);
    vlTOPp->v__DOT__C_2_13_fu_3566_p3 = (((IData)(vlTOPp->v__DOT__tmp_248_reg_9121) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_13_reg_9126);
    vlTOPp->v__DOT__C_3_17_fu_5862_p3 = (((IData)(vlTOPp->v__DOT__tmp_325_reg_10081) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_17_reg_10086);
    vlTOPp->v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1;
    vlTOPp->v__DOT__C_1_16_fu_1908_p3 = (((IData)(vlTOPp->v__DOT__tmp_182_reg_8348) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_16_reg_8353);
    vlTOPp->v__DOT__temp_16_fu_1903_p2 = (vlTOPp->v__DOT__tmp181_reg_8384 
					  + (vlTOPp->v__DOT__tmp_20_16_reg_8379 
					     + vlTOPp->v__DOT__C_1_13_reg_8316));
    vlTOPp->v__DOT__C_1_5_fu_877_p3 = (((IData)(vlTOPp->v__DOT__tmp_146_reg_7831) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_5_reg_7836);
    vlTOPp->v__DOT__C_2_12_fu_3522_p3 = (((IData)(vlTOPp->v__DOT__tmp_244_reg_9085) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_12_reg_9090);
    vlTOPp->v__DOT__C_3_16_fu_5807_p3 = (((IData)(vlTOPp->v__DOT__tmp_322_reg_10049) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_16_reg_10054);
    vlTOPp->v__DOT__C_3_6_fu_4560_p3 = (((IData)(vlTOPp->v__DOT__tmp_289_reg_9456) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_6_reg_9461);
    vlTOPp->v__DOT__C_4_12_fu_7124_p3 = (((IData)(vlTOPp->v__DOT__tmp_384_reg_10586) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_12_reg_10591);
    vlTOPp->v__DOT__W_18_fu_1879_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_2_reg_7680_pp0_it1) 
				       ^ (vlTOPp->v__DOT__W_15_reg_8073 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_4_reg_7736_pp0_it1));
    vlTOPp->v__DOT__W_47_fu_4555_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_tmp63_reg_8881_pp0_it3 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3));
    vlTOPp->v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1 
	= __Vdly__v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1;
    vlTOPp->v__DOT__W_16_reg_8306 = __Vdly__v__DOT__W_16_reg_8306;
    vlTOPp->v__DOT__C_1_18_fu_2093_p3 = (((IData)(vlTOPp->v__DOT__tmp_188_reg_8447) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_18_reg_8452);
    vlTOPp->v__DOT__W_17_fu_1763_p2 = ((vlTOPp->v__DOT__W_9_reg_7898 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_1_reg_7675_pp0_it1) 
				       ^ (vlTOPp->v__DOT__W_14_reg_8023 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1));
    vlTOPp->v__DOT__tmp18_fu_2434_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_11_reg_7956_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_9_reg_7898_pp0_it1);
    vlTOPp->v__DOT__tmp22_fu_2574_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_11_reg_7956_pp0_it1);
    vlTOPp->v__DOT__C_2_fu_2194_p3 = (((IData)(vlTOPp->v__DOT__tmp_192_reg_8457) 
				       << 0x1eU) | vlTOPp->v__DOT__tmp_11_reg_8462);
    vlTOPp->v__DOT__C_4_fu_6016_p3 = (((IData)(vlTOPp->v__DOT__tmp_332_reg_10156) 
				       << 0x1eU) | vlTOPp->v__DOT__tmp_22_reg_10161);
    vlTOPp->v__DOT__temp_19_fu_2189_p2 = (vlTOPp->v__DOT__tmp191_reg_8491 
					  + (vlTOPp->v__DOT__C_1_16_reg_8416 
					     + vlTOPp->v__DOT__tmp_10_reg_8486));
    vlTOPp->v__DOT__temp_1_14_fu_3634_p2 = (vlTOPp->v__DOT__tmp251_reg_9162 
					    + (vlTOPp->v__DOT__C_2_11_reg_9100 
					       + vlTOPp->v__DOT__tmp_31_14_reg_9157));
    vlTOPp->v__DOT__C_1_8_fu_1132_p3 = (((IData)(vlTOPp->v__DOT__tmp_155_reg_8004) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_8_reg_8009);
    vlTOPp->v__DOT__C_2_15_fu_3741_p3 = (((IData)(vlTOPp->v__DOT__tmp_256_reg_9167) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_15_reg_9172);
    vlTOPp->v__DOT__C_3_9_fu_4869_p3 = (((IData)(vlTOPp->v__DOT__tmp_298_reg_9568) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_9_reg_9573);
    vlTOPp->v__DOT__tmp24_fu_2588_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_14_reg_8023_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1);
    vlTOPp->v__DOT__W_20_fu_2060_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_4_reg_7736_pp0_it1 
					^ vlTOPp->v__DOT__W_17_reg_8358) 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1));
    vlTOPp->v__DOT__tmp20_fu_2560_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1);
    vlTOPp->v__DOT__temp_2_18_fu_5938_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_326_reg_10141 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_18_reg_10146)) 
						+ vlTOPp->v__DOT__W_59_reg_9827) 
					       + (vlTOPp->v__DOT__C_3_15_reg_10091 
						  + 
						  (vlTOPp->v__DOT__tmp_42_18_reg_10151 
						   | (vlTOPp->v__DOT__C_3_16_reg_10123 
						      & vlTOPp->v__DOT__C_3_17_reg_10134)))));
    vlTOPp->v__DOT__temp_21_fu_6011_p2 = (vlTOPp->v__DOT__tmp331_reg_10182 
					  + (vlTOPp->v__DOT__C_3_16_reg_10123 
					     + vlTOPp->v__DOT__tmp_21_reg_10177));
    vlTOPp->v__DOT__temp_18_fu_2087_p2 = ((IData)(0x5a827999U) 
					  + ((vlTOPp->v__DOT__W_19_reg_8407 
					      + ((vlTOPp->v__DOT__tmp_186_reg_8432 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_15_18_reg_8437))) 
					     + (vlTOPp->v__DOT__tmp_20_18_reg_8442 
						+ vlTOPp->v__DOT__C_1_15_reg_8373)));
    vlTOPp->v__DOT__C_4_15_fu_7357_p3 = (((IData)(vlTOPp->v__DOT__tmp_396_reg_10663) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_15_reg_10668);
    vlTOPp->v__DOT__W_21_fu_2165_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1 
					^ vlTOPp->v__DOT__W_18_reg_8399) 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_7_reg_7841_pp0_it1 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1));
    vlTOPp->v__DOT__tmp68_fu_4850_p2 = (vlTOPp->v__DOT__W_47_reg_9538 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_36_reg_8808_pp0_it3);
    vlTOPp->v__DOT__temp_15_fu_1790_p2 = ((IData)(0x5a827999U) 
					  + ((vlTOPp->v__DOT__W_16_reg_8306 
					      + ((vlTOPp->v__DOT__tmp_177_reg_8333 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_15_15_reg_8338))) 
					     + (vlTOPp->v__DOT__tmp_20_15_reg_8343 
						+ vlTOPp->v__DOT__C_1_12_reg_8274)));
    // ALWAYS at sha_transform.v:2678
    if (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
	 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) >> 9U))) {
	vlTOPp->v__DOT__W_11_reg_7956 = vlTOPp->buff_q0;
	vlTOPp->v__DOT__W_12_reg_7964 = vlTOPp->buff_q1;
    }
    // ALWAYS at sha_transform.v:1905
    vlTOPp->v__DOT__ap_CS_fsm = ((IData)(vlTOPp->ap_rst)
				  ? 1U : (IData)(vlTOPp->v__DOT__ap_NS_fsm));
}

void Vsha_transform::_initial__TOP__3(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_initial__TOP__3\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at sha_transform.v:138
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5 = 0U;
    // INITIAL at sha_transform.v:137
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4 = 0U;
    // INITIAL at sha_transform.v:136
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3 = 0U;
    // INITIAL at sha_transform.v:135
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2 = 0U;
    // INITIAL at sha_transform.v:134
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1 = 0U;
    // INITIAL at sha_transform.v:130
    vlTOPp->v__DOT__ap_CS_fsm = 1U;
}

void Vsha_transform::_settle__TOP__4(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_settle__TOP__4\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__C_1_4_fu_794_p3 = (((IData)(vlTOPp->v__DOT__tmp_143_reg_7775) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_4_reg_7780);
    vlTOPp->v__DOT__C_3_15_fu_5724_p3 = (((IData)(vlTOPp->v__DOT__tmp_319_reg_10010) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_15_reg_10015);
    vlTOPp->v__DOT__C_3_5_fu_4467_p3 = (((IData)(vlTOPp->v__DOT__tmp_286_reg_9424) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_5_reg_9429);
    vlTOPp->v__DOT__C_1_14_fu_1699_p3 = (((IData)(vlTOPp->v__DOT__tmp_176_reg_8264) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_14_reg_8269);
    vlTOPp->v__DOT__C_2_s_fu_3303_p3 = (((IData)(vlTOPp->v__DOT__tmp_232_reg_8985) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_s_reg_8990);
    vlTOPp->v__DOT__C_4_s_fu_6905_p3 = (((IData)(vlTOPp->v__DOT__tmp_372_reg_10494) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_s_reg_10499);
    vlTOPp->v__DOT__C_1_15_fu_1796_p3 = (((IData)(vlTOPp->v__DOT__tmp_179_reg_8296) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_15_reg_8301);
    vlTOPp->v__DOT__C_2_10_fu_3347_p3 = (((IData)(vlTOPp->v__DOT__tmp_236_reg_9030) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_10_reg_9035);
    vlTOPp->v__DOT__C_4_10_fu_6949_p3 = (((IData)(vlTOPp->v__DOT__tmp_376_reg_10535) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_10_reg_10540);
    vlTOPp->v__DOT__C_2_11_fu_3420_p3 = (((IData)(vlTOPp->v__DOT__tmp_240_reg_9040) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_11_reg_9045);
    vlTOPp->v__DOT__C_4_11_fu_7022_p3 = (((IData)(vlTOPp->v__DOT__tmp_380_reg_10545) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_11_reg_10550);
    vlTOPp->v__DOT__temp_1_11_fu_3415_p2 = (vlTOPp->v__DOT__tmp239_reg_9080 
					    + (vlTOPp->v__DOT__C_2_9_reg_9009 
					       + vlTOPp->v__DOT__tmp_31_11_reg_9075));
    vlTOPp->v__DOT__temp_3_11_fu_7017_p2 = (vlTOPp->v__DOT__tmp379_reg_10581 
					    + (vlTOPp->v__DOT__C_4_9_reg_10514 
					       + vlTOPp->v__DOT__tmp_61_11_reg_10576));
    vlTOPp->v__DOT__C_1_12_fu_1547_p3 = (((IData)(vlTOPp->v__DOT__tmp_170_reg_8200) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_12_reg_8205);
    vlTOPp->v__DOT__C_1_2_fu_628_p3 = (((IData)(vlTOPp->v__DOT__tmp_137_reg_7665) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_2_reg_7670);
    vlTOPp->v__DOT__C_2_7_fu_3066_p3 = (((IData)(vlTOPp->v__DOT__tmp_220_reg_8748) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_7_reg_8753);
    vlTOPp->v__DOT__C_3_13_fu_5558_p3 = (((IData)(vlTOPp->v__DOT__tmp_313_reg_9932) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_13_reg_9937);
    vlTOPp->v__DOT__C_3_3_fu_4292_p3 = (((IData)(vlTOPp->v__DOT__tmp_280_reg_9360) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_3_reg_9365);
    vlTOPp->v__DOT__C_4_7_fu_6668_p3 = (((IData)(vlTOPp->v__DOT__tmp_360_reg_10407) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_7_reg_10412);
    vlTOPp->v__DOT__C_1_1_fu_545_p3 = (((IData)(vlTOPp->v__DOT__tmp_134_reg_7655) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_1_reg_7660);
    vlTOPp->y_d1 = vlTOPp->v__DOT__tmp_23_reg_10785;
    vlTOPp->v__DOT__C_2_5_fu_2646_p3 = (((IData)(vlTOPp->v__DOT__tmp_212_reg_8664) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_5_reg_8669);
    vlTOPp->v__DOT__C_4_5_fu_6484_p3 = (((IData)(vlTOPp->v__DOT__tmp_352_reg_10345) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_5_reg_10350);
    vlTOPp->v__DOT__C_1_11_fu_1464_p3 = (((IData)(vlTOPp->v__DOT__tmp_167_reg_8168) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_11_reg_8173);
    vlTOPp->v__DOT__C_3_12_fu_5466_p3 = (((IData)(vlTOPp->v__DOT__tmp_310_reg_9810) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_12_reg_9815);
    vlTOPp->v__DOT__C_3_2_fu_4209_p3 = (((IData)(vlTOPp->v__DOT__tmp_277_reg_9328) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_2_reg_9333);
    vlTOPp->v__DOT__tmp84_fu_5164_p2 = (vlTOPp->v__DOT__W_55_reg_9730 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3);
    vlTOPp->v__DOT__W_71_fu_6239_p2 = (vlTOPp->v__DOT__tmp111_reg_9905 
				       ^ (vlTOPp->v__DOT__W_68_reg_9981 
					  ^ vlTOPp->v__DOT__W_57_reg_9745));
    vlTOPp->v__DOT__tmp88_fu_5182_p2 = (vlTOPp->v__DOT__W_57_reg_9745 
					^ vlTOPp->v__DOT__W_46_reg_9498);
    vlTOPp->v__DOT__tmp86_fu_5173_p2 = (vlTOPp->v__DOT__W_56_reg_9737 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3);
    vlTOPp->v__DOT__C_2_6_fu_2937_p3 = (((IData)(vlTOPp->v__DOT__tmp_216_reg_8674) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_6_reg_8679);
    vlTOPp->v__DOT__C_4_6_fu_6557_p3 = (((IData)(vlTOPp->v__DOT__tmp_356_reg_10355) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_6_reg_10360);
    vlTOPp->v__DOT__temp_1_6_fu_2932_p2 = (vlTOPp->v__DOT__tmp215_reg_8743 
					   + (vlTOPp->v__DOT__C_2_3_reg_8643 
					      + vlTOPp->v__DOT__tmp_31_6_reg_8738));
    vlTOPp->v__DOT__temp_3_6_fu_6552_p2 = (vlTOPp->v__DOT__tmp355_reg_10402 
					   + (vlTOPp->v__DOT__C_4_3_reg_10324 
					      + vlTOPp->v__DOT__tmp_61_6_reg_10397));
    vlTOPp->v__DOT__C_2_8_fu_3110_p3 = (((IData)(vlTOPp->v__DOT__tmp_224_reg_8912) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_8_reg_8917);
    vlTOPp->v__DOT__C_4_8_fu_6712_p3 = (((IData)(vlTOPp->v__DOT__tmp_364_reg_10443) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_8_reg_10448);
    vlTOPp->v__DOT__W_72_fu_6252_p2 = ((vlTOPp->v__DOT__W_64_reg_9862 
					^ vlTOPp->v__DOT__W_56_reg_9737) 
				       ^ (vlTOPp->v__DOT__W_69_reg_10020 
					  ^ vlTOPp->v__DOT__W_58_reg_9820));
    vlTOPp->v__DOT__C_2_9_fu_3192_p3 = (((IData)(vlTOPp->v__DOT__tmp_228_reg_8922) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_9_reg_8927);
    vlTOPp->v__DOT__C_4_9_fu_6794_p3 = (((IData)(vlTOPp->v__DOT__tmp_368_reg_10453) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_9_reg_10458);
    vlTOPp->v__DOT__C_1_13_fu_1644_p3 = (((IData)(vlTOPp->v__DOT__tmp_173_reg_8232) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_13_reg_8237);
    vlTOPp->v__DOT__C_1_3_fu_711_p3 = (((IData)(vlTOPp->v__DOT__tmp_140_reg_7719) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_3_reg_7724);
    vlTOPp->v__DOT__C_3_14_fu_5641_p3 = (((IData)(vlTOPp->v__DOT__tmp_316_reg_9971) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_14_reg_9976);
    vlTOPp->v__DOT__C_3_4_fu_4375_p3 = (((IData)(vlTOPp->v__DOT__tmp_283_reg_9392) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_4_reg_9397);
    vlTOPp->v__DOT__temp_1_9_fu_3187_p2 = (vlTOPp->v__DOT__tmp227_reg_8980 
					   + (vlTOPp->v__DOT__C_2_6_reg_8891 
					      + vlTOPp->v__DOT__tmp_31_9_reg_8975));
    vlTOPp->v__DOT__temp_3_9_fu_6789_p2 = (vlTOPp->v__DOT__tmp367_reg_10489 
					   + (vlTOPp->v__DOT__C_4_6_reg_10422 
					      + vlTOPp->v__DOT__tmp_61_9_reg_10484));
    vlTOPp->v__DOT__W_75_fu_6426_p2 = ((vlTOPp->v__DOT__W_67_reg_9942 
					^ vlTOPp->v__DOT__W_59_reg_9827) 
				       ^ (vlTOPp->v__DOT__W_72_reg_10291 
					  ^ vlTOPp->v__DOT__W_61_reg_9841));
    vlTOPp->v__DOT__W_70_fu_6230_p2 = (vlTOPp->v__DOT__tmp109_reg_9900 
				       ^ (vlTOPp->v__DOT__W_67_reg_9942 
					  ^ vlTOPp->v__DOT__W_56_reg_9737));
    vlTOPp->v__DOT__tmp123_fu_6432_p2 = (vlTOPp->v__DOT__W_63_reg_9855 
					 ^ vlTOPp->v__DOT__W_61_reg_9841);
    vlTOPp->v__DOT__tmp127_fu_6436_p2 = (vlTOPp->v__DOT__W_65_reg_9870 
					 ^ vlTOPp->v__DOT__W_63_reg_9855);
    vlTOPp->v__DOT__C_1_10_fu_1381_p3 = (((IData)(vlTOPp->v__DOT__tmp_164_reg_8136) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_10_reg_8141);
    vlTOPp->v__DOT__C_3_fu_4043_p3 = (((IData)(vlTOPp->v__DOT__tmp_271_reg_9286) 
				       << 0x1eU) | vlTOPp->v__DOT__tmp_18_reg_9291);
    vlTOPp->v__DOT__C_2_4_fu_2602_p3 = (((IData)(vlTOPp->v__DOT__tmp_208_reg_8603) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_4_reg_8608);
    vlTOPp->v__DOT__C_3_11_fu_5374_p3 = (((IData)(vlTOPp->v__DOT__tmp_307_reg_9697) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_11_reg_9702);
    vlTOPp->v__DOT__C_3_1_fu_4126_p3 = (((IData)(vlTOPp->v__DOT__tmp_274_reg_9296) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_1_reg_9301);
    vlTOPp->v__DOT__tmp74_fu_4981_p2 = (vlTOPp->v__DOT__W_50_reg_9664 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_39_reg_8833_pp0_it3);
    vlTOPp->v__DOT__C_4_4_fu_6440_p3 = (((IData)(vlTOPp->v__DOT__tmp_348_reg_10269) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_4_reg_10274);
    vlTOPp->v__DOT__C_1_7_fu_1049_p3 = (((IData)(vlTOPp->v__DOT__tmp_152_reg_7946) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_7_reg_7951);
    vlTOPp->v__DOT__C_3_8_fu_4766_p3 = (((IData)(vlTOPp->v__DOT__tmp_295_reg_9528) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_8_reg_9533);
    vlTOPp->v__DOT__C_4_14_fu_7268_p3 = (((IData)(vlTOPp->v__DOT__tmp_392_reg_10632) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_14_reg_10637);
    vlTOPp->v__DOT__tmp66_fu_4747_p2 = (vlTOPp->v__DOT__W_46_reg_9498 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_35_reg_8800_pp0_it3);
    vlTOPp->v__DOT__C_1_fu_461_p3 = (((IData)(vlTOPp->v__DOT__tmp_131_reg_7584) 
				      << 0x1eU) | vlTOPp->v__DOT__tmp_2_reg_7589);
    vlTOPp->v__DOT__temp_fu_423_p2 = ((IData)(0x5a827999U) 
				      + ((((0xffffffe0U 
					    & (vlTOPp->buff_q0 
					       << 5U)) 
					   | (0x1fU 
					      & (vlTOPp->buff_q0 
						 >> 0x1bU))) 
					  + ((vlTOPp->v__DOT__D_reg_7605 
					      & (~ vlTOPp->v__DOT__B_reg_7564)) 
					     | (vlTOPp->v__DOT__C_reg_7571 
						& vlTOPp->v__DOT__B_reg_7564))) 
					 + (vlTOPp->buff_q1 
					    + vlTOPp->v__DOT__W_0_reg_7599)));
    vlTOPp->v__DOT__C_2_2_fu_2355_p3 = (((IData)(vlTOPp->v__DOT__tmp_200_reg_8549) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_2_reg_8554);
    vlTOPp->v__DOT__C_4_2_fu_6162_p3 = (((IData)(vlTOPp->v__DOT__tmp_340_reg_10223) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_2_reg_10228);
    vlTOPp->v__DOT__temp_3_17_fu_7491_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_401_reg_10750 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_17_reg_10755)) 
						+ vlTOPp->v__DOT__tmp_61_17_reg_10760) 
					       + (vlTOPp->v__DOT__W_78_reg_10504 
						  + vlTOPp->v__DOT__C_4_14_reg_10704)));
    vlTOPp->v__DOT__C_2_3_fu_2457_p3 = (((IData)(vlTOPp->v__DOT__tmp_204_reg_8559) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_3_reg_8564);
    vlTOPp->v__DOT__C_4_3_fu_6316_p3 = (((IData)(vlTOPp->v__DOT__tmp_344_reg_10233) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_3_reg_10238);
    vlTOPp->v__DOT__C_1_s_fu_1298_p3 = (((IData)(vlTOPp->v__DOT__tmp_161_reg_8104) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_s_reg_8109);
    vlTOPp->v__DOT__C_2_18_fu_3960_p3 = (((IData)(vlTOPp->v__DOT__tmp_268_reg_9249) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_18_reg_9254);
    vlTOPp->v__DOT__C_3_10_fu_5282_p3 = (((IData)(vlTOPp->v__DOT__tmp_304_reg_9654) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_10_reg_9659);
    vlTOPp->v__DOT__C_4_17_fu_7420_p3 = (((IData)(vlTOPp->v__DOT__tmp_404_reg_10735) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_17_reg_10740);
    vlTOPp->v__DOT__temp_1_3_fu_2452_p2 = (vlTOPp->v__DOT__tmp203_reg_8598 
					   + (vlTOPp->v__DOT__C_2_reg_8528 
					      + vlTOPp->v__DOT__tmp_31_3_reg_8593));
    vlTOPp->v__DOT__temp_3_3_fu_6311_p2 = (vlTOPp->v__DOT__tmp343_reg_10264 
					   + (vlTOPp->v__DOT__C_4_reg_10202 
					      + vlTOPp->v__DOT__tmp_61_3_reg_10259));
    vlTOPp->v__DOT__tmp72_fu_4967_p2 = (vlTOPp->v__DOT__W_49_reg_9621 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_38_reg_8824_pp0_it3);
    vlTOPp->v__DOT__tmp16_fu_2420_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_8_reg_7848_pp0_it1);
    vlTOPp->v__DOT__tmp30_fu_2739_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2 
					^ vlTOPp->v__DOT__W_28_reg_8715);
    vlTOPp->v__DOT__C_3_18_fu_5944_p3 = (((IData)(vlTOPp->v__DOT__tmp_328_reg_10113) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_18_reg_10118);
    vlTOPp->v__DOT__C_2_14_fu_3639_p3 = (((IData)(vlTOPp->v__DOT__tmp_252_reg_9131) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_14_reg_9136);
    vlTOPp->v__DOT__C_1_6_fu_960_p3 = (((IData)(vlTOPp->v__DOT__tmp_149_reg_7888) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_6_reg_7893);
    vlTOPp->v__DOT__C_3_7_fu_4663_p3 = (((IData)(vlTOPp->v__DOT__tmp_292_reg_9488) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_7_reg_9493);
    vlTOPp->v__DOT__C_4_13_fu_7196_p3 = (((IData)(vlTOPp->v__DOT__tmp_388_reg_10622) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_13_reg_10627);
    vlTOPp->v__DOT__tmp64_fu_4644_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3);
    vlTOPp->ap_return = vlTOPp->v__DOT__ap_reg_ppstg_tmp_27_reg_8069_pp0_it5;
    vlTOPp->v__DOT__C_2_16_fu_3785_p3 = (((IData)(vlTOPp->v__DOT__tmp_260_reg_9203) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_16_reg_9208);
    vlTOPp->v__DOT__W_23_fu_2305_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_7_reg_7841_pp0_it1 
					^ vlTOPp->v__DOT__W_20_reg_8467) 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_9_reg_7898_pp0_it1 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2));
    vlTOPp->v__DOT__C_2_17_fu_3858_p3 = (((IData)(vlTOPp->v__DOT__tmp_264_reg_9213) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_17_reg_9218);
    vlTOPp->v__DOT__C_1_9_fu_1215_p3 = (((IData)(vlTOPp->v__DOT__tmp_158_reg_8059) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_9_reg_8064);
    vlTOPp->v__DOT__C_2_1_fu_2311_p3 = (((IData)(vlTOPp->v__DOT__tmp_196_reg_8496) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_37_1_reg_8501);
    vlTOPp->v__DOT__C_3_s_fu_5080_p3 = (((IData)(vlTOPp->v__DOT__tmp_301_reg_9611) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_s_reg_9616);
    vlTOPp->v__DOT__C_4_1_fu_6118_p3 = (((IData)(vlTOPp->v__DOT__tmp_336_reg_10187) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_67_1_reg_10192);
    vlTOPp->v__DOT__C_4_16_fu_7331_p3 = (((IData)(vlTOPp->v__DOT__tmp_400_reg_10694) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_16_reg_10699);
    vlTOPp->v__DOT__temp_1_17_fu_3853_p2 = (vlTOPp->v__DOT__tmp263_reg_9244 
					    + (vlTOPp->v__DOT__C_2_14_reg_9182 
					       + vlTOPp->v__DOT__tmp_31_17_reg_9239));
    vlTOPp->v__DOT__W_46_fu_4462_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_tmp61_reg_8876_pp0_it3 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3));
    vlTOPp->v__DOT__tmp28_fu_2725_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_14_reg_8023_pp0_it1 
					^ vlTOPp->v__DOT__W_27_reg_8702);
    vlTOPp->v__DOT__tmp26_fu_2711_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_15_reg_8073_pp0_it2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1);
    vlTOPp->v__DOT__tmp70_fu_4953_p2 = (vlTOPp->v__DOT__W_48_reg_9578 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_37_reg_8816_pp0_it3);
    vlTOPp->v__DOT__C_1_17_fu_1980_p3 = (((IData)(vlTOPp->v__DOT__tmp_185_reg_8389) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_17_reg_8394);
    vlTOPp->v__DOT__C_2_13_fu_3566_p3 = (((IData)(vlTOPp->v__DOT__tmp_248_reg_9121) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_13_reg_9126);
    vlTOPp->v__DOT__C_3_17_fu_5862_p3 = (((IData)(vlTOPp->v__DOT__tmp_325_reg_10081) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_17_reg_10086);
    vlTOPp->v__DOT__C_1_16_fu_1908_p3 = (((IData)(vlTOPp->v__DOT__tmp_182_reg_8348) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_16_reg_8353);
    vlTOPp->v__DOT__temp_16_fu_1903_p2 = (vlTOPp->v__DOT__tmp181_reg_8384 
					  + (vlTOPp->v__DOT__tmp_20_16_reg_8379 
					     + vlTOPp->v__DOT__C_1_13_reg_8316));
    vlTOPp->v__DOT__C_1_5_fu_877_p3 = (((IData)(vlTOPp->v__DOT__tmp_146_reg_7831) 
					<< 0x1eU) | vlTOPp->v__DOT__tmp_26_5_reg_7836);
    vlTOPp->v__DOT__C_2_12_fu_3522_p3 = (((IData)(vlTOPp->v__DOT__tmp_244_reg_9085) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_12_reg_9090);
    vlTOPp->v__DOT__C_3_16_fu_5807_p3 = (((IData)(vlTOPp->v__DOT__tmp_322_reg_10049) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_50_16_reg_10054);
    vlTOPp->v__DOT__C_3_6_fu_4560_p3 = (((IData)(vlTOPp->v__DOT__tmp_289_reg_9456) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_6_reg_9461);
    vlTOPp->v__DOT__C_4_12_fu_7124_p3 = (((IData)(vlTOPp->v__DOT__tmp_384_reg_10586) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_12_reg_10591);
    vlTOPp->v__DOT__W_18_fu_1879_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_2_reg_7680_pp0_it1) 
				       ^ (vlTOPp->v__DOT__W_15_reg_8073 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_4_reg_7736_pp0_it1));
    vlTOPp->v__DOT__W_47_fu_4555_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_tmp63_reg_8881_pp0_it3 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3));
    vlTOPp->v__DOT__C_1_18_fu_2093_p3 = (((IData)(vlTOPp->v__DOT__tmp_188_reg_8447) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_26_18_reg_8452);
    vlTOPp->v__DOT__W_17_fu_1763_p2 = ((vlTOPp->v__DOT__W_9_reg_7898 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_1_reg_7675_pp0_it1) 
				       ^ (vlTOPp->v__DOT__W_14_reg_8023 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_3_reg_7729_pp0_it1));
    vlTOPp->v__DOT__tmp18_fu_2434_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_11_reg_7956_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_9_reg_7898_pp0_it1);
    vlTOPp->v__DOT__tmp22_fu_2574_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_11_reg_7956_pp0_it1);
    vlTOPp->v__DOT__C_2_fu_2194_p3 = (((IData)(vlTOPp->v__DOT__tmp_192_reg_8457) 
				       << 0x1eU) | vlTOPp->v__DOT__tmp_11_reg_8462);
    vlTOPp->v__DOT__C_4_fu_6016_p3 = (((IData)(vlTOPp->v__DOT__tmp_332_reg_10156) 
				       << 0x1eU) | vlTOPp->v__DOT__tmp_22_reg_10161);
    vlTOPp->v__DOT__temp_19_fu_2189_p2 = (vlTOPp->v__DOT__tmp191_reg_8491 
					  + (vlTOPp->v__DOT__C_1_16_reg_8416 
					     + vlTOPp->v__DOT__tmp_10_reg_8486));
    vlTOPp->v__DOT__temp_1_14_fu_3634_p2 = (vlTOPp->v__DOT__tmp251_reg_9162 
					    + (vlTOPp->v__DOT__C_2_11_reg_9100 
					       + vlTOPp->v__DOT__tmp_31_14_reg_9157));
    vlTOPp->v__DOT__C_1_8_fu_1132_p3 = (((IData)(vlTOPp->v__DOT__tmp_155_reg_8004) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_26_8_reg_8009);
    vlTOPp->v__DOT__C_2_15_fu_3741_p3 = (((IData)(vlTOPp->v__DOT__tmp_256_reg_9167) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_37_15_reg_9172);
    vlTOPp->v__DOT__C_3_9_fu_4869_p3 = (((IData)(vlTOPp->v__DOT__tmp_298_reg_9568) 
					 << 0x1eU) 
					| vlTOPp->v__DOT__tmp_50_9_reg_9573);
    vlTOPp->v__DOT__tmp24_fu_2588_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_14_reg_8023_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1);
    vlTOPp->v__DOT__W_20_fu_2060_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_4_reg_7736_pp0_it1 
					^ vlTOPp->v__DOT__W_17_reg_8358) 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_6_reg_7792_pp0_it1 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1));
    vlTOPp->v__DOT__tmp20_fu_2560_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_W_12_reg_7964_pp0_it1 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_10_reg_7906_pp0_it1);
    vlTOPp->v__DOT__temp_2_18_fu_5938_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_326_reg_10141 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_18_reg_10146)) 
						+ vlTOPp->v__DOT__W_59_reg_9827) 
					       + (vlTOPp->v__DOT__C_3_15_reg_10091 
						  + 
						  (vlTOPp->v__DOT__tmp_42_18_reg_10151 
						   | (vlTOPp->v__DOT__C_3_16_reg_10123 
						      & vlTOPp->v__DOT__C_3_17_reg_10134)))));
    vlTOPp->v__DOT__temp_21_fu_6011_p2 = (vlTOPp->v__DOT__tmp331_reg_10182 
					  + (vlTOPp->v__DOT__C_3_16_reg_10123 
					     + vlTOPp->v__DOT__tmp_21_reg_10177));
    vlTOPp->v__DOT__temp_18_fu_2087_p2 = ((IData)(0x5a827999U) 
					  + ((vlTOPp->v__DOT__W_19_reg_8407 
					      + ((vlTOPp->v__DOT__tmp_186_reg_8432 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_15_18_reg_8437))) 
					     + (vlTOPp->v__DOT__tmp_20_18_reg_8442 
						+ vlTOPp->v__DOT__C_1_15_reg_8373)));
    vlTOPp->v__DOT__C_4_15_fu_7357_p3 = (((IData)(vlTOPp->v__DOT__tmp_396_reg_10663) 
					  << 0x1eU) 
					 | vlTOPp->v__DOT__tmp_67_15_reg_10668);
    vlTOPp->v__DOT__W_21_fu_2165_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_5_reg_7785_pp0_it1 
					^ vlTOPp->v__DOT__W_18_reg_8399) 
				       ^ (vlTOPp->v__DOT__ap_reg_ppstg_W_7_reg_7841_pp0_it1 
					  ^ vlTOPp->v__DOT__ap_reg_ppstg_W_13_reg_8014_pp0_it1));
    vlTOPp->v__DOT__tmp68_fu_4850_p2 = (vlTOPp->v__DOT__W_47_reg_9538 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_36_reg_8808_pp0_it3);
    vlTOPp->v__DOT__temp_15_fu_1790_p2 = ((IData)(0x5a827999U) 
					  + ((vlTOPp->v__DOT__W_16_reg_8306 
					      + ((vlTOPp->v__DOT__tmp_177_reg_8333 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_15_15_reg_8338))) 
					     + (vlTOPp->v__DOT__tmp_20_15_reg_8343 
						+ vlTOPp->v__DOT__C_1_12_reg_8274)));
    // ALWAYS at sha_transform.v:2726
    vlTOPp->ap_done = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		       & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			  >> 3U));
    // ALWAYS at sha_transform.v:2932
    vlTOPp->y_address0 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)
			   ? ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			       ? 0U : ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				        ? 2U : ((2U 
						 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						 ? 3U
						 : 
						((1U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 4U
						  : 0U))))
			   : 0U);
    // ALWAYS at sha_transform.v:2958
    vlTOPp->y_ce1 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		     & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 3U));
    // ALWAYS at sha_transform.v:2992
    vlTOPp->y_we1 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		     & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 3U));
    // ALWAYS at sha_transform.v:2750
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0 = ((1U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? (IData)(vlTOPp->ap_start)
					      : (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0_preg));
    vlTOPp->v__DOT__temp_5_fu_843_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_144_reg_7878 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_5_reg_7883)) 
					    + vlTOPp->v__DOT__C_1_2_reg_7809) 
					   + (vlTOPp->v__DOT__W_5_reg_7785 
					      + ((vlTOPp->v__DOT__C_1_3_reg_7866 
						  & (~ vlTOPp->v__DOT__temp_2_reg_7815)) 
						 | (vlTOPp->v__DOT__C_1_4_fu_794_p3 
						    & vlTOPp->v__DOT__temp_2_reg_7815)))));
    vlTOPp->v__DOT__temp_2_16_fu_5773_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_320_reg_10071 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_16_reg_10076)) 
						+ vlTOPp->v__DOT__W_57_reg_9745) 
					       + (vlTOPp->v__DOT__C_3_13_reg_10027 
						  + 
						  (((vlTOPp->v__DOT__C_3_14_reg_10059 
						     | vlTOPp->v__DOT__C_3_15_fu_5724_p3) 
						    & vlTOPp->v__DOT__temp_2_14_reg_10034) 
						   | (vlTOPp->v__DOT__C_3_14_reg_10059 
						      & vlTOPp->v__DOT__C_3_15_fu_5724_p3)))));
    vlTOPp->v__DOT__temp_1_10_fu_3341_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_31_reg_8770 
						+ (
						   (vlTOPp->v__DOT__tmp_233_reg_9020 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_28_10_reg_9025))) 
					       + (vlTOPp->v__DOT__C_2_8_reg_8969 
						  + 
						  ((vlTOPp->v__DOT__temp_1_9_reg_9004 
						    ^ vlTOPp->v__DOT__C_2_9_reg_9009) 
						   ^ vlTOPp->v__DOT__C_2_s_fu_3303_p3))));
    vlTOPp->v__DOT__temp_3_10_fu_6943_p2 = ((IData)(0xca62c1d6U) 
					    + ((vlTOPp->v__DOT__W_71_reg_10285 
						+ (
						   (vlTOPp->v__DOT__tmp_373_reg_10525 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_58_10_reg_10530))) 
					       + (vlTOPp->v__DOT__C_4_8_reg_10478 
						  + 
						  ((vlTOPp->v__DOT__temp_3_9_reg_10509 
						    ^ vlTOPp->v__DOT__C_4_9_reg_10514) 
						   ^ vlTOPp->v__DOT__C_4_s_fu_6905_p3))));
    vlTOPp->v__DOT__temp_1_12_fu_3474_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_33_reg_8784 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_1_11_fu_3415_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_1_11_fu_3415_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_2_s_reg_9059 
						  + 
						  ((vlTOPp->v__DOT__temp_1_10_reg_9064 
						    ^ vlTOPp->v__DOT__C_2_10_reg_9069) 
						   ^ vlTOPp->v__DOT__C_2_11_fu_3420_p3))));
    vlTOPp->v__DOT__temp_3_12_fu_7076_p2 = ((IData)(0xca62c1d6U) 
					    + ((vlTOPp->v__DOT__W_73_reg_10297 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_3_11_fu_7017_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_3_11_fu_7017_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_4_s_reg_10560 
						  + 
						  ((vlTOPp->v__DOT__temp_3_10_reg_10565 
						    ^ vlTOPp->v__DOT__C_4_10_reg_10570) 
						   ^ vlTOPp->v__DOT__C_4_11_fu_7022_p3))));
    vlTOPp->v__DOT__temp_13_fu_1596_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_171_reg_8254 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_13_reg_8259)) 
					      + vlTOPp->v__DOT__C_1_10_reg_8210) 
					     + (vlTOPp->v__DOT__W_14_reg_8023 
						+ (
						   (vlTOPp->v__DOT__C_1_11_reg_8242 
						    & (~ vlTOPp->v__DOT__temp_11_reg_8216)) 
						   | (vlTOPp->v__DOT__C_1_12_fu_1547_p3 
						      & vlTOPp->v__DOT__temp_11_reg_8216)))));
    vlTOPp->v__DOT__temp_2_fu_677_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_138_reg_7765 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_3_reg_7770)) 
					    + vlTOPp->v__DOT__C_1_reg_7697) 
					   + (vlTOPp->v__DOT__W_3_reg_7729 
					      + ((vlTOPp->v__DOT__C_1_1_reg_7753 
						  & (~ vlTOPp->v__DOT__temp_s_reg_7703)) 
						 | (vlTOPp->v__DOT__C_1_2_fu_628_p3 
						    & vlTOPp->v__DOT__temp_s_reg_7703)))));
    vlTOPp->v__DOT__temp_1_8_fu_3104_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_28_reg_8715 
					       + ((vlTOPp->v__DOT__tmp_221_reg_8902 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_28_8_reg_8907))) 
					      + (vlTOPp->v__DOT__C_2_5_reg_8732 
						 + 
						 ((vlTOPp->v__DOT__temp_1_6_reg_8886 
						   ^ vlTOPp->v__DOT__C_2_6_reg_8891) 
						  ^ vlTOPp->v__DOT__C_2_7_fu_3066_p3))));
    vlTOPp->v__DOT__temp_2_14_fu_5607_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_314_reg_10000 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_14_reg_10005)) 
						+ vlTOPp->v__DOT__W_55_reg_9730) 
					       + (vlTOPp->v__DOT__C_3_11_reg_9949 
						  + 
						  (((vlTOPp->v__DOT__C_3_12_reg_9988 
						     | vlTOPp->v__DOT__C_3_13_fu_5558_p3) 
						    & vlTOPp->v__DOT__temp_2_12_reg_9956) 
						   | (vlTOPp->v__DOT__C_3_12_reg_9988 
						      & vlTOPp->v__DOT__C_3_13_fu_5558_p3)))));
    vlTOPp->v__DOT__temp_2_4_fu_4341_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_281_reg_9414 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_4_reg_9419)) 
					       + vlTOPp->v__DOT__W_44_reg_8995) 
					      + (vlTOPp->v__DOT__C_3_1_reg_9370 
						 + 
						 (((vlTOPp->v__DOT__C_3_2_reg_9402 
						    | vlTOPp->v__DOT__C_3_3_fu_4292_p3) 
						   & vlTOPp->v__DOT__temp_2_2_reg_9377) 
						  | (vlTOPp->v__DOT__C_3_2_reg_9402 
						     & vlTOPp->v__DOT__C_3_3_fu_4292_p3)))));
    vlTOPp->v__DOT__temp_3_8_fu_6706_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_68_reg_9981 
					       + ((vlTOPp->v__DOT__tmp_361_reg_10433 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_58_8_reg_10438))) 
					      + (vlTOPp->v__DOT__C_4_5_reg_10391 
						 + 
						 ((vlTOPp->v__DOT__temp_3_6_reg_10417 
						   ^ vlTOPp->v__DOT__C_4_6_reg_10422) 
						  ^ vlTOPp->v__DOT__C_4_7_fu_6668_p3))));
    vlTOPp->v__DOT__temp_1_fu_594_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_135_reg_7709 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_2_reg_7714)) 
					    + ((vlTOPp->v__DOT__C_1_reg_7697 
						& (~ vlTOPp->v__DOT__temp_reg_7639)) 
					       | (vlTOPp->v__DOT__C_1_1_fu_545_p3 
						  & vlTOPp->v__DOT__temp_reg_7639))) 
					   + (vlTOPp->v__DOT__C_reg_7571 
					      + vlTOPp->v__DOT__W_2_reg_7680)));
    vlTOPp->v__DOT__temp_12_fu_1513_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_168_reg_8222 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_12_reg_8227)) 
					      + vlTOPp->v__DOT__C_1_s_reg_8178) 
					     + (vlTOPp->v__DOT__W_13_reg_8014 
						+ (
						   (vlTOPp->v__DOT__C_1_10_reg_8210 
						    & (~ vlTOPp->v__DOT__temp_10_reg_8184)) 
						   | (vlTOPp->v__DOT__C_1_11_fu_1464_p3 
						      & vlTOPp->v__DOT__temp_10_reg_8184)))));
    vlTOPp->v__DOT__temp_2_13_fu_5515_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_311_reg_9961 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_13_reg_9966)) 
						+ vlTOPp->v__DOT__W_54_reg_9724) 
					       + (vlTOPp->v__DOT__C_3_10_reg_9910 
						  + 
						  (((vlTOPp->v__DOT__C_3_11_reg_9949 
						     | vlTOPp->v__DOT__C_3_12_fu_5466_p3) 
						    & vlTOPp->v__DOT__temp_2_11_reg_9917) 
						   | (vlTOPp->v__DOT__C_3_11_reg_9949 
						      & vlTOPp->v__DOT__C_3_12_fu_5466_p3)))));
    vlTOPp->v__DOT__temp_2_3_fu_4258_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_278_reg_9382 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_3_reg_9387)) 
					       + vlTOPp->v__DOT__W_43_reg_8950) 
					      + (vlTOPp->v__DOT__C_3_reg_9338 
						 + 
						 (((vlTOPp->v__DOT__C_3_1_reg_9370 
						    | vlTOPp->v__DOT__C_3_2_fu_4209_p3) 
						   & vlTOPp->v__DOT__temp_2_1_reg_9345) 
						  | (vlTOPp->v__DOT__C_3_1_reg_9370 
						     & vlTOPp->v__DOT__C_3_2_fu_4209_p3)))));
    vlTOPp->v__DOT__W_58_fu_5168_p2 = (vlTOPp->v__DOT__tmp85_reg_9670 
				       ^ vlTOPp->v__DOT__tmp84_fu_5164_p2);
    vlTOPp->v__DOT__W_60_fu_5186_p2 = (vlTOPp->v__DOT__tmp89_reg_9758 
				       ^ vlTOPp->v__DOT__tmp88_fu_5182_p2);
    vlTOPp->v__DOT__W_59_fu_5177_p2 = (vlTOPp->v__DOT__tmp87_reg_9753 
				       ^ vlTOPp->v__DOT__tmp86_fu_5173_p2);
    vlTOPp->v__DOT__temp_1_7_fu_2991_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_27_reg_8702 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_1_6_fu_2932_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_1_6_fu_2932_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_2_4_reg_8722 
						 + 
						 ((vlTOPp->v__DOT__temp_1_5_reg_8727 
						   ^ vlTOPp->v__DOT__C_2_5_reg_8732) 
						  ^ vlTOPp->v__DOT__C_2_6_fu_2937_p3))));
    vlTOPp->v__DOT__temp_3_7_fu_6611_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_67_reg_9942 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_6_fu_6552_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_6_fu_6552_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_4_4_reg_10381 
						 + 
						 ((vlTOPp->v__DOT__temp_3_5_reg_10386 
						   ^ vlTOPp->v__DOT__C_4_5_reg_10391) 
						  ^ vlTOPp->v__DOT__C_4_6_fu_6557_p3))));
    vlTOPp->v__DOT__temp_14_fu_1693_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_174_reg_8286 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_14_reg_8291)) 
					      + vlTOPp->v__DOT__C_1_11_reg_8242) 
					     + (vlTOPp->v__DOT__W_15_reg_8073 
						+ (
						   (vlTOPp->v__DOT__C_1_12_reg_8274 
						    & (~ vlTOPp->v__DOT__temp_12_reg_8248)) 
						   | (vlTOPp->v__DOT__C_1_13_fu_1644_p3 
						      & vlTOPp->v__DOT__temp_12_reg_8248)))));
    vlTOPp->v__DOT__temp_4_fu_760_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_141_reg_7821 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_4_reg_7826)) 
					    + vlTOPp->v__DOT__C_1_1_reg_7753) 
					   + (vlTOPp->v__DOT__W_4_reg_7736 
					      + ((vlTOPp->v__DOT__C_1_2_reg_7809 
						  & (~ vlTOPp->v__DOT__temp_1_reg_7759)) 
						 | (vlTOPp->v__DOT__C_1_3_fu_711_p3 
						    & vlTOPp->v__DOT__temp_1_reg_7759)))));
    vlTOPp->v__DOT__temp_2_15_fu_5690_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_317_reg_10039 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_15_reg_10044)) 
						+ vlTOPp->v__DOT__W_56_reg_9737) 
					       + (vlTOPp->v__DOT__C_3_12_reg_9988 
						  + 
						  (((vlTOPp->v__DOT__C_3_13_reg_10027 
						     | vlTOPp->v__DOT__C_3_14_fu_5641_p3) 
						    & vlTOPp->v__DOT__temp_2_13_reg_9995) 
						   | (vlTOPp->v__DOT__C_3_13_reg_10027 
						      & vlTOPp->v__DOT__C_3_14_fu_5641_p3)))));
    vlTOPp->v__DOT__temp_2_5_fu_4424_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_284_reg_9446 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_5_reg_9451)) 
					       + vlTOPp->v__DOT__W_45_reg_9050) 
					      + (vlTOPp->v__DOT__C_3_2_reg_9402 
						 + 
						 (((vlTOPp->v__DOT__C_3_3_reg_9434 
						    | vlTOPp->v__DOT__C_3_4_fu_4375_p3) 
						   & vlTOPp->v__DOT__temp_2_3_reg_9409) 
						  | (vlTOPp->v__DOT__C_3_3_reg_9434 
						     & vlTOPp->v__DOT__C_3_4_fu_4375_p3)))));
    vlTOPp->v__DOT__temp_1_s_fu_3246_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_30_reg_8764 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_1_9_fu_3187_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_1_9_fu_3187_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_2_7_reg_8959 
						 + 
						 ((vlTOPp->v__DOT__temp_1_8_reg_8964 
						   ^ vlTOPp->v__DOT__C_2_8_reg_8969) 
						  ^ vlTOPp->v__DOT__C_2_9_fu_3192_p3))));
    vlTOPp->v__DOT__temp_3_s_fu_6848_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_70_reg_10279 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_9_fu_6789_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_9_fu_6789_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_4_7_reg_10468 
						 + 
						 ((vlTOPp->v__DOT__temp_3_8_reg_10473 
						   ^ vlTOPp->v__DOT__C_4_8_reg_10478) 
						  ^ vlTOPp->v__DOT__C_4_9_fu_6794_p3))));
    vlTOPp->v__DOT__W_73_fu_6267_p2 = ((vlTOPp->v__DOT__W_65_reg_9870 
					^ vlTOPp->v__DOT__W_57_reg_9745) 
				       ^ (vlTOPp->v__DOT__W_70_fu_6230_p2 
					  ^ vlTOPp->v__DOT__W_59_reg_9827));
    vlTOPp->v__DOT__temp_11_fu_1430_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_165_reg_8190 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_11_reg_8195)) 
					      + vlTOPp->v__DOT__C_1_9_reg_8146) 
					     + (vlTOPp->v__DOT__W_12_reg_7964 
						+ (
						   (vlTOPp->v__DOT__C_1_s_reg_8178 
						    & (~ vlTOPp->v__DOT__temp_3_reg_8152)) 
						   | (vlTOPp->v__DOT__C_1_10_fu_1381_p3 
						      & vlTOPp->v__DOT__temp_3_reg_8152)))));
    vlTOPp->v__DOT__temp_2_1_fu_4092_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_272_reg_9318 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_1_reg_9323)) 
					       + vlTOPp->v__DOT__W_41_reg_8932) 
					      + (vlTOPp->v__DOT__C_2_17_reg_9264 
						 + 
						 (((vlTOPp->v__DOT__C_2_18_reg_9306 
						    | vlTOPp->v__DOT__C_3_fu_4043_p3) 
						   & vlTOPp->v__DOT__temp_1_18_reg_9271) 
						  | (vlTOPp->v__DOT__C_2_18_reg_9306 
						     & vlTOPp->v__DOT__C_3_fu_4043_p3)))));
    vlTOPp->v__DOT__temp_1_5_fu_2640_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_25_reg_8631 
					       + ((vlTOPp->v__DOT__tmp_209_reg_8654 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_28_5_reg_8659))) 
					      + (vlTOPp->v__DOT__C_2_2_reg_8587 
						 + 
						 ((vlTOPp->v__DOT__temp_1_3_reg_8638 
						   ^ vlTOPp->v__DOT__C_2_3_reg_8643) 
						  ^ vlTOPp->v__DOT__C_2_4_fu_2602_p3))));
    vlTOPp->v__DOT__temp_2_12_fu_5423_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_308_reg_9922 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_12_reg_9927)) 
						+ vlTOPp->v__DOT__W_53_reg_9718) 
					       + (vlTOPp->v__DOT__C_3_s_reg_9788 
						  + 
						  (((vlTOPp->v__DOT__C_3_10_reg_9910 
						     | vlTOPp->v__DOT__C_3_11_fu_5374_p3) 
						    & vlTOPp->v__DOT__temp_2_10_reg_9795) 
						   | (vlTOPp->v__DOT__C_3_10_reg_9910 
						      & vlTOPp->v__DOT__C_3_11_fu_5374_p3)))));
    vlTOPp->v__DOT__temp_2_2_fu_4175_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_275_reg_9350 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_2_reg_9355)) 
					       + vlTOPp->v__DOT__W_42_reg_8941) 
					      + (vlTOPp->v__DOT__C_2_18_reg_9306 
						 + 
						 (((vlTOPp->v__DOT__C_3_reg_9338 
						    | vlTOPp->v__DOT__C_3_1_fu_4126_p3) 
						   & vlTOPp->v__DOT__temp_20_reg_9313) 
						  | (vlTOPp->v__DOT__C_3_reg_9338 
						     & vlTOPp->v__DOT__C_3_1_fu_4126_p3)))));
    vlTOPp->v__DOT__W_53_fu_4989_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_37_reg_8816_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp74_fu_4981_p2);
    vlTOPp->v__DOT__temp_3_5_fu_6478_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_65_reg_9870 
					       + ((vlTOPp->v__DOT__tmp_349_reg_10335 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_58_5_reg_10340))) 
					      + (vlTOPp->v__DOT__C_4_2_reg_10253 
						 + 
						 ((vlTOPp->v__DOT__temp_3_3_reg_10319 
						   ^ vlTOPp->v__DOT__C_4_3_reg_10324) 
						  ^ vlTOPp->v__DOT__C_4_4_fu_6440_p3))));
    vlTOPp->v__DOT__temp_8_fu_1098_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_153_reg_8049 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_8_reg_8054)) 
					     + vlTOPp->v__DOT__C_1_5_reg_7982) 
					    + (vlTOPp->v__DOT__W_8_reg_7848 
					       + ((vlTOPp->v__DOT__C_1_6_reg_8037 
						   & (~ vlTOPp->v__DOT__temp_6_reg_7988)) 
						  | (vlTOPp->v__DOT__C_1_7_fu_1049_p3 
						     & vlTOPp->v__DOT__temp_6_reg_7988)))));
    vlTOPp->v__DOT__temp_3_15_fu_7306_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_393_reg_10684 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_15_reg_10689)) 
						+ (
						   (vlTOPp->v__DOT__temp_3_13_reg_10648 
						    ^ vlTOPp->v__DOT__C_4_13_reg_10673) 
						   ^ vlTOPp->v__DOT__C_4_14_fu_7268_p3)) 
					       + (vlTOPp->v__DOT__W_76_reg_10308 
						  + vlTOPp->v__DOT__C_4_12_reg_10642)));
    vlTOPp->v__DOT__W_49_fu_4755_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp66_fu_4747_p2);
    vlTOPp->v__DOT__temp_s_fu_511_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_132_reg_7645 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_1_reg_7650)) 
					    + ((vlTOPp->v__DOT__C_reg_7571 
						& (~ vlTOPp->v__DOT__A_reg_7627)) 
					       | (vlTOPp->v__DOT__A_reg_7627 
						  & vlTOPp->v__DOT__C_1_fu_461_p3))) 
					   + (vlTOPp->v__DOT__D_reg_7605 
					      + vlTOPp->buff_q0)));
    vlTOPp->v__DOT__temp_10_fu_1347_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_162_reg_8158 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_10_reg_8163)) 
					      + vlTOPp->v__DOT__C_1_8_reg_8114) 
					     + (vlTOPp->v__DOT__W_11_reg_7956 
						+ (
						   (vlTOPp->v__DOT__C_1_9_reg_8146 
						    & (~ vlTOPp->v__DOT__temp_9_reg_8120)) 
						   | (vlTOPp->v__DOT__C_1_s_fu_1298_p3 
						      & vlTOPp->v__DOT__temp_9_reg_8120)))));
    vlTOPp->v__DOT__temp_20_fu_4009_p2 = ((IData)(0x8f1bbcdcU) 
					  + ((((vlTOPp->v__DOT__tmp_269_reg_9276 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_12_reg_9281)) 
					      + vlTOPp->v__DOT__W_40_reg_8842) 
					     + (vlTOPp->v__DOT__C_2_16_reg_9233 
						+ (
						   ((vlTOPp->v__DOT__C_2_17_reg_9264 
						     | vlTOPp->v__DOT__C_2_18_fu_3960_p3) 
						    & vlTOPp->v__DOT__temp_1_17_reg_9259) 
						   | (vlTOPp->v__DOT__C_2_17_reg_9264 
						      & vlTOPp->v__DOT__C_2_18_fu_3960_p3)))));
    vlTOPp->v__DOT__temp_2_11_fu_5331_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_305_reg_9800 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_11_reg_9805)) 
						+ vlTOPp->v__DOT__W_52_reg_9712) 
					       + (vlTOPp->v__DOT__C_3_9_reg_9675 
						  + 
						  (((vlTOPp->v__DOT__C_3_s_reg_9788 
						     | vlTOPp->v__DOT__C_3_10_fu_5282_p3) 
						    & vlTOPp->v__DOT__temp_2_s_reg_9682) 
						   | (vlTOPp->v__DOT__C_3_s_reg_9788 
						      & vlTOPp->v__DOT__C_3_10_fu_5282_p3)))));
    vlTOPp->v__DOT__temp_3_4_fu_6370_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_64_reg_9862 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_3_fu_6311_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_3_fu_6311_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_4_1_reg_10243 
						 + 
						 ((vlTOPp->v__DOT__temp_3_2_reg_10248 
						   ^ vlTOPp->v__DOT__C_4_2_reg_10253) 
						  ^ vlTOPp->v__DOT__C_4_3_fu_6316_p3))));
    vlTOPp->v__DOT__W_52_fu_4975_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_36_reg_8808_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp72_fu_4967_p2);
    vlTOPp->v__DOT__W_24_fu_2428_p2 = ((vlTOPp->v__DOT__W_16_reg_8306 
					^ vlTOPp->v__DOT__W_21_reg_8506) 
				       ^ vlTOPp->v__DOT__tmp16_fu_2420_p2);
    vlTOPp->v__DOT__W_31_fu_2747_p2 = ((vlTOPp->v__DOT__W_17_reg_8358 
					^ vlTOPp->v__DOT__W_23_reg_8569) 
				       ^ vlTOPp->v__DOT__tmp30_fu_2739_p2);
    vlTOPp->v__DOT__temp_7_fu_1009_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_150_reg_7994 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_7_reg_7999)) 
					     + vlTOPp->v__DOT__C_1_4_reg_7924) 
					    + (vlTOPp->v__DOT__W_7_reg_7841 
					       + ((vlTOPp->v__DOT__C_1_5_reg_7982 
						   & (~ vlTOPp->v__DOT__temp_5_reg_7930)) 
						  | (vlTOPp->v__DOT__C_1_6_fu_960_p3 
						     & vlTOPp->v__DOT__temp_5_reg_7930)))));
    vlTOPp->v__DOT__temp_3_14_fu_7234_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_389_reg_10653 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_14_reg_10658)) 
						+ (
						   (vlTOPp->v__DOT__temp_3_12_reg_10607 
						    ^ vlTOPp->v__DOT__C_4_12_reg_10642) 
						   ^ vlTOPp->v__DOT__C_4_13_fu_7196_p3)) 
					       + (vlTOPp->v__DOT__W_75_reg_10365 
						  + vlTOPp->v__DOT__C_4_11_reg_10601)));
    vlTOPp->v__DOT__W_48_fu_4652_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_40_reg_8842_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp64_fu_4644_p2);
    vlTOPp->v__DOT__temp_3_fu_1264_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_159_reg_8126 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_s_reg_8131)) 
					     + vlTOPp->v__DOT__C_1_7_reg_8082) 
					    + (vlTOPp->v__DOT__W_10_reg_7906 
					       + ((vlTOPp->v__DOT__C_1_8_reg_8114 
						   & (~ vlTOPp->v__DOT__temp_8_reg_8088)) 
						  | (vlTOPp->v__DOT__C_1_9_fu_1215_p3 
						     & vlTOPp->v__DOT__temp_8_reg_8088)))));
    vlTOPp->v__DOT__temp_1_2_fu_2349_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_22_reg_8514 
					       + ((vlTOPp->v__DOT__tmp_197_reg_8539 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_28_2_reg_8544))) 
					      + (vlTOPp->v__DOT__C_1_18_reg_8480 
						 + 
						 ((vlTOPp->v__DOT__temp_19_reg_8523 
						   ^ vlTOPp->v__DOT__C_2_reg_8528) 
						  ^ vlTOPp->v__DOT__C_2_1_fu_2311_p3))));
    vlTOPp->v__DOT__temp_3_2_fu_6156_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_62_reg_9848 
					       + ((vlTOPp->v__DOT__tmp_337_reg_10213 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_58_2_reg_10218))) 
					      + (vlTOPp->v__DOT__C_3_18_reg_10171 
						 + 
						 ((vlTOPp->v__DOT__temp_21_reg_10197 
						   ^ vlTOPp->v__DOT__C_4_reg_10202) 
						  ^ vlTOPp->v__DOT__C_4_1_fu_6118_p3))));
    // ALWAYS at sha_transform.v:2966
    vlTOPp->y_d0 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)
		     ? ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			 ? (vlTOPp->v__DOT__tmp408_reg_10780 
			    + (vlTOPp->v__DOT__tmp405_reg_10775 
			       + vlTOPp->v__DOT__W_79_reg_10555))
			 : ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			     ? vlTOPp->v__DOT__tmp_24_reg_10770
			     : ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				 ? (vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it5 
				    + vlTOPp->v__DOT__C_4_17_fu_7420_p3)
				 : ((1U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				     ? (vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it5 
					+ vlTOPp->v__DOT__C_4_16_fu_7331_p3)
				     : 0U)))) : 0U);
    vlTOPp->v__DOT__temp_1_18_fu_3912_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_39_reg_8833 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_1_17_fu_3853_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_1_17_fu_3853_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_2_15_reg_9223 
						  + 
						  ((vlTOPp->v__DOT__temp_1_16_reg_9228 
						    ^ vlTOPp->v__DOT__C_2_16_reg_9233) 
						   ^ vlTOPp->v__DOT__C_2_17_fu_3858_p3))));
    vlTOPp->v__DOT__temp_2_6_fu_4517_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_287_reg_9478 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_6_reg_9483)) 
					       + vlTOPp->v__DOT__W_46_fu_4462_p2) 
					      + (vlTOPp->v__DOT__C_3_3_reg_9434 
						 + 
						 (((vlTOPp->v__DOT__C_3_4_reg_9466 
						    | vlTOPp->v__DOT__C_3_5_fu_4467_p3) 
						   & vlTOPp->v__DOT__temp_2_4_reg_9441) 
						  | (vlTOPp->v__DOT__C_3_4_reg_9466 
						     & vlTOPp->v__DOT__C_3_5_fu_4467_p3)))));
    vlTOPp->v__DOT__W_30_fu_2733_p2 = ((vlTOPp->v__DOT__W_16_reg_8306 
					^ vlTOPp->v__DOT__W_22_reg_8514) 
				       ^ vlTOPp->v__DOT__tmp28_fu_2725_p2);
    vlTOPp->v__DOT__W_29_fu_2719_p2 = ((vlTOPp->v__DOT__W_21_reg_8506 
					^ vlTOPp->v__DOT__W_26_reg_8690) 
				       ^ vlTOPp->v__DOT__tmp26_fu_2711_p2);
    vlTOPp->v__DOT__W_51_fu_4961_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_35_reg_8800_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp70_fu_4953_p2);
    vlTOPp->v__DOT__temp_6_fu_926_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_147_reg_7936 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_6_reg_7941)) 
					    + vlTOPp->v__DOT__C_1_3_reg_7866) 
					   + (vlTOPp->v__DOT__W_6_reg_7792 
					      + ((vlTOPp->v__DOT__C_1_4_reg_7924 
						  & (~ vlTOPp->v__DOT__temp_4_reg_7872)) 
						 | (vlTOPp->v__DOT__C_1_5_fu_877_p3 
						    & vlTOPp->v__DOT__temp_4_reg_7872)))));
    vlTOPp->v__DOT__temp_1_13_fu_3560_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_34_reg_8792 
						+ (
						   (vlTOPp->v__DOT__tmp_245_reg_9111 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_28_13_reg_9116))) 
					       + (vlTOPp->v__DOT__C_2_10_reg_9069 
						  + 
						  ((vlTOPp->v__DOT__temp_1_11_reg_9095 
						    ^ vlTOPp->v__DOT__C_2_11_reg_9100) 
						   ^ vlTOPp->v__DOT__C_2_12_fu_3522_p3))));
    vlTOPp->v__DOT__temp_2_17_fu_5856_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_323_reg_10103 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_17_reg_10108)) 
						+ vlTOPp->v__DOT__W_58_reg_9820) 
					       + (vlTOPp->v__DOT__C_3_14_reg_10059 
						  + 
						  (((vlTOPp->v__DOT__C_3_15_reg_10091 
						     | vlTOPp->v__DOT__C_3_16_fu_5807_p3) 
						    & vlTOPp->v__DOT__temp_2_15_reg_10066) 
						   | (vlTOPp->v__DOT__C_3_15_reg_10091 
						      & vlTOPp->v__DOT__C_3_16_fu_5807_p3)))));
    vlTOPp->v__DOT__temp_3_13_fu_7162_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_385_reg_10612 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_13_reg_10617)) 
						+ (
						   (vlTOPp->v__DOT__temp_3_11_reg_10596 
						    ^ vlTOPp->v__DOT__C_4_11_reg_10601) 
						   ^ vlTOPp->v__DOT__C_4_12_fu_7124_p3)) 
					       + (vlTOPp->v__DOT__W_74_reg_10302 
						  + vlTOPp->v__DOT__C_4_10_reg_10570)));
    vlTOPp->v__DOT__temp_17_fu_1974_p2 = ((IData)(0x5a827999U) 
					  + ((vlTOPp->v__DOT__W_18_fu_1879_p2 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_16_fu_1903_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_16_fu_1903_p2 
						       >> 0x1bU)))) 
					     + (((vlTOPp->v__DOT__C_1_15_reg_8373 
						  & (~ vlTOPp->v__DOT__temp_15_reg_8367)) 
						 | (vlTOPp->v__DOT__C_1_16_fu_1908_p3 
						    & vlTOPp->v__DOT__temp_15_reg_8367)) 
						+ vlTOPp->v__DOT__C_1_14_reg_8327)));
    vlTOPp->v__DOT__temp_2_7_fu_4610_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_290_reg_9518 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_7_reg_9523)) 
					       + vlTOPp->v__DOT__W_47_fu_4555_p2) 
					      + (vlTOPp->v__DOT__C_3_4_reg_9466 
						 + 
						 (((vlTOPp->v__DOT__C_3_5_reg_9506 
						    | vlTOPp->v__DOT__C_3_6_fu_4560_p3) 
						   & vlTOPp->v__DOT__temp_2_5_reg_9473) 
						  | (vlTOPp->v__DOT__C_3_5_reg_9506 
						     & vlTOPp->v__DOT__C_3_6_fu_4560_p3)))));
    vlTOPp->v__DOT__temp_1_15_fu_3693_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_36_reg_8808 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_1_14_fu_3634_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_1_14_fu_3634_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_2_12_reg_9141 
						  + 
						  ((vlTOPp->v__DOT__temp_1_13_reg_9146 
						    ^ vlTOPp->v__DOT__C_2_13_reg_9151) 
						   ^ vlTOPp->v__DOT__C_2_14_fu_3639_p3))));
    vlTOPp->v__DOT__temp_9_fu_1181_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_156_reg_8094 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_9_reg_8099)) 
					     + vlTOPp->v__DOT__C_1_6_reg_8037) 
					    + (vlTOPp->v__DOT__W_9_reg_7898 
					       + ((vlTOPp->v__DOT__C_1_7_reg_8082 
						   & (~ vlTOPp->v__DOT__temp_7_reg_8043)) 
						  | (vlTOPp->v__DOT__C_1_8_fu_1132_p3 
						     & vlTOPp->v__DOT__temp_7_reg_8043)))));
    vlTOPp->v__DOT__temp_1_16_fu_3779_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_37_reg_8816 
						+ (
						   (vlTOPp->v__DOT__tmp_257_reg_9193 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_28_16_reg_9198))) 
					       + (vlTOPp->v__DOT__C_2_13_reg_9151 
						  + 
						  ((vlTOPp->v__DOT__temp_1_14_reg_9177 
						    ^ vlTOPp->v__DOT__C_2_14_reg_9182) 
						   ^ vlTOPp->v__DOT__C_2_15_fu_3741_p3))));
    vlTOPp->v__DOT__W_26_fu_2568_p2 = ((vlTOPp->v__DOT__W_18_reg_8399 
					^ vlTOPp->v__DOT__W_23_reg_8569) 
				       ^ vlTOPp->v__DOT__tmp20_fu_2560_p2);
    vlTOPp->v__DOT__temp_3_1_fu_6070_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_61_reg_9841 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_21_fu_6011_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_21_fu_6011_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_3_17_reg_10134 
						 + 
						 ((vlTOPp->v__DOT__temp_2_18_reg_10166 
						   ^ vlTOPp->v__DOT__C_3_18_reg_10171) 
						  ^ vlTOPp->v__DOT__C_4_fu_6016_p3))));
    vlTOPp->v__DOT__temp_3_16_fu_7390_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_397_reg_10714 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_16_reg_10719)) 
						+ (vlTOPp->v__DOT__tmp396_reg_10724 
						   ^ vlTOPp->v__DOT__C_4_15_fu_7357_p3)) 
					       + (vlTOPp->v__DOT__W_77_reg_10463 
						  + vlTOPp->v__DOT__C_4_13_reg_10673)));
    vlTOPp->v__DOT__temp_1_1_fu_2249_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_21_fu_2165_p2 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_19_fu_2189_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_19_fu_2189_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_1_17_reg_8426 
						 + 
						 ((vlTOPp->v__DOT__temp_18_reg_8475 
						   ^ vlTOPp->v__DOT__C_1_18_reg_8480) 
						  ^ vlTOPp->v__DOT__C_2_fu_2194_p3))));
    vlTOPp->v__DOT__W_50_fu_4858_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp68_fu_4850_p2);
}

VL_INLINE_OPT void Vsha_transform::_combo__TOP__5(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_combo__TOP__5\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__temp_fu_423_p2 = ((IData)(0x5a827999U) 
				      + ((((0xffffffe0U 
					    & (vlTOPp->buff_q0 
					       << 5U)) 
					   | (0x1fU 
					      & (vlTOPp->buff_q0 
						 >> 0x1bU))) 
					  + ((vlTOPp->v__DOT__D_reg_7605 
					      & (~ vlTOPp->v__DOT__B_reg_7564)) 
					     | (vlTOPp->v__DOT__C_reg_7571 
						& vlTOPp->v__DOT__B_reg_7564))) 
					 + (vlTOPp->buff_q1 
					    + vlTOPp->v__DOT__W_0_reg_7599)));
    // ALWAYS at sha_transform.v:2750
    vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0 = ((1U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? (IData)(vlTOPp->ap_start)
					      : (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0_preg));
    vlTOPp->v__DOT__temp_s_fu_511_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_132_reg_7645 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_1_reg_7650)) 
					    + ((vlTOPp->v__DOT__C_reg_7571 
						& (~ vlTOPp->v__DOT__A_reg_7627)) 
					       | (vlTOPp->v__DOT__A_reg_7627 
						  & vlTOPp->v__DOT__C_1_fu_461_p3))) 
					   + (vlTOPp->v__DOT__D_reg_7605 
					      + vlTOPp->buff_q0)));
    // ALWAYS at sha_transform.v:2742
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 0xaU) & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0));
    // ALWAYS at sha_transform.v:2854
    vlTOPp->buff_address0 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)
			      ? ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? 0x14U : ((0x200U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0x12U
					      : ((0x100U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0x10U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0xeU
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0xcU
						    : 
						   ((0x20U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0xaU
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 8U
						      : 
						     ((8U 
						       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 6U
						       : 
						      ((4U 
							& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						        ? 0U
						        : 
						       ((2U 
							 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
							 ? 5U
							 : 
							((1U 
							  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
							  ? 1U
							  : 0U)))))))))))
			      : 0U);
    // ALWAYS at sha_transform.v:2886
    vlTOPp->buff_address1 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)
			      ? ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? 0x13U : ((0x100U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0x11U
					      : ((0x80U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0xfU
						  : 
						 ((0x40U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0xdU
						   : 
						  ((0x20U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0xbU
						    : 
						   ((0x10U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 9U
						     : 
						    ((8U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 7U
						      : 
						     ((4U 
						       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 4U
						       : 
						      ((2U 
							& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						        ? 3U
						        : 
						       ((1U 
							 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
							 ? 2U
							 : 0U))))))))))
			      : 0U);
    // ALWAYS at sha_transform.v:2916
    vlTOPp->buff_ce0 = (((((((((((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 0xaU) & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
				 | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
				    & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				       >> 1U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						   & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						      >> 2U))) 
			       | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
				  & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 3U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						    >> 4U))) 
			     | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
				& ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 5U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
					       & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						  >> 6U))) 
			   | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			      & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 7U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
					     & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 8U))) 
			 | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			    & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       >> 9U))) | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					    & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
					   & (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						 & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2924
    vlTOPp->buff_ce1 = (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			 & ((((((((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				    >> 1U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					      >> 2U)) 
				  | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 3U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 4U)) 
				| ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 5U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					      >> 6U)) 
			      | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 7U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					    >> 8U)) 
			    | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       >> 9U))) | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					    & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
					   & (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						 & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2950
    vlTOPp->y_ce0 = (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		      & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			   >> 1U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 2U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 3U))) 
		     | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)) 
			& (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			      & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2984
    vlTOPp->y_we0 = (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		      & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			   >> 1U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 2U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 3U))) 
		     | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)) 
			& (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			      & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2734
    vlTOPp->ap_idle = (1U & (((((((((~ (IData)(vlTOPp->ap_start)) 
				    & (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
				   & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0))) 
				  & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1))) 
				 & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2))) 
				& (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3))) 
			       & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4))) 
			      & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5))) 
			     & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6))));
    // ALWAYS at sha_transform.v:2999
    vlTOPp->v__DOT__ap_NS_fsm = ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? 0U : ((0x100U 
					       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((0x80U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((0x20U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((8U 
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
							  : 1U))))))))))
				  : ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((0x100U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 0U : ((0x80U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((0x20U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((8U 
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
							  : 0x400U)))))))))
				      : ((0x100U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? ((0x80U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((0x40U 
					       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						        : 0x200U))))))))
					  : ((0x80U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? ((0x40U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						        : 0x100U)))))))
					      : ((0x40U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 
						 ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						        : 0x80U))))))
						  : 
						 ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 
						   ((8U 
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
						        : 0x20U))))
						    : 
						   ((8U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 
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
						       ((1U 
							 & (((((((~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
								 & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1))) 
								& (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2))) 
							       & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3))) 
							      & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4))) 
							     & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5))) 
							    & (~ (IData)(vlTOPp->ap_start))))
							 ? 1U
							 : 0x10U))))
						     : 
						    ((4U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 
						     ((2U 
						       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 0U
						       : 
						      ((1U 
							& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						        ? 0U
						        : 8U))
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
						       ((1U 
							 & ((~ 
							     ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
							      & (~ (IData)(vlTOPp->ap_start)))) 
							    & (~ 
							       (((((((~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1)) 
								     & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2))) 
								    & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3))) 
								   & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4))) 
								  & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5))) 
								 & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6))) 
								& (~ (IData)(vlTOPp->ap_start))))))
							 ? 2U
							 : 1U)
						        : 0U)))))))))));
}

VL_INLINE_OPT void Vsha_transform::_sequent__TOP__6(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_sequent__TOP__6\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at sha_transform.v:2726
    vlTOPp->ap_done = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		       & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			  >> 3U));
    // ALWAYS at sha_transform.v:2932
    vlTOPp->y_address0 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)
			   ? ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			       ? 0U : ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				        ? 2U : ((2U 
						 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						 ? 3U
						 : 
						((1U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 4U
						  : 0U))))
			   : 0U);
    // ALWAYS at sha_transform.v:2958
    vlTOPp->y_ce1 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		     & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 3U));
    // ALWAYS at sha_transform.v:2992
    vlTOPp->y_we1 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		     & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			>> 3U));
    vlTOPp->v__DOT__temp_5_fu_843_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_144_reg_7878 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_5_reg_7883)) 
					    + vlTOPp->v__DOT__C_1_2_reg_7809) 
					   + (vlTOPp->v__DOT__W_5_reg_7785 
					      + ((vlTOPp->v__DOT__C_1_3_reg_7866 
						  & (~ vlTOPp->v__DOT__temp_2_reg_7815)) 
						 | (vlTOPp->v__DOT__C_1_4_fu_794_p3 
						    & vlTOPp->v__DOT__temp_2_reg_7815)))));
    vlTOPp->v__DOT__temp_2_16_fu_5773_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_320_reg_10071 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_16_reg_10076)) 
						+ vlTOPp->v__DOT__W_57_reg_9745) 
					       + (vlTOPp->v__DOT__C_3_13_reg_10027 
						  + 
						  (((vlTOPp->v__DOT__C_3_14_reg_10059 
						     | vlTOPp->v__DOT__C_3_15_fu_5724_p3) 
						    & vlTOPp->v__DOT__temp_2_14_reg_10034) 
						   | (vlTOPp->v__DOT__C_3_14_reg_10059 
						      & vlTOPp->v__DOT__C_3_15_fu_5724_p3)))));
    vlTOPp->v__DOT__temp_1_10_fu_3341_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_31_reg_8770 
						+ (
						   (vlTOPp->v__DOT__tmp_233_reg_9020 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_28_10_reg_9025))) 
					       + (vlTOPp->v__DOT__C_2_8_reg_8969 
						  + 
						  ((vlTOPp->v__DOT__temp_1_9_reg_9004 
						    ^ vlTOPp->v__DOT__C_2_9_reg_9009) 
						   ^ vlTOPp->v__DOT__C_2_s_fu_3303_p3))));
    vlTOPp->v__DOT__temp_3_10_fu_6943_p2 = ((IData)(0xca62c1d6U) 
					    + ((vlTOPp->v__DOT__W_71_reg_10285 
						+ (
						   (vlTOPp->v__DOT__tmp_373_reg_10525 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_58_10_reg_10530))) 
					       + (vlTOPp->v__DOT__C_4_8_reg_10478 
						  + 
						  ((vlTOPp->v__DOT__temp_3_9_reg_10509 
						    ^ vlTOPp->v__DOT__C_4_9_reg_10514) 
						   ^ vlTOPp->v__DOT__C_4_s_fu_6905_p3))));
    vlTOPp->v__DOT__temp_1_12_fu_3474_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_33_reg_8784 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_1_11_fu_3415_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_1_11_fu_3415_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_2_s_reg_9059 
						  + 
						  ((vlTOPp->v__DOT__temp_1_10_reg_9064 
						    ^ vlTOPp->v__DOT__C_2_10_reg_9069) 
						   ^ vlTOPp->v__DOT__C_2_11_fu_3420_p3))));
    vlTOPp->v__DOT__temp_3_12_fu_7076_p2 = ((IData)(0xca62c1d6U) 
					    + ((vlTOPp->v__DOT__W_73_reg_10297 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_3_11_fu_7017_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_3_11_fu_7017_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_4_s_reg_10560 
						  + 
						  ((vlTOPp->v__DOT__temp_3_10_reg_10565 
						    ^ vlTOPp->v__DOT__C_4_10_reg_10570) 
						   ^ vlTOPp->v__DOT__C_4_11_fu_7022_p3))));
    vlTOPp->v__DOT__temp_13_fu_1596_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_171_reg_8254 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_13_reg_8259)) 
					      + vlTOPp->v__DOT__C_1_10_reg_8210) 
					     + (vlTOPp->v__DOT__W_14_reg_8023 
						+ (
						   (vlTOPp->v__DOT__C_1_11_reg_8242 
						    & (~ vlTOPp->v__DOT__temp_11_reg_8216)) 
						   | (vlTOPp->v__DOT__C_1_12_fu_1547_p3 
						      & vlTOPp->v__DOT__temp_11_reg_8216)))));
    vlTOPp->v__DOT__temp_2_fu_677_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_138_reg_7765 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_3_reg_7770)) 
					    + vlTOPp->v__DOT__C_1_reg_7697) 
					   + (vlTOPp->v__DOT__W_3_reg_7729 
					      + ((vlTOPp->v__DOT__C_1_1_reg_7753 
						  & (~ vlTOPp->v__DOT__temp_s_reg_7703)) 
						 | (vlTOPp->v__DOT__C_1_2_fu_628_p3 
						    & vlTOPp->v__DOT__temp_s_reg_7703)))));
    vlTOPp->v__DOT__temp_1_8_fu_3104_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_28_reg_8715 
					       + ((vlTOPp->v__DOT__tmp_221_reg_8902 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_28_8_reg_8907))) 
					      + (vlTOPp->v__DOT__C_2_5_reg_8732 
						 + 
						 ((vlTOPp->v__DOT__temp_1_6_reg_8886 
						   ^ vlTOPp->v__DOT__C_2_6_reg_8891) 
						  ^ vlTOPp->v__DOT__C_2_7_fu_3066_p3))));
    vlTOPp->v__DOT__temp_2_14_fu_5607_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_314_reg_10000 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_14_reg_10005)) 
						+ vlTOPp->v__DOT__W_55_reg_9730) 
					       + (vlTOPp->v__DOT__C_3_11_reg_9949 
						  + 
						  (((vlTOPp->v__DOT__C_3_12_reg_9988 
						     | vlTOPp->v__DOT__C_3_13_fu_5558_p3) 
						    & vlTOPp->v__DOT__temp_2_12_reg_9956) 
						   | (vlTOPp->v__DOT__C_3_12_reg_9988 
						      & vlTOPp->v__DOT__C_3_13_fu_5558_p3)))));
    vlTOPp->v__DOT__temp_2_4_fu_4341_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_281_reg_9414 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_4_reg_9419)) 
					       + vlTOPp->v__DOT__W_44_reg_8995) 
					      + (vlTOPp->v__DOT__C_3_1_reg_9370 
						 + 
						 (((vlTOPp->v__DOT__C_3_2_reg_9402 
						    | vlTOPp->v__DOT__C_3_3_fu_4292_p3) 
						   & vlTOPp->v__DOT__temp_2_2_reg_9377) 
						  | (vlTOPp->v__DOT__C_3_2_reg_9402 
						     & vlTOPp->v__DOT__C_3_3_fu_4292_p3)))));
    vlTOPp->v__DOT__temp_3_8_fu_6706_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_68_reg_9981 
					       + ((vlTOPp->v__DOT__tmp_361_reg_10433 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_58_8_reg_10438))) 
					      + (vlTOPp->v__DOT__C_4_5_reg_10391 
						 + 
						 ((vlTOPp->v__DOT__temp_3_6_reg_10417 
						   ^ vlTOPp->v__DOT__C_4_6_reg_10422) 
						  ^ vlTOPp->v__DOT__C_4_7_fu_6668_p3))));
    vlTOPp->v__DOT__temp_1_fu_594_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_135_reg_7709 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_2_reg_7714)) 
					    + ((vlTOPp->v__DOT__C_1_reg_7697 
						& (~ vlTOPp->v__DOT__temp_reg_7639)) 
					       | (vlTOPp->v__DOT__C_1_1_fu_545_p3 
						  & vlTOPp->v__DOT__temp_reg_7639))) 
					   + (vlTOPp->v__DOT__C_reg_7571 
					      + vlTOPp->v__DOT__W_2_reg_7680)));
    vlTOPp->v__DOT__temp_12_fu_1513_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_168_reg_8222 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_12_reg_8227)) 
					      + vlTOPp->v__DOT__C_1_s_reg_8178) 
					     + (vlTOPp->v__DOT__W_13_reg_8014 
						+ (
						   (vlTOPp->v__DOT__C_1_10_reg_8210 
						    & (~ vlTOPp->v__DOT__temp_10_reg_8184)) 
						   | (vlTOPp->v__DOT__C_1_11_fu_1464_p3 
						      & vlTOPp->v__DOT__temp_10_reg_8184)))));
    vlTOPp->v__DOT__temp_2_13_fu_5515_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_311_reg_9961 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_13_reg_9966)) 
						+ vlTOPp->v__DOT__W_54_reg_9724) 
					       + (vlTOPp->v__DOT__C_3_10_reg_9910 
						  + 
						  (((vlTOPp->v__DOT__C_3_11_reg_9949 
						     | vlTOPp->v__DOT__C_3_12_fu_5466_p3) 
						    & vlTOPp->v__DOT__temp_2_11_reg_9917) 
						   | (vlTOPp->v__DOT__C_3_11_reg_9949 
						      & vlTOPp->v__DOT__C_3_12_fu_5466_p3)))));
    vlTOPp->v__DOT__temp_2_3_fu_4258_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_278_reg_9382 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_3_reg_9387)) 
					       + vlTOPp->v__DOT__W_43_reg_8950) 
					      + (vlTOPp->v__DOT__C_3_reg_9338 
						 + 
						 (((vlTOPp->v__DOT__C_3_1_reg_9370 
						    | vlTOPp->v__DOT__C_3_2_fu_4209_p3) 
						   & vlTOPp->v__DOT__temp_2_1_reg_9345) 
						  | (vlTOPp->v__DOT__C_3_1_reg_9370 
						     & vlTOPp->v__DOT__C_3_2_fu_4209_p3)))));
    vlTOPp->v__DOT__W_58_fu_5168_p2 = (vlTOPp->v__DOT__tmp85_reg_9670 
				       ^ vlTOPp->v__DOT__tmp84_fu_5164_p2);
    vlTOPp->v__DOT__W_60_fu_5186_p2 = (vlTOPp->v__DOT__tmp89_reg_9758 
				       ^ vlTOPp->v__DOT__tmp88_fu_5182_p2);
    vlTOPp->v__DOT__W_59_fu_5177_p2 = (vlTOPp->v__DOT__tmp87_reg_9753 
				       ^ vlTOPp->v__DOT__tmp86_fu_5173_p2);
    vlTOPp->v__DOT__temp_1_7_fu_2991_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_27_reg_8702 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_1_6_fu_2932_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_1_6_fu_2932_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_2_4_reg_8722 
						 + 
						 ((vlTOPp->v__DOT__temp_1_5_reg_8727 
						   ^ vlTOPp->v__DOT__C_2_5_reg_8732) 
						  ^ vlTOPp->v__DOT__C_2_6_fu_2937_p3))));
    vlTOPp->v__DOT__temp_3_7_fu_6611_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_67_reg_9942 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_6_fu_6552_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_6_fu_6552_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_4_4_reg_10381 
						 + 
						 ((vlTOPp->v__DOT__temp_3_5_reg_10386 
						   ^ vlTOPp->v__DOT__C_4_5_reg_10391) 
						  ^ vlTOPp->v__DOT__C_4_6_fu_6557_p3))));
    vlTOPp->v__DOT__temp_14_fu_1693_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_174_reg_8286 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_14_reg_8291)) 
					      + vlTOPp->v__DOT__C_1_11_reg_8242) 
					     + (vlTOPp->v__DOT__W_15_reg_8073 
						+ (
						   (vlTOPp->v__DOT__C_1_12_reg_8274 
						    & (~ vlTOPp->v__DOT__temp_12_reg_8248)) 
						   | (vlTOPp->v__DOT__C_1_13_fu_1644_p3 
						      & vlTOPp->v__DOT__temp_12_reg_8248)))));
    vlTOPp->v__DOT__temp_4_fu_760_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_141_reg_7821 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_4_reg_7826)) 
					    + vlTOPp->v__DOT__C_1_1_reg_7753) 
					   + (vlTOPp->v__DOT__W_4_reg_7736 
					      + ((vlTOPp->v__DOT__C_1_2_reg_7809 
						  & (~ vlTOPp->v__DOT__temp_1_reg_7759)) 
						 | (vlTOPp->v__DOT__C_1_3_fu_711_p3 
						    & vlTOPp->v__DOT__temp_1_reg_7759)))));
    vlTOPp->v__DOT__temp_2_15_fu_5690_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_317_reg_10039 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_15_reg_10044)) 
						+ vlTOPp->v__DOT__W_56_reg_9737) 
					       + (vlTOPp->v__DOT__C_3_12_reg_9988 
						  + 
						  (((vlTOPp->v__DOT__C_3_13_reg_10027 
						     | vlTOPp->v__DOT__C_3_14_fu_5641_p3) 
						    & vlTOPp->v__DOT__temp_2_13_reg_9995) 
						   | (vlTOPp->v__DOT__C_3_13_reg_10027 
						      & vlTOPp->v__DOT__C_3_14_fu_5641_p3)))));
    vlTOPp->v__DOT__temp_2_5_fu_4424_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_284_reg_9446 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_5_reg_9451)) 
					       + vlTOPp->v__DOT__W_45_reg_9050) 
					      + (vlTOPp->v__DOT__C_3_2_reg_9402 
						 + 
						 (((vlTOPp->v__DOT__C_3_3_reg_9434 
						    | vlTOPp->v__DOT__C_3_4_fu_4375_p3) 
						   & vlTOPp->v__DOT__temp_2_3_reg_9409) 
						  | (vlTOPp->v__DOT__C_3_3_reg_9434 
						     & vlTOPp->v__DOT__C_3_4_fu_4375_p3)))));
    vlTOPp->v__DOT__temp_1_s_fu_3246_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_30_reg_8764 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_1_9_fu_3187_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_1_9_fu_3187_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_2_7_reg_8959 
						 + 
						 ((vlTOPp->v__DOT__temp_1_8_reg_8964 
						   ^ vlTOPp->v__DOT__C_2_8_reg_8969) 
						  ^ vlTOPp->v__DOT__C_2_9_fu_3192_p3))));
    vlTOPp->v__DOT__temp_3_s_fu_6848_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_70_reg_10279 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_9_fu_6789_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_9_fu_6789_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_4_7_reg_10468 
						 + 
						 ((vlTOPp->v__DOT__temp_3_8_reg_10473 
						   ^ vlTOPp->v__DOT__C_4_8_reg_10478) 
						  ^ vlTOPp->v__DOT__C_4_9_fu_6794_p3))));
    vlTOPp->v__DOT__W_73_fu_6267_p2 = ((vlTOPp->v__DOT__W_65_reg_9870 
					^ vlTOPp->v__DOT__W_57_reg_9745) 
				       ^ (vlTOPp->v__DOT__W_70_fu_6230_p2 
					  ^ vlTOPp->v__DOT__W_59_reg_9827));
    vlTOPp->v__DOT__temp_11_fu_1430_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_165_reg_8190 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_11_reg_8195)) 
					      + vlTOPp->v__DOT__C_1_9_reg_8146) 
					     + (vlTOPp->v__DOT__W_12_reg_7964 
						+ (
						   (vlTOPp->v__DOT__C_1_s_reg_8178 
						    & (~ vlTOPp->v__DOT__temp_3_reg_8152)) 
						   | (vlTOPp->v__DOT__C_1_10_fu_1381_p3 
						      & vlTOPp->v__DOT__temp_3_reg_8152)))));
    vlTOPp->v__DOT__temp_2_1_fu_4092_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_272_reg_9318 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_1_reg_9323)) 
					       + vlTOPp->v__DOT__W_41_reg_8932) 
					      + (vlTOPp->v__DOT__C_2_17_reg_9264 
						 + 
						 (((vlTOPp->v__DOT__C_2_18_reg_9306 
						    | vlTOPp->v__DOT__C_3_fu_4043_p3) 
						   & vlTOPp->v__DOT__temp_1_18_reg_9271) 
						  | (vlTOPp->v__DOT__C_2_18_reg_9306 
						     & vlTOPp->v__DOT__C_3_fu_4043_p3)))));
    vlTOPp->v__DOT__temp_1_5_fu_2640_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_25_reg_8631 
					       + ((vlTOPp->v__DOT__tmp_209_reg_8654 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_28_5_reg_8659))) 
					      + (vlTOPp->v__DOT__C_2_2_reg_8587 
						 + 
						 ((vlTOPp->v__DOT__temp_1_3_reg_8638 
						   ^ vlTOPp->v__DOT__C_2_3_reg_8643) 
						  ^ vlTOPp->v__DOT__C_2_4_fu_2602_p3))));
    vlTOPp->v__DOT__temp_2_12_fu_5423_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_308_reg_9922 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_12_reg_9927)) 
						+ vlTOPp->v__DOT__W_53_reg_9718) 
					       + (vlTOPp->v__DOT__C_3_s_reg_9788 
						  + 
						  (((vlTOPp->v__DOT__C_3_10_reg_9910 
						     | vlTOPp->v__DOT__C_3_11_fu_5374_p3) 
						    & vlTOPp->v__DOT__temp_2_10_reg_9795) 
						   | (vlTOPp->v__DOT__C_3_10_reg_9910 
						      & vlTOPp->v__DOT__C_3_11_fu_5374_p3)))));
    vlTOPp->v__DOT__temp_2_2_fu_4175_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_275_reg_9350 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_2_reg_9355)) 
					       + vlTOPp->v__DOT__W_42_reg_8941) 
					      + (vlTOPp->v__DOT__C_2_18_reg_9306 
						 + 
						 (((vlTOPp->v__DOT__C_3_reg_9338 
						    | vlTOPp->v__DOT__C_3_1_fu_4126_p3) 
						   & vlTOPp->v__DOT__temp_20_reg_9313) 
						  | (vlTOPp->v__DOT__C_3_reg_9338 
						     & vlTOPp->v__DOT__C_3_1_fu_4126_p3)))));
    vlTOPp->v__DOT__W_53_fu_4989_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_45_reg_9050_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_37_reg_8816_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp74_fu_4981_p2);
    vlTOPp->v__DOT__temp_3_5_fu_6478_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_65_reg_9870 
					       + ((vlTOPp->v__DOT__tmp_349_reg_10335 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_58_5_reg_10340))) 
					      + (vlTOPp->v__DOT__C_4_2_reg_10253 
						 + 
						 ((vlTOPp->v__DOT__temp_3_3_reg_10319 
						   ^ vlTOPp->v__DOT__C_4_3_reg_10324) 
						  ^ vlTOPp->v__DOT__C_4_4_fu_6440_p3))));
    vlTOPp->v__DOT__temp_8_fu_1098_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_153_reg_8049 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_8_reg_8054)) 
					     + vlTOPp->v__DOT__C_1_5_reg_7982) 
					    + (vlTOPp->v__DOT__W_8_reg_7848 
					       + ((vlTOPp->v__DOT__C_1_6_reg_8037 
						   & (~ vlTOPp->v__DOT__temp_6_reg_7988)) 
						  | (vlTOPp->v__DOT__C_1_7_fu_1049_p3 
						     & vlTOPp->v__DOT__temp_6_reg_7988)))));
    vlTOPp->v__DOT__temp_3_15_fu_7306_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_393_reg_10684 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_15_reg_10689)) 
						+ (
						   (vlTOPp->v__DOT__temp_3_13_reg_10648 
						    ^ vlTOPp->v__DOT__C_4_13_reg_10673) 
						   ^ vlTOPp->v__DOT__C_4_14_fu_7268_p3)) 
					       + (vlTOPp->v__DOT__W_76_reg_10308 
						  + vlTOPp->v__DOT__C_4_12_reg_10642)));
    vlTOPp->v__DOT__W_49_fu_4755_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_33_reg_8784_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp66_fu_4747_p2);
    vlTOPp->v__DOT__temp_10_fu_1347_p2 = ((IData)(0x5a827999U) 
					  + ((((vlTOPp->v__DOT__tmp_162_reg_8158 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_15_10_reg_8163)) 
					      + vlTOPp->v__DOT__C_1_8_reg_8114) 
					     + (vlTOPp->v__DOT__W_11_reg_7956 
						+ (
						   (vlTOPp->v__DOT__C_1_9_reg_8146 
						    & (~ vlTOPp->v__DOT__temp_9_reg_8120)) 
						   | (vlTOPp->v__DOT__C_1_s_fu_1298_p3 
						      & vlTOPp->v__DOT__temp_9_reg_8120)))));
    vlTOPp->v__DOT__temp_20_fu_4009_p2 = ((IData)(0x8f1bbcdcU) 
					  + ((((vlTOPp->v__DOT__tmp_269_reg_9276 
						<< 5U) 
					       | (IData)(vlTOPp->v__DOT__tmp_12_reg_9281)) 
					      + vlTOPp->v__DOT__W_40_reg_8842) 
					     + (vlTOPp->v__DOT__C_2_16_reg_9233 
						+ (
						   ((vlTOPp->v__DOT__C_2_17_reg_9264 
						     | vlTOPp->v__DOT__C_2_18_fu_3960_p3) 
						    & vlTOPp->v__DOT__temp_1_17_reg_9259) 
						   | (vlTOPp->v__DOT__C_2_17_reg_9264 
						      & vlTOPp->v__DOT__C_2_18_fu_3960_p3)))));
    vlTOPp->v__DOT__temp_2_11_fu_5331_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_305_reg_9800 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_11_reg_9805)) 
						+ vlTOPp->v__DOT__W_52_reg_9712) 
					       + (vlTOPp->v__DOT__C_3_9_reg_9675 
						  + 
						  (((vlTOPp->v__DOT__C_3_s_reg_9788 
						     | vlTOPp->v__DOT__C_3_10_fu_5282_p3) 
						    & vlTOPp->v__DOT__temp_2_s_reg_9682) 
						   | (vlTOPp->v__DOT__C_3_s_reg_9788 
						      & vlTOPp->v__DOT__C_3_10_fu_5282_p3)))));
    vlTOPp->v__DOT__temp_3_4_fu_6370_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_64_reg_9862 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_3_3_fu_6311_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_3_3_fu_6311_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_4_1_reg_10243 
						 + 
						 ((vlTOPp->v__DOT__temp_3_2_reg_10248 
						   ^ vlTOPp->v__DOT__C_4_2_reg_10253) 
						  ^ vlTOPp->v__DOT__C_4_3_fu_6316_p3))));
    vlTOPp->v__DOT__W_52_fu_4975_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_44_reg_8995_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_36_reg_8808_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp72_fu_4967_p2);
    vlTOPp->v__DOT__W_24_fu_2428_p2 = ((vlTOPp->v__DOT__W_16_reg_8306 
					^ vlTOPp->v__DOT__W_21_reg_8506) 
				       ^ vlTOPp->v__DOT__tmp16_fu_2420_p2);
    vlTOPp->v__DOT__W_31_fu_2747_p2 = ((vlTOPp->v__DOT__W_17_reg_8358 
					^ vlTOPp->v__DOT__W_23_reg_8569) 
				       ^ vlTOPp->v__DOT__tmp30_fu_2739_p2);
    vlTOPp->v__DOT__temp_7_fu_1009_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_150_reg_7994 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_7_reg_7999)) 
					     + vlTOPp->v__DOT__C_1_4_reg_7924) 
					    + (vlTOPp->v__DOT__W_7_reg_7841 
					       + ((vlTOPp->v__DOT__C_1_5_reg_7982 
						   & (~ vlTOPp->v__DOT__temp_5_reg_7930)) 
						  | (vlTOPp->v__DOT__C_1_6_fu_960_p3 
						     & vlTOPp->v__DOT__temp_5_reg_7930)))));
    vlTOPp->v__DOT__temp_3_14_fu_7234_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_389_reg_10653 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_14_reg_10658)) 
						+ (
						   (vlTOPp->v__DOT__temp_3_12_reg_10607 
						    ^ vlTOPp->v__DOT__C_4_12_reg_10642) 
						   ^ vlTOPp->v__DOT__C_4_13_fu_7196_p3)) 
					       + (vlTOPp->v__DOT__W_75_reg_10365 
						  + vlTOPp->v__DOT__C_4_11_reg_10601)));
    vlTOPp->v__DOT__W_48_fu_4652_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_40_reg_8842_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_32_reg_8776_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp64_fu_4644_p2);
    vlTOPp->v__DOT__temp_3_fu_1264_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_159_reg_8126 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_s_reg_8131)) 
					     + vlTOPp->v__DOT__C_1_7_reg_8082) 
					    + (vlTOPp->v__DOT__W_10_reg_7906 
					       + ((vlTOPp->v__DOT__C_1_8_reg_8114 
						   & (~ vlTOPp->v__DOT__temp_8_reg_8088)) 
						  | (vlTOPp->v__DOT__C_1_9_fu_1215_p3 
						     & vlTOPp->v__DOT__temp_8_reg_8088)))));
    vlTOPp->v__DOT__temp_1_2_fu_2349_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_22_reg_8514 
					       + ((vlTOPp->v__DOT__tmp_197_reg_8539 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_28_2_reg_8544))) 
					      + (vlTOPp->v__DOT__C_1_18_reg_8480 
						 + 
						 ((vlTOPp->v__DOT__temp_19_reg_8523 
						   ^ vlTOPp->v__DOT__C_2_reg_8528) 
						  ^ vlTOPp->v__DOT__C_2_1_fu_2311_p3))));
    vlTOPp->v__DOT__temp_3_2_fu_6156_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_62_reg_9848 
					       + ((vlTOPp->v__DOT__tmp_337_reg_10213 
						   << 5U) 
						  | (IData)(vlTOPp->v__DOT__tmp_58_2_reg_10218))) 
					      + (vlTOPp->v__DOT__C_3_18_reg_10171 
						 + 
						 ((vlTOPp->v__DOT__temp_21_reg_10197 
						   ^ vlTOPp->v__DOT__C_4_reg_10202) 
						  ^ vlTOPp->v__DOT__C_4_1_fu_6118_p3))));
    // ALWAYS at sha_transform.v:2966
    vlTOPp->y_d0 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)
		     ? ((8U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			 ? (vlTOPp->v__DOT__tmp408_reg_10780 
			    + (vlTOPp->v__DOT__tmp405_reg_10775 
			       + vlTOPp->v__DOT__W_79_reg_10555))
			 : ((4U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
			     ? vlTOPp->v__DOT__tmp_24_reg_10770
			     : ((2U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				 ? (vlTOPp->v__DOT__ap_reg_ppstg_D_reg_7605_pp0_it5 
				    + vlTOPp->v__DOT__C_4_17_fu_7420_p3)
				 : ((1U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				     ? (vlTOPp->v__DOT__ap_reg_ppstg_E_reg_7634_pp0_it5 
					+ vlTOPp->v__DOT__C_4_16_fu_7331_p3)
				     : 0U)))) : 0U);
    vlTOPp->v__DOT__temp_1_18_fu_3912_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_39_reg_8833 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_1_17_fu_3853_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_1_17_fu_3853_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_2_15_reg_9223 
						  + 
						  ((vlTOPp->v__DOT__temp_1_16_reg_9228 
						    ^ vlTOPp->v__DOT__C_2_16_reg_9233) 
						   ^ vlTOPp->v__DOT__C_2_17_fu_3858_p3))));
    vlTOPp->v__DOT__temp_2_6_fu_4517_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_287_reg_9478 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_6_reg_9483)) 
					       + vlTOPp->v__DOT__W_46_fu_4462_p2) 
					      + (vlTOPp->v__DOT__C_3_3_reg_9434 
						 + 
						 (((vlTOPp->v__DOT__C_3_4_reg_9466 
						    | vlTOPp->v__DOT__C_3_5_fu_4467_p3) 
						   & vlTOPp->v__DOT__temp_2_4_reg_9441) 
						  | (vlTOPp->v__DOT__C_3_4_reg_9466 
						     & vlTOPp->v__DOT__C_3_5_fu_4467_p3)))));
    vlTOPp->v__DOT__W_30_fu_2733_p2 = ((vlTOPp->v__DOT__W_16_reg_8306 
					^ vlTOPp->v__DOT__W_22_reg_8514) 
				       ^ vlTOPp->v__DOT__tmp28_fu_2725_p2);
    vlTOPp->v__DOT__W_29_fu_2719_p2 = ((vlTOPp->v__DOT__W_21_reg_8506 
					^ vlTOPp->v__DOT__W_26_reg_8690) 
				       ^ vlTOPp->v__DOT__tmp26_fu_2711_p2);
    vlTOPp->v__DOT__W_51_fu_4961_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_35_reg_8800_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp70_fu_4953_p2);
    vlTOPp->v__DOT__temp_6_fu_926_p2 = ((IData)(0x5a827999U) 
					+ ((((vlTOPp->v__DOT__tmp_147_reg_7936 
					      << 5U) 
					     | (IData)(vlTOPp->v__DOT__tmp_15_6_reg_7941)) 
					    + vlTOPp->v__DOT__C_1_3_reg_7866) 
					   + (vlTOPp->v__DOT__W_6_reg_7792 
					      + ((vlTOPp->v__DOT__C_1_4_reg_7924 
						  & (~ vlTOPp->v__DOT__temp_4_reg_7872)) 
						 | (vlTOPp->v__DOT__C_1_5_fu_877_p3 
						    & vlTOPp->v__DOT__temp_4_reg_7872)))));
    vlTOPp->v__DOT__temp_1_13_fu_3560_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_34_reg_8792 
						+ (
						   (vlTOPp->v__DOT__tmp_245_reg_9111 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_28_13_reg_9116))) 
					       + (vlTOPp->v__DOT__C_2_10_reg_9069 
						  + 
						  ((vlTOPp->v__DOT__temp_1_11_reg_9095 
						    ^ vlTOPp->v__DOT__C_2_11_reg_9100) 
						   ^ vlTOPp->v__DOT__C_2_12_fu_3522_p3))));
    vlTOPp->v__DOT__temp_2_17_fu_5856_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_323_reg_10103 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_17_reg_10108)) 
						+ vlTOPp->v__DOT__W_58_reg_9820) 
					       + (vlTOPp->v__DOT__C_3_14_reg_10059 
						  + 
						  (((vlTOPp->v__DOT__C_3_15_reg_10091 
						     | vlTOPp->v__DOT__C_3_16_fu_5807_p3) 
						    & vlTOPp->v__DOT__temp_2_15_reg_10066) 
						   | (vlTOPp->v__DOT__C_3_15_reg_10091 
						      & vlTOPp->v__DOT__C_3_16_fu_5807_p3)))));
    vlTOPp->v__DOT__temp_3_13_fu_7162_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_385_reg_10612 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_13_reg_10617)) 
						+ (
						   (vlTOPp->v__DOT__temp_3_11_reg_10596 
						    ^ vlTOPp->v__DOT__C_4_11_reg_10601) 
						   ^ vlTOPp->v__DOT__C_4_12_fu_7124_p3)) 
					       + (vlTOPp->v__DOT__W_74_reg_10302 
						  + vlTOPp->v__DOT__C_4_10_reg_10570)));
    vlTOPp->v__DOT__temp_17_fu_1974_p2 = ((IData)(0x5a827999U) 
					  + ((vlTOPp->v__DOT__W_18_fu_1879_p2 
					      + ((0xffffffe0U 
						  & (vlTOPp->v__DOT__temp_16_fu_1903_p2 
						     << 5U)) 
						 | (0x1fU 
						    & (vlTOPp->v__DOT__temp_16_fu_1903_p2 
						       >> 0x1bU)))) 
					     + (((vlTOPp->v__DOT__C_1_15_reg_8373 
						  & (~ vlTOPp->v__DOT__temp_15_reg_8367)) 
						 | (vlTOPp->v__DOT__C_1_16_fu_1908_p3 
						    & vlTOPp->v__DOT__temp_15_reg_8367)) 
						+ vlTOPp->v__DOT__C_1_14_reg_8327)));
    vlTOPp->v__DOT__temp_2_7_fu_4610_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_290_reg_9518 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_7_reg_9523)) 
					       + vlTOPp->v__DOT__W_47_fu_4555_p2) 
					      + (vlTOPp->v__DOT__C_3_4_reg_9466 
						 + 
						 (((vlTOPp->v__DOT__C_3_5_reg_9506 
						    | vlTOPp->v__DOT__C_3_6_fu_4560_p3) 
						   & vlTOPp->v__DOT__temp_2_5_reg_9473) 
						  | (vlTOPp->v__DOT__C_3_5_reg_9506 
						     & vlTOPp->v__DOT__C_3_6_fu_4560_p3)))));
    vlTOPp->v__DOT__temp_1_15_fu_3693_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_36_reg_8808 
						+ (
						   (0xffffffe0U 
						    & (vlTOPp->v__DOT__temp_1_14_fu_3634_p2 
						       << 5U)) 
						   | (0x1fU 
						      & (vlTOPp->v__DOT__temp_1_14_fu_3634_p2 
							 >> 0x1bU)))) 
					       + (vlTOPp->v__DOT__C_2_12_reg_9141 
						  + 
						  ((vlTOPp->v__DOT__temp_1_13_reg_9146 
						    ^ vlTOPp->v__DOT__C_2_13_reg_9151) 
						   ^ vlTOPp->v__DOT__C_2_14_fu_3639_p3))));
    vlTOPp->v__DOT__temp_9_fu_1181_p2 = ((IData)(0x5a827999U) 
					 + ((((vlTOPp->v__DOT__tmp_156_reg_8094 
					       << 5U) 
					      | (IData)(vlTOPp->v__DOT__tmp_15_9_reg_8099)) 
					     + vlTOPp->v__DOT__C_1_6_reg_8037) 
					    + (vlTOPp->v__DOT__W_9_reg_7898 
					       + ((vlTOPp->v__DOT__C_1_7_reg_8082 
						   & (~ vlTOPp->v__DOT__temp_7_reg_8043)) 
						  | (vlTOPp->v__DOT__C_1_8_fu_1132_p3 
						     & vlTOPp->v__DOT__temp_7_reg_8043)))));
    vlTOPp->v__DOT__temp_1_16_fu_3779_p2 = ((IData)(0x6ed9eba1U) 
					    + ((vlTOPp->v__DOT__W_37_reg_8816 
						+ (
						   (vlTOPp->v__DOT__tmp_257_reg_9193 
						    << 5U) 
						   | (IData)(vlTOPp->v__DOT__tmp_28_16_reg_9198))) 
					       + (vlTOPp->v__DOT__C_2_13_reg_9151 
						  + 
						  ((vlTOPp->v__DOT__temp_1_14_reg_9177 
						    ^ vlTOPp->v__DOT__C_2_14_reg_9182) 
						   ^ vlTOPp->v__DOT__C_2_15_fu_3741_p3))));
    vlTOPp->v__DOT__W_26_fu_2568_p2 = ((vlTOPp->v__DOT__W_18_reg_8399 
					^ vlTOPp->v__DOT__W_23_reg_8569) 
				       ^ vlTOPp->v__DOT__tmp20_fu_2560_p2);
    vlTOPp->v__DOT__temp_3_1_fu_6070_p2 = ((IData)(0xca62c1d6U) 
					   + ((vlTOPp->v__DOT__W_61_reg_9841 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_21_fu_6011_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_21_fu_6011_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_3_17_reg_10134 
						 + 
						 ((vlTOPp->v__DOT__temp_2_18_reg_10166 
						   ^ vlTOPp->v__DOT__C_3_18_reg_10171) 
						  ^ vlTOPp->v__DOT__C_4_fu_6016_p3))));
    vlTOPp->v__DOT__temp_3_16_fu_7390_p2 = ((IData)(0xca62c1d6U) 
					    + ((((vlTOPp->v__DOT__tmp_397_reg_10714 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_58_16_reg_10719)) 
						+ (vlTOPp->v__DOT__tmp396_reg_10724 
						   ^ vlTOPp->v__DOT__C_4_15_fu_7357_p3)) 
					       + (vlTOPp->v__DOT__W_77_reg_10463 
						  + vlTOPp->v__DOT__C_4_13_reg_10673)));
    vlTOPp->v__DOT__temp_1_1_fu_2249_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_21_fu_2165_p2 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_19_fu_2189_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_19_fu_2189_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_1_17_reg_8426 
						 + 
						 ((vlTOPp->v__DOT__temp_18_reg_8475 
						   ^ vlTOPp->v__DOT__C_1_18_reg_8480) 
						  ^ vlTOPp->v__DOT__C_2_fu_2194_p3))));
    vlTOPp->v__DOT__W_50_fu_4858_p2 = ((vlTOPp->v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_34_reg_8792_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp68_fu_4850_p2);
    vlTOPp->v__DOT__tmp90_fu_5191_p2 = (vlTOPp->v__DOT__W_58_fu_5168_p2 
					^ vlTOPp->v__DOT__W_47_reg_9538);
    vlTOPp->v__DOT__tmp94_fu_5211_p2 = (vlTOPp->v__DOT__W_60_fu_5186_p2 
					^ vlTOPp->v__DOT__W_49_reg_9621);
    vlTOPp->v__DOT__tmp92_fu_5201_p2 = (vlTOPp->v__DOT__W_59_fu_5177_p2 
					^ vlTOPp->v__DOT__W_48_reg_9578);
    vlTOPp->v__DOT__tmp80_fu_5025_p2 = (vlTOPp->v__DOT__W_53_fu_4989_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3);
    vlTOPp->v__DOT__tmp355_fu_6528_p2 = ((IData)(0xca62c1d6U) 
					 + (vlTOPp->v__DOT__W_66_reg_9878 
					    + ((0xffffffe0U 
						& (vlTOPp->v__DOT__temp_3_5_fu_6478_p2 
						   << 5U)) 
					       | (0x1fU 
						  & (vlTOPp->v__DOT__temp_3_5_fu_6478_p2 
						     >> 0x1bU)))));
    vlTOPp->v__DOT__temp_2_9_fu_4816_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_296_reg_9601 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_9_reg_9606)) 
					       + vlTOPp->v__DOT__W_49_fu_4755_p2) 
					      + (vlTOPp->v__DOT__C_3_6_reg_9546 
						 + 
						 (((vlTOPp->v__DOT__C_3_7_reg_9589 
						    | vlTOPp->v__DOT__C_3_8_fu_4766_p3) 
						   & vlTOPp->v__DOT__temp_2_7_reg_9553) 
						  | (vlTOPp->v__DOT__C_3_7_reg_9589 
						     & vlTOPp->v__DOT__C_3_8_fu_4766_p3)))));
    vlTOPp->v__DOT__tmp78_fu_5010_p2 = (vlTOPp->v__DOT__W_52_fu_4975_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3);
    vlTOPp->v__DOT__temp_1_4_fu_2512_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_24_fu_2428_p2 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_1_3_fu_2452_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_1_3_fu_2452_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_2_1_reg_8577 
						 + 
						 ((vlTOPp->v__DOT__temp_1_2_reg_8582 
						   ^ vlTOPp->v__DOT__C_2_2_reg_8587) 
						  ^ vlTOPp->v__DOT__C_2_3_fu_2457_p3))));
    vlTOPp->v__DOT__tmp36_fu_2783_p2 = (vlTOPp->v__DOT__W_31_fu_2747_p2 
					^ vlTOPp->v__DOT__W_20_reg_8467);
    vlTOPp->v__DOT__temp_2_8_fu_4713_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_293_reg_9558 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_8_reg_9563)) 
					       + vlTOPp->v__DOT__W_48_fu_4652_p2) 
					      + (vlTOPp->v__DOT__C_3_5_reg_9506 
						 + 
						 (((vlTOPp->v__DOT__C_3_6_reg_9546 
						    | vlTOPp->v__DOT__C_3_7_fu_4663_p3) 
						   & vlTOPp->v__DOT__temp_2_6_reg_9513) 
						  | (vlTOPp->v__DOT__C_3_6_reg_9546 
						     & vlTOPp->v__DOT__C_3_7_fu_4663_p3)))));
    vlTOPp->v__DOT__tmp34_fu_2768_p2 = (vlTOPp->v__DOT__W_30_fu_2733_p2 
					^ vlTOPp->v__DOT__W_19_reg_8407);
    vlTOPp->v__DOT__tmp32_fu_2753_p2 = (vlTOPp->v__DOT__W_29_fu_2719_p2 
					^ vlTOPp->v__DOT__W_18_reg_8399);
    vlTOPp->v__DOT__temp_2_10_fu_5130_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_302_reg_9687 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_10_reg_9692)) 
						+ vlTOPp->v__DOT__W_51_fu_4961_p2) 
					       + (vlTOPp->v__DOT__C_3_8_reg_9632 
						  + 
						  (((vlTOPp->v__DOT__C_3_9_reg_9675 
						     | vlTOPp->v__DOT__C_3_s_fu_5080_p3) 
						    & vlTOPp->v__DOT__temp_2_9_reg_9639) 
						   | (vlTOPp->v__DOT__C_3_9_reg_9675 
						      & vlTOPp->v__DOT__C_3_s_fu_5080_p3)))));
    vlTOPp->v__DOT__tmp76_fu_4995_p2 = (vlTOPp->v__DOT__W_51_fu_4961_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_40_reg_8842_pp0_it3);
    vlTOPp->v__DOT__tmp_24_fu_7459_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it5 
					 + ((0xc0000000U 
					     & (vlTOPp->v__DOT__temp_3_16_fu_7390_p2 
						<< 0x1eU)) 
					    | (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_16_fu_7390_p2 
						  >> 2U))));
    vlTOPp->v__DOT__temp_2_s_fu_4919_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_299_reg_9644 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_s_reg_9649)) 
					       + vlTOPp->v__DOT__W_50_fu_4858_p2) 
					      + (vlTOPp->v__DOT__C_3_7_reg_9589 
						 + 
						 (((vlTOPp->v__DOT__C_3_8_reg_9632 
						    | vlTOPp->v__DOT__C_3_9_fu_4869_p3) 
						   & vlTOPp->v__DOT__temp_2_8_reg_9596) 
						  | (vlTOPp->v__DOT__C_3_8_reg_9632 
						     & vlTOPp->v__DOT__C_3_9_fu_4869_p3)))));
}

void Vsha_transform::_settle__TOP__7(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_settle__TOP__7\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at sha_transform.v:2742
    vlTOPp->ap_ready = (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 >> 0xaU) & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0));
    // ALWAYS at sha_transform.v:2854
    vlTOPp->buff_address0 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)
			      ? ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? 0x14U : ((0x200U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0x12U
					      : ((0x100U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0x10U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0xeU
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0xcU
						    : 
						   ((0x20U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0xaU
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 8U
						      : 
						     ((8U 
						       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 6U
						       : 
						      ((4U 
							& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						        ? 0U
						        : 
						       ((2U 
							 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
							 ? 5U
							 : 
							((1U 
							  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
							  ? 1U
							  : 0U)))))))))))
			      : 0U);
    // ALWAYS at sha_transform.v:2886
    vlTOPp->buff_address1 = ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)
			      ? ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? 0x13U : ((0x100U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0x11U
					      : ((0x80U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0xfU
						  : 
						 ((0x40U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0xdU
						   : 
						  ((0x20U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0xbU
						    : 
						   ((0x10U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 9U
						     : 
						    ((8U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 7U
						      : 
						     ((4U 
						       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 4U
						       : 
						      ((2U 
							& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						        ? 3U
						        : 
						       ((1U 
							 & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
							 ? 2U
							 : 0U))))))))))
			      : 0U);
    // ALWAYS at sha_transform.v:2916
    vlTOPp->buff_ce0 = (((((((((((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 0xaU) & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
				 | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
				    & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				       >> 1U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						   & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						      >> 2U))) 
			       | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
				  & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 3U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						 & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						    >> 4U))) 
			     | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
				& ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 5U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
					       & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						  >> 6U))) 
			   | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			      & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 7U))) | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
					     & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 8U))) 
			 | ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			    & ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       >> 9U))) | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					    & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
					   & (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						 & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2924
    vlTOPp->buff_ce1 = (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			 & ((((((((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				    >> 1U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					      >> 2U)) 
				  | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 3U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 4U)) 
				| ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				   >> 5U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					      >> 6U)) 
			      | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				 >> 7U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					    >> 8U)) 
			    | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			       >> 9U))) | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
					    & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
					   & (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
						 & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2950
    vlTOPp->y_ce0 = (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		      & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			   >> 1U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 2U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 3U))) 
		     | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)) 
			& (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			      & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2984
    vlTOPp->y_we0 = (((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6) 
		      & ((((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			   >> 1U) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
				     >> 2U)) | ((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
						>> 3U))) 
		     | (((IData)(vlTOPp->v__DOT__ap_CS_fsm) 
			 & (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6)) 
			& (~ ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
			      & (~ (IData)(vlTOPp->ap_start))))));
    // ALWAYS at sha_transform.v:2734
    vlTOPp->ap_idle = (1U & (((((((((~ (IData)(vlTOPp->ap_start)) 
				    & (IData)(vlTOPp->v__DOT__ap_CS_fsm)) 
				   & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0))) 
				  & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1))) 
				 & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2))) 
				& (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3))) 
			       & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4))) 
			      & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5))) 
			     & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6))));
    // ALWAYS at sha_transform.v:2999
    vlTOPp->v__DOT__ap_NS_fsm = ((0x400U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				  ? ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? 0U : ((0x100U 
					       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((0x80U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((0x20U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((8U 
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
							  : 1U))))))))))
				  : ((0x200U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
				      ? ((0x100U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? 0U : ((0x80U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((0x20U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 0U
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 0U
						      : 
						     ((8U 
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
							  : 0x400U)))))))))
				      : ((0x100U & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					  ? ((0x80U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? 0U : 
					     ((0x40U 
					       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					       ? 0U
					       : ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						        : 0x200U))))))))
					  : ((0x80U 
					      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
					      ? ((0x40U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 0U
						  : 
						 ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						        : 0x100U)))))))
					      : ((0x40U 
						  & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						  ? 
						 ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 0U
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						        : 0x80U))))))
						  : 
						 ((0x20U 
						   & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						   ? 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 0U
						    : 
						   ((8U 
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
						   : 
						  ((0x10U 
						    & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						    ? 
						   ((8U 
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
						        : 0x20U))))
						    : 
						   ((8U 
						     & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						     ? 
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
						       ((1U 
							 & (((((((~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0)) 
								 & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1))) 
								& (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2))) 
							       & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3))) 
							      & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4))) 
							     & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5))) 
							    & (~ (IData)(vlTOPp->ap_start))))
							 ? 1U
							 : 0x10U))))
						     : 
						    ((4U 
						      & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						      ? 
						     ((2U 
						       & (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						       ? 0U
						       : 
						      ((1U 
							& (IData)(vlTOPp->v__DOT__ap_CS_fsm))
						        ? 0U
						        : 8U))
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
						       ((1U 
							 & ((~ 
							     ((IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it0) 
							      & (~ (IData)(vlTOPp->ap_start)))) 
							    & (~ 
							       (((((((~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it1)) 
								     & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it2))) 
								    & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it3))) 
								   & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it4))) 
								  & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it5))) 
								 & (~ (IData)(vlTOPp->v__DOT__ap_reg_ppiten_pp0_it6))) 
								& (~ (IData)(vlTOPp->ap_start))))))
							 ? 2U
							 : 1U)
						        : 0U)))))))))));
    vlTOPp->v__DOT__tmp90_fu_5191_p2 = (vlTOPp->v__DOT__W_58_fu_5168_p2 
					^ vlTOPp->v__DOT__W_47_reg_9538);
    vlTOPp->v__DOT__tmp94_fu_5211_p2 = (vlTOPp->v__DOT__W_60_fu_5186_p2 
					^ vlTOPp->v__DOT__W_49_reg_9621);
    vlTOPp->v__DOT__tmp92_fu_5201_p2 = (vlTOPp->v__DOT__W_59_fu_5177_p2 
					^ vlTOPp->v__DOT__W_48_reg_9578);
    vlTOPp->v__DOT__tmp80_fu_5025_p2 = (vlTOPp->v__DOT__W_53_fu_4989_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_42_reg_8941_pp0_it3);
    vlTOPp->v__DOT__tmp355_fu_6528_p2 = ((IData)(0xca62c1d6U) 
					 + (vlTOPp->v__DOT__W_66_reg_9878 
					    + ((0xffffffe0U 
						& (vlTOPp->v__DOT__temp_3_5_fu_6478_p2 
						   << 5U)) 
					       | (0x1fU 
						  & (vlTOPp->v__DOT__temp_3_5_fu_6478_p2 
						     >> 0x1bU)))));
    vlTOPp->v__DOT__temp_2_9_fu_4816_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_296_reg_9601 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_9_reg_9606)) 
					       + vlTOPp->v__DOT__W_49_fu_4755_p2) 
					      + (vlTOPp->v__DOT__C_3_6_reg_9546 
						 + 
						 (((vlTOPp->v__DOT__C_3_7_reg_9589 
						    | vlTOPp->v__DOT__C_3_8_fu_4766_p3) 
						   & vlTOPp->v__DOT__temp_2_7_reg_9553) 
						  | (vlTOPp->v__DOT__C_3_7_reg_9589 
						     & vlTOPp->v__DOT__C_3_8_fu_4766_p3)))));
    vlTOPp->v__DOT__tmp78_fu_5010_p2 = (vlTOPp->v__DOT__W_52_fu_4975_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_41_reg_8932_pp0_it3);
    vlTOPp->v__DOT__temp_1_4_fu_2512_p2 = ((IData)(0x6ed9eba1U) 
					   + ((vlTOPp->v__DOT__W_24_fu_2428_p2 
					       + ((0xffffffe0U 
						   & (vlTOPp->v__DOT__temp_1_3_fu_2452_p2 
						      << 5U)) 
						  | (0x1fU 
						     & (vlTOPp->v__DOT__temp_1_3_fu_2452_p2 
							>> 0x1bU)))) 
					      + (vlTOPp->v__DOT__C_2_1_reg_8577 
						 + 
						 ((vlTOPp->v__DOT__temp_1_2_reg_8582 
						   ^ vlTOPp->v__DOT__C_2_2_reg_8587) 
						  ^ vlTOPp->v__DOT__C_2_3_fu_2457_p3))));
    vlTOPp->v__DOT__tmp36_fu_2783_p2 = (vlTOPp->v__DOT__W_31_fu_2747_p2 
					^ vlTOPp->v__DOT__W_20_reg_8467);
    vlTOPp->v__DOT__temp_2_8_fu_4713_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_293_reg_9558 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_8_reg_9563)) 
					       + vlTOPp->v__DOT__W_48_fu_4652_p2) 
					      + (vlTOPp->v__DOT__C_3_5_reg_9506 
						 + 
						 (((vlTOPp->v__DOT__C_3_6_reg_9546 
						    | vlTOPp->v__DOT__C_3_7_fu_4663_p3) 
						   & vlTOPp->v__DOT__temp_2_6_reg_9513) 
						  | (vlTOPp->v__DOT__C_3_6_reg_9546 
						     & vlTOPp->v__DOT__C_3_7_fu_4663_p3)))));
    vlTOPp->v__DOT__tmp34_fu_2768_p2 = (vlTOPp->v__DOT__W_30_fu_2733_p2 
					^ vlTOPp->v__DOT__W_19_reg_8407);
    vlTOPp->v__DOT__tmp32_fu_2753_p2 = (vlTOPp->v__DOT__W_29_fu_2719_p2 
					^ vlTOPp->v__DOT__W_18_reg_8399);
    vlTOPp->v__DOT__temp_2_10_fu_5130_p2 = ((IData)(0x8f1bbcdcU) 
					    + ((((vlTOPp->v__DOT__tmp_302_reg_9687 
						  << 5U) 
						 | (IData)(vlTOPp->v__DOT__tmp_39_10_reg_9692)) 
						+ vlTOPp->v__DOT__W_51_fu_4961_p2) 
					       + (vlTOPp->v__DOT__C_3_8_reg_9632 
						  + 
						  (((vlTOPp->v__DOT__C_3_9_reg_9675 
						     | vlTOPp->v__DOT__C_3_s_fu_5080_p3) 
						    & vlTOPp->v__DOT__temp_2_9_reg_9639) 
						   | (vlTOPp->v__DOT__C_3_9_reg_9675 
						      & vlTOPp->v__DOT__C_3_s_fu_5080_p3)))));
    vlTOPp->v__DOT__tmp76_fu_4995_p2 = (vlTOPp->v__DOT__W_51_fu_4961_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_40_reg_8842_pp0_it3);
    vlTOPp->v__DOT__tmp_24_fu_7459_p2 = (vlTOPp->v__DOT__ap_reg_ppstg_C_reg_7571_pp0_it5 
					 + ((0xc0000000U 
					     & (vlTOPp->v__DOT__temp_3_16_fu_7390_p2 
						<< 0x1eU)) 
					    | (0x3fffffffU 
					       & (vlTOPp->v__DOT__temp_3_16_fu_7390_p2 
						  >> 2U))));
    vlTOPp->v__DOT__temp_2_s_fu_4919_p2 = ((IData)(0x8f1bbcdcU) 
					   + ((((vlTOPp->v__DOT__tmp_299_reg_9644 
						 << 5U) 
						| (IData)(vlTOPp->v__DOT__tmp_39_s_reg_9649)) 
					       + vlTOPp->v__DOT__W_50_fu_4858_p2) 
					      + (vlTOPp->v__DOT__C_3_7_reg_9589 
						 + 
						 (((vlTOPp->v__DOT__C_3_8_reg_9632 
						    | vlTOPp->v__DOT__C_3_9_fu_4869_p3) 
						   & vlTOPp->v__DOT__temp_2_8_reg_9596) 
						  | (vlTOPp->v__DOT__C_3_8_reg_9632 
						     & vlTOPp->v__DOT__C_3_9_fu_4869_p3)))));
    vlTOPp->v__DOT__W_61_fu_5196_p2 = (vlTOPp->v__DOT__tmp91_reg_9763 
				       ^ vlTOPp->v__DOT__tmp90_fu_5191_p2);
    vlTOPp->v__DOT__W_63_fu_5216_p2 = (vlTOPp->v__DOT__tmp95_reg_9773 
				       ^ vlTOPp->v__DOT__tmp94_fu_5211_p2);
    vlTOPp->v__DOT__W_62_fu_5206_p2 = (vlTOPp->v__DOT__tmp93_reg_9768 
				       ^ vlTOPp->v__DOT__tmp92_fu_5201_p2);
    vlTOPp->v__DOT__tmp42_fu_2828_p2 = (vlTOPp->v__DOT__tmp20_reg_8684 
					^ vlTOPp->v__DOT__tmp36_fu_2783_p2);
    vlTOPp->v__DOT__tmp40_fu_2813_p2 = (vlTOPp->v__DOT__tmp18_reg_8625 
					^ vlTOPp->v__DOT__tmp34_fu_2768_p2);
    vlTOPp->v__DOT__tmp38_fu_2798_p2 = (vlTOPp->v__DOT__tmp16_reg_8613 
					^ vlTOPp->v__DOT__tmp32_fu_2753_p2);
    vlTOPp->v__DOT__W_54_fu_5004_p2 = ((vlTOPp->v__DOT__W_46_reg_9498 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_38_reg_8824_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp76_fu_4995_p2);
}

VL_INLINE_OPT void Vsha_transform::_sequent__TOP__8(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_sequent__TOP__8\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__W_61_fu_5196_p2 = (vlTOPp->v__DOT__tmp91_reg_9763 
				       ^ vlTOPp->v__DOT__tmp90_fu_5191_p2);
    vlTOPp->v__DOT__W_63_fu_5216_p2 = (vlTOPp->v__DOT__tmp95_reg_9773 
				       ^ vlTOPp->v__DOT__tmp94_fu_5211_p2);
    vlTOPp->v__DOT__W_62_fu_5206_p2 = (vlTOPp->v__DOT__tmp93_reg_9768 
				       ^ vlTOPp->v__DOT__tmp92_fu_5201_p2);
    vlTOPp->v__DOT__tmp42_fu_2828_p2 = (vlTOPp->v__DOT__tmp20_reg_8684 
					^ vlTOPp->v__DOT__tmp36_fu_2783_p2);
    vlTOPp->v__DOT__tmp40_fu_2813_p2 = (vlTOPp->v__DOT__tmp18_reg_8625 
					^ vlTOPp->v__DOT__tmp34_fu_2768_p2);
    vlTOPp->v__DOT__tmp38_fu_2798_p2 = (vlTOPp->v__DOT__tmp16_reg_8613 
					^ vlTOPp->v__DOT__tmp32_fu_2753_p2);
    vlTOPp->v__DOT__W_54_fu_5004_p2 = ((vlTOPp->v__DOT__W_46_reg_9498 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_38_reg_8824_pp0_it3) 
				       ^ vlTOPp->v__DOT__tmp76_fu_4995_p2);
    vlTOPp->v__DOT__tmp46_fu_2860_p2 = (vlTOPp->v__DOT__tmp24_reg_8709 
					^ vlTOPp->v__DOT__tmp40_fu_2813_p2);
    vlTOPp->v__DOT__tmp44_fu_2844_p2 = (vlTOPp->v__DOT__tmp22_reg_8696 
					^ vlTOPp->v__DOT__tmp38_fu_2798_p2);
    vlTOPp->v__DOT__tmp82_fu_5035_p2 = (vlTOPp->v__DOT__W_54_fu_5004_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3);
}

void Vsha_transform::_settle__TOP__9(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_settle__TOP__9\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__tmp46_fu_2860_p2 = (vlTOPp->v__DOT__tmp24_reg_8709 
					^ vlTOPp->v__DOT__tmp40_fu_2813_p2);
    vlTOPp->v__DOT__tmp44_fu_2844_p2 = (vlTOPp->v__DOT__tmp22_reg_8696 
					^ vlTOPp->v__DOT__tmp38_fu_2798_p2);
    vlTOPp->v__DOT__tmp82_fu_5035_p2 = (vlTOPp->v__DOT__W_54_fu_5004_p2 
					^ vlTOPp->v__DOT__ap_reg_ppstg_W_43_reg_8950_pp0_it3);
}

void Vsha_transform::_eval(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_eval\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if (((IData)(vlTOPp->ap_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ap_clk)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__ap_clk = vlTOPp->ap_clk;
}

void Vsha_transform::_eval_initial(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_eval_initial\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void Vsha_transform::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::final\n"); );
    // Variables
    Vsha_transform__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsha_transform::_eval_settle(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_eval_settle\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

VL_INLINE_OPT QData Vsha_transform::_change_request(Vsha_transform__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsha_transform::_change_request\n"); );
    Vsha_transform* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
