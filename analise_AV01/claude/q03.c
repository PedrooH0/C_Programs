#include <stdio.h>

int main(void) {
    int n, i, intensidade, xmin, xmax, x;
    double xnorm;

    printf("Normalizacao de intensidades (min-max scaling)\n");
    printf("Digite a quantidade de pixels (n): ");
    scanf("%d", &n);

    printf("Digite a intensidade do pixel 1 (0 a 255): ");
    scanf("%d", &intensidade);
    xmin = intensidade;
    xmax = intensidade;

    for (i = 2; i <= n; i++) {
        printf("Digite a intensidade do pixel %d (0 a 255): ", i);
        scanf("%d", &intensidade);

        if (intensidade < xmin) {
            xmin = intensidade;
        }
        if (intensidade > xmax) {
            xmax = intensidade;
        }
    }

    printf("\nMenor intensidade encontrada (x_min): %d\n", xmin);
    printf("Maior intensidade encontrada (x_max): %d\n", xmax);

    printf("\nDigite a intensidade x que deseja normalizar: ");
    scanf("%d", &x);

    xnorm = (double)(x - xmin) / (xmax - xmin);

    printf("Valor normalizado x' = %.4lf\n", xnorm);

    return 0;
}