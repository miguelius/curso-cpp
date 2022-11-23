CC = clang++
CXX = clang++
CXXFLAGS =-std=c++14 -I/usr/local/includes -Wall --pedantic
LDLIBS =-lstdc++ -L/usr/local/lib -lglfw -framework OpenGL
obj=$(cppsrc:.cpp=.o) $(csrc:.c=.o)
project = $(notdir $(CURDIR))
#objects = main.o

#all: $(project)
all: 
	echo "Por ahora nada"

#$(project): main

#$(objects): %.o: %.cpp

clean:
	rm -f *.o main

