#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PI 3.14056

int main(int argc, char const *argv[]) {
  char ch;
  int count = 0;
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      count ++;
    }
  }
  printf("%d\n", count);
  return 0;
}
