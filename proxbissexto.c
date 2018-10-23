#include <stdio.h>

int prox_bissexto (int n){
	while (n != 0) {
		if(n%4 == 0 && n%100 != 0){
			return n;
		}
		if (n%100 == 0 && n%400 == 0) {
			return n;
		}
		return(prox_bissexto(n+1));
	}
	return 0;
}

int main(){
	int n = 2018;
	printf("%d\n", prox_bissexto(n));
	return 0;
}
