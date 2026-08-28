#include <stdio.h>

int main(){
  float num;
  puts("Escreva um número:");
  scanf("%f", &num);
  printf("\nNúmero sem formatação: %f\nNúmero com formatação: %.1f\n",num,num);

  return 0;
}