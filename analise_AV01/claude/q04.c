#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0, continuar = 1;

    printf("Digite numeros inteiros para somar (0 a 255).\n");
    printf("Digite -1 para encerrar. Valores fora de 0-255 serao ignorados.\n");

    while (continuar) {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero == -1) {
            continuar = 0;
        } else if (numero < 0) {
            /* ignora, equivalente ao continue original */
        } else if (numero > 255) {
            /* ignora, equivalente ao continue original */
        } else {
            soma += numero;
            contador++;
        }
    }

    printf("\nSoma = %d\n", soma);
    printf("Quantidade = %d\n", contador);

    return 0;
}