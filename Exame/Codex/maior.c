#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int maior(int a, int b, int c){
  if (a > b) {
    if (a > c) {
      return a;
    } else {
      return c;
    }
  } else {
    if (b > c) {
      return b;
    } else {
      return c;
    }
  }
}

int main(int argc, char const *argv[]) {
  int a = 2, b = 3 , c = 40;
  printf("MAIOR = %d\n", maior(a,b,c));
  return 0;
}
