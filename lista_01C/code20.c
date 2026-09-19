#include <stdio.h>

int main(){
  int a,b;

  puts("Insira um número a:");
  scanf("%d",&a);

  puts("Insira um número b:");
  scanf("%d",&b);

  printf("O número %d %s %d",a, (a % b == 0) ? "é múltiplo de" : "não é múltiplo de",b);

  return 0;
}