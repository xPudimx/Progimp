#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void insertSort(int vec[], int n) {
  int i, j;
  for(i = 1; i < n; i++){
    int x = vec[i];
    j = i-1;
    while (j >= 0 && vec[j] > x) {
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = x;
  }
}

int main(int argc, char const *argv[]) {
  int vec[] = {3, 1, 2, 2, 4, 0};
  int size = 6;
  insertSort(vec, size);
  for(int i = 0; i < size; i++){
    printf("%d ", vec[i]);
  }
  printf("\n");
  return 0;
}
