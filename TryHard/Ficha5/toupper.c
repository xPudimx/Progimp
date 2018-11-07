#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char prev = -1, ch;
	while ((ch = getchar()) != '\n') {
		if(isalpha(ch) && prev == ' '){
			ch = toupper(ch);
		}
		prev = ch;
		putchar(ch);
	}
	printf("\n");
	return 0;
}
