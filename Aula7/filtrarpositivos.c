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
  for(int j = 0; j < n; j++){
    printf("%d ", vec[j]);
  }
  return n;
}

int main(int argc, char const *argv[]) {
  int vec[] = {1, 0, -2, 3, 9};
  int size = 5;

  return 0;
}
