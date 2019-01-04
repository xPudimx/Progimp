#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandInt(int beg, int end){
  return rand() % ((end - beg) + 1) + beg;
}

double getRandDouble(double beg, double end){
  return rand() % ((endI - begI) + 1) + begI;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = 100;
  int soma = 0;
  int beg = 0;
  int end = 9;
  for(int i = 0; i < n; i++){
    int r = getRandInt(beg, end);
    soma += r;
    printf("%d  ", r);
  }
  printf("MEDIA = %lf\n", soma/n);
  return 0;
}
