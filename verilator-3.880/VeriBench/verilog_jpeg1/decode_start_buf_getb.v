// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module decode_start_buf_getb (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ap_ce,
        CurHuffReadBuf_address0,
        CurHuffReadBuf_ce0,
        CurHuffReadBuf_q0,
        tmp_7,
        read_position_i,
        read_position_o,
        read_position_o_ap_vld,
        off_i,
        off_o,
        off_o_ap_vld,
        current_read_byte_i,
        current_read_byte_o,
        current_read_byte_o_ap_vld,
        ap_return
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_pp0_stg0_fsm_0 = 2'b1;
parameter    ap_ST_pp0_stg1_fsm_1 = 2'b10;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv32_7 = 32'b111;
parameter    ap_const_lv32_1F = 32'b11111;
parameter    ap_const_lv32_FFFFFFFF = 32'b11111111111111111111111111111111;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_4 = 32'b100;
parameter    ap_const_lv32_8 = 32'b1000;
parameter    ap_const_lv32_10 = 32'b10000;
parameter    ap_const_lv32_20 = 32'b100000;
parameter    ap_const_lv32_40 = 32'b1000000;
parameter    ap_const_lv32_80 = 32'b10000000;
parameter    ap_const_lv32_100 = 32'b100000000;
parameter    ap_const_lv32_200 = 32'b1000000000;
parameter    ap_const_lv32_400 = 32'b10000000000;
parameter    ap_const_lv32_800 = 32'b100000000000;
parameter    ap_const_lv32_1000 = 32'b1000000000000;
parameter    ap_const_lv32_2000 = 32'b10000000000000;
parameter    ap_const_lv32_4000 = 32'b100000000000000;
parameter    ap_const_lv32_8000 = 32'b1000000000000000;
parameter    ap_const_lv32_10000 = 32'b10000000000000000;
parameter    ap_const_lv32_20000 = 32'b100000000000000000;
parameter    ap_const_lv32_40000 = 32'b1000000000000000000;
parameter    ap_const_lv32_80000 = 32'b10000000000000000000;
parameter    ap_const_lv32_100000 = 32'b100000000000000000000;
parameter    ap_const_lv32_200000 = 32'b1000000000000000000000;
parameter    ap_const_lv32_400000 = 32'b10000000000000000000000;
parameter    ap_const_lv32_800000 = 32'b100000000000000000000000;
parameter    ap_const_lv32_1000000 = 32'b1000000000000000000000000;
parameter    ap_const_lv32_2000000 = 32'b10000000000000000000000000;
parameter    ap_const_lv32_4000000 = 32'b100000000000000000000000000;
parameter    ap_const_lv32_8000000 = 32'b1000000000000000000000000000;
parameter    ap_const_lv32_10000000 = 32'b10000000000000000000000000000;
parameter    ap_const_lv32_20000000 = 32'b100000000000000000000000000000;
parameter    ap_const_lv32_40000000 = 32'b1000000000000000000000000000000;
parameter    ap_const_lv32_80000000 = 32'b10000000000000000000000000000000;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   ap_ce;
output  [12:0] CurHuffReadBuf_address0;
output   CurHuffReadBuf_ce0;
input  [7:0] CurHuffReadBuf_q0;
input  [31:0] tmp_7;
input  [31:0] read_position_i;
output  [31:0] read_position_o;
output   read_position_o_ap_vld;
input  [31:0] off_i;
output  [31:0] off_o;
output   off_o_ap_vld;
input  [31:0] current_read_byte_i;
output  [31:0] current_read_byte_o;
output   current_read_byte_o_ap_vld;
output  [0:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg CurHuffReadBuf_ce0;
reg[31:0] read_position_o;
reg read_position_o_ap_vld;
reg[31:0] off_o;
reg[31:0] current_read_byte_o;
reg current_read_byte_o_ap_vld;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm = 2'b1;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_0;
reg    ap_sig_bdd_20;
reg    ap_reg_ppiten_pp0_it0;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
reg    ap_reg_ppiten_pp0_it2 = 1'b0;
reg    ap_sig_cseq_ST_pp0_stg1_fsm_1;
reg    ap_sig_bdd_44;
wire   [0:0] tmp_fu_125_p3;
reg   [0:0] tmp_reg_249;
reg   [0:0] ap_reg_ppstg_tmp_reg_249_pp0_it1;
wire   [4:0] tmp_23_fu_145_p1;
reg   [4:0] tmp_23_reg_253;
reg   [4:0] ap_reg_ppstg_tmp_23_reg_253_pp0_it1;
reg    ap_reg_ppiten_pp0_it0_preg = 1'b0;
reg   [31:0] ap_reg_ptbuf_tmp_7;
wire    grp_decode_start_pgetc_fu_111_ap_start;
wire    grp_decode_start_pgetc_fu_111_ap_done;
wire    grp_decode_start_pgetc_fu_111_ap_idle;
wire    grp_decode_start_pgetc_fu_111_ap_ready;
reg    grp_decode_start_pgetc_fu_111_ap_ce;
wire   [12:0] grp_decode_start_pgetc_fu_111_CurHuffReadBuf_address0;
wire    grp_decode_start_pgetc_fu_111_CurHuffReadBuf_ce0;
wire   [7:0] grp_decode_start_pgetc_fu_111_CurHuffReadBuf_q0;
wire   [31:0] grp_decode_start_pgetc_fu_111_tmp_7;
wire   [31:0] grp_decode_start_pgetc_fu_111_off_i;
wire   [31:0] grp_decode_start_pgetc_fu_111_off_o;
wire    grp_decode_start_pgetc_fu_111_off_o_ap_vld;
wire   [7:0] grp_decode_start_pgetc_fu_111_ap_return;
reg   [31:0] ap_reg_phiprechg_tmp_s_reg_100pp0_it0;
reg    grp_decode_start_pgetc_fu_111_ap_start_ap_start_reg = 1'b0;
wire   [31:0] tmp_14_fu_133_p2;
wire   [31:0] p_trunc_ext_fu_149_p1;
wire   [31:0] tmp_17_fu_163_p34;
wire   [31:0] tmp_15_fu_232_p2;
reg   [1:0] ap_NS_fsm;
reg    ap_sig_pprstidle_pp0;
reg    ap_sig_bdd_95;


decode_start_pgetc grp_decode_start_pgetc_fu_111(
    .ap_clk( ap_clk ),
    .ap_rst( ap_rst ),
    .ap_start( grp_decode_start_pgetc_fu_111_ap_start ),
    .ap_done( grp_decode_start_pgetc_fu_111_ap_done ),
    .ap_idle( grp_decode_start_pgetc_fu_111_ap_idle ),
    .ap_ready( grp_decode_start_pgetc_fu_111_ap_ready ),
    .ap_ce( grp_decode_start_pgetc_fu_111_ap_ce ),
    .CurHuffReadBuf_address0( grp_decode_start_pgetc_fu_111_CurHuffReadBuf_address0 ),
    .CurHuffReadBuf_ce0( grp_decode_start_pgetc_fu_111_CurHuffReadBuf_ce0 ),
    .CurHuffReadBuf_q0( grp_decode_start_pgetc_fu_111_CurHuffReadBuf_q0 ),
    .tmp_7( grp_decode_start_pgetc_fu_111_tmp_7 ),
    .off_i( grp_decode_start_pgetc_fu_111_off_i ),
    .off_o( grp_decode_start_pgetc_fu_111_off_o ),
    .off_o_ap_vld( grp_decode_start_pgetc_fu_111_off_o_ap_vld ),
    .ap_return( grp_decode_start_pgetc_fu_111_ap_return )
);

decode_start_mux_32to1_sel5_32_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 32 ),
    .din5_WIDTH( 32 ),
    .din6_WIDTH( 32 ),
    .din7_WIDTH( 32 ),
    .din8_WIDTH( 32 ),
    .din9_WIDTH( 32 ),
    .din10_WIDTH( 32 ),
    .din11_WIDTH( 32 ),
    .din12_WIDTH( 32 ),
    .din13_WIDTH( 32 ),
    .din14_WIDTH( 32 ),
    .din15_WIDTH( 32 ),
    .din16_WIDTH( 32 ),
    .din17_WIDTH( 32 ),
    .din18_WIDTH( 32 ),
    .din19_WIDTH( 32 ),
    .din20_WIDTH( 32 ),
    .din21_WIDTH( 32 ),
    .din22_WIDTH( 32 ),
    .din23_WIDTH( 32 ),
    .din24_WIDTH( 32 ),
    .din25_WIDTH( 32 ),
    .din26_WIDTH( 32 ),
    .din27_WIDTH( 32 ),
    .din28_WIDTH( 32 ),
    .din29_WIDTH( 32 ),
    .din30_WIDTH( 32 ),
    .din31_WIDTH( 32 ),
    .din32_WIDTH( 32 ),
    .din33_WIDTH( 5 ),
    .dout_WIDTH( 32 ))
