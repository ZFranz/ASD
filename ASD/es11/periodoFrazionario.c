#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int periodoNaive(char *, int);

int main() {
	int len = 0, result = 0;
	char *str = malloc(1000*sizeof(char));
	
	gets(str);
	
	len = strlen(str);
	result = periodoNaive(str, len);
	
	return 0;
}

int periodoNaive(char *str, int len) {
	for (int i = 1; i <= len; i++) {
		char s1 = str.substring(0, len-i); // creare funzione equivalente a substring in C
		char s2 = str.substring(i, len-i);
		if (strcmp(s1, s2) == 0) {		// O(n-p)
			return i;
		}
	}
	return n;
}

int periodoInterativo(char *str, int len) {
	
	// r[i] dovrebbe rappresentare il
	// primo
	
	r[1] = 0;
	
	// NOTA BENE s = s[1...n] (INDICI PARTONO
	for (int i = 0; i < len; i++) {
		// calcolare il bordo massimo di s[1...i]
		// usando i valori r(0), r(1), ..., r(i)
		
		/*
		1) prima devo cercare un bordo z
		   di s[1...i] che soddisfi
		   s[i+1] = s[z+1]
		   e z deve essere massimo
		*/
		z = r[i];
		while (s[i+1] != s[z+1]) {
			// Nota: per ogni j <= i
			// r(j) è primo bordo di s[1...j]
			// s[1...z] è il primo bordo corrente
			z = r[z];
			// adesso z è il bordo successivo
		}
		
		if (s[i+1] == s[z+1]) {
			r(i+1) = z+1;
		} else {
			r(i+1) = 0;
		}
		
	}
	
	// r(n) è bordo massimo di s[1...n] = s
	return len - r(n); // periodo minimo
}
