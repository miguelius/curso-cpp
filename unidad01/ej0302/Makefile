CC = g++
CXX = g++
CXXFLAGS =-std=c++14 -Wall --pedantic
LDLIBS =-lstdc++
obj=$(cppsrc:.cpp=.o) $(csrc:.c=.o)
project = $(notdir $(CURDIR))
objects = main.o

all: $(project)

$(project): main

$(objects): %.o: %.cpp

clean:
	rm -f *.o main

