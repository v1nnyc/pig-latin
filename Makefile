CC=g++
CXXFLAGS=-std=c++11 -g
LDFLAGS=-g

all: reverse

reverse: reverse.cpp

clean:
	rm -f reverse *.o core*
