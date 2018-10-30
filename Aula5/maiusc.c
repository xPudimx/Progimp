#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int ch, prev = -1;
  while ((ch=getchar()) != EOF) {
    if(isalpha(ch) && prev == ' '){
      ch=toupper(ch);
    }
    prev = ch;
    putchar(ch);
  }
  return 0;
}
