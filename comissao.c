#include <stdio.h>
//ATENÇAO COM \n NOS SCANF!!!
int main(){
	float val, com;
	printf("Valor: \n"); scanf("%f", &val);
	while (val != 0) {
		if (val < 2500.0) {
			com = 30.0 + 0.017 * val;
		} else if (val < 6250.0) {
			com = 56.0 + 0.0066 * val;
		} else if (val < 20e3) {
			com = 76.0 + 0.0034 * val;
		} else if (val < 50e3) {
			com = 100.0 +0.0022 * val;
		}else if (val < 500e3) {
			com = 155.0 + 0.0011 * val;
		} else {
			com = 255.0 + 0.0009 * val;
		}

		if(com < 39.0){
			com = 39.0;
		}
		printf("Com = %.2f\n", com);
		scanf("%f", &val);
	}

	return 0;
}
