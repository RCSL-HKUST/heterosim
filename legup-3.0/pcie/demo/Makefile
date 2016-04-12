#
TARGET = demo

#
CFLAGS = -g -Wall
LDFLAGS = -g -Wall

build: $(TARGET)

demo: demo.o alt_up_pci_lib.o alt_up_pci_lib_helper.o
	$(CC) $(LDFLAGS) $^ -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) *.a *.o *~
