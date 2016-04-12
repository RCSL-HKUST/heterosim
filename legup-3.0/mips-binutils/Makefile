PREFIX = ${shell echo $$PWD}
BINUTILS_PKG = binutils-2.20.1a.tar.bz2
BINUTILS = binutils-2.20.1

bin/mipsel-elf-ld:
	#wget http://ftp.gnu.org/gnu/binutils/$(BINUTILS_PKG)
	tar xjfv $(BINUTILS_PKG)
	mkdir -p build-binutils
	cd build-binutils && ../$(BINUTILS)/configure --target=mipsel-elf --prefix=$(PREFIX) CFLAGS="-g -O2 -Wno-error"
	cd build-binutils && $(MAKE) all && $(MAKE) install
	rm -rf build-binutils $(BINUTILS)

clean:
	rm -rf build-binutils $(BINUTILS) bin lib mipsel-elf share
