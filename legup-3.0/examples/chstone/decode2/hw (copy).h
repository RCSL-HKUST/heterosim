#include "decode.h"
#include "global.h"

unsigned char *CurHuffReadBuf;


int *main_result_;

int *OutData_image_width_;
int *OutData_image_height_;
int OutData_comp_vpos_[RGB_NUM];
int OutData_comp_hpos_[RGB_NUM];
unsigned char OutData_comp_buf_[RGB_NUM][BMP_OUT_SIZE];




short *p_jinfo_image_height_;
short *p_jinfo_image_width_;

int *p_jinfo_smp_fact_;


char p_jinfo_comps_info_quant_tbl_no_[NUM_COMPONENT];
char p_jinfo_comps_info_dc_tbl_no_[NUM_COMPONENT];


unsigned int p_jinfo_quant_tbl_quantval_[NUM_QUANT_TBLS][DCTSIZE2];


int p_jinfo_dc_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257];


int p_jinfo_ac_xhuff_tbl_huffval_[NUM_HUFF_TBLS][257];

int p_jinfo_dc_dhuff_tbl_ml_[NUM_HUFF_TBLS];
int p_jinfo_dc_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36];
int p_jinfo_dc_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36];
int p_jinfo_dc_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36];
int p_jinfo_ac_dhuff_tbl_ml_[NUM_HUFF_TBLS];
int p_jinfo_ac_dhuff_tbl_maxcode_[NUM_HUFF_TBLS][36];
int p_jinfo_ac_dhuff_tbl_mincode_[NUM_HUFF_TBLS][36];
int p_jinfo_ac_dhuff_tbl_valptr_[NUM_HUFF_TBLS][36];
int *p_jinfo_MCUWidth_;
int *p_jinfo_NumMCU_;

unsigned char p_jinfo_jpeg_data_[BMP_OUT_SIZE];
