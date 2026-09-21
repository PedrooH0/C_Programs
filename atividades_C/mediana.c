#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define lim 11

int main(){
    srand(time(NULL));
    int vetor[lim];
    int pos;
    float mediana;

    for(int i = 0; i<lim; i++){
        vetor[i] = rand() % lim;
    }

    puts("vetor não ordenado:");
    for(int i = 0; i<lim; i++){
        printf("%d ",vetor[i]);
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

    puts("\nvetor ordenado:");
    for(int i = 0; i<lim; i++){
        printf("%d ",vetor[i]);
    }

    if(lim % 2 == 0){
        pos = lim/2;
        mediana = (float)(vetor[pos-1] + vetor[pos])/2;
        printf("\nmediana do vetor par= %.2f\n",mediana);
    }else{
        pos = lim/2;
        printf("\nmediana do vetor ímpar= %d\n",vetor[pos]);
    }

    return 0;
}