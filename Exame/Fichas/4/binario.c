#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

void binario(int n) {
  int v[32], i = 0;
  while (n != 0) {
    v[i] = n%2;
    i++;
    n /= 2;
  }
  for(int j = i-1; j >= 0; j--){
    printf("%d", v[j]);
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n = 25;
  binario(n);
  return 0;
}
