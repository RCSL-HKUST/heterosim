# run 'make' after a git pull or git clone

VERSION = 3.0

# if your libraries are installed locally (scinet)
ifdef USE_SCINET
	CLOOG_LIBS = --with-gmp-prefix=/home/j/janders/jchoi/libgmp
	LLVM_LIBS = --with-lpsolve-include=/home/j/janders/jchoi/legup_binaries --with-lpsolve-lib=/home/j/janders/jchoi/legup_binaries --with-gmp=/home/j/janders/jchoi/libgmp	
endif


# Uncomment to enable gdb debugging
#DEBUG_MODE = --disable-optimized
# Also change your LLVM_BUILD environment variable:
#export LLVM_BUILD=Debug+Asserts

all: llvm/tools/polly/Makefile.config llvm/Makefile.config
	$(MAKE) -C mips-binutils
	$(MAKE) -C llvm
	$(MAKE) -C tiger/processor
	$(MAKE) clean -C tiger/linux_tools
	$(MAKE) -C tiger/linux_tools
	#$(MAKE) clean -C examples/lib/llvm
	$(MAKE) -C examples/lib/llvm
	$(MAKE) -C tiger/tool_source/profiling_tools
	$(MAKE) -C pcie

llvm/Makefile.config: cloog/install/include/isl
	cd llvm && ./configure --with-cloog=$(PWD)/cloog/install --with-isl=$(PWD)/cloog/install $(LLVM_LIBS) $(DEBUG_MODE)

llvm/tools/polly/Makefile.config: llvm/Makefile.config

cloog/install/include/isl: cloog/isl/Makefile
	$(MAKE) -C cloog
	$(MAKE) install -C cloog

cloog/isl/Makefile:
	mkdir -p cloog/install
	cd cloog && ./autogen.sh
	cd cloog && ./configure --prefix=$(PWD)/cloog/install $(CLOOG_LIBS)

clean:
	-$(MAKE) clean -C cloog
	-$(MAKE) clean -C mips-binutils
	-$(MAKE) clean -C llvm
	-$(MAKE) clean -C tiger/hybrid/processor
	-$(MAKE) clean -C tiger/processor
	-$(MAKE) clean -C tiger/linux_tools
	-$(MAKE) clean -C examples/lib/llvm
	-$(MAKE) clean -C tiger/tool_source/profiling_tools
	-$(MAKE) clean -C pcie
	rm -rf cloog/isl/Makefile
	rm -rf llvm/Makefile.config
	rm -rf llvm/tools/polly/Makefile.config

release:
	git archive --format=tar --prefix=legup-$(VERSION)/ HEAD | gzip > legup-$(VERSION).tar.gz

.PHONY = all
	
