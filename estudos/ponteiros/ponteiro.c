#include <stdio.h>

int main(){
  int a,b,c;
  int *pa = &a, *pb = &b, *pc = &c;

  puts("Digite o valor 1: ");
  scanf("%d",pa);

  puts("Digite o valor 1: ");
  scanf("%d",pb);

  *pc = *pa + *pb;

  printf("%d + %d = %d\n",*pa,*pb,*pc);

  return 0;

}