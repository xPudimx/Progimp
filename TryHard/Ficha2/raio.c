#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  float r, v;
  scanf("%f", &r);
  v = (4.0/3.0)*3.14*r*r*r;
  printf("%f\n", v);
  return 0;
}
