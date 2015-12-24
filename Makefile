#all: hello-cpp-world hello-c-world

#%: %.cc
#	g++ -std=c++11 $< -o $@

#%: %.c
#	gcc $< -o $@


CC = g++
CFLAGS = -Wall
DEPS = machine.h
OBJ = hello-cpp-world.o machine.o

%.o: %.cc %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

hello-c-world: $(OBJ)
	g++ $(CFLAGS) -o $@ $^
