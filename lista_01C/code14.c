#include <stdio.h>

int main(){

  unsigned int diasTrabalhados;
  float salarioBruto, salarioLiquido;

  puts("Informe a sua quantidade de dias trabalhados: ");
  scanf("%u",&diasTrabalhados);


  salarioBruto = 50.25 * diasTrabalhados;

  if((diasTrabalhados>10) && (diasTrabalhados<=20)){
    salarioLiquido = salarioBruto * 1.2;
  }

  if(diasTrabalhados>20){
    salarioLiquido = salarioBruto * 1.3;
  }

  salarioLiquido = salarioLiquido * 0.9;

  printf("Seu salário líquido é de %.2f",salarioLiquido);

  return 0;
}