decode_start_mux_32to1_sel5_32_1_U4(
    .din1( ap_const_lv32_1 ),
    .din2( ap_const_lv32_2 ),
    .din3( ap_const_lv32_4 ),
    .din4( ap_const_lv32_8 ),
    .din5( ap_const_lv32_10 ),
    .din6( ap_const_lv32_20 ),
    .din7( ap_const_lv32_40 ),
    .din8( ap_const_lv32_80 ),
    .din9( ap_const_lv32_100 ),
    .din10( ap_const_lv32_200 ),
    .din11( ap_const_lv32_400 ),
    .din12( ap_const_lv32_800 ),
    .din13( ap_const_lv32_1000 ),
    .din14( ap_const_lv32_2000 ),
    .din15( ap_const_lv32_4000 ),
    .din16( ap_const_lv32_8000 ),
    .din17( ap_const_lv32_10000 ),
    .din18( ap_const_lv32_20000 ),
    .din19( ap_const_lv32_40000 ),
    .din20( ap_const_lv32_80000 ),
    .din21( ap_const_lv32_100000 ),
    .din22( ap_const_lv32_200000 ),
    .din23( ap_const_lv32_400000 ),
    .din24( ap_const_lv32_800000 ),
    .din25( ap_const_lv32_1000000 ),
    .din26( ap_const_lv32_2000000 ),
    .din27( ap_const_lv32_4000000 ),
    .din28( ap_const_lv32_8000000 ),
    .din29( ap_const_lv32_10000000 ),
    .din30( ap_const_lv32_20000000 ),
    .din31( ap_const_lv32_40000000 ),
    .din32( ap_const_lv32_80000000 ),
    .din33( ap_reg_ppstg_tmp_23_reg_253_pp0_it1 ),
    .dout( tmp_17_fu_163_p34 )
);



