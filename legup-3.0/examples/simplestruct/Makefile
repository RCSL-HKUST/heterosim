NAME=simplestruct
LEVEL = ..

# override all target
OVERRIDE=yes
all:
	$(LLVM_HOME)llvm-as $(NAME).llvm
	# produce a.out executable
	$(LLVM_HOME)llvm-ld $(NAME).llvm.bc -b=$(NAME).bc
	$(LLVM_HOME)llc $(LLC_FLAGS) -march=v $(NAME).llvm.bc -o $(VFILE)

include $(LEVEL)/Makefile.common
