#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int volume(int l, int w, int h){
  return l * w * h;
}

int main(int argc, char const *argv[]) {
  int l = 2, w = 3, h = 4;
  printf("Vol = %d\n", volume(l,w,h));
  return 0;
}
