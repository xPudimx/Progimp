#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "/home/hugodias21/Aulas/ProgImp/essentials.h"

int anagrama(char str1[], char str2[]){
  sortChar(str1);
  sortChar(str2);
  return strcmp(str1, str2);
}

int main(int argc, char const *argv[]) {
  char str1[] = "deposit";
  char str2[] = "topside";
  int r = anagrama(str1, str2);
  if (r == 0) {
    printf("True\n");
  }
  return 0;
}
