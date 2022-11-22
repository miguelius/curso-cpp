CC = clang++
CXX = clang++
CXXFLAGS =-std=c++14 -Wall --pedantic
LDLIBS =-lstdc++
obj=$(cppsrc:.cpp=.o) $(csrc:.c=.o)
project = $(notdir $(CURDIR))
objects = main.o MiArray.o

all: $(project)

$(project): main ${objects}

main: main.o MiArray.o

$(objects): %.o: %.cpp

clean:
	rm -f *.o main

