CC = clang++
CXX = clang++
CXXFLAGS =-std=c++14 -Wall --pedantic
LDLIBS =-lstdc++
obj=$(cppsrc:.cpp=.o) $(csrc:.c=.o)
project = $(notdir $(CURDIR))

all: main

main: main.o Rectangulo.o

Rectangulo.o: ../ej0202/Rectangulo.cpp
	$(CXX) $(CXXFLAGS) -c -o Rectangulo.o ../ej0202/Rectangulo.cpp

clean:
	rm -f *.o main

