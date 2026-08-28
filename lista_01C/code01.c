#include <stdio.h>

int main(){

  unsigned short int val;


  puts("Escreva um valor para ser convertido:");
  scanf("%hu", &val);
  printf("\nValor original: %hu\n",val);
  printf("\nValor em Hexadecimal: %x\n",val);
  printf("\nValor em Octal: %o\n",val);
}