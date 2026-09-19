#include <stdio.h>

int main(){
  float pi = 3.14159, raio, diametro, cincunferencia, area;

  puts("Insira o valor do raio da circunferência:");
  scanf("%f",&raio);

  printf("Raio do círculo: %.2f\nDiâmetro do círculo: %.2f\nValor da circunferência: %.2f\nValor da área: %.2f",raio,raio*2,2*pi*raio,pi*(raio*raio));

  return 0;
}