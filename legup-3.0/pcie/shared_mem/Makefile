INC=legup_mem.h
SW_SRC=legup_mem_sw.c legup_mem_sw_test.c
SW_DBG_SRC=legup_mem_sw_debug.c legup_mem_sw_debug_test.c
SHARED_SRC=legup_mem_shared.c legup_mem_shared_test.c legup_mem_shared.h ../demo/alt_up*.h ../demo/alt_up*.c
TESTS=sw_test sw_debug_test shared_test

all: $(TESTS)
	./sw_test
	./sw_debug_test
	./shared_test

sw_test: $(INC) $(SW_SRC)
	gcc $^ -o $@

sw_debug_test: $(INC) $(SW_DBG_SRC)
	gcc $^ -o $@

shared_test: $(INC) $(SHARED_SRC)
	gcc -I ../demo $^ -o $@

clean:
	rm -f $(TESTS)

.PHONY: all clean
