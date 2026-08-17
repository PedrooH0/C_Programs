#include <stdio.h>
int main(void){ // troca de valores com apenas 2 variáveis
    unsigned char x = 10; // bin = 0000 1010
    unsigned char y = 4; // bin = 0000 0100

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x: %hhu y: %hhu",x,y);



    return 0;
}