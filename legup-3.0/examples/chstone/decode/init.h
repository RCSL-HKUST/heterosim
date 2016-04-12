/*
+--------------------------------------------------------------------------+
| CHStone : a suite of benchmark programs for C-based High-Level Synthesis |
| ======================================================================== |
|                                                                          |
| * Collected and Modified : Y. Hara, H. Tomiyama, S. Honda,               |
|                            H. Takada and K. Ishii                        |
|                            Nagoya University, Japan                      |
|                                                                          |
| * Remark :                                                               |
|    1. This source code is modified to unify the formats of the benchmark |
|       programs in CHStone.                                               |
|    2. Test vectors are added for CHStone.                                |
|    3. If "main_result" is 0 at the end of the program, the program is    |
|       correctly executed.                                                |
|    4. Please follow the copyright of each benchmark program.             |
+--------------------------------------------------------------------------+
*/
/*
 * Copyright (C) 2008
 * Y. Hara, H. Tomiyama, S. Honda, H. Takada and K. Ishii
 * Nagoya University, Japan
 * All rights reserved.
 *
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis. The authors disclaims  any and all warranties, 
 * whether express, implied, or statuary, including any implied warranties or 
 * merchantability or of fitness for a particular purpose. In no event shall the
 * copyright-holder be liable for any incidental, punitive, or consequential damages
 * of any kind whatsoever arising from the use of these programs. This disclaimer
 * of warranty extends to the user of these programs and user's customers, employees,
 * agents, transferees, successors, and assigns.
 *
 */
#include "decode.h"
#include "global.h"



unsigned char *CurHuffReadBuf;


char p_jinfo_data_precision;
char p_jinfo_num_components;
char p_jinfo_comps_info_index[NUM_COMPONENT];
char p_jinfo_comps_info_id[NUM_COMPONENT];
char p_jinfo_comps_info_h_samp_factor[NUM_COMPONENT];
char p_jinfo_comps_info_v_samp_factor[NUM_COMPONENT];
char p_jinfo_comps_info_ac_tbl_no[NUM_COMPONENT];
int p_jinfo_dc_xhuff_tbl_bits[NUM_HUFF_TBLS][36];
int p_jinfo_ac_xhuff_tbl_bits[NUM_HUFF_TBLS][36];
int p_jinfo_MCUHeight;




int *main_result;

int *OutData_image_width;
int *OutData_image_height;
int OutData_comp_vpos[RGB_NUM];
int OutData_comp_hpos[RGB_NUM];
unsigned char OutData_comp_buf[RGB_NUM*BMP_OUT_SIZE];




short *p_jinfo_image_height;
short *p_jinfo_image_width;

int *p_jinfo_smp_fact;


char p_jinfo_comps_info_quant_tbl_no[NUM_COMPONENT];
char p_jinfo_comps_info_dc_tbl_no[NUM_COMPONENT];


unsigned int p_jinfo_quant_tbl_quantval[NUM_QUANT_TBLS*DCTSIZE2];


int p_jinfo_dc_xhuff_tbl_huffval[NUM_HUFF_TBLS*257];


int p_jinfo_ac_xhuff_tbl_huffval[NUM_HUFF_TBLS*257];

int p_jinfo_dc_dhuff_tbl_ml[NUM_HUFF_TBLS];
int p_jinfo_dc_dhuff_tbl_maxcode[NUM_HUFF_TBLS*36];
int p_jinfo_dc_dhuff_tbl_mincode[NUM_HUFF_TBLS*36];
int p_jinfo_dc_dhuff_tbl_valptr[NUM_HUFF_TBLS*36];
int p_jinfo_ac_dhuff_tbl_ml[NUM_HUFF_TBLS];
int p_jinfo_ac_dhuff_tbl_maxcode[NUM_HUFF_TBLS*36];
int p_jinfo_ac_dhuff_tbl_mincode[NUM_HUFF_TBLS*36];
int p_jinfo_ac_dhuff_tbl_valptr[NUM_HUFF_TBLS*36];

int *p_jinfo_MCUWidth;
int *p_jinfo_NumMCU;

unsigned char *p_jinfo_jpeg_data;


/*int *main_result;

int *OutData_image_width;
int *OutData_image_height;
int OutData_comp_vpos[RGB_NUM];
int OutData_comp_hpos[RGB_NUM];
unsigned char OutData_comp_buf[RGB_NUM][BMP_OUT_SIZE];




short *p_jinfo_image_height;
short *p_jinfo_image_width;

int *p_jinfo_smp_fact;


char p_jinfo_comps_info_quant_tbl_no[NUM_COMPONENT];
char p_jinfo_comps_info_dc_tbl_no[NUM_COMPONENT];


unsigned int p_jinfo_quant_tbl_quantval[NUM_QUANT_TBLS][DCTSIZE2];


int p_jinfo_dc_xhuff_tbl_huffval[NUM_HUFF_TBLS][257];


int p_jinfo_ac_xhuff_tbl_huffval[NUM_HUFF_TBLS][257];

int p_jinfo_dc_dhuff_tbl_ml[NUM_HUFF_TBLS];
int p_jinfo_dc_dhuff_tbl_maxcode[NUM_HUFF_TBLS][36];
int p_jinfo_dc_dhuff_tbl_mincode[NUM_HUFF_TBLS][36];
int p_jinfo_dc_dhuff_tbl_valptr[NUM_HUFF_TBLS][36];
int p_jinfo_ac_dhuff_tbl_ml[NUM_HUFF_TBLS];
int p_jinfo_ac_dhuff_tbl_maxcode[NUM_HUFF_TBLS][36];
int p_jinfo_ac_dhuff_tbl_mincode[NUM_HUFF_TBLS][36];
int p_jinfo_ac_dhuff_tbl_valptr[NUM_HUFF_TBLS][36];
int *p_jinfo_MCUWidth;
int *p_jinfo_NumMCU;

unsigned char *p_jinfo_jpeg_data;
*/
/*
+--------------------------------------------------------------------------+
| * Test Vector (added for CHStone)                                        |
|     hana_jpg : input data                                                |
|     hana_bmp : expected output data                                      |
|     out_width : expected output data                                     |
|     out_length : expected output data                                    |
+--------------------------------------------------------------------------+
*/

