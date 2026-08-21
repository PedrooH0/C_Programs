#include <stdio.h>

int main(){
    int num;

    puts("Digite um número");
    scanf("%d",&num);

    unsigned short int y;
    y = (num % 2) ? puts(num*2) : puts(num*10);
}