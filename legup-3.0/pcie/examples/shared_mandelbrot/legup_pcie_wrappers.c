#define generate_set_STATUS	(volatile int * ) 0x8
#define generate_set_ARG1	(volatile int * ) 0xc
#define generate_set_ARG2	(volatile int * ) 0x10
#define generate_set_ARG3	(volatile int * ) 0x14
#define generate_set_ARG4	(volatile int * ) 0x18
#define generate_set_ARG5	(volatile int * ) 0x1c
#define generate_set_ARG6	(volatile int * ) 0x20
#define generate_set_ARG7	(volatile int * ) 0x24
#define generate_set_ARG8	(volatile int * ) 0x28
#define generate_set_ARG9	(volatile int * ) 0x2c
#define generate_set_ARG10	(volatile int * ) 0x30

#include "alt_up_pci_lib_helper.h"

void legup_seq_generate_set(int xstart, int xend, int xmax, int xmin, int ymax, int ymin, int xres, int yres, int itr, char *ptr)
{
	char LEGUP_BUF[44] = {};
	int LEGUP_STATUS = 1;

	*(int *) (LEGUP_BUF + 4) = xstart;
	*(int *) (LEGUP_BUF + 8) = xend;
	*(int *) (LEGUP_BUF + 12) = xmax;
	*(int *) (LEGUP_BUF + 16) = xmin;
	*(int *) (LEGUP_BUF + 20) = ymax;
	*(int *) (LEGUP_BUF + 24) = ymin;
	*(int *) (LEGUP_BUF + 28) = xres;
	*(int *) (LEGUP_BUF + 32) = yres;
	*(int *) (LEGUP_BUF + 36) = itr;
	*(int *) (LEGUP_BUF + 40) = ptr;

	pci_write_data(LEGUP_BUF, sizeof(LEGUP_BUF), (int)(generate_set_STATUS));
	pci_write_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(generate_set_STATUS));
	pci_dma_go();
	do {
		pci_read_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(generate_set_STATUS));
		pci_dma_go();
	} while (LEGUP_STATUS == 0);

}
