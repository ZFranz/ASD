#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	fgets(s, sizeof s, stdin);
	
	int l,i;
	l = strlen(s);
	i = 0;
	
	while (l >= 0) {
		for(i = 0; i < l; i++){
			printf("%c", s[i]);
		}
		putchar('\n');
		l--;
	}

	return 0;
}
