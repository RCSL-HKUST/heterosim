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

//unsigned char *CurHuffReadBuf;
void DecodeHuffMCU (int *out_buf, int num_cmp, int p_jinfo_dc_dhuff_tbl_ml_[NUM_HUFF_TBLS],
		int p_jinfo_dc_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36],
		int p_jinfo_dc_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36],
		int p_jinfo_dc_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_ml_[NUM_HUFF_TBLS],
		int p_jinfo_ac_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36],
		int p_jinfo_ac_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36],
		int p_jinfo_dc_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257],
		int p_jinfo_ac_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257],
		char p_jinfo_comps_info_dc_tbl_no_[NUM_COMPONENT]);


