TARGETS = find_ra elf2sdram elf2sdram_DE4
SRC_DIR = ../../examples/chstone

all: $(TARGETS)

$(TARGETS):
	gcc ../tool_source/$@.cpp -lstdc++ -o $@

clean:
	rm -f $(TARGETS) *.s
