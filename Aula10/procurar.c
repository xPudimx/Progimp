#include <stdlib.h>
#include <stdio.h>

char *procurar(char *str, char ch){
  for(int i = 0; *(str+i) != '\0'; i++){
    if(*(str+i) == ch){
      return str+i;
    }
  }
  return NULL;
}

//*str = str[0];
//*(str+i) = str[i];
//&str[i] = str+i;

int main(int argc, char const *argv[]) {
  char str[] = "abc";
  char *p;
  p = procurar(str, 'b');
  printf("%c %p\n",*p, p);
  return 0;
}
