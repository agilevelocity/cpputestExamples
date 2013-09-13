CC=gcc
CPP=g++

IDIR=../cpputest/include
CFLAGS=-I$(IDIR) -Wall

LDIR=-L../cpputest/lib

LIBS=-lCppUTest

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

