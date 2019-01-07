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

int main(int argc, char const *argv[]) {
  char str[] = "Est vir qui adest";
  normalizar(str);
  puts(str);
  return 0;
}
