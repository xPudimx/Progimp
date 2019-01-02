#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

int main(int argc, char const *argv[]) {
  int media, count = 0, soma = 0, valor;
  scanf("%d", &valor);
  while (valor != 0) {
    count ++;
    soma += valor;
    scanf("%d", &valor);
  }
  media = soma / count;
  printf("MEDIA = %d\n", media);
  return 0;
}
