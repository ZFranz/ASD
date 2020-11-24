#include <stdio.h>
#include <stdlib.h>
#include "scanArray.h"
#include "ricercaDicotomica.h"

typedef struct {
	int i;
	int j;
} coppia;

coppia trovaIndici(int *a, int size, int sum);

int main() {
	int size = 0, sum = 0;
	int a[MAX_LINE_SIZE];
	
	size = scanArray(a); // leggo da riga di input un array (vettore di interi)
	scanf("%d", &sum); // leggo dalla riga successiva la somma desiderata
	
	coppia p = {-1, -1};
	p = trovaIndici(a, size, sum);
	printf("%d %d", p.i, p.j);
	
	return 0;
}

coppia trovaIndici(int *a, int size, int sum) {
	coppia p = {-1, -1};
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if(a[i] + a[j] == sum) {
				p.i = i;
				p.j = j;
				return p;
			}
		}
	}
	return p;
}
