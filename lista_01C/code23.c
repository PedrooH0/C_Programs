#include <stdio.h>

int main(){
  int x,n;

  puts("Insira um valor x: ");
  scanf("%d",&x);

  puts("Innsira um valor n: ");
  scanf("%d",&n);

  printf("%d x 2^%d = %d",x,n,(x * (2<<(n-1))));

  return 0;
}