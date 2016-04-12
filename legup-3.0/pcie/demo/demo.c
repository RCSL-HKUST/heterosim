#include <stdio.h>
#include <string.h>
#include <sys/time.h>

#include "alt_up_pci_lib_helper.h"

#define DATA_SIZE 4096
#define DATA_OFFSET 0x40000000

int main()
{
    char buf[DATA_SIZE];

    memset(buf, 'a', DATA_SIZE-2);
    buf[DATA_SIZE-2] = '\n';
    buf[DATA_SIZE-1] = '\0';

    pci_init();

    while (1) {
        struct timeval base_time;
        gettimeofday(&base_time, NULL);

        pci_write_data(buf, DATA_SIZE, DATA_OFFSET);
        pci_dma_go(1);

        struct timeval curr_time;
        gettimeofday(&curr_time, NULL);

        printf("Transferring %d bytes took %ld microseconds\n", DATA_SIZE, curr_time.tv_usec - base_time.tv_usec + 1000000 * (curr_time.tv_sec - base_time.tv_sec));
    }

    pci_close();

    return 0;
}
