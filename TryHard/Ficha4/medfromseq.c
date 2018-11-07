#include <stdio.h>

int main(int argc, char const *argv[]) {
  float soma = 0, n = 0, x;
  scanf("%f", &x);
  if (x == 0) {
    printf("0\n");
  }
  while (x != 0) {
    soma += x;
    n++;
    scanf("%f", &x);
  }
  printf("%f/%f = %f\n", soma,n,soma/n);
  return 0;
}
