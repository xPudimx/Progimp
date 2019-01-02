#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

void factor(int n) {
  int i = 2;
  while (n != 1) {
    if (n % i == 0) {
      printf("%d ", i);
      n /= i;
    } else {
      i++;
    }
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int n = 24;
  factor(n);
  return 0;
}
