// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vdecode_start.h"		// From Verilating "top.v"
#include <stdio.h>
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

Vdecode_start *top;			// Instantiation of module

vluint64_t main_time = 0;	// Current simulation time (64-bit unsigned)

#define ARRAY_SIZE 4000
#define KERNEL_NAME "jpeg decode"
#define JPEG_FILE_SIZE  (90 * 59)
#define BMP_OUT_SIZE  (90 * 59)
#define NUM_HUFF_TBLS       2
#define NUM_QUANT_TBLS      4
#define DCTSIZE             8
#define DCTSIZE2           64
#define NUM_COMPONENT       3
#define RGB_NUM  3

double sc_time_stamp () {	// Called by $time in Verilog
	return main_time;		// Note does conversion to real, to match SystemC
}

        unsigned int OutData_image_width;
        unsigned int OutData_image_height;
        unsigned int OutData_comp_vpos[RGB_NUM];
        unsigned int OutData_comp_hpos[RGB_NUM];
        unsigned char OutData_comp_buf[RGB_NUM*BMP_OUT_SIZE];




        unsigned short p_jinfo_image_height;
        unsigned short p_jinfo_image_width;
        unsigned int p_jinfo_smp_fact;
        unsigned int p_jinfo_quant_tbl_quantval[NUM_QUANT_TBLS*DCTSIZE2];
        unsigned int p_jinfo_dc_xhuff_tbl_huffval[NUM_HUFF_TBLS*257];
        unsigned int p_jinfo_ac_xhuff_tbl_huffval[NUM_HUFF_TBLS*257];
        unsigned int p_jinfo_dc_dhuff_tbl_ml[NUM_HUFF_TBLS];
        unsigned int p_jinfo_dc_dhuff_tbl_maxcode[NUM_HUFF_TBLS*36];
        unsigned int p_jinfo_dc_dhuff_tbl_mincode[NUM_HUFF_TBLS*36];
        unsigned int p_jinfo_dc_dhuff_tbl_valptr[NUM_HUFF_TBLS*36];
        unsigned int p_jinfo_ac_dhuff_tbl_ml[NUM_HUFF_TBLS];
        unsigned int p_jinfo_ac_dhuff_tbl_maxcode[NUM_HUFF_TBLS*36];
        unsigned int p_jinfo_ac_dhuff_tbl_mincode[NUM_HUFF_TBLS*36];
        unsigned int p_jinfo_ac_dhuff_tbl_valptr[NUM_HUFF_TBLS*36];
        unsigned int p_jinfo_MCUWidth;
        unsigned int p_jinfo_NumMCU;
        unsigned char p_jinfo_comps_info_quant_tbl_no[NUM_COMPONENT];
        unsigned char p_jinfo_comps_info_dc_tbl_no[NUM_COMPONENT];
        unsigned char p_jinfo_jpeg_data[BMP_OUT_SIZE];


int main(int argc, char **argv, char **env) {
	FILE *input;
	FILE *output;
        FILE *show;
	if (argc < 3)
	{
		VL_PRINTF("Invoking of %s kernel requires at least 2 arguments\n", KERNEL_NAME);
		exit(1);
	}
	input = fopen(argv[1], "r");
	output = fopen(argv[2], "w");
        show = fopen("show.txt","w");
	char line[256];
	int i = 0;
        

     
       
	while (fgets(line, sizeof(line), input))
	{
		if (i < 1)
                {     sscanf(line, "%llx", &p_jinfo_image_height);
		}  
                else if(i<2)
                   {    sscanf(line, "%llx", &p_jinfo_image_width);  } 
                else if(i<3)
                 {    sscanf(line, "%llx", &p_jinfo_smp_fact);  }
                else if(i<3+256)
                 {    sscanf(line, "%llx", &p_jinfo_quant_tbl_quantval[i-3]);  }
                else if(i<259+514)
                 {    sscanf(line, "%llx", &p_jinfo_dc_xhuff_tbl_huffval[i-259]);  }
                else if(i<773+514)
                 {    sscanf(line, "%llx", &p_jinfo_ac_xhuff_tbl_huffval[i-773]);  }
                else if(i<1287+2)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_ml[i-1287]);  }
                else if(i<1289+72)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_maxcode[i-1289]);  }
                else if(i<1361+72)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_mincode[i-1361]);  }
                else if(i<1433+72)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_valptr[i-1433]);  }
                else if(i<1505+2)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_ml[i-1505]);  }
                else if(i<1507+72)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_maxcode[i-1507]);  }
                else if(i<1579+72)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_mincode[i-1579]);  }
                else if(i<1651+72)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_valptr[i-1651]);  } 
                else if(i<1723+1)
                 {    sscanf(line, "%llx", &p_jinfo_MCUWidth);  }
                else if(i<1724+1)
                 {    sscanf(line, "%llx", &p_jinfo_NumMCU);  }
                else if(i<1725+3)
                 {    sscanf(line, "%llx", &p_jinfo_comps_info_quant_tbl_no[i-1725]);  }
                else if(i<1728+3)
                 {    sscanf(line, "%llx", &p_jinfo_comps_info_dc_tbl_no[i-1728]);  }
                else if(i<1731+5310)
                 {    sscanf(line, "%llx", &p_jinfo_jpeg_data[i-1731]);  } 
                else {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		}
		i++;
	}
         
        //printf("%d\n",i); 
        
       // for (i=0;i<4000;i++)
       // {  printf("%d\n",buff[i]);
        //  }
	printf("Start JPEG decode:");
	//for (i = 0; i < ARRAY_SIZE; i++) {
	//	printf("%d ", key[i]);
	//}
	//printf("\nValue Array:");
	//for (i = 0; i < ARRAY_SIZE; ++i) {
	//	printf("%d ", value[i]);
	//}
	printf("\n");

	if (0 && env) {}	// Prevent unused variable warnings
	top = new Vdecode_start;		// Create instance of module

	Verilated::commandArgs(argc, argv);
	Verilated::debug(0);

