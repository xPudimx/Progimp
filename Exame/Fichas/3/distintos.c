#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

int distintos(int a, int b, int c){
  if(a == b && b == c) return 1;
  if(a == b || b == c || a == c) return 2;
  return 3;
}

int main(int argc, char const *argv[]) {
  int a = 7, b = 7, c = 7;
  printf("%d distintos\n", distintos(a,b,c));
  return 0;
}
