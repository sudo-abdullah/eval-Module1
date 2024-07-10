CFLAGS = -o
CC = gcc

all: algo.c algo.o
	./algo.o

algo.o: algo.c
	$(CC) algo.c $(CFLAGS) algo.o

clean:
	rm -f *.o