#if VM_TRACE			// If verilator was invoked with --trace
	Verilated::traceEverOn(true);	// Verilator must compute traced signals
	VL_PRINTF("Enabling waves...\n");
	VerilatedVcdC* tfp = new VerilatedVcdC;
	top->trace (tfp, 99);	// Trace 99 levels of hierarchy
	tfp->open ("vlt_dump.vcd");	// Open the dump file
#endif

	top->ap_clk = 0;		// Set some inputs
	top->ap_rst = 1;
	top->ap_start = 0;
        top->p_jinfo_MCUWidth_s = p_jinfo_MCUWidth;
        top->p_jinfo_NumMCU_s = p_jinfo_NumMCU;
        top->p_jinfo_image_height_s = p_jinfo_image_height;
        top->p_jinfo_image_width_s = p_jinfo_image_width;
        top->p_jinfo_smp_fact_s = p_jinfo_smp_fact;

        unsigned int OutData_image_width_s;
        unsigned char OutData_image_width_s_ap_vld = 0;
        unsigned int OutData_image_height_s;
        unsigned char OutData_image_height_s_ap_vld = 0;
        unsigned char OutData_comp_vpos_s_address0;
        unsigned char OutData_comp_vpos_s_ce0 = 0;
        unsigned char OutData_comp_vpos_s_we0;
        unsigned int OutData_comp_vpos_s_d0;
        unsigned int OutData_comp_vpos_s_q0;
        unsigned char OutData_comp_vpos_s_address1;
        unsigned char OutData_comp_vpos_s_ce1 = 0;
        unsigned char OutData_comp_vpos_s_we1;
        unsigned int OutData_comp_vpos_s_d1;
        unsigned int OutData_comp_vpos_s_q1;
        unsigned char OutData_comp_hpos_s_address0;
        unsigned char OutData_comp_hpos_s_ce0 = 0;
        unsigned char OutData_comp_hpos_s_we0;
        unsigned int OutData_comp_hpos_s_d0;
        unsigned int OutData_comp_hpos_s_q0;
        unsigned char OutData_comp_hpos_s_address1;
        unsigned char OutData_comp_hpos_s_ce1 = 0;
        unsigned char OutData_comp_hpos_s_we1;
        unsigned int OutData_comp_hpos_s_d1;
        unsigned int OutData_comp_hpos_s_q1;
        unsigned short OutData_comp_buf_s_address0;
        unsigned char OutData_comp_buf_s_ce0 = 0;
        unsigned char OutData_comp_buf_s_we0;
        unsigned char OutData_comp_buf_s_d0;
        unsigned char p_jinfo_comps_info_quant_tbl_no_s_address0;
        unsigned char p_jinfo_comps_info_quant_tbl_no_s_ce0 = 0;
        unsigned char p_jinfo_comps_info_quant_tbl_no_s_q0;
        unsigned char p_jinfo_comps_info_dc_tbl_no_s_address0;
        unsigned char p_jinfo_comps_info_dc_tbl_no_s_ce0 = 0;
        unsigned char p_jinfo_comps_info_dc_tbl_no_s_q0;
        unsigned char p_jinfo_quant_tbl_quantval_s_address0;
        unsigned char p_jinfo_quant_tbl_quantval_s_ce0 = 0;
        unsigned int p_jinfo_quant_tbl_quantval_s_q0;
        unsigned char p_jinfo_quant_tbl_quantval_s_address1;
        unsigned char p_jinfo_quant_tbl_quantval_s_ce1 = 0;
        unsigned int p_jinfo_quant_tbl_quantval_s_q1;
        unsigned short p_jinfo_dc_xhuff_tbl_huffval_s_address0;
        unsigned char p_jinfo_dc_xhuff_tbl_huffval_s_ce0 = 0;
        unsigned int p_jinfo_dc_xhuff_tbl_huffval_s_q0;
        unsigned short p_jinfo_ac_xhuff_tbl_huffval_s_address0;
        unsigned char p_jinfo_ac_xhuff_tbl_huffval_s_ce0 = 0;
        unsigned int p_jinfo_ac_xhuff_tbl_huffval_s_q0;
        unsigned char p_jinfo_dc_dhuff_tbl_ml_s_address0;
        unsigned char p_jinfo_dc_dhuff_tbl_ml_s_ce0 = 0;
        unsigned char p_jinfo_dc_dhuff_tbl_ml_s_we0;
        unsigned int p_jinfo_dc_dhuff_tbl_ml_s_d0;
        unsigned int p_jinfo_dc_dhuff_tbl_ml_s_q0;
        unsigned char p_jinfo_dc_dhuff_tbl_ml_s_address1;
        unsigned char p_jinfo_dc_dhuff_tbl_ml_s_ce1 = 0;
        unsigned char p_jinfo_dc_dhuff_tbl_ml_s_we1;
        unsigned int p_jinfo_dc_dhuff_tbl_ml_s_d1;
        unsigned int p_jinfo_dc_dhuff_tbl_ml_s_q1;
        unsigned char p_jinfo_dc_dhuff_tbl_maxcode_s_address0;
        unsigned char p_jinfo_dc_dhuff_tbl_maxcode_s_ce0 = 0;
        unsigned int p_jinfo_dc_dhuff_tbl_maxcode_s_q0;
        unsigned char p_jinfo_dc_dhuff_tbl_mincode_s_address0;
        unsigned char p_jinfo_dc_dhuff_tbl_mincode_s_ce0 = 0;
        unsigned int p_jinfo_dc_dhuff_tbl_mincode_s_q0;
        unsigned char p_jinfo_dc_dhuff_tbl_valptr_s_address0;
        unsigned char p_jinfo_dc_dhuff_tbl_valptr_s_ce0 = 0;
        unsigned int p_jinfo_dc_dhuff_tbl_valptr_s_q0;
        unsigned char p_jinfo_ac_dhuff_tbl_ml_s_address0;
        unsigned char p_jinfo_ac_dhuff_tbl_ml_s_ce0 = 0;
        unsigned char p_jinfo_ac_dhuff_tbl_ml_s_we0;
        unsigned int p_jinfo_ac_dhuff_tbl_ml_s_d0;
        unsigned int p_jinfo_ac_dhuff_tbl_ml_s_q0;
        unsigned char p_jinfo_ac_dhuff_tbl_ml_s_address1;
        unsigned char p_jinfo_ac_dhuff_tbl_ml_s_ce1 = 0;
        unsigned char p_jinfo_ac_dhuff_tbl_ml_s_we1;
        unsigned int p_jinfo_ac_dhuff_tbl_ml_s_d1;
        unsigned int p_jinfo_ac_dhuff_tbl_ml_s_q1;
        unsigned char p_jinfo_ac_dhuff_tbl_maxcode_s_address0;
        unsigned char p_jinfo_ac_dhuff_tbl_maxcode_s_ce0 = 0;
        unsigned int p_jinfo_ac_dhuff_tbl_maxcode_s_q0;
        unsigned char p_jinfo_ac_dhuff_tbl_mincode_s_address0;
        unsigned char p_jinfo_ac_dhuff_tbl_mincode_s_ce0 = 0;
        unsigned int p_jinfo_ac_dhuff_tbl_mincode_s_q0;
        unsigned char p_jinfo_ac_dhuff_tbl_valptr_s_address0;
        unsigned char p_jinfo_ac_dhuff_tbl_valptr_s_ce0 = 0;
        unsigned int p_jinfo_ac_dhuff_tbl_valptr_s_q0;
        unsigned short p_jinfo_jpeg_data_s_address0;
        unsigned char p_jinfo_jpeg_data_s_ce0 = 0;
        unsigned char p_jinfo_jpeg_data_s_q0;


       


	while (!top->ap_done && !Verilated::gotFinish()) {

		if (main_time > 10) {
			top->ap_rst = 0;
			top->ap_start = 1;	// Deassert reset
		} else if (main_time > 1) {
			top->ap_rst = 1;	// Assert reset
		}

		top->eval();		// Evaluate model
#if VM_TRACE
		if (tfp) tfp->dump (main_time);	// Create waveform trace for this timestamp
#endif       


             if(top->ap_clk)
          
              {     
                   if(OutData_image_width_s_ap_vld)
                       OutData_image_width = OutData_image_width_s;

                   if(OutData_image_height_s_ap_vld)
                       OutData_image_height = OutData_image_height_s; 
 
                   if(OutData_comp_vpos_s_ce0 && OutData_comp_vpos_s_we0)
                       OutData_comp_vpos[OutData_comp_vpos_s_address0] = OutData_comp_vpos_s_d0;
                   
                   if(OutData_comp_vpos_s_ce0 && !OutData_comp_vpos_s_we0)
                       top->OutData_comp_vpos_s_q0 = OutData_comp_vpos[OutData_comp_vpos_s_address0];

                   if(OutData_comp_vpos_s_ce1 && OutData_comp_vpos_s_we1)
                       OutData_comp_vpos[OutData_comp_vpos_s_address1] = OutData_comp_vpos_s_d1;
                   
                   if(OutData_comp_vpos_s_ce1 && !OutData_comp_vpos_s_we1)
                       top->OutData_comp_vpos_s_q1 = OutData_comp_vpos[OutData_comp_vpos_s_address1];
 
                   if(OutData_comp_hpos_s_ce0 && OutData_comp_hpos_s_we0)
                       OutData_comp_hpos[OutData_comp_hpos_s_address0] = OutData_comp_hpos_s_d0;
                   
                   if(OutData_comp_hpos_s_ce0 && !OutData_comp_hpos_s_we0)
                       top->OutData_comp_hpos_s_q0 = OutData_comp_hpos[OutData_comp_hpos_s_address0];

                   if(OutData_comp_hpos_s_ce1 && OutData_comp_hpos_s_we1)
                       OutData_comp_hpos[OutData_comp_hpos_s_address1] = OutData_comp_hpos_s_d1;
                   
                   if(OutData_comp_hpos_s_ce1 && !OutData_comp_hpos_s_we1)
                       top->OutData_comp_hpos_s_q1 = OutData_comp_hpos[OutData_comp_hpos_s_address1];

                   if(OutData_comp_buf_s_ce0 && OutData_comp_buf_s_we0)
                       OutData_comp_buf[OutData_comp_buf_s_address0] = OutData_comp_buf_s_d0;                            
                  
                   if(p_jinfo_comps_info_quant_tbl_no_s_ce0)
                       top->p_jinfo_comps_info_quant_tbl_no_s_q0 = p_jinfo_comps_info_quant_tbl_no[p_jinfo_comps_info_quant_tbl_no_s_address0];
                    
                   if(p_jinfo_comps_info_dc_tbl_no_s_ce0)
                       top->p_jinfo_comps_info_dc_tbl_no_s_q0 = p_jinfo_comps_info_dc_tbl_no[p_jinfo_comps_info_dc_tbl_no_s_address0];
    
                   if(p_jinfo_quant_tbl_quantval_s_ce0)
                       top->p_jinfo_quant_tbl_quantval_s_q0 = p_jinfo_quant_tbl_quantval[p_jinfo_quant_tbl_quantval_s_address0];
    
                   if(p_jinfo_quant_tbl_quantval_s_ce1)
                       top->p_jinfo_quant_tbl_quantval_s_q1 = p_jinfo_quant_tbl_quantval[p_jinfo_quant_tbl_quantval_s_address1];
                   
                   if(p_jinfo_dc_xhuff_tbl_huffval_s_ce0)
                       top->p_jinfo_dc_xhuff_tbl_huffval_s_q0 = p_jinfo_dc_xhuff_tbl_huffval[p_jinfo_dc_xhuff_tbl_huffval_s_address0];
    
                   if(p_jinfo_ac_xhuff_tbl_huffval_s_ce0)
                       top->p_jinfo_ac_xhuff_tbl_huffval_s_q0 = p_jinfo_ac_xhuff_tbl_huffval[p_jinfo_ac_xhuff_tbl_huffval_s_address0]; 
                   
                   if(p_jinfo_dc_dhuff_tbl_ml_s_ce0 && p_jinfo_dc_dhuff_tbl_ml_s_we0)
                       p_jinfo_dc_dhuff_tbl_ml[p_jinfo_dc_dhuff_tbl_ml_s_address0] = p_jinfo_dc_dhuff_tbl_ml_s_d0;
 
                   if(p_jinfo_dc_dhuff_tbl_ml_s_ce0 && !p_jinfo_dc_dhuff_tbl_ml_s_we0)
                       top->p_jinfo_dc_dhuff_tbl_ml_s_q0 = p_jinfo_dc_dhuff_tbl_ml[p_jinfo_dc_dhuff_tbl_ml_s_address0];

                   if(p_jinfo_dc_dhuff_tbl_ml_s_ce1 && p_jinfo_dc_dhuff_tbl_ml_s_we1)
                       p_jinfo_dc_dhuff_tbl_ml[p_jinfo_dc_dhuff_tbl_ml_s_address1] = p_jinfo_dc_dhuff_tbl_ml_s_d1;
 
                   if(p_jinfo_dc_dhuff_tbl_ml_s_ce1 && !p_jinfo_dc_dhuff_tbl_ml_s_we1)
                       top->p_jinfo_dc_dhuff_tbl_ml_s_q1 = p_jinfo_dc_dhuff_tbl_ml[p_jinfo_dc_dhuff_tbl_ml_s_address1];

                   if(p_jinfo_dc_dhuff_tbl_maxcode_s_ce0)
                       top->p_jinfo_dc_dhuff_tbl_maxcode_s_q0 = p_jinfo_dc_dhuff_tbl_maxcode[p_jinfo_dc_dhuff_tbl_maxcode_s_address0];
                   
                   if(p_jinfo_dc_dhuff_tbl_mincode_s_ce0)
                       top->p_jinfo_dc_dhuff_tbl_mincode_s_q0 = p_jinfo_dc_dhuff_tbl_mincode[p_jinfo_dc_dhuff_tbl_mincode_s_address0];
                   
                   if(p_jinfo_dc_dhuff_tbl_valptr_s_ce0)
                       top->p_jinfo_dc_dhuff_tbl_valptr_s_q0 = p_jinfo_dc_dhuff_tbl_valptr[p_jinfo_dc_dhuff_tbl_valptr_s_address0];
                   
                   if(p_jinfo_ac_dhuff_tbl_ml_s_ce0 && p_jinfo_ac_dhuff_tbl_ml_s_we0)
                       p_jinfo_ac_dhuff_tbl_ml[p_jinfo_ac_dhuff_tbl_ml_s_address0] = p_jinfo_ac_dhuff_tbl_ml_s_d0;
 
                   if(p_jinfo_ac_dhuff_tbl_ml_s_ce0 && !p_jinfo_ac_dhuff_tbl_ml_s_we0)
                       top->p_jinfo_ac_dhuff_tbl_ml_s_q0 = p_jinfo_ac_dhuff_tbl_ml[p_jinfo_ac_dhuff_tbl_ml_s_address0];

                   if(p_jinfo_ac_dhuff_tbl_ml_s_ce1 && p_jinfo_ac_dhuff_tbl_ml_s_we1)
                       p_jinfo_ac_dhuff_tbl_ml[p_jinfo_ac_dhuff_tbl_ml_s_address1] = p_jinfo_ac_dhuff_tbl_ml_s_d1;
 
                   if(p_jinfo_ac_dhuff_tbl_ml_s_ce1 && !p_jinfo_ac_dhuff_tbl_ml_s_we1)
                       top->p_jinfo_ac_dhuff_tbl_ml_s_q1 = p_jinfo_ac_dhuff_tbl_ml[p_jinfo_ac_dhuff_tbl_ml_s_address1];
 
                   if(p_jinfo_ac_dhuff_tbl_maxcode_s_ce0)
                       top->p_jinfo_ac_dhuff_tbl_maxcode_s_q0 = p_jinfo_ac_dhuff_tbl_maxcode[p_jinfo_ac_dhuff_tbl_maxcode_s_address0];
                   
                   if(p_jinfo_ac_dhuff_tbl_mincode_s_ce0)
                       top->p_jinfo_ac_dhuff_tbl_mincode_s_q0 = p_jinfo_ac_dhuff_tbl_mincode[p_jinfo_ac_dhuff_tbl_mincode_s_address0];
                   
                   if(p_jinfo_ac_dhuff_tbl_valptr_s_ce0)
                       top->p_jinfo_ac_dhuff_tbl_valptr_s_q0 = p_jinfo_ac_dhuff_tbl_valptr[p_jinfo_ac_dhuff_tbl_valptr_s_address0];
                    
                   if( p_jinfo_jpeg_data_s_ce0)
                       top-> p_jinfo_jpeg_data_s_q0 =  p_jinfo_jpeg_data[ p_jinfo_jpeg_data_s_address0];
               }

    
           if(!top->ap_clk)
               {
                   OutData_image_width_s = top->OutData_image_width_s;
                   OutData_image_width_s_ap_vld = top->OutData_image_width_s_ap_vld;
                   OutData_image_height_s = top->OutData_image_height_s;
                   OutData_image_height_s_ap_vld = top->OutData_image_height_s_ap_vld;
                   OutData_comp_vpos_s_address0 = top->OutData_comp_vpos_s_address0;
                   OutData_comp_vpos_s_ce0 = top->OutData_comp_vpos_s_ce0;
                   OutData_comp_vpos_s_we0 = top->OutData_comp_vpos_s_we0;
                   OutData_comp_vpos_s_d1 = top->OutData_comp_vpos_s_d1;
                   OutData_comp_vpos_s_address1 = top->OutData_comp_vpos_s_address1;
                   OutData_comp_vpos_s_ce1 = top->OutData_comp_vpos_s_ce1;
                   OutData_comp_vpos_s_we1 = top->OutData_comp_vpos_s_we1;
                   OutData_comp_vpos_s_d1 = top->OutData_comp_vpos_s_d1;
                   OutData_comp_hpos_s_address0 = top->OutData_comp_hpos_s_address0;
                   OutData_comp_hpos_s_ce0 = top->OutData_comp_hpos_s_ce0;
                   OutData_comp_hpos_s_we0 = top->OutData_comp_hpos_s_we0;
                   OutData_comp_hpos_s_d1 = top->OutData_comp_hpos_s_d1;
                   OutData_comp_hpos_s_address1 = top->OutData_comp_hpos_s_address1;
                   OutData_comp_hpos_s_ce1 = top->OutData_comp_hpos_s_ce1;
                   OutData_comp_hpos_s_we1 = top->OutData_comp_hpos_s_we1;
                   OutData_comp_hpos_s_d1 = top->OutData_comp_hpos_s_d1;
                   OutData_comp_buf_s_address0 = top->OutData_comp_buf_s_address0;
                   OutData_comp_buf_s_ce0 = top->OutData_comp_buf_s_ce0;
                   OutData_comp_buf_s_we0 = top->OutData_comp_buf_s_we0;
                   OutData_comp_buf_s_d0 = top->OutData_comp_buf_s_d0;
                   p_jinfo_comps_info_quant_tbl_no_s_address0 = top->p_jinfo_comps_info_quant_tbl_no_s_address0;
                   p_jinfo_comps_info_quant_tbl_no_s_ce0 = top->p_jinfo_comps_info_quant_tbl_no_s_ce0;
                   p_jinfo_comps_info_dc_tbl_no_s_address0 = top->p_jinfo_comps_info_dc_tbl_no_s_address0;
                   p_jinfo_comps_info_dc_tbl_no_s_ce0 = top->p_jinfo_comps_info_dc_tbl_no_s_ce0;
                   p_jinfo_quant_tbl_quantval_s_address0 = top->p_jinfo_quant_tbl_quantval_s_address0;
                   p_jinfo_quant_tbl_quantval_s_ce0 = top->p_jinfo_quant_tbl_quantval_s_ce0;
                   p_jinfo_quant_tbl_quantval_s_address1 = top->p_jinfo_quant_tbl_quantval_s_address1;
                   p_jinfo_quant_tbl_quantval_s_ce1 = top->p_jinfo_quant_tbl_quantval_s_ce1; 
                   p_jinfo_dc_xhuff_tbl_huffval_s_address0 = top->p_jinfo_dc_xhuff_tbl_huffval_s_address0;
                   p_jinfo_dc_xhuff_tbl_huffval_s_ce0 = top->p_jinfo_dc_xhuff_tbl_huffval_s_ce0;
                   p_jinfo_ac_xhuff_tbl_huffval_s_address0 = top->p_jinfo_ac_xhuff_tbl_huffval_s_address0;
                   p_jinfo_ac_xhuff_tbl_huffval_s_ce0 = top->p_jinfo_ac_xhuff_tbl_huffval_s_ce0;
                   p_jinfo_dc_dhuff_tbl_ml_s_address0 = top->p_jinfo_dc_dhuff_tbl_ml_s_address0;
                   p_jinfo_dc_dhuff_tbl_ml_s_ce0 = top->p_jinfo_dc_dhuff_tbl_ml_s_ce0;
                   p_jinfo_dc_dhuff_tbl_ml_s_we0 = top->p_jinfo_dc_dhuff_tbl_ml_s_we0;
                   p_jinfo_dc_dhuff_tbl_ml_s_d0 = top->p_jinfo_dc_dhuff_tbl_ml_s_d0;
                   p_jinfo_dc_dhuff_tbl_ml_s_address1 = top->p_jinfo_dc_dhuff_tbl_ml_s_address1;
                   p_jinfo_dc_dhuff_tbl_ml_s_ce1 = top->p_jinfo_dc_dhuff_tbl_ml_s_ce1;
                   p_jinfo_dc_dhuff_tbl_ml_s_we1 = top->p_jinfo_dc_dhuff_tbl_ml_s_we1;
                   p_jinfo_dc_dhuff_tbl_ml_s_d1 = top->p_jinfo_dc_dhuff_tbl_ml_s_d1;
                   p_jinfo_dc_dhuff_tbl_maxcode_s_address0 = top->p_jinfo_dc_dhuff_tbl_maxcode_s_address0; 
                   p_jinfo_dc_dhuff_tbl_maxcode_s_ce0 = top->p_jinfo_dc_dhuff_tbl_maxcode_s_ce0;
                   p_jinfo_dc_dhuff_tbl_mincode_s_address0 = top->p_jinfo_dc_dhuff_tbl_mincode_s_address0; 
                   p_jinfo_dc_dhuff_tbl_mincode_s_ce0 = top->p_jinfo_dc_dhuff_tbl_mincode_s_ce0;
                   p_jinfo_dc_dhuff_tbl_valptr_s_address0 = top->p_jinfo_dc_dhuff_tbl_valptr_s_address0;
                   p_jinfo_dc_dhuff_tbl_valptr_s_ce0 = top->p_jinfo_dc_dhuff_tbl_valptr_s_ce0;
                   p_jinfo_ac_dhuff_tbl_ml_s_address0 = top->p_jinfo_ac_dhuff_tbl_ml_s_address0;
                   p_jinfo_ac_dhuff_tbl_ml_s_ce0 = top->p_jinfo_ac_dhuff_tbl_ml_s_ce0;
                   p_jinfo_ac_dhuff_tbl_ml_s_we0 = top->p_jinfo_ac_dhuff_tbl_ml_s_we0;
                   p_jinfo_ac_dhuff_tbl_ml_s_d0 = top->p_jinfo_ac_dhuff_tbl_ml_s_d0;
                   p_jinfo_ac_dhuff_tbl_ml_s_address1 = top->p_jinfo_ac_dhuff_tbl_ml_s_address1;
                   p_jinfo_ac_dhuff_tbl_ml_s_ce1 = top->p_jinfo_ac_dhuff_tbl_ml_s_ce1;
                   p_jinfo_ac_dhuff_tbl_ml_s_we1 = top->p_jinfo_ac_dhuff_tbl_ml_s_we1;
                   p_jinfo_ac_dhuff_tbl_ml_s_d1 = top->p_jinfo_ac_dhuff_tbl_ml_s_d1;
                   p_jinfo_ac_dhuff_tbl_maxcode_s_address0 = top->p_jinfo_ac_dhuff_tbl_maxcode_s_address0; 
                   p_jinfo_ac_dhuff_tbl_maxcode_s_ce0 = top->p_jinfo_ac_dhuff_tbl_maxcode_s_ce0;
                   p_jinfo_ac_dhuff_tbl_mincode_s_address0 = top->p_jinfo_ac_dhuff_tbl_mincode_s_address0; 
                   p_jinfo_ac_dhuff_tbl_mincode_s_ce0 = top->p_jinfo_ac_dhuff_tbl_mincode_s_ce0;
                   p_jinfo_ac_dhuff_tbl_valptr_s_address0 = top->p_jinfo_ac_dhuff_tbl_valptr_s_address0;
                   p_jinfo_ac_dhuff_tbl_valptr_s_ce0 = top->p_jinfo_ac_dhuff_tbl_valptr_s_ce0;
                   p_jinfo_jpeg_data_s_address0 = top->p_jinfo_jpeg_data_s_address0;
                   p_jinfo_jpeg_data_s_ce0 = top->p_jinfo_jpeg_data_s_ce0;

 
                }
          // if((top->x_ce0|top->x_ce1) && top->ap_clk)
             { 
                fprintf(show,"%d %d :\n", main_time, top->ap_clk);
               // fprintf(show,"%d %d %d %d %d\n", top->x_ce0,top->x_we0,top->x_address0, top->x_q0, top->x_d0);
               // fprintf(show,"%d %d %d %d %d\n", top->x_ce1,top->x_we1,top->x_address1, top->x_q1, top->x_d1);
	     }
                // Read outputs
		/*VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x %d\n",
		           main_time, top->ap_clk, top->ap_done, top->ap_return);*/

		top->ap_clk = !top->ap_clk;
		main_time++;		// Time passes...
	}
         
       
                   if(top->OutData_image_width_s_ap_vld)
                       OutData_image_width = top->OutData_image_width_s;

                   if(top->OutData_image_height_s_ap_vld)
                       OutData_image_height = top->OutData_image_height_s; 
 
                   if(top->OutData_comp_vpos_s_ce0 && top->OutData_comp_vpos_s_we0)
                       OutData_comp_vpos[top->OutData_comp_vpos_s_address0] = top->OutData_comp_vpos_s_d0; 

                   if(top->OutData_comp_vpos_s_ce1 && top->OutData_comp_vpos_s_we1)
                       OutData_comp_vpos[top->OutData_comp_vpos_s_address1] = top->OutData_comp_vpos_s_d1;

                   if(top->OutData_comp_hpos_s_ce0 && top->OutData_comp_hpos_s_we0)
                       OutData_comp_hpos[top->OutData_comp_hpos_s_address0] = top->OutData_comp_hpos_s_d0;

                   if(top->OutData_comp_hpos_s_ce1 && top->OutData_comp_hpos_s_we1)
                       OutData_comp_hpos[top->OutData_comp_hpos_s_address1] = top->OutData_comp_hpos_s_d1;

                   if(top->OutData_comp_buf_s_ce0 && top->OutData_comp_buf_s_we0)
                       OutData_comp_buf[top->OutData_comp_buf_s_address0] = top->OutData_comp_buf_s_d0; 

                   if(top->p_jinfo_dc_dhuff_tbl_ml_s_ce0 && top->p_jinfo_dc_dhuff_tbl_ml_s_we0)
                       p_jinfo_dc_dhuff_tbl_ml[top->p_jinfo_dc_dhuff_tbl_ml_s_address0] = top->p_jinfo_dc_dhuff_tbl_ml_s_d0;   

                   if(top->p_jinfo_dc_dhuff_tbl_ml_s_ce1 && top->p_jinfo_dc_dhuff_tbl_ml_s_we1)
                       p_jinfo_dc_dhuff_tbl_ml[top->p_jinfo_dc_dhuff_tbl_ml_s_address1] = top->p_jinfo_dc_dhuff_tbl_ml_s_d1; 
  
                   if(top->p_jinfo_ac_dhuff_tbl_ml_s_ce0 && top->p_jinfo_ac_dhuff_tbl_ml_s_we0)
                       p_jinfo_ac_dhuff_tbl_ml[top->p_jinfo_ac_dhuff_tbl_ml_s_address0] = top->p_jinfo_ac_dhuff_tbl_ml_s_d0;
 
                   if(top->p_jinfo_ac_dhuff_tbl_ml_s_ce1 && top->p_jinfo_ac_dhuff_tbl_ml_s_we1)
                       p_jinfo_ac_dhuff_tbl_ml[top->p_jinfo_ac_dhuff_tbl_ml_s_address1] = top->p_jinfo_ac_dhuff_tbl_ml_s_d1;                       
                  
                   
	top->final();

#if VM_TRACE
	if (tfp) tfp->close();
#endif

      
	if (!top->ap_done) {
		VL_PRINTF ("A Test failed\n");
		abort();
	} else {
		VL_PRINTF ("%s finished in %d cycles\n", KERNEL_NAME, (main_time - 10)/2);
		//printf("Searched value %d for key %d\n", top->ap_return, x);
		fprintf(output, "%d\n", (main_time - 10)/2);
                		//printf("Sorted Array:");
                fprintf(output, "%llx\n",OutData_image_width );
                fprintf(output, "%llx\n",OutData_image_height );
                for(i=0;i<3;i++)
                fprintf(output, "%llx\n",OutData_comp_vpos[i] );
                for(i=0;i<3;i++)
                fprintf(output, "%llx\n",OutData_comp_hpos[i] ); 
		for (i = 0; i < 15930; i++) {
			//printf("%d ", buff[i]);
		 fprintf(output, "%llx\n", OutData_comp_buf[i]);
		}
		//printf("\n");
	}

	fclose(output);
	fclose(input);
        fclose(show);
	exit(0L);
}
