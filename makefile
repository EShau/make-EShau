all: Main.o Func.o
	gcc -o program Main.o Func.o

Main.o: Main.c Headers.h
	gcc -c Main.c

Func.o: Func.c Headers.h
	gcc -c Func.c
