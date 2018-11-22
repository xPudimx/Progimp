#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int getRandInt(int begI, int endI){
	return rand() % ((endI - begI) + 1) + begI;
}


int ocorre (int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if(vec[i] == val){
      return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int vec[N], val;
  scanf("%d", &val);
  for(int i = 0; i < N; i++){
    vec[i] = getRandInt(1,10);
  }
  if (ocorre(vec, N, val)) {
    printf("OCORRE\n");
  } else {
    printf("NAO OCORRE\n");
  }
  printf("{ ");
  for(int i = 0; i < N; i++){
    printf("%d ", vec[i]);
  }
  printf("}\n");
  return 0;
}
