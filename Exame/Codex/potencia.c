#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int potencia(int x, int n){
  int r = x;
  if(n == 0) return 1;
  for(int  i = 1; i < n; i++){
    r *= x;
  }
  return r;
}

int potenciaRec(int x, int n){
  if (n == 0) {
    return 1;
  }
  return x * potenciaRec(x , n-1);
}

int main(int argc, char const *argv[]) {
  int x = 2, n = 10;
  printf("POT = %d\n", potencia(x,n));
  printf("POTREC = %d\n", potenciaRec(x,n));
  return 0;
}
