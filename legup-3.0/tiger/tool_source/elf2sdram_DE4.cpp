#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

#define DDR_START 0x40000020
#define CHAR_PER_LINE 32
#define STRING_PER_LINE 4
#define BOOTLOADER_SIZE 8

//bootloader code which gets run at the beginning of processor execution
//it sets the stack pointer, and sets return address, jumps to start of program
//when program is done, it jumps back to return address, so then it jumps stays in the address
const string bootcode [BOOTLOADER_SIZE] = {"3c1d8000", //set stack pointer, LUI r29, 0x1000_0000
					  					   "0c000004", //jump and link to starting PC (4000_0020), JAL 0c00_0004
										   "00000000", //branch slot
										   "08000003", //jump to itself (when finished execution), j pc = pc
										   "00000000", //branch slot
										   "00000000", //branch slot
										   "00000000", //branch slot
										   "00000000" //branch slot
										  };



int main(int argc, char** argv) {
	if (argc != 3) { printf("Incorrect usage.  Expecting <elf_file> <sdram_file>.\n"); exit(1); }

	ifstream fDump;
	string line, name, data = "";
	unsigned long start_addr = 0;
	unsigned long text_end_addr = 0;
	bool isText = true;
	unsigned end_addr = 0;

	// disassemble elf headers
	system(("objdump -h " + string(argv[1]) + " > " + string(argv[1]) + ".header.dump").c_str());
	fDump.open((string(argv[1]) + ".header.dump").c_str(), ios::in|ios::binary);

	if (fDump.is_open()) {
		unsigned vma;
		unsigned size;
		// find first section
		while (!fDump.eof() && line.substr(0,8) != "Idx Name") {
			getline(fDump, line);
		}
		while (!fDump.eof()) {
			getline(fDump, line);
			sscanf(line.c_str(), "%*d %*s %x %x", &size, &vma);
			if (vma != 0) {
				end_addr = size + vma;
//				printf("end_addr = %x\n", end_addr);
			}
			// ignore attributes
			getline(fDump, line);
		}
	}
	fDump.close();

	// disassemble elf
	system(("objdump -s " + string(argv[1]) + " > " + string(argv[1]) + ".dump").c_str());
	fDump.open((string(argv[1]) + ".dump").c_str(), ios::in|ios::binary);

	if (fDump.is_open()) {
		// find first section
		while (!fDump.eof() && line.substr(0,19) != "Contents of section")
			getline(fDump, line);
		// store section data
		while (!fDump.eof()) {
			if (line.substr(0,19) == "Contents of section") {
				name = line.substr(21, line.size()-22);

				// get next line so i know the address
				getline(fDump, line);
				sscanf(line.c_str(), "%lx ", &start_addr);
				if (isText) {
					isText = false;
				} else if (start_addr > 0) {
					// add spacing if necessary
					unsigned space = start_addr - data.size() / 2 - DDR_START;
					printf("  space = %x\n", space);
//					printf("start_addr = %lx data.size()/2 = %x DDR_START = %x\n", start_addr, data.size()/2, DDR_START);
					while (space-- > 0) data += "00";
				}

				// if the address starts at 0, ignore
				if (start_addr > 0) {
					int x2 = line.find_first_of(":");
					sscanf(line.c_str(), "%lx:", &text_end_addr);
//					printf("text_end_addr = %lx\n", text_end_addr);
					printf("Section Name: %s, Section Start: %lx\n", name.c_str(), start_addr);
					// have to do line processing so the data isn't lost
					int x = line.find_first_of(" ", 3);
					for (int k=x; k<x+36; k++) {
						if (line[k] != ' ') data += line[k];
					}
				}
			} else if (start_addr > 0) {
				sscanf(line.c_str(), "%lx", &text_end_addr);
//					printf("text_end_addr = %lx\n", text_end_addr);
				int x = line.find_first_of(" ", 3);
				for (int k=x; k<x+36; k++) {
					if (line[k] != ' ') data += line[k];
				}
			}	

			if (!fDump.eof()) getline(fDump, line);
		}
	}

	fDump.close();

	// pad empty sections
	unsigned space = end_addr - data.size() / 2 - DDR_START;
	while (space-- > 0) data += "00";	

	// pad with 0's so that size is a multiple of 4
	if (data.size() % 4 == 2) data += "00";

	FILE *sdram = fopen(argv[2], "w");
	int chars_on_line = 0;
/*
	for (int j=0; j<data.size(); j+=4) {
		fprintf(sdram, "%c%c%c%c", data[j+2], data[j+3], data[j+0], data[j+1]);
		if (data[j] == '.' || data[j+1] == '.' || data[j+2] == '.' || data[j+3] == '.') {
			printf("failed to produce sdram.dat");
			exit(1);
		}
		if (++chars_on_line == CHAR_PER_LINE/4) {
			chars_on_line = 0;
			fprintf(sdram, "\n");
		}
	}
*/


	//PRINTING TO A FILE
	//need to pad one line with zeros
	//for (int i=0; i<599; i++)
	//	fprintf(sdram, "%032d\n", 0);

	//printing bootloader
	for (int j=0; j<BOOTLOADER_SIZE; j+=STRING_PER_LINE) {
		fprintf(sdram, "%s", bootcode[j+3].c_str());
		fprintf(sdram, "%s", bootcode[j+2].c_str());
		fprintf(sdram, "%s", bootcode[j+1].c_str());
		fprintf(sdram, "%s", bootcode[j].c_str());

		fprintf(sdram, "\n");
	}

	//printing the values
	for (int j=0; j<data.size(); j+=CHAR_PER_LINE) {
		fprintf(sdram, "%c%c%c%c", data[j+30], data[j+31], data[j+28], data[j+29]);
		fprintf(sdram, "%c%c%c%c", data[j+26], data[j+27], data[j+24], data[j+25]);

		fprintf(sdram, "%c%c%c%c", data[j+22], data[j+23], data[j+20], data[j+21]);
		fprintf(sdram, "%c%c%c%c", data[j+18], data[j+19], data[j+16], data[j+17]);

		fprintf(sdram, "%c%c%c%c", data[j+14], data[j+15], data[j+12], data[j+13]);
		fprintf(sdram, "%c%c%c%c", data[j+10], data[j+11], data[j+8], data[j+9]);

		fprintf(sdram, "%c%c%c%c", data[j+6], data[j+7], data[j+4], data[j+5]);
		fprintf(sdram, "%c%c%c%c", data[j+2], data[j+3], data[j], data[j+1]);

		fprintf(sdram, "\n");
		for (int i=0; i<CHAR_PER_LINE; i++) {
			if (data[i] == '.') {
				printf("failed to produce ddr2.dat");
				exit(1);
			}
		}
	}

	return 0;
}
