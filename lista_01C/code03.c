#include <stdio.h>

int main(){
  int num;
  puts("Escreva um número:");
  scanf("%i", &num);
  printf("\nValor original: %i\nTriplo: %i\nQuadrado: %i\nMeio: %i",num,3*num,num*num,num/2);

  return 0;
}