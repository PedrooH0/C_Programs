#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIM 80

int main(){
  char str[LIM];
  unsigned quant = 0;

  puts("Insira uma frase: ");

  fgets(str,LIM,stdin);

  str[strcspn(str,"\n")] = '\0';

  for(int i = 0; i<LIM; i++){
    if(str[i] == '\0') break;
    quant++;
  }

  printf("Quantidade de letras da frase: %u", quant);

  return 0;
}