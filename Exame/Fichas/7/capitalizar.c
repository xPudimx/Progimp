#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void capitalizar(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    str[i] = toupper(str[i]);
  }
}

int main(int argc, char const *argv[]) {
  char str[MAX];
  strcpy(str, "ola 21");
  printf("%s\n", str);
  capitalizar(str);
  printf("%s\n", str);
  return 0;
}
