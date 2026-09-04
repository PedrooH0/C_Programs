#include <stdio.h>

int main(){

  int a,b;

  puts("Insira um valor para A:");
  scanf("%d",&a);

  puts("Insira um valor para B:");
  scanf("%d",&b);

  printf("Valores originais\nA = %d\nB = %d\n",a,b);

  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("valores trocados\nA = %d\nB = %d\n",a,b);


  return 0;
}