#include <stdio.h>

double serie_log(double x, int n){
  int i;
  double total=0, sum=0, pot=1;
  for(i = 1; i <= n; i++){
    pot *= x;
    sum = pot / i;
    if(i % 2 == 0)
      sum *= -1;
    total += sum;
  }
  return total;
}

int main(int argc, char const *argv[]) {
  printf("%1f\n", serie_log(1,3));
  return 0;
}
