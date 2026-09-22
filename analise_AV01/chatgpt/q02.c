#include <stdio.h>

int main() {
    unsigned int n;
    float anterior, atual, proximo;

    printf("Digite a quantidade de amostras do sinal: ");
    scanf("%u", &n);

    if (n < 3) {
        printf("O sinal deve possuir pelo menos 3 amostras.\n");
        return 0;
    }

    printf("Digite a amostra x1: ");
    scanf("%f", &anterior);

    printf("Digite a amostra x2: ");
    scanf("%f", &atual);

    printf("\nSinal suavizado:\n");

    for (unsigned int i = 3; i <= n; i++) {
        printf("Digite a amostra x%u: ", i);
        scanf("%f", &proximo);

        printf("y%u = %.2f\n", i - 1, (anterior + atual + proximo) / 3.0f);

        anterior = atual;
        atual = proximo;
    }

    return 0;
}