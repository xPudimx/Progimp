#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int partition(int vec[], int l, int u){
  int i, m, temp;
  m = l;
  for(i = l+1; i <= u; i++){
    if (vec[i] < vec[l]) {
      m++;
      temp = vec[i];
      vec[i] = vec[m];
      vec[m] = temp;
    }
  }
  temp = vec[l];
  vec[l] = vec[m];
  vec[m] = temp;
  return m;
}

void quickSort(int vec[], int l, int u) {
  int m;
  if (l >= u) {
    return;
  }
  m = partition(vec, l, u);
  quickSort(vec, l, m-1);
  quickSort(vec, m+1, u);
}


int main(int argc, char const *argv[]) {
  int vec[] = {3, 1, 2, 2, 4, 0};
  int size = 6;
  quickSort(vec, 0, size);
  for(int i = 0; i < size; i++){
    printf("%d ", vec[i]);
  }
  printf("\n");
  return 0;
}
