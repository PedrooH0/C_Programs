#include <stdio.h>

int main(){
    unsigned short int idade;
    puts("Digite sua idade: ");
    scanf("%hu",&idade);

    if (idade<16){
        puts("Não votar e não dirigir");
    }else if (idade<18){
        puts("Votar e não dirigir");
    }else{
        puts("Votar e dirigir");
    }

    return 0;
}