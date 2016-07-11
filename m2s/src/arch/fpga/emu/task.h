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

#ifndef ARCH_FPGA_EMU_TASK_H
#define ARCH_FPGA_EMU_TASK_H

#include <pthread.h>

#include <lib/util/class.h>

/* Forward declarations */
struct bit_map_t;


/*
 * Class 'FPGATask'
 */

typedef int (*FPGATaskCanWakeupFunc)(FPGATask *self, void *data);
typedef void (*FPGATaskWakeupFunc)(FPGATask *self, void *data);

typedef enum {
	FPGATaskRunning = 0x00001, /* it is running */
	FPGATaskReady = 0x00002, /* waiting in a kernel queue */
	FPGATaskRejected = 0x00004, 
	FPGATaskFinished = 0x00008, /* no more inst to execute */
	FPGATaskNone = 0x00000,
	FPGATaskLoad = 0x00010,
	FPGATaskStore = 0x00020,
	FPGATaskExecuting = 0x00040
} FPGATaskState;

CLASS_BEGIN(FPGATask, Object)

/* Emulator it belongs to */
	FPGAEmu *emu;

	/* Task properties */
	FPGATaskState state;
	int pid; /* Task ID */

	/* Host kernel */
	FPGAKernel *kernel;

	FPGATask *task_list_next, *task_list_prev;
	FPGATask *ready_list_next, *ready_list_prev;
	FPGATask *finished_list_next, *finished_list_prev;

	int input_size, output_size;
	void *input, *output;

	X86Context *ctx;

	long long start_cycle;
	
	long long starttime;
	long long finishtime;

CLASS_END(FPGATask)

void FPGATaskCreate(FPGATask *self, FPGAKernel *kernel, X86Context *ctx);
void FPGATaskDestroy(FPGATask *self);

void FPGATaskDump(Object *self, FILE *f);


void FPGATaskFinish(FPGATask *self);
void FPGATaskFinishGroup(FPGATask *self, int state);
void FPGATaskExecute(FPGATask *self);
void FPGATaskLoadData(FPGATask *self);
void FPGATaskStoreData(FPGATask *self);



int FPGATaskGetState(FPGATask *self, FPGATaskState state);
void FPGATaskSetState(FPGATask *self, FPGATaskState state);
void FPGATaskClearState(FPGATask *self, FPGATaskState state);

/*
 * Non-Class
 */

#define FPGATaskDebug(...) debug(fpga_task_debug_category, __VA_ARGS__)
extern int fpga_task_debug_category;

extern struct str_map_t fpga_task_state_map;

#endif

