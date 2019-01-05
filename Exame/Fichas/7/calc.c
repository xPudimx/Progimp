#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int calc(char str[]){
  int a = str[0] - '0';
  int b = str[2] - '0';
  switch (str[1]) {
    case '+': return a + b;
              break;
    case '-': return a - b;
              break;
    case '*': return a * b;
              break;
    default : return a * b;
  }
}

int main(int argc, char const *argv[]) {
  char str[] = {'1','+','2'};
  printf("%d\n", calc(str));
  return 0;
}
