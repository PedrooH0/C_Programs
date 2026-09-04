#include <stdio.h>

int main(){

  int num,ant,suc;

  puts("Digite um número:");
  scanf("%d",&num);

  ant = num - 1;
  suc = num + 1;

  printf("O antecessor de %d é: %d\nO sucessor de %d é: %d\n",num,ant,num,suc);

  return 0;
}