#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int contar_maiores(int vec[], int size, int val){
  int count = 0;
  for(int i = 0; i < size; i++){
    if(vec[i] > val){
      count ++;
    }
  }
  return count;
}
