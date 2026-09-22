#include <stdio.h>

int main(void) {
    unsigned char R, G, B, M;

    scanf("%hhu %hhu %hhu %hhu", &R, &G, &B, &M);

    R = (R & 0xFE) | ((M >> 2) & 1);
    G = (G & 0xFE) | ((M >> 1) & 1);
    B = (B & 0xFE) | (M & 1);

    printf("%hhu %hhu %hhu\n", R, G, B);

    return 0;
}