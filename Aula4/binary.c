
#include <stdio.h>

void binary (int n){
	int v[32], i=0;
	while(n != 0){
		v[i] = n%2;
		i++;
		n /= 2;
	}
	for(int j = i-1; j >= 0; j--){
		printf("%d", v[j]);
	}
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	binary(n);
	return 0;
}
