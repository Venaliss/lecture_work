CC = g++

all: my_p

my_p: main.o
	$(CC) -o my_p main.o

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm -rf *.o my_p