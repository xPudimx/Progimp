#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100


void sortChar(char str[]) {
  for(int i = 0; str[i] != '\0'; i++){
    int min = i;
    for(int j = i+1; str[j] != '\0'; j++){
      if (str[j] < str[min]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = str[i];
      str[i] = str[min];
      str[min] = temp;
    }
  }
}

int main(int argc, char const *argv[]) {
  char str[] = "ALGORITMO";
  sortChar(str);
  puts(str);
  return 0;
}
