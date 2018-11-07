#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double aprox_pi (int n){
  double total = 0, sum = 0;
  for(int i = 0; i < n; i++){
    sum = 1.0 / (2*i + 1); // 1 / ... s/ casas decimais  1.0 / ... c/ casas decimais
    if ((i % 2) != 0) {
      sum *= -1;
    }
    total += sum;
  }
  return 4 * total;
}

int main(int argc, char const *argv[]) {
  printf("%.3f\n", M_PI);
  printf("%.3f\n", aprox_pi(10));
  printf("%.3f\n", aprox_pi(100));
  printf("%.3f\n", aprox_pi(1000));
  printf("%.2f\n", aprox_pi(10000));
  return 0;
}
