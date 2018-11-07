#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, i = 2;
  scanf("%d", &n);
  while (n != 1) {
    if(n%i == 0){
      printf("%d ", i);
      n /= i;
    }
    else {
      i++;
    }
  }
  printf("\n");
  return 0;
}
