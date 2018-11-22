#include <stdio.h>
#include <stdlib.h>

void inicializa(int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    vec[i] = val;
  }
}

int main(int argc, char const *argv[]) {
  int size, val;
  printf("Size = ");
  scanf("%d", &size);
  printf("Val = ");
  scanf("%d", &val);
  int vec[size];
  inicializa(vec, size, val);
  for(int i = 0; i < size; i++){
    printf("%d ", vec[i]);
  }
  return 0;
}
