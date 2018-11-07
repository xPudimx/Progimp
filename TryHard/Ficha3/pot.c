#include <stdio.h>

int pot(int x, int n){
  int pot = 1;
  for(int i = 0; i < n; i++){
    pot *= x;
  }
  return pot;
}

int main(int argc, char const *argv[]) {
  int n, x;
  scanf("%d%d", &x, &n);
  if (n == 0) {
    printf("1\n");
  }
  printf("%d\n", pot(x,n));
  return 0;
}
