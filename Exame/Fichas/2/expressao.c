#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

float expressao(float x){
  return ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
}

int main(int argc, char const *argv[]) {
  float x = 1.0;
  printf("%f\n", expressao(x));
  return 0;
}
