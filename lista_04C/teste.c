#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 10

void preencherS(double *,int);
void preencherW(double *,int);
void ri(double *,double *,double *,int);

int main(){
  srand(time(NULL));
  double s[TAM],w[TAM],r[TAM];
  preencherS(s,TAM);
  preencherW(s,TAM);
  ri(s,w,r,TAM);
  double total = 0;

  for(int i = 0;i<TAM;i++){
    total += *(r+i); 
  }

  printf("Score de risco total: %lf",total);

  return 0;
}

void preencherS(double *s,int n){
  for(int i = 0; i<n;i++){
    *(s+i) = (sqrt(rand()%10) + 1)/(rand()%10 + 1);
  }
}

void preencherW(double *w,int n){
  for(int i = 0;i<n;i++){
    *(w+i) = (rand()%2)/(rand());
  }
}

void ri(double *s,double *w, double *r, int n){
  for(int i = 0;i<n;i++){
    *(r+i) = (*(s+i)) * (*(w+i));
  }
}