#include <stdio.h>

int main(void) {
    unsigned short n, i;
    float x1, x2, x3, y;

    printf("Digite a quantidade de amostras (n >= 3): ");
    if (scanf("%hu", &n) != 1 || n < 3) {
        printf("Quantidade invalida de amostras.\n");
        return 1;
    }

    printf("Digite o valor da amostra 1: ");
    scanf("%f", &x1);

    printf("Digite o valor da amostra 2: ");
    scanf("%f", &x2);

    printf("\nValores do sinal suavizado:\n");

    for (i = 3; i <= n; i++) {
        printf("Digite o valor da amostra %hu: ", i);
        scanf("%f", &x3);

        y = (x1 + x2 + x3) / 3.0f;
        printf("y%hu = %.2f\n", i - 1, y);

        x1 = x2;
        x2 = x3;
    }

    return 0;
}