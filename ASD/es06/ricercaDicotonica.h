#include <stdio.h>

int ricercaDicotonica(int n, int* a, int size) {
	int i = 0, j = size - 1;
	
	while (i <= j) {
		int k = (i + j) / 2;
		if (a[k] == n) {
			return k;
		} else if (n < a[k]) {
			j = k - 1;
		} else {
			i = k + 1;
		}
	}
	
	return -1;
}
