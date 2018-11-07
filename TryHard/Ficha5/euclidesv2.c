#include <stdio.h>

int main(){
	int i = 1, a, b;
	scanf("%d%d", &a, &b);
	printf("mdc(%d, %d) = ", a,b);
	while (a != b) {
		if (a > b) {
			a = a - b;
			printf("mdc(%d, %d) = ", a,b);
			i++;
		}
		if (b > a) {
			b = b - a;
			printf("mdc(%d, %d) = ", a,b);
			i++;
		}
	}
	printf("%d\n", a);
	printf("%d\n", i);
	return 0;
}
