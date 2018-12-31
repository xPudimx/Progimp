#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

void somafracs(int n1, int d1, int n2, int d2){
  int n3, d3;
  n3 = n1*d2+n2*d1;
  d3 = d1*d2;
  printf("%d/%d\n", n3,d3);
}

int main(int argc, char const *argv[]) {
  int n1 = 3, d1 = 4, n2 = 1, d2 = 2;
  printf("%d/%d + %d/%d = ", n1,d1,n2,d2);
  somafracs(n1,d1,n2,d2);
  return 0;
}
