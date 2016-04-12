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

#include <poll.h>
#include <unistd.h>

#include <arch/fpga/timing/fpga.h>
#include <lib/esim/esim.h>
#include <lib/mhandle/mhandle.h>
#include <lib/util/bit-map.h>
#include <lib/util/debug.h>
#include <lib/util/misc.h>
#include <lib/util/string.h>
#include <lib/util/timer.h>
#include <mem-system/memory.h>
#include <mem-system/mmu.h>
#include <mem-system/spec-mem.h>
#include <arch/x86/emu/context.h>

#include "kernel.h"
#include "emu.h"
#include "loader.h"
#include "task.h"

/*
 * Class 'FPGAKernel'
 */

int EV_FPGA_KERNEL_LOAD_ONCHIP;
int EV_FPGA_KERNEL_OFFLOAD;

CLASS_IMPLEMENTATION(FPGAKernel);

static void FPGAKernelDoCreate(FPGAKernel *self, FPGAEmu *emu) {
	/*int num_nodes;
	 int i;*/

	/* Initialize */
	self->emu = emu;

	/* Update state so that the kernel is inserted in the
	 * corresponding lists. The fpga_ctx_running parameter has no
	 * effect, since it will be updated later. */
	FPGAKernelSetState(self, FPGAKernelIdle);
	DOUBLE_LINKED_LIST_INSERT_HEAD(emu, kernel, self);

	/* Virtual functions */
	asObject(self)->Dump = FPGAKernelDump;
}

void FPGAKernelCreate(FPGAKernel *self, FPGAEmu *emu) {
	/* Baseline initialization */
	FPGAKernelDoCreate(self, emu);

	/* Loader */
	self->loader = fpga_loader_create();

}

void FPGAKernelDestroy(FPGAKernel *self) {
	FPGAEmu *emu = self->emu;

	FPGAKernelDebug("inst %lld: context %d freed\n", asEmu(emu)->instructions, self->kid);
}

void FPGAKernelDump(Object *self, FILE *f) {
	FPGAKernel *kernel = asFPGAKernel(self);
	char state_str[MAX_STRING_SIZE];

	/* Title */
	fprintf(f, "------------\n");
	fprintf(f, "Context %d\n", kernel->kid);
	fprintf(f, "------------\n\n");

	str_map_flags(&fpga_kernel_state_map, kernel->state, state_str, sizeof state_str);
	fprintf(f, "State = %s\n", state_str);

	/* End */
	fprintf(f, "\n\n");
}

static void FPGAKernelUpdateState(FPGAKernel *self, FPGAKernelState state) {
	FPGAEmu *emu = self->emu;

	FPGAKernelState status_diff;
	char state_str[MAX_STRING_SIZE];

	/* Remove kernel from the following lists:
	 *   running, blocked, offchip, idle */
	if (DOUBLE_LINKED_LIST_MEMBER(emu, running, self))
		DOUBLE_LINKED_LIST_REMOVE(emu, running, self);
	if (DOUBLE_LINKED_LIST_MEMBER(emu, blocked, self))
		DOUBLE_LINKED_LIST_REMOVE(emu, blocked, self);
	if (DOUBLE_LINKED_LIST_MEMBER(emu, offchip, self))
		DOUBLE_LINKED_LIST_REMOVE(emu, offchip, self);
	if (DOUBLE_LINKED_LIST_MEMBER(emu, idle, self))
		DOUBLE_LINKED_LIST_REMOVE(emu, idle, self);

	if (debug_status(fpga_kernel_debug_category)) {
		str_map_flags(&fpga_kernel_state_map, self->state, state_str, sizeof state_str);
		FPGAKernelDebug("kernel %d current state is %s\n", self->kid, state_str);
	}

	self->state = state;
	if (self->state & FPGAKernelRunning)
		DOUBLE_LINKED_LIST_INSERT_HEAD(emu, running, self);
	if (self->state & FPGAKernelIdle)
		DOUBLE_LINKED_LIST_INSERT_HEAD(emu, idle, self);
	if (self->state & FPGAKernelBlocked)
		DOUBLE_LINKED_LIST_INSERT_HEAD(emu, blocked, self);
	if (self->state & FPGAKernelOffchip)
		DOUBLE_LINKED_LIST_INSERT_HEAD(emu, offchip, self);

	if (debug_status(fpga_kernel_debug_category)) {
		str_map_flags(&fpga_kernel_state_map, self->state, state_str, sizeof state_str);
		FPGAKernelDebug("kernel %d change state to %s\n", self->kid, state_str);
	}

	/* Start/stop fpga timer depending on whether there are any contexts
	 * currently running. */
	if (emu->running_list_count || emu->idle_list_count)
		m2s_timer_start(asEmu(emu)->timer);
	else
		m2s_timer_stop(asEmu(emu)->timer);
}

int FPGAKernelExecute(FPGAKernel *self) {
	/*FPGAEmu *emu = self->emu;*/

	/* Return if:
	 * 	The kernel is already running some tasks, or
	 * 	The kernel is not currently on chip, or
	 * 	The kernel is currently blocked by some other kernel */
	if (!FPGAKernelGetState(self, FPGAKernelIdle))
		return TRUE;

	if (!self->task_list_count) {
		FPGAKernelSetState(self, FPGAKernelIdle);
		return FALSE;
	} 
	else if (!self->ready_list_count) {
		FPGAKernelSetState(self, FPGAKernelIdle);
		return FALSE;
	}

	FPGAKernelSetState(self, FPGAKernelRunning);

	FPGAKernelDebug("kernel %d starts to execute the first task in its ready task queue\n", self->kid);

	FPGATask *task = self->ready_list_head;
    
    //fprintf(stderr,"fpga:%d-%lld \n",task->ctx->flush, esim_time);

    if( task->ctx->flush)
    	{   
    		return FALSE;
    	}

	FPGATaskLoadData(task);
	return TRUE;

}

int FPGAKernelGetState(FPGAKernel *self, FPGAKernelState state) {
	return (self->state & state) > 0;
}

void FPGAKernelSetState(FPGAKernel *self, FPGAKernelState state) {
	FPGAKernelUpdateState(self, state);
}

void FPGAKernelClearState(FPGAKernel *self, FPGAKernelState state) {
	FPGAKernelUpdateState(self, self->state & ~state);
}

/* Finish a context. If the context has no parent, its state will be set
 * to 'fpga_ctx_finished'. If it has, its state is set to 'fpga_ctx_zombie', waiting for
 * a call to 'waitpid'.
 * The children of the finished context will set their 'parent' attribute to NULL.
 * The zombie children will be finished. */
void FPGAKernelFinish(FPGAKernel *self, int state) {
	/*FPGAEmu *emu = self->emu;
	 FPGAKernel *aux;*/
	FPGAKernelSetState(self, FPGAKernelIdle);
}

/*
 * Non-Class
 */

int fpga_kernel_debug_category;

struct str_map_t fpga_kernel_state_map = { 4, { { "idle", FPGAKernelIdle }, { "blocked",
		FPGAKernelBlocked }, { "running", FPGAKernelRunning }, { "offchip", FPGAKernelOffchip } } };
