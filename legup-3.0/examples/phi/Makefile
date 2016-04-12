NAME=phi
LEVEL = ..

# override all target
OVERRIDE=yes
all:
	$(LLVM_HOME)llvm-as $(NAME).llvm
	$(LLVM_HOME)llc $(LLC_FLAGS) -march=v $(NAME).llvm.bc -o $(VFILE)

include $(LEVEL)/Makefile.common
