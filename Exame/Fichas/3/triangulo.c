#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

void equilatero(int a, int b, int c) {
  if (a == b || b == c || a == c) {
    if (a == b && b == c) {
      printf("EQUILATERO\n");
    } else {
      printf("ISOSCELES\n");
    }
  } else {
    printf("ESCALENO\n");
  }
}

int main(int argc, char const *argv[]) {
  int n, a, b, c;
  freopen("input.txt","r",stdin);
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    equilatero(a,b,c);
  }
  return 0;
}
