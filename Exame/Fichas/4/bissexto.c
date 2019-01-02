#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056

int bissexto(int n){
  if(n%4 == 0 && n%100 != 0){
		return 1;
	}
	if (n%100 == 0 && n%400 == 0) {
		return 1;
	}
	return 0;
}

int main(int argc, char const *argv[]) {
  int n = 1980;
  printf("%d\n", bissexto(n));
  return 0;
}
