#include <stdio.h>
#include <stdlib.h>

void max_min(int vec[], int size, int *pmax, int *pmin) {
  *pmax = vec[0];
  *pmin = vec[0];
  for(int i = 0; i < size; i++){
    if (*pmax < vec[i]) {
      *pmax = vec[i];
    }
    if (*pmin > vec[i]) {
      *pmin = vec[i];
    }
  }
}

int main(int argc, char const *argv[]) {
  int pmax, pmin;
  int vec[] = {1,2,3,4,5,6,7,8,9};
  max_min(vec, 9, &pmax, &pmin);
  printf("MAX: %d  MIN: %d\n",pmax, pmin);
  return 0;
}
