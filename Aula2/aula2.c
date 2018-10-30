#include <stdio.h>
#define pi 3.14159
float ex4 (float iva){
	return (iva*1.23);
}

float ex3 (float raio){
	return ((4.0/3.0)*pi*raio*raio*raio);
}

int ex5 (int quantia){
	int n20, n10, n5, m1;
	n20=quantia/20;
	quantia=quantia%20;
	n10=quantia/10;
	quantia=quantia%10;
	n5=quantia/5;
	quantia=quantia%5;
	m1=quantia/1;
	printf("Notas 20= %d\n", n20);
	printf("Notas 10= %d\n", n10);
	printf("Notas 5= %d\n", n5);
	printf("Moedas 1= %d\n", m1);	
	return 0;
}

int ex6(int n1, int d1, int n2, int d2){
	int aux1, aux2;
	aux2=d2*d1;
	aux1=(n1*d2)+(n2*d1);
	printf("%d/%d + %d/%d = %d/%d\n", n1,d1,n2,d2,aux1,aux2);
	return 0;
}

float ex8(float x){
	return 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+7*x-6;
}

int main(int argc, char const *argv[])
{
	float x;
	int n1, d1, n2, d2;
	int quantia;
	float val,result;
	float raio, vol;
	printf("Valor= ");
	scanf("%f", &val);
	result=ex4(val);
	printf("Resultado= %f\n", result);
	printf("Raio= ");
	scanf("%f", &raio);
	vol=ex3(raio);
	printf("Volume= %.2f\n", vol);
	printf("Quantia= ");
	scanf("%d", &quantia);
	ex5(quantia);
	printf("N1= ");
	scanf("%d", &n1);
	printf("D1= ");
	scanf("%d", &d1);
	printf("N2= ");
	scanf("%d", &n2);
	printf("D2= ");
	scanf("%d", &d2);
	ex6(n1, d1, n2, d2);
	
	//Ex Codex Maior valor
/*	int a, b, c, maior;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b){
		if (a > c){
			maior = a;
		} else {
			maior = c;
		}
	} else {
		if (b > c){
			maior = b;
		} else {
			maior = c;
		}
	}
	printf("%d\n", maior);*/
	//

	printf("X= ");
	scanf("%f", &x);
	printf("%f\n", ex8(x));
	return 0;
}