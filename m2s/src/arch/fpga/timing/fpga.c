/*
 *  Multi2Sim
 *  Copyright (C) 2012  Rafael Ubal (ubal@ece.neu.edu)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <arch/fpga/emu/kernel.h>
#include <arch/fpga/emu/emu.h>
#include <arch/fpga/emu/task.h>
#include <lib/esim/esim.h>
#include <lib/esim/trace.h>
#include <lib/mhandle/mhandle.h>
#include <lib/util/config.h>
#include <lib/util/debug.h>
#include <lib/util/file.h>
#include <lib/util/linked-list.h>
#include <lib/util/misc.h>
#include <lib/util/string.h>
#include <lib/util/timer.h>
#include <mem-system/memory.h>

#include "fpga.h"
#include "mem-config.h"
/*
 * Global variables
 */

/* Help message */

char *fpga_config_help = "The FPGA configuration file is a plain text INI file, defining\n"
		"the parameters of the FPGA model used for a detailed (architectural) simulation.\n"
		"This configuration file is passed to Multi2Sim with option '--fpga-config <file>,\n"
		"which must be accompanied by option '--fpga-sim detailed'.\n"
		"\n"
		"The following is a list of the sections allowed in the FPGA configuration file,\n"
		"along with the list of variables for each section.\n"
		"\n"
		"Section '[ General ]':\n"
		"\n"
		"  Frequency = <freq> (Default = 1000 MHz)\n"
		"      Frequency in MHz for the fpga. Value between 1 and 10K.\n"
		"  ClbArrayWidth = <num_columns> (Default = 20)\n"
		"  ClbArrayLength = <num_rows> (Default = 20)\n"
		"\n"

		"Section '[ Queues ]':\n"
		"\n"
		"  KernelQueueSize = <max_tasks> (Default = 10)\n"
		"  ResultQueueSize = <max_finished_tasks> (Default = 10)\n"
		"\n";

/* Trace */
int fpga_trace_category;

/* Configuration file and parameters */

char *fpga_config_file_name = "";
char *fpga_report_file_name = "";

int fpga_frequency = 375;
int fpga_clb_array_width = 20;
int fpga_clb_array_length = 20;

int fpga_domain_index;

int fpga_task_qsize = 10;
int fpga_result_qsize = 10;

/*
 * Public Functions
 */

/* Version of fpga trace producer.
 * See 'src/visual/fpga/fpga.c' for fpga trace consumer. */

#define FPGA_TRACE_VERSION_MAJOR		1
#define FPGA_TRACE_VERSION_MINOR		1

void FPGAReadConfig(void) {
	struct config_t *config;
	char *section;

	/* Open file */
	config = config_create(fpga_config_file_name);
	if (*fpga_config_file_name)
		config_load(config);

	/* General configuration */

	section = "General";

	fpga_frequency = config_read_int(config, section, "Frequency", fpga_frequency);
	if (!IN_RANGE(fpga_frequency, 1, ESIM_MAX_FREQUENCY))
		fatal("%s: invalid value for 'Frequency'.", fpga_config_file_name);

	fpga_clb_array_width = config_read_int(config, section, "ClbArrayWidth", fpga_clb_array_width);

	fpga_clb_array_length = config_read_int(config, section, "ClbArrayLength",
			fpga_clb_array_length);


	/* Section '[ Queues ]' */

	section = "Queues";

	fpga_task_qsize = config_read_int(config, section, "KernelQueueSize", 10);

	fpga_result_qsize = config_read_int(config, section, "ResultQueueSize", 10);

	/* Close file */
	config_check(config);
	config_free(config);
}

void FPGAInit(void) {
	/* Classes */
	CLASS_REGISTER(FPGA);

	/* Trace */
	fpga_trace_category = trace_new_category();
}

/* Finalization */
void FPGADone(void) {
}

/*
 * Class 'FPGA'
 */

CLASS_IMPLEMENTATION(FPGA);

void FPGACreate(FPGA *self, FPGAEmu *emu) {

	/*char name[MAX_STRING_SIZE];*/

	/* Parent */
	TimingCreate(asTiming(self));

	/* Frequency */
	asTiming(self)->frequency = fpga_frequency;
	asTiming(self)->frequency_domain = esim_new_domain(fpga_frequency);
	fpga_domain_index = asTiming(self)->frequency_domain;

	/* Initialize */
	self->emu = emu;
	emu->fpga = self;

	/* Virtual functions */
	asObject(self)->Dump = FPGADump;
	asTiming(self)->DumpSummary = FPGADumpSummary;
	asTiming(self)->Run = FPGARun;
	asTiming(self)->MemConfigCheck = FPGAMemConfigCheck;
	asTiming(self)->MemConfigDefault = FPGAMemConfigDefault;
	asTiming(self)->MemConfigParseEntry = FPGAMemConfigParseEntry;
	asFPGA(self)->active_cycle=0;
	asFPGA(self)->cpu_cycle=0; 

	/* Trace */
	fpga_trace_header("fpga.init version=\"%d.%d\" width=%d length=%d height=%d\n",
			FPGA_TRACE_VERSION_MAJOR, FPGA_TRACE_VERSION_MINOR, fpga_clb_array_width,
			fpga_clb_array_length);

	EV_FPGA_LOAD_FINISH = esim_register_event_with_name(fpga_task_handler,
			asTiming(self)->frequency_domain, "fpga_task_finish");
	EV_FPGA_STORE_FINISH = esim_register_event_with_name(fpga_task_handler,
			asTiming(self)->frequency_domain, "fpga_task_finish");
	EV_FPGA_EXECUTE_FINISH = esim_register_event_with_name(fpga_task_handler,
			asTiming(self)->frequency_domain, "fpga_task_finish");
	EV_FPGA_KERNEL_LOAD_ONCHIP = esim_register_event_with_name(fpga_kernel_reconfigure_handler,
			asTiming(self)->frequency_domain, "fpga_kernel_load_onchip");
	EV_FPGA_KERNEL_OFFLOAD = esim_register_event_with_name(fpga_kernel_reconfigure_handler,
			asTiming(self)->frequency_domain, "fpga_kernel_offload");
	//EV_FPGA_LOAD_START = esim_register_event_with_name(fpga_task_handler,
	//		asTiming(self)->frequency_domain, "fpga_task_start");
}

