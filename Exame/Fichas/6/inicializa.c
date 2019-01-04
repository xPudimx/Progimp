#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializa(int vec[], int size, int val) {
  for(int i = 0; i < size; i++){
    vec[i] = val;
  }
}

int main(int argc, char const *argv[]) {
  int size = 10, val = 1;
  int vec[size];
  inicializa(vec,size,val);
  for(int i = 0; i < size; i++){
    printf("%d ", vec[i]);
  }
  putchar('\n');
  return 0;
}
