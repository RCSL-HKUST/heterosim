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

#include <errno.h>
#include <poll.h>
#include <unistd.h>

#include <arch/fpga/timing/fpga.h>
#include <driver/glew/glew.h>
#include <driver/glu/glu.h>
#include <driver/glut/glut.h>
#include <driver/opengl/opengl.h>
#include <lib/esim/esim.h>
#include <lib/mhandle/mhandle.h>
#include <lib/util/config.h>
#include <lib/util/debug.h>
#include <lib/util/linked-list.h>
#include <lib/util/misc.h>
#include <lib/util/string.h>
#include <mem-system/memory.h>

#include "kernel.h"
#include "emu.h"
#include "loader.h"
#include "task.h"

/*
 * Global variables
 */

 int EV_FPGA_LOAD_FINISH;
 int EV_FPGA_STORE_FINISH;
 int EV_FPGA_EXECUTE_FINISH; 

/* Configuration parameters */
long long fpga_emu_max_inst = 0;
long long fpga_emu_max_cycles = 0;
char fpga_emu_last_inst_bytes[20];
int fpga_emu_last_inst_size = 0;
int fpga_emu_process_prefetch_hints = 0;

FPGAEmu *fpga_emu;

/*
 * Class 'FPGAEmu'
 */

CLASS_IMPLEMENTATION(FPGAEmu);

void FPGAEmuCreate(FPGAEmu *self) {
	/* Parent */
	EmuCreate(asEmu(self), "fpga");

	/* Initialize */
	self->current_pid = 100;
	pthread_mutex_init(&self->process_events_mutex, NULL);
	self->cpu_running = 1;

	/* Virtual functions */
	asObject(self)->Dump = FPGAEmuDump;
	asEmu(self)->DumpSummary = FPGAEmuDumpSummary;
	asEmu(self)->Run = FPGAEmuRun;
	asEmu(self)->instructions = 1;
}

void FPGAEmuDestroy(FPGAEmu *self) {
	FPGAKernel *kernel;

	/* Finish all contexts */
	for (kernel = self->kernel_list_head; kernel;
			kernel = kernel->kernel_list_next)
		if (FPGAKernelGetState(kernel, FPGAKernelRunning))
			FPGAKernelFinish(kernel, 0);

	/* Free contexts */
	while (self->kernel_list_head)
		delete(self->kernel_list_head);

}

void FPGAEmuDump(Object *self, FILE *f) {
	FPGAKernel *kernel;
	FPGAEmu *emu = asFPGAEmu(self);

	/* Call parent */
	EmuDump(self, f);

	/* More */
	fprintf(f, "List of contexts (shows in any order)\n\n");
	DOUBLE_LINKED_LIST_FOR_EACH(emu, kernel, kernel);
	FPGAKernelDump(asObject(kernel), f);
}

void FPGAEmuDumpSummary(Emu *self, FILE *f) {
	FPGAEmu *emu = asFPGAEmu(self);
    
	/* Call parent */
	EmuDumpSummary(self, f);

	/* More statistics */
	//fprintf(f, "Kernels = %d\n", emu->running_list_max);
	//fprintf(f, "Memory = %lu\n", mem_max_mapped_space);
}

/* Schedule a call to 'FPGAEmuProcessEvents' */
void FPGAEmuProcessEventsSchedule(FPGAEmu *self) {
	pthread_mutex_lock(&self->process_events_mutex);
	self->process_events_force = 1;
	pthread_mutex_unlock(&self->process_events_mutex);
}

int FPGAEmuRun(Emu *self) {
	FPGAEmu *emu = asFPGAEmu(self);
	FPGAKernel *kernel;

	/* Stop if there is no kernel running */
	if (emu->running_list_count <= 0)
		return FALSE;

	/* Run an instruction from every running process */
	for (kernel = emu->running_list_head; kernel;
			kernel = kernel->running_list_next)
		FPGAKernelExecute(kernel);

	/* Process list of suspended contexts */
	//FPGAEmuProcessEvents(emu);
	/* Still running */
	return TRUE;
}

/* Search a context based on its kernel ID */
FPGAKernel* FPGAEmuGetKernelByID(FPGAEmu *self, int kid) {
	FPGAKernel *kernel;

	kernel = self->kernel_list_head;
	while (kernel && kernel->kid != kid)
		kernel = kernel->kernel_list_next;
	return kernel;
}

