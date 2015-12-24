CC = g++
CFLAGS = -Wall
DEPS = machine.h
OBJ = hello-cpp-world.o machine.o

%.o: %.cc %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

hello-cpp-world: $(OBJ)
	g++ $(CFLAGS) -o $@ $^
