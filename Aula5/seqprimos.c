#include <stdio.h>

int primo(int n)
{
   int d;
   if(n <= 1) return 0;
   for (d = 2; d*d <= n; d++) {
     if (n%d == 0)   // d divide n
       return 0;
    }
   return 1;
}

int main(int argc, char const *argv[]) {
  int i=0, n;
  scanf("%d", &n);
  while (i <= n){
    if (primo(i)) {
      printf("%d ", i);
    }
    i++;
  }
  return 0;
}
