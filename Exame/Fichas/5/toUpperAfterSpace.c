#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PI 3.14056

int main(int argc, char const *argv[]) {
  char ch;
  char prev = -1;
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch) && prev == ' ') {
      ch = toupper(ch);
    }
    prev = ch;
    putchar(ch);
  }
  putchar('\n');
  return 0;
}
