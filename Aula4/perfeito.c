#include <stdio.h>

int perfeito (int n){
	int sum=0;
	for(int i = 1; i <= n/2; i++){
		if (n%i == 0) {
			sum += i;
		}
	}
	return sum == n;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", perfeito(n));
	return 0;
}
