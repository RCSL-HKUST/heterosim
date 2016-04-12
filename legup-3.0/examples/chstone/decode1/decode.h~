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
 * royalty on an "as is" basis. The authors disclaims any and all warranties, 
 * whether express, implied, or statuary, including any implied warranties or 
 * merchantability or of fitness for a particular purpose. In no event shall the
 * copyright-holder be liable for any incidental, punitive, or consequential damages
 * of any kind whatsoever arising from the use of these programs. This disclaimer
 * of warranty extends to the user of these programs and user's customers, employees,
 * agents, transferees, successors, and assigns.
 *
 */
/*
 *  Header file for decoding
 *
 *  @(#) $Id: decode.h,v 1.2 2003/07/18 10:19:21 honda Exp $
 */

#include "global.h"

#ifndef _DECODE_H_
#define _DECODE_H_

#define NUM_HUFF_TBLS       2
#define NUM_QUANT_TBLS      4
#define DCTSIZE             8
#define DCTSIZE2           64


/*
 * Fix the number of components as 3
 */
#define NUM_COMPONENT       3

#define RGB_NUM  3

/*
 * Define the sample precision as 8
 */
#define IDCT_SHIFT 128
#define IDCT_BOUNT 255
#define MARKER_MARKER 0xff

/* SAMPLING_FACTOR */
#define SF1_1_1  0
#define SF4_1_1  2





int
decode_start (
		int *OutData_image_width_,
		int *OutData_image_height_,
		int OutData_comp_vpos_[RGB_NUM],
		int OutData_comp_hpos_[RGB_NUM],
		unsigned char OutData_comp_buf_[RGB_NUM][BMP_OUT_SIZE],
		short p_jinfo_image_height_,
		short p_jinfo_image_width_,
		int p_jinfo_smp_fact_,
		char p_jinfo_comps_info_quant_tbl_no_[NUM_COMPONENT],
		char p_jinfo_comps_info_dc_tbl_no_[NUM_COMPONENT],
		unsigned int p_jinfo_quant_tbl_quantval_[NUM_QUANT_TBLS][DCTSIZE2],
		int p_jinfo_dc_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257],
		int p_jinfo_ac_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257],
		int p_jinfo_dc_dhuff_tbl_ml_[NUM_HUFF_TBLS],
		int p_jinfo_dc_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36],
		int p_jinfo_dc_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36],
		int p_jinfo_dc_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_ml_[NUM_HUFF_TBLS],
		int p_jinfo_ac_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36],
		int p_jinfo_MCUWidth_,
		int p_jinfo_NumMCU_,
		unsigned char p_jinfo_jpeg_data_[BMP_OUT_SIZE]);
#endif /* _DECODE_H_ */
