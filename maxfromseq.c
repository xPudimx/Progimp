#include <stdio.h>

int main(){
	int i=0, max=0, n, x;
	scanf("%d\n", &n);
	while (i < n) {
		scanf("%d", &x);
		if(x > max){
			max = x;
		}
		i++;
	}
	printf("%d\n", max);
	return 0;
}
