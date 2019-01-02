#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

int soma_divisores(int n){
  int soma=0;
  for(int i = 1; i < n; i++){
    if (n%i == 0) {
      soma += i;
    }
  }
  return soma;
}

int main(int argc, char const *argv[]) {
  int n = 12;
  printf("Soma = %d\n", soma_divisores(n));
  return 0;
}
