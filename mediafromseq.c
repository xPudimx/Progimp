#include <stdio.h>

int main(){
	float i=0, n, med, sum=0;
	scanf("%f", &n);
	while (n != 0) {
		i++;
		sum += n;
		scanf("%f", &n);
	}
	med = sum / i;
	printf("%.2f\n", med);
	return 0;
}
