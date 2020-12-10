#include <stdio.h>
#include <stdlib.h>
#include "scanArray.h"

int majorityCandidate(int*, int);

int main() {
	int size = 0, result = -1;
	int *a = malloc(MAX_LINE_SIZE*sizeof(int));
	
	size = scanArray(a); // leggo da riga di input un array (vettore di interi)
	a = realloc(a, size*sizeof(int));
	
	result = majorityCandidate(a, size);
	
	if (result == -1) {
		printf("%s", "No majority");
	} else {
		printf("%d", result);
	}
	
	return 0;
}

int majorityCandidate(int *a, int size) {
	int candidate = a[0];
	int count = 1; // contatore del candidato
	
	for (int i = 1; i < size; i++) {
		if (a[i] == candidate) {
			count++;
		} else if (count == 0) {
			candidate = a[i];
			count = 1;
		} else {
			count--;
		}
	}
	
	count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] == candidate) {
			count++;
		}
	}
	
	if (count > size/2) {
		return candidate;
	} else {
		return -1;
	}
	
	/*int maxCount = 0; 
    int indice = -1; 
    
    for (int i = 0; i < size; i++) { 
        int count = 0; 
        for (int j = 0; j < size; j++) { 
            if (a[i] == a[j]) 
                count++; 
        } 

        // aggiorno maxCount se minore del nuovo count
        if (count > maxCount) { 
            maxCount = count; 
            indice = i; 
        } 
    } */
    
}
