#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int allLetters(char str[]){
  int i = 0;
  for(i = 0; str[i] != '\0'; i++){
    if (!isalpha(str[i])) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  char str[MAX];
  printf("String : ");
  gets(str);
  if (allLetters(str)) {
    printf("True\n");
  } else {
    printf("False\n");
  }
  return 0;
}
