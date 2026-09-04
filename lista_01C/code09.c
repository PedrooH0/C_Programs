#include <stdio.h>

int main(){

  float volume,comprimento,largura,altura;

  puts("Calcular volume do Paralelepípedo\n");

  puts("Informe o valor do comprimento:");
  scanf("%f",&comprimento);
  
  puts("Informe o valor da largura:");
  scanf("%f",&largura);

  puts("Informe o valor da altura:");
  scanf("%f",&altura);

  volume = comprimento * largura * altura;

  printf("O paralelepípedo com as medidas informadas tem um volume de: %.2f m³\n",volume);




  return 0;
}