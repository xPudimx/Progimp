#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void decompor(int total_seg, int *horas, int *mins, int *segs) {
  *horas = total_seg/3600;
  *mins = (total_seg%3600)/60;
  *segs = ((total_seg%3600)%60);
}

int main(int argc, char const *argv[]) {
  int total_seg = 3661;
  int segs, mins, horas;
  decompor(total_seg, &horas, &mins, &segs);
  printf("%d H %d M %d S \n",horas, mins, segs);
  return 0;
}
