#include <stdio.h>

int main(void) {
    short numero = 0;
    unsigned short contador = 0;
    unsigned int soma = 0;

    printf("Digite numeros inteiros entre 0 e 255 (digite -1 para encerrar):\n");
    
    scanf("%hd", &numero);

    while (numero != -1) {
        if (numero >= 0 && numero <= 255) {
            soma += numero;
            contador++;
        }
        scanf("%hd", &numero);
    }

    printf("Soma = %u\n", soma);
    printf("Quantidade = %hu\n", contador);

    return 0;
}