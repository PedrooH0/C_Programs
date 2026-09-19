#include <stdio.h>
#include <stdlib.h>

int main(){
  int num,mod;

  puts("Insira um número: ");
  scanf("%d",&num);

  mod = abs(num);

  printf("O módulo de %d é: %d\n",num,mod);

  return 0;
}