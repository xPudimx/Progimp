#include <stdio.h>
#include <stdlib.h>

int ocorre (int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if(vec[i] == val){
      return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int i;
  char vec[26] = {0};
  char ch;
  while ((ch = getchar()) != '\n') {
    toupper(ch);
    i = ch - 65;
    vec[i] ++;
  }
  for(int i = 0; i < 26; i++){
    printf("%s\n", );
  }
  return 0;
}
