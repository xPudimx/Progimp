#include <stdio.h>

int mdc(int a, int b){
  while (a != b) {
    if(a > b){
      a = a - b;
    }
    if (b > a) {
      b = b - a;
    }
  }
  return a;
}

int main(int argc, char const *argv[]) {
  int n, d;
  scanf("%d%d", &n, &d);
  printf("%d/%d <=> %d/%d\n", n, d, n/mdc(n,d), d/mdc(n,d));
  return 0;
}
