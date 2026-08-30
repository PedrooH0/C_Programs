#include <stdio.h>

int main(){

  float conta;

  puts("Insira o valor da conta para acrescentar a taxa de serviço::");
  scanf("%f", &conta);

  printf("O valor total é de R$%.2f",conta*1.1);

  return 0;
}