always @ (posedge ap_clk) begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_pp0_stg0_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it0_preg
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0_preg <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & ~(~(ap_const_logic_1 == ap_ce) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0))))) begin
            ap_reg_ppiten_pp0_it0_preg <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce))) begin
            ap_reg_ppiten_pp0_it1 <= ap_reg_ppiten_pp0_it0;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it2
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & ~(~(ap_const_logic_1 == ap_ce) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0))) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce))) begin
            ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_grp_decode_start_pgetc_fu_111_ap_start_ap_start_reg
    if (ap_rst == 1'b1) begin
        grp_decode_start_pgetc_fu_111_ap_start_ap_start_reg <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_ce) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0)) & ~(tmp_fu_125_p3 == ap_const_lv1_0))) begin
            grp_decode_start_pgetc_fu_111_ap_start_ap_start_reg <= ap_const_logic_1;
        end else if ((ap_const_logic_1 == grp_decode_start_pgetc_fu_111_ap_ready)) begin
            grp_decode_start_pgetc_fu_111_ap_start_ap_start_reg <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_sig_bdd_95) begin
        if ((tmp_fu_125_p3 == ap_const_lv1_0)) begin
            ap_reg_phiprechg_tmp_s_reg_100pp0_it0 <= read_position_i;
        end else if (~(tmp_fu_125_p3 == ap_const_lv1_0)) begin
            ap_reg_phiprechg_tmp_s_reg_100pp0_it0 <= ap_const_lv32_7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce))) begin
        ap_reg_ppstg_tmp_23_reg_253_pp0_it1 <= tmp_23_reg_253;
        tmp_23_reg_253 <= tmp_23_fu_145_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_ce) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0)))) begin
        ap_reg_ppstg_tmp_reg_249_pp0_it1 <= tmp_reg_249;
        tmp_reg_249 <= read_position_i[ap_const_lv32_1F];
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_ce) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0)))) begin
        ap_reg_ptbuf_tmp_7 <= tmp_7;
    end
