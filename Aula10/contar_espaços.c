char *procurar(char *str, char ch){
  for(int i = 0; *(str+i) != '\0'; i++){
    if(*(str+i) == ch){
      return str+i;
    }
  }
  return NULL;
}
