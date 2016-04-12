#define vector_add_STATUS	(volatile int * ) 0x8
#define vector_add_ARG1	(volatile int * ) 0xc
#define vector_add_ARG2	(volatile int * ) 0x10
#define vector_add_ARG3	(volatile int * ) 0x14
#define vector_add_ARG4	(volatile int * ) 0x18

#include "alt_up_pci_lib_helper.h"

void legup_seq_vector_add(char *a, char *b, char *c, int len)
{
	char LEGUP_BUF[20] = {};
	int LEGUP_STATUS = 1;

	*(int *) (LEGUP_BUF + 4) = a;
	*(int *) (LEGUP_BUF + 8) = b;
	*(int *) (LEGUP_BUF + 12) = c;
	*(int *) (LEGUP_BUF + 16) = len;

	pci_write_data(LEGUP_BUF, sizeof(LEGUP_BUF), (int)(vector_add_STATUS));
	pci_write_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(vector_add_STATUS));
	pci_dma_go();
	do {
		pci_read_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(vector_add_STATUS));
		pci_dma_go();
	} while (LEGUP_STATUS == 0);

}
