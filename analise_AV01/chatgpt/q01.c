#include <stdio.h>

int main() {
    unsigned char R, G, B, M;

    scanf("%hhu %hhu %hhu %hhu", &R, &G, &B, &M);

    R = (R & 254) | ((M >> 2) & 1);
    G = (G & 254) | ((M >> 1) & 1);
    B = (B & 254) | (M & 1);

    printf("%hhu %hhu %hhu\n", R, G, B);

    return 0;
}