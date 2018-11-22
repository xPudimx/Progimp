#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandInt(int begI, int endI){
	return rand() % ((endI - begI) + 1) + begI;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = getRandInt(1, 1000);
  int r, count = 1;
  printf("Tentativa %d: ", count);
  scanf("%d", &r);
  while (r != n) {
    if (r < n) {
      printf("Demasiado Baixo\n");
    } else {
      printf("Demasiado Alto\n");
    }
    count ++;
    printf("Tentativa %d: ", count);
    scanf("%d", &r);
  }
  printf("Acertou com %d Tentativas\n", count);
  return 0;
}
