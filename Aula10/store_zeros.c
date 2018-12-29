#include <stdio.h>
#include <stdlib.h>


void store_zeros(int vec[], int n) {
  for(int i = 0; i < n; i++){
    *(vec+i) = 0;
  }
}

int main(int argc, char const *argv[]) {
  int vec[] = {1,2,3,4,5};
  store_zeros(vec, 5);
  for(int i = 0; i < 5; i++){
    printf("%d  ",*(vec+i));
  }
  printf("\n");
  return 0;
}
