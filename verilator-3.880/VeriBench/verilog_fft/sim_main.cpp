// DESCRIPTION: Verilator Example: Top level main for invoking model
//
// Copyright 2003-2015 by Wilson Snyder. This program is free software; you can
// redistribute it and/or modify it under the terms of either the GNU
// Lesser General Public License Version 3 or the Perl Artistic License
// Version 2.0.

#include <verilated.h>		// Defines common routines
#include "Vfft_float.h"		// From Verilating "top.v"
#if VM_TRACE
# include <verilated_vcd_c.h>	// Trace file format header
#endif

#include <stdio.h>
#define tsize 4096
#define ARRAY_SIZE tsize*2
#define array_size tsize*2
#define KERNEL_NAME "encrypt"

Vfft_float *top;			// Instantiation of module

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

        int buff[ARRAY_SIZE];
        int buf[array_size];
	while (fgets(line, sizeof(line), input))
	{
		if (i < ARRAY_SIZE) {
			sscanf(line, "%d", &buff[i]);
		} else {
			printf("Invalid input for %s, please check\n", KERNEL_NAME);
			exit(1);
		}
		i++;
	}

	/*printf("Input:");
	for (i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", buff[i]);
	}
	printf("\n");
        */
	if (0 && env) {}	// Prevent unused variable warnings	// Prevent unused variable warnings
	top = new Vfft_float;		// Create instance of module

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
        top->m = 84;
        top->n = 20;
        unsigned int RealIn_address0,  RealIn_q0, ImagIn_address0, ImagIn_q0;
        unsigned int  ImagOut_address1, ImagOut_d1, ImagOut_q1; 
        unsigned int  ImagOut_address0, ImagOut_d0, ImagOut_q0;                
        unsigned int  RealOut_address1,  RealOut_d1,RealOut_q1;               
        unsigned int RealOut_address0,  RealOut_d0, RealOut_q0;         
      
 

        unsigned char ImagIn_ce0 =0;

        unsigned char RealOut_ce0 = 0;
        unsigned char RealOut_we0;
        unsigned char RealOut_ce1 = 0;
        unsigned char RealOut_we1;


        unsigned char ImagOut_ce0 = 0;
        unsigned char ImagOut_we0;
        unsigned char ImagOut_ce1 = 0；
        unsigned char ImagOut_we1；

         unsigned char RealIn_ce0 =0 ;
 


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
                if ( RealIn_ce0 == 1 )
                         top->RealIn_q0 = buff[RealIn_address0];

                if ( ImagIn_ce0 == 1 )
                         top->ImagIn_q0 = buff[tsize+ImagIn_address0];
                         
		if ( RealOut_ce0 == 1 && RealOut_we0)
                         buf[RealOut_address0]= RealOut_d0;

                if ( RealOut_ce1 == 1 && RealOut_we1)
                         buf[RealOut_address1]= RealOut_d1;

                if ( ImagOut_ce0 == 1 && ImagOut_we0)
                         buf[tsize+ImagOut_address0]= ImagOut_d0;

                if ( ImagOut_ce1 == 1 && ImagOut_we1)
                         buf[tsize+ImagOut_address1]= ImagOut_d1;

      		if ( RealOut_ce0 == 1 && !RealOut_we0)
                         top->RealOut_q0 = buf[RealOut_address0];

                if ( RealOut_ce1 == 1 && !RealOut_we1)
                         top->RealOut_q1 = buf[RealOut_address1];

                if ( ImagOut_ce0 == 1 && !ImagOut_we0)
                         top->ImagOut_q0 = buf[tsize+ImagOut_address0] ;

                if ( ImagOut_ce1 == 1 && !ImagOut_we1)
                         top->ImagOut_q1 = buf[tsize+ImagOut_address1];

  }        

                 if(!top->ap_clk)

	        {
			RealIn_address0 = top->RealIn_address0;
			RealIn_ce0 = top->RealIn_ce0;
			RealIn_q0= top->RealIn_q0;
			ImagIn_address0= top->ImagIn_address0;
			ImagIn_ce0= top->ImagIn_ce0;
			ImagIn_q0= top->ImagIn_q0;
			RealOut_address0= top->RealOut_address0;
			RealOut_ce0= top->RealOut_ce0;
			RealOut_we0= top->RealOut_we0;
			RealOut_d0= top->RealOut_d0;
			RealOut_q0= top->RealOut_q0;
			RealOut_address1= top->RealOut_address1;
			RealOut_ce1= top->RealOut_ce1;
			RealOut_we1= top->RealOut_we1;
			RealOut_d1= top->RealOut_d1;
			RealOut_q1= top->RealOut_q1;
			ImagOut_address0= top->ImagOut_address0;
			ImagOut_ce0= top->ImagOut_ce0;
			ImagOut_we0= top->ImagOut_we0;
			ImagOut_d0= top->ImagOut_d0;
			ImagOut_q0= top->ImagOut_q0;
			ImagOut_address1= top->ImagOut_address1;
			ImagOut_ce1= top->ImagOut_ce1;
			ImagOut_we1= top->ImagOut_we1;
			ImagOut_d1= top->ImagOut_d1;
			ImagOut_q1= top->ImagOut_q1;

                 }
            //      fprintf(ss, "%d  %d: \n",top->ap_clk, main_time); 
            //      fprintf(ss,"%d, %d, %d\n",top->buff_ce0,top->buff_q0, top->buff_address0);
            //      fprintf(ss,"%d, %d, %d, %d\n",top->y_ce0, top->y_we0,top->y_d0,top->y_address0);
            //      fprintf(ss,"%d, %d, %d\n",top->buff_ce1,top->buff_q1, top->buff_address1);
            //      fprintf(ss,"%d, %d, %d, %d\n",top->y_ce1, top->y_we1,top->y_d1,top->y_address1);
		// Read outputs
		/*VL_PRINTF ("[%" VL_PRI64 "d] %x %x %x %d %d %d\n",
		           main_time, top->ap_clk, top->ap_done, top->Array_r_d0,
		           top->Array_r_q0, top->Array_r_d1, top->Array_r_q1);*/

		top->ap_clk = !top->ap_clk;
		main_time++;		// Time passes...
	}

		if ( top->RealOut_ce0 == 1 && top->RealOut_we0)
                         buf[top->RealOut_address0]= top->RealOut_d0;

                if ( top->RealOut_ce1 == 1 && top->RealOut_we1)
                         buf[top->RealOut_address1]= top->RealOut_d1;

                if ( top->ImagOut_ce0 == 1 && top->ImagOut_we0)
                         buf[tsize+top->ImagOut_address0]= top->ImagOut_d0;

                if ( top->ImagOut_ce1 == 1 && top->ImagOut_we1)
                         buf[tsize+top->ImagOut_address1]= top->ImagOut_d1;     

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
			//printf("%d ", buf[i]);
			fprintf(output, "%d\n", buf[i]);
		}
		//printf("\n");
	}

	fclose(output);
        fclose(input); 
        fclose (ss);

	exit(0L);
}
