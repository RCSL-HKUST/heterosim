#include "decode.h"
#include "global.h"


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




int main_result;
/*
 * Output Buffer
 */

int OutData_image_width;
int OutData_image_height;
int OutData_comp_vpos[RGB_NUM];
int OutData_comp_hpos[RGB_NUM];
unsigned char OutData_comp_buf[RGB_NUM][BMP_OUT_SIZE];




short p_jinfo_image_height;
short p_jinfo_image_width;

int p_jinfo_smp_fact;


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
int p_jinfo_MCUWidth;
int p_jinfo_NumMCU;

unsigned char *p_jinfo_jpeg_data;

int buff[4000];

