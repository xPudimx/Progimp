#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int digit(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    if(isdigit(str[i])){
      return 1;
    }
  }
  return 0;
}


int main(int argc, char const *argv[]) {
  char str[MAX];
  gets(str);
  printf("%d\n", digit(str));
  return 0;
}