void FPGADestroy(FPGA *self) {
	/*int i;*/
	FILE *f;

	/* Dump report */
	f = file_open_for_write(fpga_report_file_name);
	if (f) {
		FPGADumpReport(self, f);
		fclose(f);
	}
}

void FPGADump(Object *self, FILE *f) {
	FPGA *fpga = asFPGA(self);

	/*int i;
	 int j;*/

	/* General information */
	fprintf(f, "\n");
	fprintf(f, "LastDump = %lld   ; Cycle of last dump\n", fpga->last_dump);
	fprintf(f, "TPCLastDump = %.4g   ; TPC since last dump\n",
			asTiming(fpga)->cycle - fpga->last_dump > 0 ?
					(double) (fpga->num_committed_tasks - fpga->last_finished_task)
							/ (asTiming(fpga)->cycle - fpga->last_dump) :
					0);
	fprintf(f, "\n");

	/* Register last dump */
	fpga->last_dump = asTiming(fpga)->cycle;

	/* End */
	fprintf(f, "\n\n");
}



void FPGADumpSummary(Timing *self, FILE *f)
{
	FPGA *fpga = asFPGA(self);
	Timing *timing = asTiming(self);
	FPGAEmu *emu = fpga->emu;
	FPGAKernel *kernel;

    
    DOUBLE_LINKED_LIST_FOR_EACH(emu, kernel, kernel)
	{
    fprintf(f, "[ Kernel %d ]\n",kernel->kid);  
    fprintf(f, "KernelName is %s\n",kernel->kernel_name);  
	fprintf(f, "ExecutionCycles = %lld\n", kernel->execycle);
	fprintf(f, "LoadDataCycles = %lld\n", kernel->loadcycle);
	fprintf(f, "StoreDataCycles = %lld\n", kernel->storecycle);
	fprintf(f, "ExecutionTimes = %lld\n", kernel->exetimes);
	}     


    fprintf(f, "\n\n");    
    fprintf(f, "FPGAActiveCycles = %lld\n", fpga-> active_cycle);    
    fprintf(f, "CPUActiveCycles = %lld\n", fpga-> cpu_cycle); 
	/* Call parent */
	TimingDumpSummary(self, f);
   
}

/* Dump the FPGA configuration */
static void FPGADumpConfig(FILE *f) {
	/* General configuration */
	fprintf(f, "[ Config.General ]\n");
	fprintf(f, "Frequency = %d\n", fpga_frequency);
	fprintf(f, "Width = %d\n", fpga_clb_array_width);
	fprintf(f, "Length = %d\n", fpga_clb_array_length);
	fprintf(f, "\n");

	/* Queues */
	fprintf(f, "[ Config.Queues ]\n");
	fprintf(f, "TaskQueueSize = %d\n", fpga_task_qsize);
	fprintf(f, "ResultQueueSize = %d\n", fpga_result_qsize);
	fprintf(f, "\n");

	/* End of configuration */
	fprintf(f, "\n");

}

void FPGADumpReport(FPGA *self, FILE *f) {
	FPGAEmu *emu = self->emu;

	long long now;

	/*int i;
	 int j;*/

	/* Get FPGA timer value */
	now = m2s_timer_get_value(asEmu(emu)->timer);

	/* Dump FPGA configuration */
	fprintf(f, ";\n; FPGA Configuration\n;\n\n");
	FPGADumpConfig(f);

	/* Report for the complete processor */
	fprintf(f, ";\n; Simulation Statistics\n;\n\n");
	fprintf(f, "; Global statistics\n");
	fprintf(f, "[ Global ]\n\n");
	fprintf(f, "Cycles = %lld\n", asTiming(self)->cycle);
	fprintf(f, "Time = %.2f\n", (double) now / 1000000);
	fprintf(f, "CyclesPerSecond = %.0f\n",
			now ? (double) asTiming(self)->cycle / now * 1000000 : 0.0);
	fprintf(f, "MemoryUsed = %lu\n", (long) mem_mapped_space);
	fprintf(f, "MemoryUsedMax = %lu\n", (long) mem_max_mapped_space);
	fprintf(f, "\n");

}

int FPGARun(Timing *self) {
	FPGA *fpga = asFPGA(self);
	FPGAEmu *emu = fpga->emu;

	FPGAKernel *kernel;

	int kernel_running = FALSE;

	/* Stop if maximum number of cycles exceeded */
	if (fpga_emu_max_cycles && self->cycle >= fpga_emu_max_cycles)
		{esim_finish = esim_finish_fpga_max_cycles;
         return kernel_running;}

	/* Stop if any previous reason met */
	if (esim_finish)
		return FALSE;

	/* Stop if no more cpu request */
	if(!emu->cpu_running)
		return FALSE;

	/* One more cycle of fpga timing simulation */
	self->cycle++;

	DOUBLE_LINKED_LIST_FOR_EACH(emu, kernel, kernel)
	{
		kernel_running = kernel_running | FPGAKernelExecute(kernel);
	}

	/* Process host threads generating events */
	//FPGAProcessEvents(emu);
	/* Still simulating */
	if(kernel_running)
		 fpga->active_cycle ++;
	else fpga-> cpu_cycle ++;	

	return TRUE;
}

