#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int max = 0, n;
  scanf("%d", &n);
  while (n != 0) {
    if(max < n){
      max = n;
    }
    scanf("%d", &n);
  }
  printf("%d\n", max);
  return 0;
}
