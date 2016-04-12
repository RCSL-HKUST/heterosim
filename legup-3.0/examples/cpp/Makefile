NAME=point
LEVEL=..

FRONT_END=clang++
OVERRIDE=yes
ifeq ($(NO_INLINE),)
	NO_INLINE=1
endif

all:
	# produces pre-link time optimization binary bitcode: $(NAME).prelto.bc
	$(FRONT_END) $(NAME).cpp -emit-llvm -c $(CFLAG) -o $(NAME).prelto.1.bc
	# linking may produce llvm mem-family intrinsics
	$(LLVM_HOME)llvm-ld $(LDFLAG) $(NAME).prelto.1.bc -b=$(NAME).prelto.linked.bc
	# performs intrinsic lowering so that the linker may be optimized
	$(LLVM_HOME)opt $(OPT_FLAGS) -legup-prelto < $(NAME).prelto.linked.bc > $(NAME).prelto.bc
	# produces $(NAME).bc binary bitcode and a.out shell script: lli $(NAME).bc
	$(LLVM_HOME)llvm-ld $(LDFLAG) $(NAME).prelto.bc $(LEVEL)/lib/llvm/liblegup.a -b=$(NAME).bc
	# produces textual bitcodes: $(NAME).prelto.1.ll $(NAME).prelto.ll $(NAME).ll
	$(LLVM_HOME)llvm-dis $(NAME).prelto.1.bc
	$(LLVM_HOME)llvm-dis $(NAME).prelto.bc
	$(LLVM_HOME)llvm-dis $(NAME).bc
	# produces verilog: $(NAME).v
	$(LLVM_HOME)llc $(LLC_FLAGS) -march=v $(NAME).bc -o $(VFILE)
include $(LEVEL)/Makefile.common
