#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int prox_bissexto(int n){
  while (n != 0) {
    if(n%4 == 0 && n%100 != 0){
      return n;
    }
    if(n%100 == 0 && n%400 == 0){
      return n;
    }
    return (prox_bissexto(n+1));
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int n = 2018;
  printf("ANO = %d\n", prox_bissexto(n));
  return 0;
}
