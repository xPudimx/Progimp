#include <stdio.h>

int bissexto (int n){
	if(n%4 == 0 && n%100 != 0){
		return 1;
	}
	if (n%100 == 0 && n%400 == 0) {
		return 1;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", bissexto(n));
	return 0;
}
