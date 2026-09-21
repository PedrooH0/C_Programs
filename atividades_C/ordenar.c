#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lim 10

int main(){
    srand(time(NULL));
    int vetor[lim];

    for(int i = 0; i<lim; i++){
        vetor[i] = rand() % lim;
    }

    puts("Vetor não ordenado");
    for(int i = 0; i<lim; i++){
        printf("[%p] %d \n",&vetor[i],vetor[i]);
    }

    int aux;
    for (int k = 0; k < lim - 1; k++) {
        for (int j = k + 1; j < lim; j++) {
            if (vetor[k] > vetor[j]) {
                aux = vetor[k];
                vetor[k] = vetor[j];
                vetor[j] = aux; 
            }
        }
    }

    return 0;
}