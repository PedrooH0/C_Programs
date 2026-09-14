#include <stdio.h>

int main() {

    unsigned char R, G, B, M;

    puts("Insira o valor de R: ");
    scanf("%hhu", &R);

    puts("Insira o valor de G: ");
    scanf("%hhu", &G);

    puts("Insira o valor de B: ");
    scanf("%hhu", &B);

    puts("Insira a mensagem M (use apenas valores de 0 até 7): ");
    scanf("%hhu", &M);

    R = (R & ~1) | ((M >> 2) & 1);
    G = (G & ~1) | ((M >> 1) & 1);
    B = (B & ~1) | (M & 1);

    puts("\nNovos valores com a mensagem escondida:");
    printf("R: %hhu\n", R & 1);
    printf("G: %hhu\n", G & 1);
    printf("B: %hhu\n", B & 1);

    return 0;
}