CC=gcc
CPP=g++

IDIR=$(CPPUTEST_HOME)/include
CFLAGS=-I$(IDIR) -Wall

LDIR=-L$(CPPUTEST_HOME)/lib

LIBS=-lCppUTest -lCppUTestExt

DEPS = strCalc.h

C_SRC = \
	strCalc.c

CPP_SRC = \
	strCalc_unittests.cpp

OBJS= \
      	strCalc.o \
	strCalc_unittests.o

all: strcalc
	./runUnitTests

strcalc:
	$(CC) -c $(C_SRC) $(CFLAGS) 
	$(CPP) -c $(CPP_SRC) $(CFLAGS) 
	$(CPP) -o runUnitTests $(OBJS) $(LIBS) $(LDIR)

.PHONY: clean
clean:
	rm -f *.o
	rm -f runUnitTests

