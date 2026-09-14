#include <stdio.h>

int main(){

    int numero, soma = 0, contador = 0;

    do{
        puts("Digite um número: ");
        scanf("%d",&numero);

        if((numero>=0) && (numero <= 255)){
            soma += numero;
            contador++;
        }

    }while(numero != -1);

    printf("Soma = %d\n",soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}