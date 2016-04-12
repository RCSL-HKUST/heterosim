DIRS = add boxfilter dotproduct histogram los matrixmult matrixtrans perfecthash test

include ../../Makefile.config

$(TARGETS):
	for dir in $(DIRS); do make $@ -C $$dir; done
