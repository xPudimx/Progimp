#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n, m1, n5, n10, n20;
  scanf("%d", &n);
  n20 = n/20;
  n10 = (n%20)/10;
  n5 = ((n%20)%10)/5;
  m1 = (((n%20)%10)%5);
  printf("Notas 20 = %d\n", n20);
  printf("Notas 10 = %d\n", n10);
  printf("Notas 5 = %d\n", n5);
  printf("Moedas 1 = %d\n", m1);
  return 0;
}
