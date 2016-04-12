// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vbinary_search.h"		// From Verilating "top.v"
#include <stdio.h>
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

Vbinary_search *top;			// Instantiation of module

vluint64_t main_time = 0;	// Current simulation time (64-bit unsigned)

#define ARRAY_SIZE 15
#define KERNEL_NAME "binary search"

double sc_time_stamp () {	// Called by $time in Verilog
	return main_time;		// Note does conversion to real, to match SystemC
}

int main(int argc, char **argv, char **env) {
	FILE *input;
	FILE *output;
	if (argc < 3)
	{
		VL_PRINTF("Invoking of %s kernel requires at least 2 arguments\n", KERNEL_NAME);
		exit(1);
	}
	input = fopen(argv[1], "r");
	output = fopen(argv[2], "w");

	char line[256];
	int i = 0;

	unsigned int x;
	unsigned int key[ARRAY_SIZE];
	unsigned int value[ARRAY_SIZE];
	while (fgets(line, sizeof(line), input))
	{
		if (i < 2 * ARRAY_SIZE && (~i%2)) {
			sscanf(line, "%x", &key[ i /2]);
		} else if (i < 2 * ARRAY_SIZE) {
			sscanf(line, "%x", &value[(i-1)/2]);
		} else if (i== 2* ARRAY_SIZE)
                      {   sscanf(line, "%x", &x); 
                  }    
                   else {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		}
		i++;
	}

	printf("Searching %d...\nKey Array:", x);
	for (i = 0; i < ARRAY_SIZE; ++i) {
		printf("%d ", key[i]);
	}
	printf("\nValue Array:");
	for (i = 0; i < ARRAY_SIZE; ++i) {
		printf("%d ", value[i]);
	}
	printf("\n");

	if (0 && env) {}	// Prevent unused variable warnings
	top = new Vbinary_search;		// Create instance of module

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

	top->x = x;
	top->data_key_q0 = 0;
	top->data_value_q0 = 0;

            
        unsigned char data_key_address0;
        unsigned char data_key_ce0 = 0;
        unsigned int data_key_q0;
        unsigned char data_value_address0;
        unsigned char data_value_ce0 = 0;
        unsigned int data_value_q0;

	while (main_time < 60 && !top->ap_done && !Verilated::gotFinish()) {

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



		// Read outputs
		/*VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x %d\n",
		           main_time, top->ap_clk, top->ap_done, top->ap_return);*/



               if(top->ap_clk)

         {            
		if (data_key_ce0 == 1)
			top->data_key_q0 = key[data_key_address0];
		if (data_value_ce0 == 1)
			top->data_value_q0 = value[data_value_address0];
          }        

                 if(!top->ap_clk)

	        {
                  data_key_address0 = top->data_key_address0; 
                  data_key_ce0 = top->data_key_ce0;
                  data_value_address0 = top->data_value_address0; 
                  data_value_ce0 = top->data_value_ce0;
                 }

		top->ap_clk = !top->ap_clk;
		main_time++;		// Time passes...
	}

	top->final();

#if VM_TRACE
	if (tfp) tfp->close();
#endif

	if (!top->ap_done) {
		VL_PRINTF ("A Test failed\n");
		abort();
	} else {
		VL_PRINTF ("%s finished in %d cycles\n", KERNEL_NAME, (main_time - 10)/2);
		printf("Searched value %d for key %d\n", top->ap_return, x);
		fprintf(output, "%d\n", (main_time - 10)/2);
		fprintf(output, "%x\n", top->ap_return);
	}

	fclose(output);
	fclose(input);
	exit(0L);
}
