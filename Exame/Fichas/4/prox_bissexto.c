#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

int prox_bissexto(int n){
  while (n != 0) {
    if(n%4 == 0 && n%100 != 0){
      return n;
    }
    if (n%100 == 0 && n%400 == 0) {
      return n;
    }
    return prox_bissexto(n+1);
  }
  return 0;
}
