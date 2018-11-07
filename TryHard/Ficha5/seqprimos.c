#include <stdio.h>

int primo(int n){
	int d;
	if (n <= 1) {
		return 0;
	}
	for(d = 2; d*d <= n; d++){
		if (n % d == 0) {
			return 0;
		}
	}
	return 1;
}

int main(){
	int n, i = 2;
	scanf("%d", &n);
	while (i < n) {
		if (primo(i)) {
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}
