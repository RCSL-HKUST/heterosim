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

#ifndef ARCH_FPGA_EMU_LOADER_H
#define ARCH_FPGA_EMU_LOADER_H

/* Forward type declarations */
struct config_t;
struct elf_file_t;

typedef enum {
	WIDTH, LENGTH, HEIGHT
} implement_param;

/*
 * Class 'FPGAKernel'
 * Additional Functions
 */

void FPGAKernelSetName(FPGAKernel *self, char *name);
void FPGAKernelSetFolding(FPGAKernel *self, char *folding);
void FPGAKernelSetNumImplements(FPGAKernel *self, char *num_implements);
void FPGAKernelAddImpsString(FPGAKernel *self, char *imps, implement_param type);
void FPGAKernelSetInputOutputFormat(FPGAKernel *self, char *format, int type);

void FPGAKernelSetSimFile(FPGAKernel *self, char *sim_file);
void FPGAKernelGetFullPath(FPGAKernel *self, char *file_name, char *full_path, int size);



/*
 * Object 'fpga_loader_t'
 */

struct fpga_loader_t
{
	char *cwd;

	char *blif;  /* Executable file name */
};


struct fpga_loader_t *fpga_loader_create(void);
void fpga_loader_free(struct fpga_loader_t *loader);




/*
 * Public
 */

#define fpga_loader_debug(...) debug(fpga_loader_debug_category, __VA_ARGS__)
extern int fpga_loader_debug_category;

extern char *fpga_loader_help;


#endif

