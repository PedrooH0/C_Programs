#include <stdio.h>

int main(void) {
    int n, i;
    double anterior, atual, proxima, media;

    printf("Filtro de Media Movel (janela 3)\n");
    printf("Digite a quantidade de amostras (n >= 3): ");
    scanf("%d", &n);

    printf("Digite a amostra x1: ");
    scanf("%lf", &anterior);

    printf("Digite a amostra x2: ");
    scanf("%lf", &atual);

    printf("\nSinal suavizado:\n");

    for (i = 2; i <= n - 1; i++) {
        printf("Digite a amostra x%d: ", i + 1);
        scanf("%lf", &proxima);

        media = (anterior + atual + proxima) / 3.0;
        printf("y%d = %.4lf\n", i, media);

        anterior = atual;
        atual = proxima;
    }

    return 0;
} 