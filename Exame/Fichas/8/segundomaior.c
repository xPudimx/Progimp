#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100


void select_sort(int vec[], int size) {
  for(int i = 0; i < size; i++){
    int min = i;
    for(int j = i+1; j < size; j++){
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

int segundo_maior(int vec[], int size){
  select_sort(vec,size);
  return vec[size - 2];
}

int main(int argc, char const *argv[]) {
  int vec[] = {5, 4, 3, 2, 1};
  printf("%d\n", segundo_maior(vec,5));
  return 0;
}
