#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int mediana(int a, int b, int c){
  if((a >= b && a <= c) || (a <= b && a >= c)) return a;
  if((b >= a && b <= c) || (b <= a && b >= c)) return b;
  return c;
}

int main(int argc, char const *argv[]) {
  int a = 2, b = 4, c = 10;
  printf("MEDIANA = %d\n", mediana(a,b,c));
  return 0;
}
