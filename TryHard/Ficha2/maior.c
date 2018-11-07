#include <stdio.h>
#include <stdlib.h>
int maior (int a, int b, int c){
	if(a > b){
		if (a > c) {
			return a;
		}
	}
	else if (b > c){
		return b;
	}
	return c;
}
int main(int argc, char const *argv[]) {
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	printf("%d\n", maior(a,b,c));
	return 0;
}
