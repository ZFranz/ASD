#include <stdio.h>
#include <stdlib.h>
#include "scanArray.h"
#include "ricercaDicotonica.h"

int main() {
	int size = 0, n = 0, pos = -1;
	int a[MAX_LINE_SIZE];
	
	size = scanArray(a);
	scanf("%d", &n);
	
	pos = ricercaDicotonica(n, a, size);
	
	if(pos == -1) {
		printf("Il valore %d non e\' stato trovato.\n", n);
	} else {
		printf("Il valore %d si trova alla poszione %d.\n", n, pos);
	}
	
	return 0;
}
