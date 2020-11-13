#include <stdio.h>
#define SIZE 100

int main() {
	int array[SIZE] = { };
	int read = 0;
	int n = 0;
  
	while(read < SIZE && scanf("%d", &n) == 1) {
		if (n == '\n') {
			return;
		}
		printf("%d", n);
		array[read] = n;
		read++;
	}
	
	printf("\nStampa\n");
	for(int i = 0; i < read; i++) {
		printf("%d ", array[i]);
	}
  
	return 0;
}
