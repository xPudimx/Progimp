#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float n;
  scanf("%f", &n);
  printf("%.2f\n", n+(n*0.23));
  return 0;
}
