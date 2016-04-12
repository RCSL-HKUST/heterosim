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

#include <arch/common/arch.h>
#include <lib/util/config.h>
#include <lib/util/debug.h>
#include <lib/util/linked-list.h>
#include <lib/util/string.h>
#include <mem-system/mem-system.h>
#include <mem-system/module.h>

#include "fpga.h"
#include "mem-config.h"

void FPGAMemConfigDefault(Timing *self, struct config_t *config) {
	char section[MAX_STRING_SIZE];
	char str[MAX_STRING_SIZE];

	int i = 0;
	int j;

	/* L1 cache */
	snprintf(section, sizeof section, "Module fpga-l1-%d", i);
	config_write_string(config, section, "Type", "Cache");
	config_write_string(config, section, "Geometry", "x86-geo-l1");
	config_write_string(config, section, "LowNetwork", "x86-net-l1-l2");
	config_write_string(config, section, "LowModules", "x86-l2");

	snprintf(str, sizeof str, "fpga-l1-%d", i);

	snprintf(section, sizeof section, "Entry fpga-core-%d", i);
	config_write_string(config, section, "Arch", "fpga");
	config_write_string(config, section, "Module", str);

}

void FPGAMemConfigParseEntry(Timing *self, struct config_t *config, char *section) {
	FPGA *fpga = asFPGA(self);

	char *file_name;

	int translation_latency;
	int axi;

	char *module_name;

	/*Get configuration file name*/
	file_name = config_get_file_name(config);

	/*Allow these sections in case we quit before reading them.*/
	config_var_allow(config, section, "Module");

	module_name = config_read_string(config, section, "Module", NULL);
	assert(module_name);

	translation_latency = config_read_int(config, section, "TransLatency", 0);
	axi = config_read_int(config, section, "Axi", 0);

	/*Assign data module */
	fpga->mod = mem_system_get_mod(module_name);

	if (!fpga->mod)
		fatal("%s: section [%s]: '%s' is not a valid module name.\n"
				"\tThe given module name must match a module declared in a section\n"
				"\t[Module <name>] in the memory configuration file.\n", file_name, section,
				module_name);

	fpga->translatency = translation_latency;
	fpga->axi = axi;	

}

void FPGAMemConfigCheck(Timing *self, struct config_t *config) {
	FPGA *fpga = asFPGA(self);

	char *file_name;

	/*Check that all cores/threads have an entry to the memory hierarchy.*/
	file_name = config_get_file_name(config);

	if (!fpga->mod)
		fatal("%s: FPGA lacks an entry to memory.\n"
				"\tPlease add a new [Entry <name>] section in your memory configuration\n"
				"\tfile to associate this hardware thread with a memory module.\n", file_name);

}
