#include "alt_up_pci_lib_helper.h"

int legup_seq_generate_set_hw(int c1x, int c1y, int xres, int yres, int itr, int thread_id)
{
	char LEGUP_BUF[28] = {};
	int LEGUP_STATUS = 1;
	int LEGUP_RET_VAL;
	int LEGUP_ADDR_OFFSET = 64 * thread_id;

	*(int *)(LEGUP_BUF+4) = c1x;
	*(int *)(LEGUP_BUF+8) = c1y;
	*(int *)(LEGUP_BUF+12) = xres;
	*(int *)(LEGUP_BUF+16) = yres;
	*(int *)(LEGUP_BUF+20) = itr;
        // unused

	pci_write_data(LEGUP_BUF, sizeof(LEGUP_BUF), 8 + LEGUP_ADDR_OFFSET);
	pci_write_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), 8 + LEGUP_ADDR_OFFSET);
	pci_dma_go();
	do {
		pci_read_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), 8 + LEGUP_ADDR_OFFSET);
		pci_read_data(&LEGUP_RET_VAL, sizeof(LEGUP_RET_VAL), 0 + LEGUP_ADDR_OFFSET);
		pci_dma_go();
	} while (LEGUP_STATUS == 0);

	return LEGUP_RET_VAL;
}

