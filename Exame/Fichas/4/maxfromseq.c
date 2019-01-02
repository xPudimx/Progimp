#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

int main(int argc, char const *argv[]) {
  int max = 0, valor;
  scanf("%d", &valor);
  while (valor != 0) {
    if (valor > max) {
      max = valor;
    }
    scanf("%d", &valor);
  }
  printf("Max = %d\n", max);
  return 0;
}
