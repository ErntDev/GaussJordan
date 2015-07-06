all: programa

programa: main.o funcion1.o funcion2.o funcion3.o
	gcc main.o funcion1.o funcion2.o funcion3.o -o ecuaciones

main.o: main.c
	gcc -c main.c

funcion1: funcion1.c
	gcc -c funcion1.c

funcion2: funcion2.c
	gcc -c funcion2.c

funcion3: funcion3.c
	gcc -c funcion3.c

clean:
	rm -rf *o programa
