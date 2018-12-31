#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

float iva(float n){
  return n + n*0.23;
}

int main(int argc, char const *argv[]) {
  float n;
  scanf("%f", &n);
  printf("%.2f\n", iva(n));
  return 0;
}
