#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int someDigit(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    if (isdigit(str[i])) {
      return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  char str[MAX];
  printf("String: ");
  gets(str);
  if (someDigit(str)) {
    printf("True\n");
  } else {
    printf("False\n");
  }
  return 0;
}
