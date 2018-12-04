#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 1000

void sortChar(char str[]) {
  int i, j;
  for(i = 1; str[i] != '\0'; i++){
    char x = str[i];
    j = i - 1;
    while (j >= 0 && str[j] > x) {
      str[j+1] = str[j];
      j--;
    }
    str[j+1] = x;
  }
}

int main(int argc, char const *argv[]) {
  char str[] = "ALGORITMO";
  sortChar(str);
  puts(str);
  return 0;
}
