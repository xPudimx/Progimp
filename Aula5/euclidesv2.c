#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,i=0;
  scanf("%d %d", &a, &b);
  printf("mdc(%d, %d) = ", a,b);
  while (a != b) {
    if(a>b){
      a = a - b;
      printf("mdc(%d, %d) = ", a,b);
      i++;
    }
    else {
      b = b - a;
      printf("mdc(%d, %d) = ", a,b);
      i++;
    }
  }
  printf("%d\n", a);
  printf("%d iteraçoes\n", i);
  return 0;
}
