#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int count = 0;
  char ch;
  while ((ch = getchar()) != EOF) {
    if(isalpha(ch))
      switch (ch) {
        case 'D': count += 2;
                  break;
        case 'G': count += 2;
                  break;
        case 'B': count += 3;
                  break;
        case 'C': count += 3;
                  break;
        case 'M': count += 3;
                  break;
        case 'P': count += 3;
                  break;
        case 'F': count += 4;
                  break;
        case 'H': count += 4;
                  break;
        case 'V': count += 4;
                  break;
        case 'W': count += 4;
                  break;
        case 'Y': count += 4;
                  break;
        case 'K': count += 5;
                  break;
        case 'J': count += 8;
                  break;
        case 'X': count += 8;
                  break;
        case 'Q': count += 10;
                  break;
        case 'Z': count += 10;
                  break;
        default: count += 1;
                 break;
      }
    }
    printf("%d\n", count);
    return 0;
  }