void FPGAEmuLoadKernelsFromConfig(FPGAEmu *self, struct config_t *config,
		char *section, int id) {
	FPGAKernel *kernel;
	struct fpga_loader_t *loader;

	char buf[MAX_STRING_SIZE];

	char *kernel_name;
	char *sim_file;
	char *input, *output;
	char *cwd;

	char *folding;
	char *imps;
	char *widths;
	char *lengths;
	char *heights;

	unsigned int srcbase;
	unsigned int dstbase;
	unsigned int srcsize;
	unsigned int dstsize;
	unsigned int start;
	unsigned int finish;
	unsigned int HWlowbound;
	unsigned int HWhighbound;
	int sharedmem;
	int delay;

	char *config_file_name;

	/* Get configuration file name for errors */
	config_file_name = config_get_file_name(config);

	/* Create new kernel */
	kernel = new(FPGAKernel, self);
	loader = kernel->loader;

	/* Executable */
	sim_file = config_read_string(config, section, "Sim", "");
	sim_file = str_set(NULL, sim_file);
	if (!*sim_file)
		fatal("%s: [%s]: invalid simulation file", config_file_name, section);

	/* Current working directory */
	cwd = config_read_string(config, section, "Cwd", "");
	if (*cwd)
		loader->cwd = str_set(NULL, cwd);
	else {
		/* Get current directory */
		loader->cwd = getcwd(buf, sizeof buf);
		if (!loader->cwd)
			panic("%s: buffer too small", __FUNCTION__);

		/* Duplicate string */
		loader->cwd = str_set(NULL, loader->cwd);
	}

	/* Arguments */

	kernel_name = config_read_string(config, section, "KernelName", "");
	FPGAKernelSetName(kernel, kernel_name);

	sim_file = config_read_string(config, section, "Sim", "");
	FPGAKernelSetSimFile(kernel, sim_file);

	input = config_read_string(config, section, "InputFormat", "");
	FPGAKernelSetInputOutputFormat(kernel, input, 0);

	output = config_read_string(config, section, "OutputFormat", "");
	FPGAKernelSetInputOutputFormat(kernel, output, 1);

	folding = config_read_string(config, section, "Folding", "False");
	FPGAKernelSetFolding(kernel, folding);

	if (kernel->folding) {
		imps = config_read_string(config, section, "NumImplements", "");
		FPGAKernelSetNumImplements(kernel, imps);

		widths = config_read_string(config, section, "Widths", "");
		FPGAKernelAddImpsString(kernel, widths, WIDTH);
		lengths = config_read_string(config, section, "Lengths", "");
		FPGAKernelAddImpsString(kernel, lengths, LENGTH);
		heights = config_read_string(config, section, "Heights", "");
		FPGAKernelAddImpsString(kernel, heights, HEIGHT);
	}

	HWlowbound = config_read_int(config, section, "HWLowBound", 0);
	HWhighbound = config_read_int(config, section, "HWHighBound", 0);


	sharedmem = config_read_int(config, section, "SharedMem", 1);

	if (sharedmem) {
		srcbase = config_read_int(config, section, "SrcBase", 0);
		srcsize = config_read_int(config, section, "SrcSize", 0);
		dstbase = config_read_int(config, section, "DstBase", 0);
		dstsize = config_read_int(config, section, "DstSize", 0);
	} else {
		srcbase = config_read_int(config, section, "SrcAXIBase", 0);
		srcsize = config_read_int(config, section, "SrcAXISize", 0);
		dstbase = config_read_int(config, section, "DstAXIBase", 0);
		dstsize = config_read_int(config, section, "DstAXISize", 0);
	}

	start = config_read_int(config, section, "StartReg", 0);
	finish = config_read_int(config, section, "FinishReg", 0);
	delay = config_read_int(config, section, "Delay", 0);

	kernel->kid = id;
	kernel->HW_bounds.low = HWlowbound;
	kernel->HW_bounds.high = HWhighbound;

	kernel->execycle = 0;
	kernel->loadcycle = 0;
	kernel->storecycle = 0;
	kernel->exetimes= 0;


	kernel->srcbase = srcbase;
	kernel->srcsize = srcsize;
	kernel->dstbase = dstbase;
	kernel->dstsize = dstsize;
	kernel->start = start;
	kernel->finish = finish;
	kernel->delay = delay;
	kernel->sharedmem = sharedmem;

	if (kernel->folding)
		kernel->current_implement = 0;
}

/*
 * Non-Class Functions
 */

void fpga_emu_init(void) {
	/* Classes */
	CLASS_REGISTER(FPGAEmu);
	CLASS_REGISTER(FPGAKernel);
	CLASS_REGISTER(FPGATask);

	/* Endian check */
	union {
		unsigned int as_uint;
		unsigned char as_uchar[4];
	} endian;
	endian.as_uint = 0x33221100;
	if (endian.as_uchar[0])
		fatal("%s: host machine is not little endian", __FUNCTION__);

	/* Host types */
	M2S_HOST_GUEST_MATCH(sizeof(long long), 8);
	M2S_HOST_GUEST_MATCH(sizeof(int), 4);
	M2S_HOST_GUEST_MATCH(sizeof(short), 2);

	/* Create fpga emulator */
	fpga_emu = new(FPGAEmu);

#ifdef HAVE_OPENGL
	/* GLUT */
	glut_init();
	/* GLEW */
	glew_init();
	/* GLU */
	glu_init();
#endif

	/* OpenGL */
	opengl_init();
}

/* Finalization */
void fpga_emu_done(void) {

#ifdef HAVE_OPENGL
	glut_done();
	glew_done();
	glu_done();
#endif

	/* Finalize OpenGl */
	opengl_done();

	/* Print system call summary
	 if (debug_status(fpga_sys_debug_category))
	 fpga_sys_dump_stats(debug_file(fpga_sys_debug_category));*/

	/* Free emulator */
	delete(fpga_emu);
}

void fpga_task_handler(int event, void *data) {

	if (event == EV_FPGA_LOAD_FINISH)

{	FPGATask *task = (FPGATask *) data;
	FPGATaskExecute(task);
	
}
    
	if (event == EV_FPGA_EXECUTE_FINISH)
{	FPGATask *task = (FPGATask *) data;
	FPGATaskStoreData(task);
}

 
	if (event == EV_FPGA_STORE_FINISH)
{	
	FPGATask *task = (FPGATask *) data;
	FPGATaskFinish(task);
	FPGAKernelSetState(task->kernel, FPGAKernelIdle);
	FPGAKernelDebug(
			"kernel %d finishes executing its task and return to idle\n",
			task->kernel->kid);
	printf("kernel %d finishes executing its task and return to idle\n", task->kernel->kid);

}

}

void fpga_kernel_reconfigure_handler(int event, void *data) {
	FPGAKernel *kernel = (FPGAKernel *) data;

	if (event == EV_FPGA_KERNEL_LOAD_ONCHIP) {
		FPGAKernelSetState(kernel, FPGAKernelIdle);
	}

	if (event == EV_FPGA_KERNEL_OFFLOAD) {
		FPGAKernelSetState(kernel, FPGAKernelOffchip);
	}
}

