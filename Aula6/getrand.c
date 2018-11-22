#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double getRandDouble(int range, int offset){
	return (((double) rand())/((double) RAND_MAX) * range) + offset;
}
int getRandInt(int begI, int endI){
	return rand() % ((endI - begI) + 1) + begI;
}

int main(){
	srand(time(NULL));
	int max, min;
	int testes = 1000;
	double soma = 0.0;
	double min2, max2;

	//Int de begI a endI
	printf("-----RAND INT-----\n");
	printf("Range = ");
	scanf("%d %d", &min, &max);
	printf("Valores entre %d e %d: \n", min, max);
	for(int i = 0; i < testes; i++){
		int r = getRandInt(min, max);
		soma += r;
		printf("%d  ", r);
	}
	printf("\n");
	printf("Media = %lf\n", soma/testes);

	//Double de begD a endD
	// printf("-----RAND DOUBLE-----\n");
	// printf("Range = ");
	// scanf("%lf %lf", &begD, &endD);
	// for(int i = 0; i < testes; i++){
	// 	double r = getRandDouble((max - min), min);
	// 	soma += r;
	// 	printf("%lf ", r);
	// }
	// printf("\n");
	// printf("Media = %lf\n", soma/testes);
	return 0;
}
