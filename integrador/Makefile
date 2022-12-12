CC = clang++
CXX = clang++
CXXFLAGS =-std=c++14 -Wall --pedantic
LDLIBS =-lstdc++ -v
obj=$(cppsrc:.cpp=.o) $(csrc:.c=.o)
project = $(notdir $(CURDIR))
objects = main.o Menu.o Coleccionable.o

all: $(project)

$(project): main ${objects}

main: main.o Menu.o Coleccionable.o

$(objects): %.o: %.cpp

clean:
	rm -f *.o main

