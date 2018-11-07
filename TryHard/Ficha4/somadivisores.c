#include <stdio.h>

int main(int argc, char const *argv[]) {
  int soma = 0, n;
  scanf("%d", &n);
  for(int i = 1; i < n; i++){
    if(n % i == 0){
      soma += i;
    }
  }
  printf("%d\n", soma);
  return 0;
}
