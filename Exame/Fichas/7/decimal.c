#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int decimal(char str[]){
  int r = 0;
  for(int i = 0; str[i] != '\0'; i++){
    r = r*10 + str[i] - '0';
  }
  return r;
}

int main(int argc, char const *argv[]) {
  char str[] = {'1','2','3','4'};
  printf("%d\n", decimal(str));
  return 0;
}
