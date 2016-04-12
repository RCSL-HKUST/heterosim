#define ByRef_STATUS	(volatile int * ) 0x8
#define ByRef_ARG1	(volatile int * ) 0xc
#define ByRef_ARG2	(volatile int * ) 0x10

#include "alt_up_pci_lib_helper.h"

void legup_seq_ByRef(int *a, int b)
{
	char LEGUP_BUF[12] = {};
	int LEGUP_STATUS = 1;

	*(int *) (LEGUP_BUF + 4) = a;
	*(int *) (LEGUP_BUF + 8) = b;

	pci_write_data(LEGUP_BUF, sizeof(LEGUP_BUF), (int)(ByRef_STATUS));
	pci_write_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(ByRef_STATUS));
	pci_dma_go();
	do {
		pci_read_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(ByRef_STATUS));
		pci_dma_go();
	} while (LEGUP_STATUS == 0);

}
