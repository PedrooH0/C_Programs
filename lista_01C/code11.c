#include <stdio.h>

int main(){

  int num1,num2;

  puts("Insira um número:");
  scanf("%d",&num1);

  puts("Insira outro número:");
  scanf("%d",&num2);

  printf("%d + %d = %d\n",num1,num2,(num1 + num2));
  printf("%d * %d = %d\n",num1,num2,(num1 * num2));
  printf("%d - %d = %d\n",num1,num2,(num1 - num2));
  printf("Quociente da divisão entre %d e %d = %d\n",num1,num2,(num1/num2));
  printf("Resto da divisão entre %d e %d = %d\n",num1,num2,(num1%num2));

  return 0;
}