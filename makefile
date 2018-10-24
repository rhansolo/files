all: func.o
	gcc func.o
fileio: func.c
	gcc -c func.c
run:
	./a.out