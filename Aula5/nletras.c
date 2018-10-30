#include <stdio.h>

int main(int argc, char const *argv[]) {
  char c,i=0;
  while ((c = getchar()) != '\n') {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      i++;
    }
  }
  printf("%d\n", i);
  return 0;
}
