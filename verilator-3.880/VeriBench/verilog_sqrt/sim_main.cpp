// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vsqrtfcn.h"		// From Verilating "top.v"
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

#include <stdio.h>
#define KERNEL_NAME "sqrtfcn"

Vsqrtfcn *top;			// Instantiation of module

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
	float val_r;
	while(fgets(line, sizeof(line), input))
	{
		if (i == 0) {
			sscanf(line, "%f", &val_r);
		} else {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		}
		i++;
	}

	printf("Calculating sqrt of %f\n", val_r);

    if (0 && env) {}	// Prevent unused variable warnings	// Prevent unused variable warnings
    top = new Vsqrtfcn;		// Create instance of module

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
    
	top->val_r = r;

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

	// Read outputs
	VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x\n",
		   main_time, top->ap_clk, top->ap_done, top->ap_return);

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
		VL_PRINTF ("All Tests passed\n");
		printf("Sqrt of %f is %f\n", val_r, top->ap_return);
    }

    exit(0L);
}
