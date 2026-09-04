#include <stdio.h>

int main(){

  float tempC,tempConvF;

  puts("Conversor de Celsius para Fahrenheit\n");

  puts("Insira a temperatura em Celsius:");
  scanf("%f",&tempC);

  tempConvF = (9 * tempC + 160)/5;

  printf("%.2f C° = %.2f F°\n",tempC,tempConvF);


  return 0;
}