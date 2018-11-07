#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, a[32], tam = 0;
  scanf("%d", &n);
  while (n != 0) {
    a[tam] = n % 2;
    tam++;
    n /= 2;
  }
  for(int i = tam - 1; i >= 0; i--){
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
