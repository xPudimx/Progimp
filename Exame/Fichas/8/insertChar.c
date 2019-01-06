#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void insertChar(char str[], char ch) {
  int i = strlen(str) - 1;
  while (i >= 0 && str[i] > ch) {
    str[i+1] = str[i];
    i--;
  }
  str[i+1] = ch;
}


int main(int argc, char const *argv[]) {
  char str[] = "ABCDEF";
  char ch = 'B';
  insertChar(str,ch);
  puts(str);
  return 0;
}
