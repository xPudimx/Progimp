#include <stdio.h>

int main(){
  char c;
	int count = 0;
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z')) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
