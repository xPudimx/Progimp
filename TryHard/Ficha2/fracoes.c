#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n1, n2, d1, d2;
  printf("n1 = "); scanf("%d", &n1);
  printf("d1 = "); scanf("%d", &d1);
  printf("n2 = "); scanf("%d", &n2);
  printf("d2 = "); scanf("%d", &d2);
  printf("%d/%d + %d/%d = %d/%d\n", n1,d1,n2,d2,n1*d2+n2*d1,d1*d2);
  return 0;
}
