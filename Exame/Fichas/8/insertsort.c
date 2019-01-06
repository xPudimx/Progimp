#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 1000

void insert_sort(int vec[], int size){
  int i, j, x;
  for(i = 1; i < size; i++){
    x = vec[i];
    j = i - 1;
    while (j >= 0 && vec[j] > x) {
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = x;
  }
}

int main(int argc, char const *argv[]) {
  int vec[] = {5, 4, 3, 2, 1};
  insert_sort(vec,5);
  for(int i = 0; i < 5; i++){
    printf("%d ", vec[i]);
  }
  printf("\n");
  return 0;
}
