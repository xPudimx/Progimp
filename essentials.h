#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//PRIME NUMBERS

int prime(int n){
	int d;
	if (n <= 1) {
		return 0;
	}
	for(d = 2; d*d < n; d++){
		if (n % d == 0) {
			return 0;
		}
	}
	return 1;
}

//Euclides Alg

int mdc(int a, int b){
	while (a != b) {
		if (a > b) {
			a = a - b;
		} else {
			b = b - a;
		}
	}
	return a;
}

//Factorial

int factorial(int n){
	if (n == 0) {
		return 1;
	} else {
		return n * factorial(n-1);
	}
}

//Sequencial Search

int seqSearch(int vec[], int n, int x){
	for(int  i = 0; i < n; i++){
		if (vec[i] == x) {
			return i;
		}
	}
	return -1;
}

//Binary Search

int binarySearch(int vec[], int start, int end, int x){
	if (end >= start) {
		int mid = start + (end - start)/2;
		if (vec[mid] == x) {
			return mid;
		}
		if (vec[mid] > x) {
			return binarySearch(vec, start, mid-1, x);
		}
		return binarySearch(vec, mid+1, end, x);
	}
	return -1;
}

//Selection Sort

void selectionSort(int vec[], int size){
  for(int i = 0; i < size; i++){
    int min = i;
    for(int j = i + 1; j < size; j++){
      if (vec[j] < vec[min]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = vec[i];
      vec[i] = vec[min];
      vec[min] = temp;
    }
  }
}

//Insert Sort

void insertSort(int vec[], int n) {
  int i, j;
  for(i = 1; i < n; i++){
    int x = vec[i];
    j = i-1;
    while (j >= 0 && vec[j] > x) {
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = x;
  }
}

//Quick Sort

int partition(int vec[], int l, int u){
  int i, m, temp;
  m = l;
  for(i = l+1; i <= u; i++){
    if (vec[i] < vec[l]) {
      m++;
      temp = vec[i];
      vec[i] = vec[m];
      vec[m] = temp;
    }
  }
  temp = vec[l];
  vec[l] = vec[m];
  vec[m] = temp;
  return m;
}

void quickSort(int vec[], int l, int u) {
  int m;
  if (l >= u) {
    return;
  }
  m = partition(vec, l, u);
  quickSort(vec, l, m-1);
  quickSort(vec, m+1, u);
}

//Sort Char

void sortChar(char str[]) {
  int i, j;
  for(i = 1; str[i] != '\0'; i++){
    char x = str[i];
    j = i - 1;
    while (j >= 0 && str[j] > x) {
      str[j+1] = str[j];
      j--;
    }
    str[j+1] = x;
  }
}
