#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
  int vec[] = {1,-2,3,-4,-5,-6,7};
  int n = filtrar_positivos(vec, 7);
  for(int i = 0; i < n; i++){
    printf("%d\n", vec[i]);
  }
  return 0;
}
