#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM 15
#define AMP 10

int main(){
  float vetor[LIM], maior, menor;
  srand(time(NULL));

  for(int i = 0; i<LIM; i++){
    vetor[i] = rand() % AMP;
    if(i == 0) maior = vetor[i], menor = vetor[i];
    else{
      if(maior<vetor[i]) maior = vetor[i];
      if(menor>vetor[i]) menor = vetor[i];
    }
  }

  for(int k = 0; k<LIM; k++){
    printf("%.2f ", vetor[k]);
  }

  printf("\nMaior = %.2f\nMenor = %.2f", maior, menor);
  
}