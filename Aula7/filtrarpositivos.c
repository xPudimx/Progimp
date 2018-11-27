#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int filtrar_positivos(int vec[], int size){
  int n = 0;
  for(int i = 0; i < size; i++){
    if(vec[i] > 0){
      vec[n] = vec[i];
      n++;
    }
  }
  return n;
}

int main(int argc, char const *argv[]) {
  int vec[] = {1, 0, -2, 3, 9};
  int size = 5;
  int newSize = filtrar_positivos(vec, size);
  for(int i = 0; i < newSize; i++){
    printf("%d ", vec[i]);
  }
  printf("\n");
  return 0;
}
