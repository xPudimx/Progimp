#include <stdio.h>

int prox_bissexto(int n){
  if(n % 4 == 0 && n % 100 != 0){
    return n;
  }
  if (n % 4 == 0 && n % 100 == 0 && n % 400 == 0) {
    return n;
  }
  return prox_bissexto(n+1);
}

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  printf("%d\n", prox_bissexto(n));
  return 0;
}
