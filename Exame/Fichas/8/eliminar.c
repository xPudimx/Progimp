#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void eliminar(char str[], char ch) {
  int i = 0;
  int size = strlen(str);
  while (str[i] != ch && i < size) {
    i++;
  }
  for(i; i < size; i++){
    str[i] = str[i+1];
  }
  str[size - 1] = '\0';
}

int main(int argc, char const *argv[]) {
  char str[MAX];
  gets(str);
  puts(str);
  eliminar(str, 'B');
  puts(str);
  return 0;
}
