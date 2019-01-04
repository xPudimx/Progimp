#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int getRandInt(int beg, int end){
  return rand() % ((end - beg) + 1) + beg;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int a, b, r;
  for(int i = 0; i < N; i++){
    a = getRandInt(1,9);
    b = getRandInt(1,9);
    printf("%d * %d = ", a,b);
    scanf("%d", &r);
    if (r == (a* b)) {
      printf("CERTO\n");
    } else{
      printf("ERRADO! R:%d\n", a*b);
    }
  }
  return 0;
}
