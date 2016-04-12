// Function declarations to simplify alt_up_pci_lib calls
void pci_init();
void pci_close();

void pci_write_data(void *buf, int len, int offset);
void pci_dma_go();
void pci_read_data(void *buf, int len, int offset);

void pci_write_data_with_ctrller(void *buf, int len, int offset, int ctrller);
void pci_dma_go_with_ctrller(int ctrller);
void pci_read_data_with_ctrller(void *buf, int len, int offset, int ctrller);
