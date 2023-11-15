CC= gcc
CCFLAGS= -O3
LDFLAGS = -lm

all: matmul

matmulc: main.o matmul.o
	$(CC) -o matmul main.o matmul.o

matmul.o: matmul.c
	$(CC) -c matmul.c

main.o: main.c
	$(CC) -c main.c

clean:
	rm *.o