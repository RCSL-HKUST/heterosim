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

#ifndef FPGA_ARCH_TIMING_H
#define FPGA_ARCH_TIMING_H

#include <arch/common/timing.h>
#include <arch/x86/emu/uinst.h>
#include <lib/util/class.h>


/*
 * Class 'FPGA'
 */

CLASS_BEGIN(FPGA, Timing)

	/* Associated emulator */
	FPGAEmu *emu;

	/* Array of cores */
	int clb_array_width;
	int clb_array_length;

	struct linked_list_t *kernel_trace_list;

	/* From all contexts in the 'alloc' list of 'x86_emu', minimum value
	 * of variable 'ctx->alloc_cycle'. This value is used to decide whether
	 * the scheduler should be called at all to check for any context whose
	 * execution quantum has expired. These variables are updated by calling
	 * 'fpga_update_min_alloc_cycle' */
	long long min_alloc_cycle;
	
	struct mod_t *mod;
	int translatency;
	int axi;
	int dma;


	/* Statistics */
	long long num_kernels_placed;
	long long num_tasks_executed;
	long long num_ctx_reconfig_performed;
	long long num_cycles_waited;
	long long overlapped_clb_ctxs;
	double time;

	long long num_committed_tasks;
	long long last_finished_task;
	long long last_dump;

	long long active_cycle;
	long long cpu_cycle; 

CLASS_END(FPGA)


void FPGACreate(FPGA *self, FPGAEmu *emu);
void FPGADestroy(FPGA *self);

void FPGADump(Object *self, FILE *f);
void FPGADumpSummary(Timing *self, FILE *f);
void FPGADumpReport(FPGA *self, FILE *f);

int FPGARun(Timing *self);

/*
 * Public
 */

#define fpga_error_debug(...) debug(fpga_error_debug_category, __VA_ARGS__)
extern int fpga_error_debug_category;

extern char *fpga_config_help;

extern char *fpga_config_file_name;
extern char *fpga_report_file_name;

extern int fpga_domain_index;
/* Trace */
#define fpga_tracing() trace_status(fpga_trace_category)
#define fpga_trace(...) trace(fpga_trace_category, __VA_ARGS__)
#define fpga_trace_header(...) trace_header(fpga_trace_category, __VA_ARGS__)
extern int fpga_trace_category;

void FPGAReadConfig(void);
void FPGAInit(void);
void FPGADone(void);


#endif

