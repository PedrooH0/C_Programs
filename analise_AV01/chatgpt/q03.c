#include <stdio.h>

int main() {
    unsigned int n;
    unsigned char x, xmin, xmax;
    float normalizado;

    printf("Digite a quantidade de pixels: ");
    scanf("%u", &n);

    if (n == 0) {
        printf("A imagem deve possuir pelo menos um pixel.\n");
        return 0;
    }

    printf("Digite a intensidade do pixel 1 (0 a 255): ");
    scanf("%hhu", &x);

    xmin = x;
    xmax = x;

    for (unsigned int i = 2; i <= n; i++) {
        printf("Digite a intensidade do pixel %u (0 a 255): ", i);
        scanf("%hhu", &x);

        if (x < xmin)
            xmin = x;

        if (x > xmax)
            xmax = x;
    }

    printf("\nMenor intensidade: %hhu\n", xmin);
    printf("Maior intensidade: %hhu\n", xmax);

    printf("\nDigite uma intensidade para normalizar (0 a 255): ");
    scanf("%hhu", &x);

    if (xmin == xmax) {
        printf("Nao e possivel normalizar: todas as intensidades sao iguais.\n");
    } else {
        normalizado = (float)(x - xmin) / (xmax - xmin);
        printf("Valor normalizado: %.4f\n", normalizado);
    }

    return 0;
}