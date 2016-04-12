// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vdecode_block.h"		// From Verilating "top.v"
#include <stdio.h>
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

Vdecode_block *top;			// Instantiation of module

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



        unsigned int out_buf[DCTSIZE2];
        unsigned int HuffBuff[DCTSIZE2];
        unsigned int offsetbuf;



        unsigned int comp_no; 
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
        unsigned char p_jinfo_comps_info_quant_tbl_no[NUM_COMPONENT];
        unsigned char p_jinfo_comps_info_dc_tbl_no[NUM_COMPONENT];
        unsigned char CurHuffReadBuf[57];
        


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
                {     sscanf(line, "%llx", &comp_no);
		}  
                else if(i<1+256)
                 {    sscanf(line, "%llx", &p_jinfo_quant_tbl_quantval[i-1]);  }
                else if(i<257+514)
                 {    sscanf(line, "%llx", &p_jinfo_dc_xhuff_tbl_huffval[i-257]);  }
                else if(i<771+514)
                 {    sscanf(line, "%llx", &p_jinfo_ac_xhuff_tbl_huffval[i-771]);  }
                else if(i<1285+2)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_ml[i-1285]);  }
                else if(i<1287+72)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_maxcode[i-1287]);  }
                else if(i<1359+72)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_mincode[i-1359]);  }
                else if(i<1431+72)
                 {    sscanf(line, "%llx", &p_jinfo_dc_dhuff_tbl_valptr[i-1431]);  }
                else if(i<1503+2)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_ml[i-1503]);  }
                else if(i<1505+72)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_maxcode[i-1505]);  }
                else if(i<1577+72)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_mincode[i-1577]);  }
                else if(i<1649+72)
                 {    sscanf(line, "%llx", &p_jinfo_ac_dhuff_tbl_valptr[i-1649]);  } 
                else if(i<1721+3)
                 {    sscanf(line, "%llx", &p_jinfo_comps_info_quant_tbl_no[i-1721]);  }
                else if(i<1724+3)
                 {    sscanf(line, "%llx", &p_jinfo_comps_info_dc_tbl_no[i-1724]);  }
                else if(i<1731+57)
                 {    sscanf(line, "%llx", &CurHuffReadBuf[i-1727]);  } 
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
	//printf("Start JPEG decode:");
	//for (i = 0; i < ARRAY_SIZE; i++) {
	//	printf("%d ", key[i]);
	//}
	//printf("\nValue Array:");
	//for (i = 0; i < ARRAY_SIZE; ++i) {
	//	printf("%d ", value[i]);
	//}
	//printf("\n");

	if (0 && env) {}	// Prevent unused variable warnings
	top = new Vdecode_block;		// Create instance of module

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
        top->comp_no = comp_no;


         

        unsigned char CurHuffReadBuf_address0;
        unsigned char CurHuffReadBuf_ce0;
        unsigned char CurHuffReadBuf_q0;
        unsigned int offset;
        unsigned char offset_ap_vld=0;
        unsigned char out_buf_address0;
        unsigned char out_buf_ce0 = 0;
        unsigned char out_buf_we0;
        unsigned int out_buf_d0;
        unsigned int out_buf_q0;
        unsigned char out_buf_address1;
        unsigned char out_buf_ce1 = 0;
        unsigned char out_buf_we1;
        unsigned int out_buf_d1;
        unsigned int out_buf_q1;
        unsigned char HuffBuff_address0;
        unsigned char HuffBuff_ce0 = 0;
        unsigned char HuffBuff_we0;
        unsigned int HuffBuff_d0;
        unsigned int HuffBuff_q0;
        unsigned char HuffBuff_address1;
        unsigned char HuffBuff_ce1 = 0;
        unsigned char HuffBuff_we1;
        unsigned int HuffBuff_d1;
        unsigned int HuffBuff_q1;
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
                   if(offset_ap_vld)
                       offsetbuf = offset;
 
                   if(out_buf_ce0 && out_buf_we0)
                       out_buf[out_buf_address0] = out_buf_d0;
                   
                   if(out_buf_ce0 && !out_buf_we0)
                       top->out_buf_q0 = out_buf[out_buf_address0];

                   if(out_buf_ce1 && out_buf_we1)
                       out_buf[out_buf_address1] = out_buf_d1;
                   
                   if(out_buf_ce1 && !out_buf_we1)
                       top->out_buf_q1 = out_buf[out_buf_address1];
 
                   if(HuffBuff_ce0 && HuffBuff_we0)
                       HuffBuff[HuffBuff_address0] = HuffBuff_d0;
                   
                   if(HuffBuff_ce0 && !HuffBuff_we0)
                       top->HuffBuff_q0 = HuffBuff[HuffBuff_address0];

                   if(HuffBuff_ce1 && HuffBuff_we1)
                       HuffBuff[HuffBuff_address1] = HuffBuff_d1;
                   
                   if(HuffBuff_ce1 && !HuffBuff_we1)
                       top->HuffBuff_q1 = HuffBuff[HuffBuff_address1];                          
                  
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
                    
                   if( CurHuffReadBuf_ce0)
                       top-> CurHuffReadBuf_q0 =  CurHuffReadBuf[ CurHuffReadBuf_address0];
 
               }

    
           if(!top->ap_clk)
               {
                   
                   offset = top->offset;
                   offset_ap_vld = top->offset_ap_vld;
                   out_buf_address0 = top->out_buf_address0;
                   out_buf_ce0 = top->out_buf_ce0;
                   out_buf_we0 = top->out_buf_we0;
                   out_buf_d1 = top->out_buf_d1;
                   out_buf_address1 = top->out_buf_address1;
                   out_buf_ce1 = top->out_buf_ce1;
                   out_buf_we1 = top->out_buf_we1;
                   out_buf_d1 = top->out_buf_d1;
                   HuffBuff_address0 = top->HuffBuff_address0;
                   HuffBuff_ce0 = top->HuffBuff_ce0;
                   HuffBuff_we0 = top->HuffBuff_we0;
                   HuffBuff_d1 = top->HuffBuff_d1;
                   HuffBuff_address1 = top->HuffBuff_address1;
                   HuffBuff_ce1 = top->HuffBuff_ce1;
                   HuffBuff_we1 = top->HuffBuff_we1;
                   HuffBuff_d1 = top->HuffBuff_d1;
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
                   CurHuffReadBuf_address0 = top->CurHuffReadBuf_address0;
                   CurHuffReadBuf_ce0 = top->CurHuffReadBuf_ce0;

 
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
         
       
                   if(top->offset_ap_vld)
                       offsetbuf = top->offset;
 
                   if(top->out_buf_ce0 && top->out_buf_we0)
                       out_buf[top->out_buf_address0] = top->out_buf_d0; 

                   if(top->out_buf_ce1 && top->out_buf_we1)
                       out_buf[top->out_buf_address1] = top->out_buf_d1;

                   if(top->HuffBuff_ce0 && top->HuffBuff_we0)
                       HuffBuff[top->HuffBuff_address0] = top->HuffBuff_d0;

                   if(top->HuffBuff_ce1 && top->HuffBuff_we1)
                       HuffBuff[top->HuffBuff_address1] = top->HuffBuff_d1;

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
		//VL_PRINTF ("%s finished in %d cycles\n", KERNEL_NAME, (main_time - 10)/2);
		//printf("Searched value %d for key %d\n", top->ap_return, x);
		fprintf(output, "%d\n", (main_time - 10)/2);
                		//printf("Sorted Array:");
                fprintf(output, "%llx\n",offsetbuf );
                for(i=0;i<64;i++)
                fprintf(output, "%llx\n",out_buf[i] );
                for(i=0;i<64;i++)
                fprintf(output, "%llx\n",HuffBuff[i] ); 

		//printf("\n");
	}

	fclose(output);
	fclose(input);
        fclose(show);
	exit(0L);
}
