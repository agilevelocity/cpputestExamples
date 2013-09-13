CC=gcc
CPP=g++

IDIR=$(CPPUTEST_HOME)/include
CFLAGS=-I$(IDIR) -Wall

LDIR=-L$(CPPUTEST_HOME)/lib

LIBS=-lCppUTest -lCppUTestExt

DEPS = StrCalc.h

CPP_SRC = \
	StrCalc.cpp \
	StrCalcTest.cpp

OBJS= \
    StrCalc.o \
	StrCalcTest.o

all: strcalc
	./runUnitTests

strcalc: 
	$(CPP) -c $(CPP_SRC) $(CFLAGS) 
	$(CPP) -o runUnitTests $(OBJS) $(LIBS) $(LDIR)

.PHONY: clean
clean:
	rm -f *.o
	rm -f runUnitTests

