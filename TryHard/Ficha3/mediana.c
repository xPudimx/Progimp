#include <stdio.h>
#include <stdlib.h>

int mediana(int a, int b, int c){
  if(a <= b && b <= c){
    return b;
  }
  if(a <= c && c <= b){
    return c;
  }
  return a;
}

int main(int argc, char const *argv[]) {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("%d\n", mediana(a,b,c));
  return 0;
}
