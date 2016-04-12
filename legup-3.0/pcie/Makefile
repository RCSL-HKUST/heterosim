FPGA_DIR=pcie_tutorial

TARGETS=driver shared_mem demo

all: $(TARGETS)

$(TARGETS):
	$(MAKE) -C $@

clean:
	$(MAKE) -C demo $@
	$(MAKE) -C driver $@
	$(MAKE) -C shared_mem $@

# Handy make target
program:
	nios2-configure-sof --directory $(FPGA_DIR)

.PHONY: all demo driver shared_mem clean program
