#include <stdio.h>
#include <stdlib.h>

int main(){
  double notas[3];
  notas[0] = 3.0;
  notas[1] = 4.6;
  notas[2] = 3.8;

  for(unsigned i = 0; i<3; i++){
    printf("Nota %u: %.2lf\n",i+1,notas[i]);
  }




  return 0;
}