#include <stdio.h>

int main(){

  float altura;
  unsigned char sexo;

  puts("Insira sua altura (Modelo = 0.00):");
  scanf("%f", &altura);
  puts("Informe seu sexo (Masculino = M/Feminino = F):");
  scanf(" %c", &sexo);

  if(sexo == 'M') printf("Peso ideal = %.2f",(72.7 * altura) - 58);
  if(sexo == 'F') printf("Peso ideal = %.2f",(62.1 * altura) - 44.7);

  return 0;
}