end

always @ (ap_start or ap_sig_cseq_ST_pp0_stg0_fsm_0 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or ap_ce or tmp_reg_249 or ap_reg_ppstg_tmp_reg_249_pp0_it1 or grp_decode_start_pgetc_fu_111_CurHuffReadBuf_ce0) begin
    if ((((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce) & ~(tmp_reg_249 == ap_const_lv1_0)) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_ce) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0)) & ~(tmp_reg_249 == ap_const_lv1_0)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce) & ~(ap_reg_ppstg_tmp_reg_249_pp0_it1 == ap_const_lv1_0)))) begin
        CurHuffReadBuf_ce0 = grp_decode_start_pgetc_fu_111_CurHuffReadBuf_ce0;
    end else begin
        CurHuffReadBuf_ce0 = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_pp0_stg0_fsm_0 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it2 or ap_ce) begin
    if (((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_1 == ap_ce) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0))))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_pp0_stg0_fsm_0 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it2) begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_0 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_0 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_0 == ap_reg_ppiten_pp0_it2))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it0 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or ap_ce) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce))) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_pp0_stg0_fsm_0 or ap_reg_ppiten_pp0_it0_preg) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0)) begin
        ap_reg_ppiten_pp0_it0 = ap_start;
    end else begin
        ap_reg_ppiten_pp0_it0 = ap_reg_ppiten_pp0_it0_preg;
    end
end

always @ (ap_sig_bdd_20) begin
    if (ap_sig_bdd_20) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_44) begin
    if (ap_sig_bdd_44) begin
        ap_sig_cseq_ST_pp0_stg1_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg1_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_start or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_0 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_0 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_0 == ap_start))) begin
        ap_sig_pprstidle_pp0 = ap_const_logic_1;
    end else begin
        ap_sig_pprstidle_pp0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it1 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or ap_ce or current_read_byte_i or ap_reg_ppstg_tmp_reg_249_pp0_it1 or p_trunc_ext_fu_149_p1) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce) & ~(ap_reg_ppstg_tmp_reg_249_pp0_it1 == ap_const_lv1_0))) begin
        current_read_byte_o = p_trunc_ext_fu_149_p1;
    end else begin
        current_read_byte_o = current_read_byte_i;
    end
end

always @ (ap_reg_ppiten_pp0_it1 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or ap_ce or ap_reg_ppstg_tmp_reg_249_pp0_it1) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce) & ~(ap_reg_ppstg_tmp_reg_249_pp0_it1 == ap_const_lv1_0))) begin
        current_read_byte_o_ap_vld = ap_const_logic_1;
    end else begin
        current_read_byte_o_ap_vld = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_pp0_stg0_fsm_0 or ap_reg_ppiten_pp0_it0 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or ap_ce or tmp_reg_249 or ap_reg_ppstg_tmp_reg_249_pp0_it1) begin
    if (((ap_const_logic_1 == ap_ce) & (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (~(tmp_reg_249 == ap_const_lv1_0) | ~(ap_reg_ppstg_tmp_reg_249_pp0_it1 == ap_const_lv1_0))) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0)) & ~(tmp_reg_249 == ap_const_lv1_0))))) begin
        grp_decode_start_pgetc_fu_111_ap_ce = ap_const_logic_1;
    end else begin
        grp_decode_start_pgetc_fu_111_ap_ce = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_0 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or off_i or tmp_reg_249 or ap_reg_ppstg_tmp_reg_249_pp0_it1 or grp_decode_start_pgetc_fu_111_off_o or grp_decode_start_pgetc_fu_111_off_o_ap_vld) begin
    if ((((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & ~(tmp_reg_249 == ap_const_lv1_0) & (ap_const_logic_1 == grp_decode_start_pgetc_fu_111_off_o_ap_vld)) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(tmp_reg_249 == ap_const_lv1_0) & (ap_const_logic_1 == grp_decode_start_pgetc_fu_111_off_o_ap_vld)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & ~(ap_reg_ppstg_tmp_reg_249_pp0_it1 == ap_const_lv1_0) & (ap_const_logic_1 == grp_decode_start_pgetc_fu_111_off_o_ap_vld)))) begin
        off_o = grp_decode_start_pgetc_fu_111_off_o;
    end else begin
        off_o = off_i;
    end
