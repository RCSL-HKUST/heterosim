// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vfind.h"		// From Verilating "top.v"
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

#include <stdio.h>
#define tsize 4096
#define ARRAY_SIZE tsize*2
#define array_size tsize*2
#define KERNEL_NAME "string"

Vfind *top;			// Instantiation of module

vluint64_t main_time = 0;	// Current simulation time (64-bit unsigned)

double sc_time_stamp () {	// Called by $time in Verilog
	return main_time;		// Note does conversion to real, to match SystemC
}

int main(int argc, char **argv, char **env) {
	FILE *input;
	FILE *output;
        FILE *ss;
	if (argc < 3)
	{
		VL_PRINTF("Invoking of %s kernel requires at least 2 arguments\n", KERNEL_NAME);
		exit(1);
	}
	input = fopen(argv[1], "r");
	output = fopen(argv[2], "w");
        ss = fopen("show_delay.txt","w");
	char line[256];
	int i = 0;
        
         unsigned char st1[15];
         unsigned char st2[50];
         unsigned int limit;
         unsigned int len;
         unsigned int num;
         unsigned int ret;
         

      // for(i=0;i<8;i++)
      //  printf("%x",ivec[i]);
      //  printf("\n"); 
       
	while (fgets(line, sizeof(line), input))
	{      if(i<15)
                  {  sscanf(line, "%llx", &st1[i]);
                     }  
               else if (i<15+50)
                 {   sscanf(line, "%llx", &st2[i-15]);
                     }     
		else if (i < (15+50+1)) {
			sscanf(line, "%llx", &limit);
		} else if(i< (15+50+2))
                    {   sscanf(line, "%llx", &len);
                     }           
                      else
                     {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		     }
		     i++;
	}
        //for(i=0;i<8;i++)
        //printf("%x",ivec[i]); 
        //printf("\n");
	/*printf("Input:");
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", buff[i]);
	}
	printf("\n");
        */
	if (0 && env) {}	// Prevent unused variable warnings	// Prevent unused variable warnings
	top = new Vfind;		// Create instance of module

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
        top->limit = limit;
        top->len = len; 

        unsigned char find_str_address0;
        unsigned char find_str_ce0;
        unsigned char find_str_q0;
        unsigned char search_str_address0;
        unsigned char search_str_ce0;
        unsigned char search_str_q0;

        search_str_ce0 = 0;
        find_str_ce0 = 0; 
 
 


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
                if ( search_str_ce0 == 1 )
                         top->search_str_q0 = st2[search_str_address0];

                if ( find_str_ce0 == 1 )
                         top->find_str_q0 = st1[find_str_address0];
                        

  }        

                 if(!top->ap_clk)

	        {
			search_str_address0 = top->search_str_address0;
			search_str_ce0 = top->search_str_ce0;
			search_str_q0= top->search_str_q0;
			find_str_address0= top->find_str_address0;
			find_str_ce0= top->find_str_ce0;
			find_str_q0= top->find_str_q0;
                       

                 }

                 //if(top->ivec_we0 | top->ivec_we1 | top->out_r_we0)
                  {fprintf(ss,"%x  %x:\n",top->ap_clk, main_time); 
                  fprintf(ss,"param : %x, %x, %x\n",top->limit,top->len, top->ap_return);
                  fprintf(ss,"search: %x, %x, %x\n",top->search_str_address0,top->search_str_q0, top->search_str_ce0);
                  fprintf(ss,"find  : %x, %x, %x\n",top->find_str_address0,top->find_str_q0, top->find_str_ce0); 
		}// Read outputs
		/*VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x %d %d %d\n",
		           main_time, top->ap_clk, top->ap_done, top->Array_r_d0,
		           top->Array_r_q0, top->Array_r_d1, top->Array_r_q1);*/

		top->ap_clk = !top->ap_clk;
		main_time++;		// Time passes...
	}

         
                ret = top->ap_return; 

	top->final();

#if VM_TRACE
	if (tfp) tfp->close();
#endif

	if (!top->ap_done) {
		VL_PRINTF ("A Test failed\n");
		abort();
	} else {
		//VL_PRINTF ("%s finished in %d cycles\n", KERNEL_NAME, (main_time - 10)/2);
		//printf("output:");
		fprintf(output, "%d\n", (main_time - 10)/2);
                fprintf(output, "%llx\n", ret);

		//printf("\n");
	}

	fclose(output);
        fclose(input); 
        fclose (ss);

	exit(0L);
}
