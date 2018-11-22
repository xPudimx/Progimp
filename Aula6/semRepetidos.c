#include <stdio.h>
#include <stdlib.h>


int ocorre (int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if(vec[i] == val){
      return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int vec[100];
  int val, i = 0; //Val é o valor lido e comparado e i vai ser o novo tam do vec se repetidos
  scanf("%d", &val);
  while (val != -1) {
    if(!ocorre(vec, i, val)){
      vec[i] = val;
      i++;
    }
    scanf("%d", &val);
  }
  printf("Array = { ");
  for(int j = 0; j < i; j++){
    printf("%d ", vec[j]);
  }
  printf("}\n");
  return 0;
}
