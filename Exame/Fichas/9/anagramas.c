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

int anagrama(char str1[], char str2[]){
  if (strlen(str1) == 0 && strlen(str2) == 0) {
    return 1;
  }
  sortChar(str1);
  sortChar(str2);
  int r = strcmp(str1, str2);
  if (r == 0) {
    return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  char str1[] = "deposit";
  char str2[] = "topside";
  printf("%d\n", anagrama(str1, str2));
  return 0;
}
