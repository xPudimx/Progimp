#include <stdio.h>
#include <stdlib.h>

double serie_log(double x, int n){
  double frac, total = 0, pot = 1;;
  for(int i = 1; i <= n; i++){
    pot *= x;
    frac = pot / i;
    if (i % 2 == 0) {
      frac *= -1;
    }
    total += frac;
  }
  return total;
}

int main(int argc, char const *argv[]) {
  printf("%f\n", serie_log(1,3));
  return 0;
}
