#define calc_mandel_STATUS	(volatile int * ) 0x8
#define calc_mandel_ARG1	(volatile double * ) 0xc
#define calc_mandel_ARG2	(volatile double * ) 0x14
#define calc_mandel_ARG3	(volatile double * ) 0x1c
#define calc_mandel_ARG4	(volatile int * ) 0x24
#define calc_mandel_ARG5	(volatile int * ) 0x28
#define calc_mandel_ARG6	(volatile int * ) 0x2c
#define calc_mandel_ARG7	(volatile int * ) 0x30
#define calc_mandel_ARG8	(volatile int * ) 0x34

#include "alt_up_pci_lib_helper.h"

void legup_seq_calc_mandel(double mandel_scale, double mandel_cx, double mandel_cy, void *mandel_tex, int mandel_tex_w, int mandel_max_iter, int mandel_width, int mandel_height)
{
	char LEGUP_BUF[48] = {};
	int LEGUP_STATUS = 1;

	*(double *) (LEGUP_BUF + 4) = mandel_scale;
	*(double *) (LEGUP_BUF + 12) = mandel_cx;
	*(double *) (LEGUP_BUF + 20) = mandel_cy;
	*(int *) (LEGUP_BUF + 28) = mandel_tex;
	*(int *) (LEGUP_BUF + 32) = mandel_tex_w;
	*(int *) (LEGUP_BUF + 36) = mandel_max_iter;
	*(int *) (LEGUP_BUF + 40) = mandel_width;
	*(int *) (LEGUP_BUF + 44) = mandel_height;

	pci_write_data(LEGUP_BUF, sizeof(LEGUP_BUF), (int)(calc_mandel_STATUS));
	pci_write_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(calc_mandel_STATUS));
	pci_dma_go();
	do {
		pci_read_data(&LEGUP_STATUS, sizeof(LEGUP_STATUS), (int)(calc_mandel_STATUS));
		pci_dma_go();
	} while (LEGUP_STATUS == 0);

}
