#include <stdio.h>
#include <stdlib.h>

void triangulo(int a, int b, int c) {
  if(a == b && b == c){
      printf("Equilatero\n");
      return;
    }
    if (a == b || b == c || a == c) {
      printf("Isosceles\n");
      return;
    }
    printf("Escaleno\n");
}

int main(int argc, char const *argv[]) {
  int a, b, c;
  scanf("%d%d%d", &a,&b,&c);
  triangulo(a,b,c);
  return 0;
}
