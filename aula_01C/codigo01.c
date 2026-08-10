#include <stdio.h>
int main(void){
    //código que mostra o extrapolamento do tipo char, o seu limite é de 256 bits (0-255), ao adicionar mais 1 ocorrrerá o overflow, retomando para o zero
    unsigned char x = 255;
    x = x + 1;
    printf("%hhu\n",x);
    return 0;
}