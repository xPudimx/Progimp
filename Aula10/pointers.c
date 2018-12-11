#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i, a, b;
  int *p, *q;
  i = 0;
  a = 1;
  b = 2;
  p = &a;
  q = &b;
  printf("Variavel a: %d endereço: %p\n",a, &a);
  printf("Variavel b: %d endereço: %p\n",b, &b);
  printf("Variavel i: %d endereço: %p\n",i, &i);
  printf("Variavel p: %d endereço: %p\n",*p, p);
  printf("Variavel q: %d endereço: %p\n",*q, q);
  printf("\n");


  *p = *q; //a = b pq subsitui-se os apontadores pelas variaveis apontadas
  printf("Variavel p: %d endereço: %p\n",*p, p);
  printf("\n");


  return 0;
}
