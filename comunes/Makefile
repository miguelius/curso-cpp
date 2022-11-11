CC = clang++
CXX = clang++
CXXFLAGS =-std=c++14 -Wall --pedantic
LDLIBS =-lstdc++
obj=$(cppsrc:.cpp=.o) $(csrc:.c=.o)
project = $(notdir $(CURDIR))

all: $(objects)

$(objects): %.o: %.cpp

clean:
	rm -f *.o main

