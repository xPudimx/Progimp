#include <stdio.h>

int mdc (int a, int b){
	while (a != b) {
		if (a > b) {
			a = a - b;
		} else {
			b = b - a;
		}
	}
	return a;
}

int main(){
	int a, b;
	scanf("%d", &a); scanf("%d", &b);
	printf("%d/%d = %d/%d\n", a, b, (a/mdc(a,b)), (b/mdc(a,b)));
	return 0;
}
