#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

void quantia(int n) {
  int m1, n5, n10, n20;
  n20 = n/20;
  n10 = (n%20)/10;
  n5 = ((n%20)%10)/5;
  m1 = ((n%20)%10)%5;
  printf("n20 = %d\n", n20);
  printf("n10 = %d\n", n10);
  printf("n5 = %d\n", n5);
  printf("m1 = %d\n", m1);
}

int main(int argc, char const *argv[]) {
  int n = 93;
  quantia(n);
  return 0;
}
