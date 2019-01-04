#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

void mdc(int a, int b) {
  int count = 1;
  printf("mdc(%d, %d) = ", a, b);
  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
    printf("mdc(%d, %d) = ", a, b);
    count ++;
  }
  printf("%d\n", a);
  printf("%d \n", count);
}

int main(int argc, char const *argv[]) {
  mdc(36,21);
  return 0;
}
