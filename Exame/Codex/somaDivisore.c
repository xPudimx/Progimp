#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int soma_divisores(int n){
  int i = 1;
  int r = 0;
  while (i < n) {
    if(n % i == 0){
      r += i;
    }
    i++;
  }
  return r;
}

int main(int argc, char const *argv[]) {
  int n = 10;
  printf("SOMA DIV = %d\n", soma_divisores(n));
  return 0;
}
