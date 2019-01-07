#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void normalizar(char str[]){
  int len = strlen(str);
  for(int i = 0; i < len; i++){
    str[i] = tolower(str[i]);
    if (!isalpha(str[i])) {
      for(int j = i; j < len; j++){
        str[j] = str[j+1];
      }
      len--;
    }
  }
}

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

int fraseAnagrama(char str1[], char str2[]){
  normalizar(str1);
  normalizar(str2);
  sortChar(str1);
  sortChar(str2);
  int r = strcmp(str1, str2);
  if (r == 0) {
    return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  char str1[] = "Quid est veritas?";
  char str2[] = "Est vir qui adest";
  printf("%d\n", fraseAnagrama(str1, str2));
  return 0;
}
