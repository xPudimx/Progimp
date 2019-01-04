#include <stdio.h>
#include <stdlib.h>


int ocorre(int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if (vec[i] = val) {
      return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int vec[] = {1,2,3,4,5};
  printf("%d\n", ocorre(vec,5,3));
  return 0;
}
