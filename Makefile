CFLAGS=-O0 -fopenmp -Wall -Wextra
LDFLAGS=-fopenmp

all: main

main: main.o
main.o: main.c

.PHONY: clean
clean:
	$(RM) main main.o
	$(RM) perf.data gmon.out

run: main
	./$<
