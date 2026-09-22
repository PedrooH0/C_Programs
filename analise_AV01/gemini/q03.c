#include <stdio.h>

int main(void) {
    unsigned int n, i;
    unsigned char min = 255, max = 0, val, x;
    float x_norm;

    printf("Digite a quantidade de pixels (n): ");
    if (scanf("%u", &n) != 1 || n == 0) {
        printf("Quantidade invalida de pixels.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Digite a intensidade do pixel %u (0-255): ", i);
        scanf("%hhu", &val);

        if (val < min) {
            min = val;
        }
        if (val > max) {
            max = val;
        }
    }

    printf("\nDigite o valor de x a ser normalizado (0-255): ");
    scanf("%hhu", &x);

    if (max == min) {
        printf("Minimo e maximo sao iguais. Nao e possivel normalizar.\n");
        return 1;
    }

    x_norm = (float)(x - min) / (max - min);

    printf("Minimo encontrado: %u\n", min);
    printf("Maximo encontrado: %u\n", max);
    printf("Valor normalizado (x'): %.4f\n", x_norm);

    return 0;
}