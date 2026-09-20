#include <stdio.h>

int main(){
  int num,inverseNum,centena,dezena,unidade;

  puts("Insira um número: ");
  scanf("%d",&num);

  centena = num/100;
  dezena = (num/10) % 10;
  unidade = num % 10;

  inverseNum = (unidade * 100) + (dezena * 10) + centena;

  printf("Número original: %d\nNúmero invertido: %d\n",num, inverseNum);



  return 0;
}