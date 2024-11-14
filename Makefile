CC = g++

all: my_p

my_p: main.o
	$(CC) -o my_p main.o

main.o: main.cpp
	$(CC) -c main.cpp

run: main
	./main

run-fail: main
	./main ; echo "Exit code: $$?" ; exit 1

clean:
	rm -rf *.o my_p