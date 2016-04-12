DIRS = adpcm aes bf bit bitcnt blowfish crc decode decode1 decode2 dfadd dfdiv dfmul dfsin gsm jpeg math mips motion new sha str

include ../Makefile.config

$(TARGETS):
	for dir in $(DIRS); do make $@ -C $$dir; done

backup:
	mkdir -p backup
	for dir in $(DIRS); do cp $$dir/*.v backup; done

.PHONY : backup
