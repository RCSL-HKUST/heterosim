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

#ifndef ARCH_FPGA_EMU_KERNEL_H
#define ARCH_FPGA_EMU_KERNEL_H

#include <pthread.h>

#include <lib/util/class.h>
#include <lib/util/string.h>

/* Forward declarations */
struct bit_map_t;

extern int EV_FPGA_KERNEL_LOAD_ONCHIP;
extern int EV_FPGA_KERNEL_OFFLOAD;

/*
 * Class 'FPGAKernel'
 */

typedef int (*FPGAKernelCanWakeupFunc)(FPGAKernel *self, void *data);
typedef void (*FPGAKernelWakeupFunc)(FPGAKernel *self, void *data);

typedef enum {
	FPGAKernelIdle = 0x00001, /* it is placed on chip and ready to execute tasks*/
	FPGAKernelBlocked = 0x00002, /* it is blocked by an overlapping kernel currently running */
	FPGAKernelRunning = 0x00004, /* the kernel is currently running a hardware task */
	FPGAKernelOffchip = 0x00008, /* the kernel is currently not placed on chip, needs to be reloaded */
	FPGAKernelNone = 0x00000
} FPGAKernelState;

CLASS_BEGIN(FPGAKernel, Object)

/* Emulator it belongs to */
	FPGAEmu *emu;

	/* Kernel properties */
	int state;
	int kid; /* Kernel ID */

	char *kernel_name;
	int folding;

	/* Implementations */
	int num_implements;
	struct list_t *widths, *lengths, *heights;
	int current_implement;

	/* Placement Information */
	int coordinate_x, coordinate_y;
	/* Placement Affinity */
	int affinity_x, affinity_y, affinity_imp;

	/* Instruction pointers */
	unsigned int last_stage; /* Address of last emulated instruction */
	unsigned int curr_stage; /* Address of currently emulated instruction */

	/* Cycle when the kernel was allocated and evicted to a node (core/thread),
	 * respectively. */
	long long activate_cycle;
	long long eviction_cycle;

	/* The kernel is mapped and allocated, but its eviction is in progress.
	 * It will be effectively evicted once the last instruction reaches the
	 * commit stage. This value is set by 'fpga_cpu_kernel_evict_signal'. */
	int evict_signal;

	/* Links to kernels forming a linked list. */
	FPGAKernel *kernel_list_next, *kernel_list_prev;
	FPGAKernel *running_list_next, *running_list_prev;
	FPGAKernel *blocked_list_next, *blocked_list_prev;
	FPGAKernel *idle_list_next, *idle_list_prev;
	FPGAKernel *offchip_list_next, *offchip_list_prev;

	/* List of tasks assigned to a kernel. This list is
	 * managed by the timing simulator for scheduling purposes. */
	FPGATask *task_list_head, *task_list_tail;
	int task_list_count, task_list_max;

	FPGATask *ready_list_head, *ready_list_tail;
	int ready_list_count, ready_list_max;

	FPGATask *finished_list_head, *finished_list_tail;
	int finished_list_count, finished_list_max;

	/* Substructures */
	struct fpga_loader_t *loader;
	/* Thread affinity mask */
	struct bit_map_t *affinity;

	char *sim_file;

	short *in_param_sizes;
	short *out_param_sizes;
	int *in_param_counts;
	int *out_param_counts;
	int in_param_num;
	int out_param_num;

	struct bounds {
		unsigned int low;
		unsigned int high;
	} HW_bounds;

	int sharedmem;
	unsigned int srcbase;
	unsigned int dstbase;
	unsigned int srcsize;
	unsigned int dstsize;

	unsigned int start;
	unsigned int finish;
	int delay;

	long long execycle;
	long long loadcycle;
	long long storecycle;
	long long exetimes;


CLASS_END(FPGAKernel)

void FPGAKernelCreate(FPGAKernel *self, FPGAEmu *emu);

void FPGAKernelDestroy(FPGAKernel *self);

void FPGAKernelDump(Object *self, FILE *f);

void FPGAKernelFinish(FPGAKernel *self, int state);
int FPGAKernelExecute(FPGAKernel *self);

int FPGAKernelGetState(FPGAKernel *self, FPGAKernelState state);
void FPGAKernelSetState(FPGAKernel *self, FPGAKernelState state);
void FPGAKernelClearState(FPGAKernel *self, FPGAKernelState state);

/*
 * Non-Class
 */

#define FPGAKernelDebug(...) debug(fpga_kernel_debug_category, __VA_ARGS__)
extern int fpga_kernel_debug_category;

extern struct str_map_t fpga_kernel_state_map;

#endif

