// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vbit_count.h"		// From Verilating "top.v"
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

#include <stdio.h>
#define ARRAY_SIZE 1
#define array_size 1
#define KERNEL_NAME "bit_count"

Vbit_count *top;			// Instantiation of module

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

        unsigned long long buff;
        unsigned int ret;
	while (fgets(line, sizeof(line), input))
	{
		if (i < ARRAY_SIZE) {
			sscanf(line, "%llx", &buff);
		} else {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		}
		i++;
	}

	//printf("Input:");
	//for (i = 0; i < ARRAY_SIZE; i++) {
	//	printf("%d ", buff[i]);
	//}
	//printf("\n");

	if (0 && env) {}	// Prevent unused variable warnings	// Prevent unused variable warnings
	top = new Vbit_count;		// Create instance of module

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
        top->mm = 8;
        top->nn = 4;
        top->in_r = buff;
        unsigned int out_r;
        unsigned char out_r_ap_vld;


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
                if(out_r_ap_vld)
                         ret = out_r;

  }        

                 if(!top->ap_clk)

	        {
                    out_r = top->out_r;
                    out_r_ap_vld = top->out_r_ap_vld;

                 }
                //  fprintf(ss, "%d  %d: \n",top->ap_clk, main_time); 
                //  fprintf(ss,"%d, %d, %d, %d, %d\n",top->buff_ce0,top->buff_we0,top->buff_q0,top->buff_d0, top->buff_address0);
                //  fprintf(ss,"%d, %d, %d, %d, %d\n",top->buff_ce1,top->buff_we1,top->buff_q1,top->buff_d1, top->buff_address1);
		// Read outputs
		/*VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x %d %d %d\n",
		           main_time, top->ap_clk, top->ap_done, top->Array_r_d0,
		           top->Array_r_q0, top->Array_r_d1, top->Array_r_q1);*/

		top->ap_clk = !top->ap_clk;
		main_time++;		// Time passes...
	}

                  if(top->out_r_ap_vld)
                         ret = top->out_r;

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
		for (i = 0; i < array_size; i++) {
			//printf("%d ", buff[i]);
			fprintf(output, "%llx\n", ret);
		}
		//printf("\n");
	}

	fclose(output);
        fclose(input); 
        fclose (ss);

	exit(0L);
}
