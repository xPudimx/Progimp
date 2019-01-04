#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandInt(int beg, int end){
  return rand() % ((end - beg) + 1) + beg;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int r;
  int x = getRandInt(1,1000);
  printf("START\n");
  scanf("%d", &r);
  int count = 1;
  while (r != x) {
    if (r < x) {
      printf("HIGHER!\n");
    } else {
      printf("LOWER!\n");
    }
    scanf("%d", &r);
    count ++;
  }
  printf("CONGRATZ %d\n", count);
  return 0;
}
