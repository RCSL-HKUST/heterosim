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

double sc_time_stamp () {	// Called by $time in Verilog
	return main_time;		// Note does conversion to real, to match SystemC
}

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

	//int x;
	int buff[ARRAY_SIZE];
	while (fgets(line, sizeof(line), input))
	{
		if (i <  ARRAY_SIZE) {
                      //    printf("%s",line);
                         sscanf(line, "%d", &buff[i]);
                        // printf("%d, %d\n",buff[i],i); 
		}   
                 else {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		}
		i++;
	}
         
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
       

        unsigned int x_address0,x_address1;
        unsigned int x_d0,x_d1,x_q0,x_q1;
        unsigned char x_ce0,x_ce1,x_we0,x_we1;
	//top->x = x;
        top->m = 16000;
        top->n = 16000;  
        x_ce0 = 0;
        x_ce1 = 0;
       


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
          
              {if (x_ce0 == 1 && !x_we0)
			top->x_q0 = buff[x_address0];
		if (top->x_ce0 == 1 && top->x_we0)
			buff[top->x_address0] = top->x_d0;
		if (x_ce1 == 1 && !x_we1)
			top->x_q1 = buff[x_address1];
		if (top->x_ce1 == 1 && top->x_we1)
			buff[top->x_address1] = top->x_d1;
               }
           //    if (top->x_ce0 == 1 && !top->x_we0)
		//	top->x_q0 = buff[top->x_address0];
		//if (x_ce0 == 1 && x_we0)
		//	buff[x_address0] = x_d0;
	//	if (top->x_ce1 == 1 && !top->x_we1)
	//		top->x_q1 = buff[top->x_address1];
		//if (x_ce1 == 1 && x_we1)
		//	buff[x_address1] = x_d1;
                if (top->x_ce0 == 1 && top->x_we0)
			buff[top->x_address0] = top->x_d0;  
            	if (top->x_ce1 == 1 && top->x_we1)
			buff[top->x_address1] = top->x_d1;
    
           if(!top->ap_clk)
               {
                 x_ce0= top->x_ce0;
                 x_we0= top->x_we0;
                 x_address0= top->x_address0;
                 x_q0 = top->x_q0;
                 x_d0 = top->x_d0;
                 x_ce1= top->x_ce1;
                 x_we1= top->x_we1;
                 x_address1= top->x_address1;
                 x_q1 = top->x_q1;
                 x_d1 = top->x_d1;  
 
                }
           if((top->x_ce0|top->x_ce1) && top->ap_clk)
             { 
                fprintf(show,"%d %d :\n", main_time, top->ap_clk);
                fprintf(show,"%d %d %d %d %d\n", top->x_ce0,top->x_we0,top->x_address0, top->x_q0, top->x_d0);
                fprintf(show,"%d %d %d %d %d\n", top->x_ce1,top->x_we1,top->x_address1, top->x_q1, top->x_d1);
	     }
                // Read outputs
		/*VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x %d\n",
		           main_time, top->ap_clk, top->ap_done, top->ap_return);*/

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
		//printf("Searched value %d for key %d\n", top->ap_return, x);
		fprintf(output, "%d\n", (main_time - 10)/2);
                		//printf("Sorted Array:");
		for (i = 0; i < ARRAY_SIZE; i++) {
			//printf("%d ", buff[i]);
		 fprintf(output, "%d\n", buff[i]);
		}
		//printf("\n");
	}

	fclose(output);
	fclose(input);
        fclose(show);
	exit(0L);
}
