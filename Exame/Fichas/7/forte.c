#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int forte(char str[]){
  int mai = 0, min = 0, num = 0;
  for(int i = 0; str[i] != '\0'; i++){
    if (isupper(str[i])) {
      mai++;
    }
    if (islower(str[i])) {
      min++;
    }
    if (isdigit(str[i])) {
      num++;
    }
  }
  if (mai >= 1 && min >= 1 && num >= 1) {
    if ((mai + min + num) >= 6) {
      return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  char str[MAX];
  gets(str);
  printf("%d\n", forte(str));
  return 0;
}
