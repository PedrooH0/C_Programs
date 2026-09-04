#include <stdio.h>

int main(){

  float cotacao, quant, conversao;

  puts("Ensira a cotação atual do dólar:");
  scanf("%f",&cotacao);

  puts("Ensira a quantidade de reais que você deseja converter:");
  scanf("%f",&quant);

  conversao = quant/cotacao;

  printf("Convertendo R$ %.2f você terá %.2f dólares\n", quant,conversao);

  return 0;
}