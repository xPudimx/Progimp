#include <stdio.h>
#include <stdlib.h>

int distintos (int a, int b, int c){
  if(a == b && b == c){
    return 0;
  }
  if(a != b && b != c && c != a){
    return 3;
  }
    return 2;
}

int main(int argc, char const *argv[]) {
  int a, b ,c;
  scanf("%d%d%d", &a,&b,&c);
  printf("%d\n", distintos(a,b,c));
  return 0;
}
