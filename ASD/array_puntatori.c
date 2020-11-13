// array e puntatori C

#include <stdio.h>

int main() {
	int a[5] = {10, 20, 30, 40, 50};
	
	int* b; // puntatore ad un intero, un indirizzo di una cella di memoria che contiene un intero
	int* c;
	int* d;
	
	b = &(a[0]);
	c = &(a[1]);
	d = a;
	
	printf("%d\n", a[0]);
	printf("%p\n", b);
	printf("%p\n", c);
	printf("%p\n", d); // = b
	printf("%d\n", *c); // stampa il valore contenuto alla cella di memoria indirizzata da c
	printf("%p\n", d + 1); // = c
	
	/*
	b + 1; // b = &(a[0])
	b + 1 == (int *)(((long int) b) + 1*sizeof(int))
		prendo il puntatore e mi sposto a destra di tante celle, intese come celle del tipo di dato preso in considerazione
	*/
}
