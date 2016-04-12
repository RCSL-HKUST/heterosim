// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfind_H_
#define _Vfind_H_

#include "verilated.h"
class Vfind__Syms;

//----------

VL_MODULE(Vfind) {
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
    VL_OUT8(find_str_address0,3,0);
    VL_OUT8(find_str_ce0,0,0);
    VL_IN8(find_str_q0,7,0);
    VL_OUT8(search_str_address0,5,0);
    VL_OUT8(search_str_ce0,0,0);
    VL_IN8(search_str_q0,7,0);
    VL_OUT(ap_return,31,0);
    VL_IN64(limit,63,0);
    VL_IN64(len,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__find_str_load_1_reg_1259,7,0);
    VL_SIG8(v__DOT__exitcond_i_fu_2799_p2,0,0);
    VL_SIG8(v__DOT__tmp_5_reg_6042,6,0);
    VL_SIG8(v__DOT__tmp_i_2_reg_6047,0,0);
    VL_SIG8(v__DOT__tmp_fu_4359_p2,0,0);
    VL_SIG8(v__DOT__tmp_reg_6051,0,0);
    VL_SIG8(v__DOT__tmp_s_fu_4364_p2,0,0);
    VL_SIG8(v__DOT__tmp_s_reg_6055,0,0);
    VL_SIG8(v__DOT__tmp_3_phi_fu_1204_p4,0,0);
    VL_SIG8(v__DOT__tmp_4_reg_6075,0,0);
    VL_SIG8(v__DOT__sum3_fu_5927_p2,6,0);
    VL_SIG8(v__DOT__sum3_reg_6079,6,0);
    VL_SIG8(v__DOT__mem_index_gep4_reg_6084,7,0);
    VL_SIG8(v__DOT__search_str_addr_1_reg_6090,5,0);
    VL_SIG8(v__DOT__tmp_2_i_reg_6100,0,0);
    VL_SIG8(v__DOT__tmp_3_i_reg_6114,0,0);
    VL_SIG8(v__DOT__tmp_4_i_fu_5980_p2,0,0);
    VL_SIG8(v__DOT__phitmp_fu_5986_p2,0,0);
    VL_SIG8(v__DOT__tmp_3_reg_1200,0,0);
    VL_SIG8(v__DOT__mem_index_phi_reg_1246,7,0);
    VL_SIG16(v__DOT__ap_CS_fsm,11,0);
    VL_SIG16(v__DOT__ap_NS_fsm,11,0);
    //char	__VpadToAlign60[4];
    VL_SIG64(v__DOT__table_0,63,0);
    VL_SIG64(v__DOT__table_1,63,0);
    VL_SIG64(v__DOT__table_2,63,0);
    VL_SIG64(v__DOT__table_3,63,0);
    VL_SIG64(v__DOT__table_4,63,0);
    VL_SIG64(v__DOT__table_5,63,0);
    VL_SIG64(v__DOT__table_6,63,0);
    VL_SIG64(v__DOT__table_7,63,0);
    VL_SIG64(v__DOT__table_8,63,0);
    VL_SIG64(v__DOT__table_9,63,0);
    VL_SIG64(v__DOT__table_10,63,0);
    VL_SIG64(v__DOT__table_11,63,0);
    VL_SIG64(v__DOT__table_12,63,0);
    VL_SIG64(v__DOT__table_13,63,0);
    VL_SIG64(v__DOT__table_14,63,0);
    VL_SIG64(v__DOT__table_15,63,0);
    VL_SIG64(v__DOT__table_16,63,0);
    VL_SIG64(v__DOT__table_17,63,0);
    VL_SIG64(v__DOT__table_18,63,0);
    VL_SIG64(v__DOT__table_19,63,0);
    VL_SIG64(v__DOT__table_20,63,0);
    VL_SIG64(v__DOT__table_21,63,0);
    VL_SIG64(v__DOT__table_22,63,0);
    VL_SIG64(v__DOT__table_23,63,0);
    VL_SIG64(v__DOT__table_24,63,0);
    VL_SIG64(v__DOT__table_25,63,0);
    VL_SIG64(v__DOT__table_26,63,0);
    VL_SIG64(v__DOT__table_27,63,0);
    VL_SIG64(v__DOT__table_28,63,0);
    VL_SIG64(v__DOT__table_29,63,0);
    VL_SIG64(v__DOT__table_30,63,0);
    VL_SIG64(v__DOT__table_31,63,0);
    VL_SIG64(v__DOT__table_32,63,0);
    VL_SIG64(v__DOT__table_33,63,0);
    VL_SIG64(v__DOT__table_34,63,0);
    VL_SIG64(v__DOT__table_35,63,0);
    VL_SIG64(v__DOT__table_36,63,0);
    VL_SIG64(v__DOT__table_37,63,0);
    VL_SIG64(v__DOT__table_38,63,0);
    VL_SIG64(v__DOT__table_39,63,0);
    VL_SIG64(v__DOT__table_40,63,0);
    VL_SIG64(v__DOT__table_41,63,0);
    VL_SIG64(v__DOT__table_42,63,0);
    VL_SIG64(v__DOT__table_43,63,0);
    VL_SIG64(v__DOT__table_44,63,0);
    VL_SIG64(v__DOT__table_45,63,0);
    VL_SIG64(v__DOT__table_46,63,0);
    VL_SIG64(v__DOT__table_47,63,0);
    VL_SIG64(v__DOT__table_48,63,0);
    VL_SIG64(v__DOT__table_49,63,0);
    VL_SIG64(v__DOT__table_50,63,0);
    VL_SIG64(v__DOT__table_51,63,0);
    VL_SIG64(v__DOT__table_52,63,0);
    VL_SIG64(v__DOT__table_53,63,0);
    VL_SIG64(v__DOT__table_54,63,0);
    VL_SIG64(v__DOT__table_55,63,0);
    VL_SIG64(v__DOT__table_56,63,0);
    VL_SIG64(v__DOT__table_57,63,0);
    VL_SIG64(v__DOT__table_58,63,0);
    VL_SIG64(v__DOT__table_59,63,0);
    VL_SIG64(v__DOT__table_60,63,0);
    VL_SIG64(v__DOT__table_61,63,0);
    VL_SIG64(v__DOT__table_62,63,0);
    VL_SIG64(v__DOT__table_63,63,0);
    VL_SIG64(v__DOT__table_64,63,0);
    VL_SIG64(v__DOT__table_65,63,0);
    VL_SIG64(v__DOT__table_66,63,0);
    VL_SIG64(v__DOT__table_67,63,0);
    VL_SIG64(v__DOT__table_68,63,0);
    VL_SIG64(v__DOT__table_69,63,0);
    VL_SIG64(v__DOT__table_70,63,0);
    VL_SIG64(v__DOT__table_71,63,0);
    VL_SIG64(v__DOT__table_72,63,0);
    VL_SIG64(v__DOT__table_73,63,0);
    VL_SIG64(v__DOT__table_74,63,0);
    VL_SIG64(v__DOT__table_75,63,0);
    VL_SIG64(v__DOT__table_76,63,0);
    VL_SIG64(v__DOT__table_77,63,0);
    VL_SIG64(v__DOT__table_78,63,0);
    VL_SIG64(v__DOT__table_79,63,0);
    VL_SIG64(v__DOT__table_80,63,0);
    VL_SIG64(v__DOT__table_81,63,0);
    VL_SIG64(v__DOT__table_82,63,0);
    VL_SIG64(v__DOT__table_83,63,0);
    VL_SIG64(v__DOT__table_84,63,0);
    VL_SIG64(v__DOT__table_85,63,0);
    VL_SIG64(v__DOT__table_86,63,0);
    VL_SIG64(v__DOT__table_87,63,0);
    VL_SIG64(v__DOT__table_88,63,0);
    VL_SIG64(v__DOT__table_89,63,0);
    VL_SIG64(v__DOT__table_90,63,0);
    VL_SIG64(v__DOT__table_91,63,0);
    VL_SIG64(v__DOT__table_92,63,0);
    VL_SIG64(v__DOT__table_93,63,0);
    VL_SIG64(v__DOT__table_94,63,0);
    VL_SIG64(v__DOT__table_95,63,0);
    VL_SIG64(v__DOT__table_96,63,0);
    VL_SIG64(v__DOT__table_97,63,0);
    VL_SIG64(v__DOT__table_98,63,0);
    VL_SIG64(v__DOT__table_99,63,0);
    VL_SIG64(v__DOT__table_r,63,0);
    VL_SIG64(v__DOT__table_100,63,0);
    VL_SIG64(v__DOT__table_101,63,0);
    VL_SIG64(v__DOT__table_102,63,0);
    VL_SIG64(v__DOT__table_103,63,0);
    VL_SIG64(v__DOT__table_104,63,0);
    VL_SIG64(v__DOT__table_105,63,0);
    VL_SIG64(v__DOT__table_106,63,0);
    VL_SIG64(v__DOT__table_107,63,0);
    VL_SIG64(v__DOT__table_108,63,0);
    VL_SIG64(v__DOT__table_109,63,0);
    VL_SIG64(v__DOT__table_110,63,0);
    VL_SIG64(v__DOT__table_111,63,0);
    VL_SIG64(v__DOT__table_112,63,0);
    VL_SIG64(v__DOT__table_113,63,0);
    VL_SIG64(v__DOT__table_114,63,0);
    VL_SIG64(v__DOT__table_115,63,0);
    VL_SIG64(v__DOT__table_116,63,0);
    VL_SIG64(v__DOT__table_117,63,0);
    VL_SIG64(v__DOT__table_118,63,0);
    VL_SIG64(v__DOT__table_119,63,0);
    VL_SIG64(v__DOT__table_120,63,0);
    VL_SIG64(v__DOT__table_121,63,0);
    VL_SIG64(v__DOT__table_122,63,0);
    VL_SIG64(v__DOT__table_123,63,0);
    VL_SIG64(v__DOT__table_124,63,0);
    VL_SIG64(v__DOT__table_125,63,0);
    VL_SIG64(v__DOT__table_126,63,0);
    VL_SIG64(v__DOT__table_127,63,0);
    VL_SIG64(v__DOT__table_128,63,0);
    VL_SIG64(v__DOT__table_129,63,0);
    VL_SIG64(v__DOT__table_130,63,0);
    VL_SIG64(v__DOT__table_131,63,0);
    VL_SIG64(v__DOT__table_132,63,0);
    VL_SIG64(v__DOT__table_133,63,0);
    VL_SIG64(v__DOT__table_134,63,0);
    VL_SIG64(v__DOT__table_135,63,0);
    VL_SIG64(v__DOT__table_136,63,0);
    VL_SIG64(v__DOT__table_137,63,0);
    VL_SIG64(v__DOT__table_138,63,0);
    VL_SIG64(v__DOT__table_139,63,0);
    VL_SIG64(v__DOT__table_140,63,0);
    VL_SIG64(v__DOT__table_141,63,0);
    VL_SIG64(v__DOT__table_142,63,0);
    VL_SIG64(v__DOT__table_143,63,0);
    VL_SIG64(v__DOT__table_144,63,0);
    VL_SIG64(v__DOT__table_145,63,0);
    VL_SIG64(v__DOT__table_146,63,0);
    VL_SIG64(v__DOT__table_147,63,0);
    VL_SIG64(v__DOT__table_148,63,0);
    VL_SIG64(v__DOT__table_149,63,0);
    VL_SIG64(v__DOT__table_150,63,0);
    VL_SIG64(v__DOT__table_151,63,0);
    VL_SIG64(v__DOT__table_152,63,0);
    VL_SIG64(v__DOT__table_153,63,0);
    VL_SIG64(v__DOT__table_154,63,0);
    VL_SIG64(v__DOT__table_155,63,0);
    VL_SIG64(v__DOT__table_156,63,0);
    VL_SIG64(v__DOT__table_157,63,0);
    VL_SIG64(v__DOT__table_158,63,0);
    VL_SIG64(v__DOT__table_159,63,0);
    VL_SIG64(v__DOT__table_160,63,0);
    VL_SIG64(v__DOT__table_161,63,0);
    VL_SIG64(v__DOT__table_162,63,0);
    VL_SIG64(v__DOT__table_163,63,0);
    VL_SIG64(v__DOT__table_164,63,0);
    VL_SIG64(v__DOT__table_165,63,0);
    VL_SIG64(v__DOT__table_166,63,0);
    VL_SIG64(v__DOT__table_167,63,0);
    VL_SIG64(v__DOT__table_168,63,0);
    VL_SIG64(v__DOT__table_169,63,0);
    VL_SIG64(v__DOT__table_170,63,0);
    VL_SIG64(v__DOT__table_171,63,0);
    VL_SIG64(v__DOT__table_172,63,0);
    VL_SIG64(v__DOT__table_173,63,0);
    VL_SIG64(v__DOT__table_174,63,0);
    VL_SIG64(v__DOT__table_175,63,0);
    VL_SIG64(v__DOT__table_176,63,0);
    VL_SIG64(v__DOT__table_177,63,0);
    VL_SIG64(v__DOT__table_178,63,0);
    VL_SIG64(v__DOT__table_179,63,0);
    VL_SIG64(v__DOT__table_180,63,0);
    VL_SIG64(v__DOT__table_181,63,0);
    VL_SIG64(v__DOT__table_182,63,0);
    VL_SIG64(v__DOT__table_183,63,0);
    VL_SIG64(v__DOT__table_184,63,0);
    VL_SIG64(v__DOT__table_185,63,0);
    VL_SIG64(v__DOT__table_186,63,0);
    VL_SIG64(v__DOT__table_187,63,0);
    VL_SIG64(v__DOT__table_188,63,0);
    VL_SIG64(v__DOT__table_189,63,0);
    VL_SIG64(v__DOT__table_190,63,0);
    VL_SIG64(v__DOT__table_191,63,0);
    VL_SIG64(v__DOT__table_192,63,0);
    VL_SIG64(v__DOT__table_193,63,0);
    VL_SIG64(v__DOT__table_194,63,0);
    VL_SIG64(v__DOT__table_195,63,0);
    VL_SIG64(v__DOT__table_196,63,0);
    VL_SIG64(v__DOT__table_197,63,0);
    VL_SIG64(v__DOT__table_198,63,0);
    VL_SIG64(v__DOT__table_199,63,0);
    VL_SIG64(v__DOT__table_200,63,0);
    VL_SIG64(v__DOT__table_201,63,0);
    VL_SIG64(v__DOT__table_202,63,0);
    VL_SIG64(v__DOT__table_203,63,0);
    VL_SIG64(v__DOT__table_204,63,0);
    VL_SIG64(v__DOT__table_205,63,0);
    VL_SIG64(v__DOT__table_206,63,0);
    VL_SIG64(v__DOT__table_207,63,0);
    VL_SIG64(v__DOT__table_208,63,0);
    VL_SIG64(v__DOT__table_209,63,0);
    VL_SIG64(v__DOT__table_210,63,0);
    VL_SIG64(v__DOT__table_211,63,0);
    VL_SIG64(v__DOT__table_212,63,0);
    VL_SIG64(v__DOT__table_213,63,0);
    VL_SIG64(v__DOT__table_214,63,0);
    VL_SIG64(v__DOT__table_215,63,0);
    VL_SIG64(v__DOT__table_216,63,0);
    VL_SIG64(v__DOT__table_217,63,0);
    VL_SIG64(v__DOT__table_218,63,0);
    VL_SIG64(v__DOT__table_219,63,0);
    VL_SIG64(v__DOT__table_220,63,0);
    VL_SIG64(v__DOT__table_221,63,0);
    VL_SIG64(v__DOT__table_222,63,0);
    VL_SIG64(v__DOT__table_223,63,0);
    VL_SIG64(v__DOT__table_224,63,0);
    VL_SIG64(v__DOT__table_225,63,0);
    VL_SIG64(v__DOT__table_226,63,0);
    VL_SIG64(v__DOT__table_227,63,0);
    VL_SIG64(v__DOT__table_228,63,0);
    VL_SIG64(v__DOT__table_229,63,0);
    VL_SIG64(v__DOT__table_230,63,0);
    VL_SIG64(v__DOT__table_231,63,0);
    VL_SIG64(v__DOT__table_232,63,0);
    VL_SIG64(v__DOT__table_233,63,0);
    VL_SIG64(v__DOT__table_234,63,0);
    VL_SIG64(v__DOT__table_235,63,0);
    VL_SIG64(v__DOT__table_236,63,0);
    VL_SIG64(v__DOT__table_237,63,0);
    VL_SIG64(v__DOT__table_238,63,0);
    VL_SIG64(v__DOT__table_239,63,0);
    VL_SIG64(v__DOT__table_240,63,0);
    VL_SIG64(v__DOT__table_241,63,0);
    VL_SIG64(v__DOT__table_242,63,0);
    VL_SIG64(v__DOT__table_243,63,0);
    VL_SIG64(v__DOT__table_244,63,0);
    VL_SIG64(v__DOT__table_245,63,0);
    VL_SIG64(v__DOT__table_246,63,0);
    VL_SIG64(v__DOT__table_247,63,0);
    VL_SIG64(v__DOT__table_248,63,0);
    VL_SIG64(v__DOT__table_249,63,0);
    VL_SIG64(v__DOT__table_250,63,0);
    VL_SIG64(v__DOT__table_251,63,0);
    VL_SIG64(v__DOT__table_252,63,0);
    VL_SIG64(v__DOT__table_253,63,0);
    VL_SIG64(v__DOT__pos_reg_6023,63,0);
    VL_SIG64(v__DOT__i_reg_6032,63,0);
    VL_SIG64(v__DOT__shift_reg_6064,63,0);
    VL_SIG64(v__DOT__pos_1_fu_5911_p2,63,0);
    VL_SIG64(v__DOT__n_assign_reg_6095,63,0);
    VL_SIG64(v__DOT__p_rec_i_reg_6104,63,0);
    VL_SIG64(v__DOT__i_1_i_reg_1129,63,0);
    VL_SIG64(v__DOT__shift_2_i_reg_1187,63,0);
    VL_SIG64(v__DOT__shift_01_i_reg_1142,63,0);
    VL_SIG64(v__DOT__pos_0_i_reg_1154,63,0);
    VL_SIG64(v__DOT__shift_1_i_reg_1164,63,0);
    VL_SIG64(v__DOT__shift_2_i_phi_fu_1192_p4,63,0);
    VL_SIG64(v__DOT__pos_1_i_reg_1175,63,0);
    VL_SIG64(v__DOT__p_i_reg_1211,63,0);
    VL_SIG64(v__DOT__p_02_rec_i_reg_1220,63,0);
    VL_SIG64(v__DOT__pos_2_i_reg_1234,63,0);
    VL_SIG64(v__DOT__tmp_8_i_fu_2824_p2,63,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__ap_clk,0,0);
    //char	__VpadToAlign2245[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign2252[4];
    Vfind__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vfind& operator= (const Vfind&);	///< Copying not allowed
    Vfind(const Vfind&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vfind(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfind();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfind__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfind__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vfind__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(Vfind__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(Vfind__Syms* __restrict vlSymsp);
    static void	_eval(Vfind__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vfind__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vfind__Syms* __restrict vlSymsp);
    static void	_initial__TOP__4(Vfind__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(Vfind__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(Vfind__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vfind__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vfind__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vfind__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
