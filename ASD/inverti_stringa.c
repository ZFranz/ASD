#include <stdio.h>
#include <string.h>

int main() {
	char s1[100];
	char s2[100];
	fgets(s1, sizeof s1, stdin);
	
	int begin, end, count = 0;
	count = strlen(s1);
	end = count - 1;
	
	for(begin = 0; begin < count; begin++){
		s2[begin] = s1[end];
		end--;
	}
	s2[begin] = '\0';
	
	printf("%s\n", s2);


	return 0;
}
