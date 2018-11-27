#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int ordenada(int vec[], int size){
  for(int i = 0; i <= size - 2; i++){
    if (vec[i] > vec[i+1]) {
      return 0;
    }
  }
  return 1;
}
int main(int argc, char const *argv[]) {
  int vec1[] = {1, 3, 3, 5, 6};
  int vec2[] = {1, 3, 2, 5, 6};
  int vec3[] = {1, 0};
  printf("%d\n", ordenada(vec1, 5));
  printf("%d\n", ordenada(vec2, 5));
  printf("%d\n", ordenada(vec3, 2));
  return 0;
}
