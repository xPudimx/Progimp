#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100


int todos_letras(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    if(!isalpha(str[i])){
      return 0;
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  char str[MAX];
  gets(str);
  printf("%d\n", todos_letras(str));
  return 0;
}
