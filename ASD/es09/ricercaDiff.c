#include <stdio.h>
#include <stdlib.h>
#include "scanArray.h"

typedef struct {
	int i;
	int j;
} coppia;

coppia trovaIndici(int*, int);

int main() {
	int size = 0;
	int *a = malloc(MAX_LINE_SIZE*sizeof(int));
	
	size = scanArray(a); // leggo da riga di input un array (vettore di interi)
	a = realloc(a, size*sizeof(int));
	
	coppia p = trovaIndici(a, size);
	printf("%d %d", p.i, p.j);
	
	return 0;
}

coppia trovaIndici(int *a, int size) {
	coppia p = {0, 0};
	int i = 0, bestDiff = 0;
	for (int j = 0; j < size; j++) {
		// aggiorna i = argmin {i=0, ..., j : v[i] }
		if (a[j] < a[i]) {
			i = j;
		}
		
		// aggiorno bestPair e bestDiff
		if ((a[j] - a[i]) > bestDiff) {
			bestDiff = a[j] - a[i];
			p.i = i;
			p.j = j;
		}
	}
	return p;
}
