#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	fgets(s, sizeof s, stdin);
	
	int l,i;
	l = strlen(s);
	for(i = 0; i < l; i++){
		printf("%s",&s[i]);
	}

	return 0;
}
