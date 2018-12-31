#include <stdio.h>
#include <stdlib.h>
#define PI 3.14056
 void analise(int a, int b, int c) {
   int max, min, amp;
   if (a > b) {
     if (a > c) {
       max = a;
       if(b > c){
         min = c;
       } else {
         min = b;
       }
     } else {
       max = c;
       min = b;
     }
   } else {
     if (b > c) {
       max = b;
       if(a > c){
         min = c;
       } else {
         min = a;
       }
     } else {
       max = c;
       min = a;
     }
   }
   amp = max - min;
   printf("MAX = %d\n", max);
   printf("MIN = %d\n", min);
   printf("AMP = %d\n", amp);
 }

 int main(int argc, char const *argv[]) {
   int a = 12, b = 3, c = 27;
   analise(a,b,c);
   return 0;
 }
