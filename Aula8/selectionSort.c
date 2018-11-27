#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void selectionSort(int vec[], int size){
  for(int i = 0; i < size; i++){
    int min = i;
    for(int j = i + 1; j < size; j++){
      if (vec[j] < vec[min]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = vec[i];
      vec[i] = vec[min];
      vec[min] = temp;
    }
  }
}

int main(int argc, char const *argv[]) {
  int vec[] = {3, 1, 2, 2, 4, 0};
  int size = 6;
  selectionSort(vec, size);
  for(int i = 0; i < size; i++){
    printf("%d ", vec[i]);
  }
  printf("\n");
  return 0;
}
