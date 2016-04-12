// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vinsertsort.h"		// From Verilating "top.v"
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

#include <stdio.h>
#define ARRAY_SIZE 11
#define KERNEL_NAME "insertsort"

Vinsertsort *top;			// Instantiation of module

vluint64_t main_time = 0;	// Current simulation time (64-bit unsigned)

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

	int array[ARRAY_SIZE];
	while (fgets(line, sizeof(line), input))
	{
		if (i < ARRAY_SIZE) {
			sscanf(line, "%llx", &array[i]);
		} else {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		}
		i++;
	}

	printf("Sorting Array:");
	for (i = 0; i < ARRAY_SIZE; ++i) {
		printf("%d ", array[i]);
	}
	printf("\n");

	if (0 && env) {}	// Prevent unused variable warnings	// Prevent unused variable warnings
	top = new Vinsertsort;		// Create instance of module

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

	top->a_address0 = 0;
	top->a_address1 = 0;

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

		if (top->a_ce0 == 1 && !top->a_we0)
			top->a_q0 = array[top->a_address0];
		if (top->a_ce0 == 1 && top->a_we0)
			array[top->a_address0] = top->a_d0;
		if (top->a_ce1 == 1 && !top->a_we1)
			top->a_q1 = array[top->a_address1];
		if (top->a_ce1 == 1 && top->a_we1)
			array[top->a_address1] = top->a_d1;

		// Read outputs
		/*VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x %d %d %d\n",
		           main_time, top->ap_clk, top->ap_done, top->a_d0,
		           top->a_q0, top->a_d1, top->a_q1);*/

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
		VL_PRINTF ("%s finished in %d cycles\n", KERNEL_NAME, main_time - 10);
		printf("Sorted Array:");
		fprintf(output, "%d\n", main_time - 10);
		for (i = 0; i < ARRAY_SIZE; ++i) {
			printf("%d ", array[i]);
			fprintf(output, "%llx\n", array[i]);
		}
		printf("\n");
	}

	fclose(output);

	exit(0L);
}
