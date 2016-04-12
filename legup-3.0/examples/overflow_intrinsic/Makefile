NAME=overflow_intrinsic
LEVEL = ..

# override all target
OVERRIDE=yes
all:
	$(LLVM_HOME)llvm-as $(NAME).llvm
	$(LLVM_HOME)opt $(OPT_FLAGS) -legup-prelto < $(NAME).llvm.bc > $(NAME).final.bc
	$(LLVM_HOME)llc $(LLC_FLAGS) -march=v $(NAME).final.bc -o $(VFILE)

include $(LEVEL)/Makefile.common
