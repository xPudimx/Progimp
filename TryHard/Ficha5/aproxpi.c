#include <stdio.h>
#include <math.h>

double aprox_pi(int n){
  double frac = 0, total = 0;
  for(int i = 0; i < n; i++){
    frac = 1.0 / (2 * i + 1);
    if ((i % 2) !=  0) {
      frac *= -1;
    }
    total += frac;
  }
  return 4.0 * total;
}

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  printf("%f\n", aprox_pi(n));
  return 0;
}
