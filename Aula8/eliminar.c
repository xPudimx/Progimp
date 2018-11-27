#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

void eliminar(char str[], char ch) {
  for(int i = 0; str[i] != '\0'; i++){
    if (str[i] == ch) {
      str[i] = str[i+1];
    }
  }
  str[strlen(str)-1] = '\0';
}

int main(int argc, char const *argv[]) {
  char str[] = "ABBA";
  puts(str);
  eliminar(str, 'B');
  puts(str);
  return 0;
}
