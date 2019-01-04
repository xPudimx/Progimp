#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void inverter(char str[]) {
  int i = 0, j;
  j = strlen(str) - 1;
  while (i < j) {
    char ch = str[i];
    str[i] = str[j];
    str[j] = ch;
    i++;
    j--;
  }
}

int palindromo(char str[]){
  char aux[MAX];
  strcpy(aux, str);
  if (strcmp(str,aux) == 0) {
    return 1;
  }
  return 0;
}
