#include <stdio.h>

int main() {

    unsigned int R, G, B, M;

    puts("Insira o valor de R: ");
    scanf("%u", &R);

    puts("Insira o valor de G: ");
    scanf("%u", &G);

    puts("Insira o valor de B: ");
    scanf("%u", &B);

    puts("Insira a mensagem M : ");
    scanf("%u", &M);

    R = (R & ~1) | ((M >> 2) & 1);
    G = (G & ~1) | ((M >> 1) & 1);
    B = (B & ~1) | (M & 1);

    puts("\nNovos valores com a mensagem escondida:");
    printf("R: %d\n", R & 1);
    printf("G: %d\n", G & 1);
    printf("B: %d\n", B & 1);

    return 0;
}