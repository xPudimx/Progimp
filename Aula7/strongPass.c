#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
// pelo menos 6 chars
// 1 letra M, 1 letra m, 1 nr


int strongPass(char str[]){
  int count = strlen(str);
  int upper = 0, lower = 0, num = 0;
  if(count < 6){
    return 0;
  }
  for(int i = 0; str[i] != '\0'; i++){
    if (isdigit(str[i])) {
      num++;
    }
    if (islower(str[i])) {
      lower++;
    }
    if (isupper(str[i])) {
      upper++;
    }
  }
  if (upper == 0 || lower == 0 || num == 0) {
    return 0;
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  char str[MAX];
  printf("String: ");
  fgets(str, MAX, stdin);
  if (strongPass(str)) {
    printf("True\n");
  } else {
    printf("False\n");
  }
  return 0;
}
