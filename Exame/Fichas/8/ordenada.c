#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int ordenada(int vec[], int size){
  for(int i = 0; i < size - 2; i++){
    if (vec[i] > vec[i+1]) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  int vec[] = {1, 3, 4, 3, 6};
  printf("%d\n", ordenada(vec, 5));
  return 0;
}
