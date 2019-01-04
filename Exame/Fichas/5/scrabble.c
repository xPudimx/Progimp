#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PI 3.14056

int main(int argc, char const *argv[]) {
  char ch;
  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    if (isalpha(ch)) {
      switch (ch) {
        case 'D': count += 2;
                  break;
        case 'G': count += 2;
                  break;
        case 'D': count += 2;
                  break;
                
        default : count += 1;
                  break;
      }
    }
  }
  return 0;
}
