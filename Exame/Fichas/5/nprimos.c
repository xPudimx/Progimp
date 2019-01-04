#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

int primalidade(int n){
    if (n <= 1) {
      return 0;
    }
    for(int i = 2; i < n; i++){
      if (n % i == 0) {
        return 0;
      }
    }
    return 1;
}

void nprimos(int n) {
  for(int i = 0; i < n; i++){
    if (primalidade(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n = 100;
  nprimos(n);
  return 0;
}
