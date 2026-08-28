#include <stdio.h>
#include <math.h>

int main(){
  int num;
  puts("Escreva um número:");
  scanf("%i", &num);
  printf("\nValor original: %i\nTriplo: %i\nQuadrado: %i\nMeio: %i",num,3*num,pow(num,2),num/2);

  return 0;
}