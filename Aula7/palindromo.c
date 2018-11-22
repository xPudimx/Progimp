#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void strRev(char str[]){
  int i = strlen(str) - 1;
  int j = 0;
  char ch;
  while (i > j) {
    ch = str[i];
    str[i] = str[j];
    str[j] = ch;
    i--;
    j++;
  }
}

int palindromo(char str[]){
  char aux[MAX];
  strcpy(aux, str);
  strRev(aux);
  if (strcmp(str, aux) == 0) {
    return 1;
  }
  return 0;
}


int main(int argc, char const *argv[]) {
  char str[MAX];
  printf("String : ");
  gets(str);
  if (palindromo(str)) {
    printf("%s é um palindromo\n", str);
  } else {
    printf("%s não é um palindromo\n", str);
  }
  return 0;
}
