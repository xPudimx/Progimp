#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

float volume (int r){
  return (4.0/3.0)*(r*r*r)*PI;
}

int main(int argc, char const *argv[]) {
  int r = 2;
  printf("%f\n", volume(r));
  return 0;
}
