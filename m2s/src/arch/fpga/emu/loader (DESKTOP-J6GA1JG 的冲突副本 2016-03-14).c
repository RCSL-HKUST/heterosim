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

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include <lib/mhandle/mhandle.h>
#include <lib/util/debug.h>
#include <lib/util/elf-format.h>
#include <lib/util/linked-list.h>
#include <lib/util/list.h>
#include <lib/util/misc.h>
#include <lib/util/string.h>
#include <mem-system/memory.h>

#include "emu.h"
#include "loader.h"
#include "kernel.h"

int fpga_loader_debug_category;

char *fpga_loader_help =
		"A context configuration file contains a list of executable programs and\n"
				"their parameters that will be simulated by Multi2Sim. The context\n"
				"configuration file is a plain text file in the IniFile format, containing\n"
				"as many sections as fpga programs simulated. Each program is denoted with\n"
				"a section called '[ Kernel <num> ]', where <num> is an integer number\n"
				"starting from 0.\n"
				"\n"
				"Variables in section '[ Kernel <num> ]':\n"
				"\n"
				"  Exe = <path> (Required)\n"
				"      Path for the fpga executable file that will be simulated.\n"
				"  Args = <arg_list>\n"
				"      List of command-line arguments for the simulated program.\n"
				"  Env = <env_list>\n"
				"      List of environment variables enumerated using single or double\n"
				"      quotes. These variables will be added to the current set of\n"
				"      active environment variables.\n"
				"      E.g.: Env = 'ENV_VAR1=100' \"ENV_VAR2=200\"\n"
				"  Cwd = <path>\n"
				"      Current working directory for simulated program. If not specified,\n"
				"      the current working directory for the simulator will be also used\n"
				"      for the simulated program.\n"
				"  StdIn = <file>\n"
				"      File to use as standard input for the simulated program. If none\n"
				"      specified, the simulator standard input is selected.\n"
				"  StdOut = <file>\n"
				"      File to use as standard output and standard error output for the\n"
				"      simulated program. If none specified, the standard output for the\n"
				"      simulator is used in both cases.\n"
				"  IPCReport = <file>\n"
				"      File to dump a report of the context performance. At specific\n"
				"      intervals, the context IPC (instructions-per-cycle) value will be\n"
				"      dumped in this file. This option must be specified together with\n"
				"      command-line option '--fpga-sim detailed'.\n"
				"  IPCReportInterval = <cycles>\n"
				"      Interval in number of cycles that a new record will be added into\n"
				"      the IPC report file.\n"
				"\n"
				"See the Multi2Sim Guide (www.multi2sim.org) for further details and\n"
				"examples on how to use the context configuration file.\n"
				"\n";

/*
 * Class 'FPGAKernel'
 * Additional functions
 */

void FPGAKernelAddImpsString(FPGAKernel *self, char *imps, implement_param type) {

	char *delim = " ";
	char *param;

	/* Duplicate argument string */
	imps = str_set(NULL, imps);

	switch (type) {
	case WIDTH:
		self->widths = list_create();
		break;
	case LENGTH:
		self->lengths = list_create();
		break;
	case HEIGHT:
		self->heights = list_create();
		break;
	default:
		fatal("Undefined Implement Parameter Type!\n");
	}

	/* Tokens */
	int i = 0;
	for (param = strtok(imps, delim); param; param = strtok(NULL, delim)) {
		param = str_set(NULL, param);
		int temp = atoi(param);
		switch (type) {
		case WIDTH:
			list_add(self->widths, &temp);
			break;
		case LENGTH:
			list_add(self->lengths, &temp);
			break;
		case HEIGHT:
			list_add(self->heights, &temp);
			break;
		default:
			fatal("Undefined Implement Parameter Type!\n");
		}
		i++;
	}
	if (i != self->num_implements)
		fatal("Unmatched number of implements!");

	/* Free argument string */
	str_free(imps);
}

void FPGAKernelSetNumImplements(FPGAKernel *self, char *num_imps) {
	self->num_implements = (int) strtol(num_imps, (char**) NULL, 10);
}

void FPGAKernelSetName(FPGAKernel *self, char *name) {
	self->kernel_name = str_set(NULL, name);
}

void FPGAKernelSetSimFile(FPGAKernel *self, char *sim_file) {
	char sim_full_path[MAX_STRING_SIZE];
	FPGAKernelGetFullPath(self, sim_file, sim_full_path, MAX_STRING_SIZE);
	self->sim_file = str_set(NULL, sim_full_path);
}

void FPGAKernelSetFolding(FPGAKernel *self, char *folding) {
	self->folding = strncmp(folding, "False", strlen(folding)) ? TRUE : FALSE;
}

void FPGAKernelSetInputOutputFormat(FPGAKernel *self, char *format, int type) {
	char *temp;
	char *delim = ";", *delim1 = ",";
	char *param, *param1;
	int i;

	int param_num, *param_counts;
	short *param_sizes;

	/* Duplicate argument string */
	format = str_set(NULL, format);
	temp = xstrdup(format);

	param_num = 0;
	for (param = strtok(temp, delim); param; param = strtok(NULL, delim)) {
		param_num++;
	}
	param_sizes = xcalloc(param_num, sizeof(int));
	param_counts = xcalloc(param_num, sizeof(int));

	temp = xstrdup(format);
	i = 0;
	for (param = strtok(temp, delim); param; param = strtok(NULL, delim)) {
		param = str_set(NULL, param);

		param1 = strtok(param, delim1);
		if(!strcmp(param1, "long") || !strcmp(param1, "double"))
			param_sizes[i] = 8;
		else if (!strcmp(param1, "short"))
			param_sizes[i] = 2;
		else if (!strcmp(param1, "char"))
			param_sizes[i] = 1;
		else
			param_sizes[i] = 4;

		param1 = strtok(NULL, delim1);
		param_counts[i] = atoi(param1);

		i++;
	}

	if (!type) {
		self->in_param_num = param_num;
		self->in_param_sizes = param_sizes;
		self->in_param_counts = param_counts;
	} else {
		self->out_param_num = param_num;
		self->out_param_sizes = param_sizes;
		self->out_param_counts = param_counts;
	}

}

void FPGAKernelGetFullPath(FPGAKernel *kernel, char *file_name, char *full_path,
		int size) {
	struct fpga_loader_t *loader = kernel->loader;

	/* Remove './' prefix from 'file_name' */
	while (file_name && !strncmp(file_name, "./", 2))
		file_name += 2;

	/* File name is NULL or empty */
	assert(full_path);
	if (!file_name || !*file_name) {
		snprintf(full_path, size, "%s", "");
		return;
	}

	/* File name is given as an absolute path */
	if (*file_name == '/') {
		if (size < strlen(file_name) + 1)
			fatal("%s: buffer too small", __FUNCTION__);
		snprintf(full_path, size, "%s", file_name);
		return;
	}

	/* Relative path */
	if (strlen(loader->cwd) + strlen(file_name) + 2 > size)
		fatal("%s: buffer too small", __FUNCTION__);
	snprintf(full_path, size, "%s/%s", loader->cwd, file_name);
}

/*
 * Object 'fpga_loader_t'
 */

struct fpga_loader_t *fpga_loader_create(void) {
	struct fpga_loader_t *loader;

	/* Initialize */
	loader = xcalloc(1, sizeof(struct fpga_loader_t));

	/* Return */
	return loader;
}

void fpga_loader_free(struct fpga_loader_t *loader) {

	str_free(loader->blif);
	str_free(loader->cwd);
	free(loader);
}

