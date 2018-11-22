#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Q 10

int getRandInt(int begI, int endI){
	return rand() % ((endI - begI) + 1) + begI;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  for(int i = 0; i < Q; i++){
    int a = getRandInt(1,9);
    int b = getRandInt(1,9);
    int r;
    printf("%d x %d = ", a, b);
    scanf("%d", &r);
    if (r == (a * b)) {
      printf("CERTO\n");
    } else {
      printf("ERRADO É %d\n", a*b);
    }
  }
  return 0;
}
