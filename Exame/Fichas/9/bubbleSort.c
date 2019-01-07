#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void bubbleSort(int vec[], int size) {
  for(int i = 0; i < (size-1); i++){
    for(int j = 0; j < (size-(i+1)); j++){
      if (vec[j] > vec[j+1]) {
        int temp = vec[j];
        vec[j] = vec[j+1];
        vec[j+1] = temp;
      }
    }
  }
}


int main(int argc, char const *argv[]) {
  int vec[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  bubbleSort(vec, 9);
  for(int i = 0; i < 9; i++){
    printf("%d  ", vec[i]);
  }
  printf("\n");
  return 0;
}
