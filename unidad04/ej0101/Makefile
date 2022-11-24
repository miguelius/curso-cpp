CC = clang++
CXX = clang++
CXXFLAGS =-std=c++14 -Wall --pedantic
LDLIBS =-lstdc++
obj=$(cppsrc:.cpp=.o) $(csrc:.c=.o)
project = $(notdir $(CURDIR))
objects = main.o Complejo.o

all: $(project)

$(project): main ${objects}

main: main.o Complejo.o

$(objects): %.o: %.cpp

clean:
	rm -f *.o main