end

always @ (ap_reg_ppiten_pp0_it0 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or ap_ce or read_position_i or tmp_14_fu_133_p2) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce))) begin
        read_position_o = tmp_14_fu_133_p2;
    end else begin
        read_position_o = read_position_i;
    end
end

always @ (ap_reg_ppiten_pp0_it0 or ap_sig_cseq_ST_pp0_stg1_fsm_1 or ap_ce) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg1_fsm_1) & (ap_const_logic_1 == ap_ce))) begin
        read_position_o_ap_vld = ap_const_logic_1;
    end else begin
        read_position_o_ap_vld = ap_const_logic_0;
    end
end
always @ (ap_start or ap_CS_fsm or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it2 or ap_ce or ap_sig_pprstidle_pp0) begin
    case (ap_CS_fsm)
        ap_ST_pp0_stg0_fsm_0 : 
        begin
            if ((~(~(ap_const_logic_1 == ap_ce) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0))) & ~(ap_const_logic_1 == ap_sig_pprstidle_pp0) & ~((ap_const_logic_0 == ap_reg_ppiten_pp0_it1) & (ap_const_logic_0 == ap_reg_ppiten_pp0_it2) & (ap_const_logic_0 == ap_start)))) begin
                ap_NS_fsm = ap_ST_pp0_stg1_fsm_1;
            end else if ((~(~(ap_const_logic_1 == ap_ce) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0))) & (ap_const_logic_1 == ap_sig_pprstidle_pp0))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_0;
            end
        end
        ap_ST_pp0_stg1_fsm_1 : 
        begin
            if ((ap_const_logic_1 == ap_ce)) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg1_fsm_1;
            end
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end


assign CurHuffReadBuf_address0 = grp_decode_start_pgetc_fu_111_CurHuffReadBuf_address0;

assign ap_return = (tmp_15_fu_232_p2 != ap_const_lv32_0? 1'b1: 1'b0);


always @ (ap_CS_fsm) begin
    ap_sig_bdd_20 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_44 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (ap_start or ap_sig_cseq_ST_pp0_stg0_fsm_0 or ap_reg_ppiten_pp0_it0 or ap_ce) begin
    ap_sig_bdd_95 = ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_const_logic_1 == ap_ce) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (ap_start == ap_const_logic_0)));
end

assign grp_decode_start_pgetc_fu_111_CurHuffReadBuf_q0 = CurHuffReadBuf_q0;

assign grp_decode_start_pgetc_fu_111_ap_start = grp_decode_start_pgetc_fu_111_ap_start_ap_start_reg;

assign grp_decode_start_pgetc_fu_111_off_i = off_i;

assign grp_decode_start_pgetc_fu_111_tmp_7 = ap_reg_ptbuf_tmp_7;

assign off_o_ap_vld = grp_decode_start_pgetc_fu_111_off_o_ap_vld;

assign p_trunc_ext_fu_149_p1 = grp_decode_start_pgetc_fu_111_ap_return;

assign tmp_14_fu_133_p2 = ($signed(ap_const_lv32_FFFFFFFF) + $signed(ap_reg_phiprechg_tmp_s_reg_100pp0_it0));

assign tmp_15_fu_232_p2 = (current_read_byte_i & tmp_17_fu_163_p34);

assign tmp_23_fu_145_p1 = ap_reg_phiprechg_tmp_s_reg_100pp0_it0[4:0];

assign tmp_fu_125_p3 = read_position_i[ap_const_lv32_1F];


endmodule //decode_start_buf_getb
