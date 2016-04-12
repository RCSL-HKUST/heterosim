# Makefile
# For CS194-2 fall 2007, Homework 1 (Monte Carlo)
#
#
#
# Include platform-dependent settings.
#
#
# NOTE: This only works for GNU Make.  On NERSC IBM machines, you'll
# need to load the "GNU" module and use "gmake" instead of "make".
# Please refer to the following webpage for more info:
#
# http://www.nersc.gov/nusers/systems/bassi/software/
#

HW1_INCS = black_scholes.h gaussian.h parser.h random.h timer.h util.h
HW1_C_SRCS = black_scholes.c gaussian.c main.c parser.c random.c random_seed.c timer.c util.c
HW1_C_OBJS = $(HW1_C_SRCS:.c=.o)
HW1_EXE = hw1.x
CFLAGS = -lm -lpthread

all: hw1.x

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

hw1.x: $(HW1_C_OBJS)
	$(CC) $(HW1_C_OBJS) -o $@ $(CFLAGS)

black_scholes.o: black_scholes.c black_scholes.h gaussian.h random.h util.h

gaussian.o: gaussian.c gaussian.h util.h

main.o: main.c black_scholes.h parser.h random.h timer.h

parser.o: parser.c parser.h

random.o: random.c random.h

random_seed.o: random_seed.c

timer.o: timer.c timer.h

util.o: util.c util.h

clean:
	rm -f $(HW1_C_OBJS) $(HW1_EXE)
