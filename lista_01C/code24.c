#include <stdio.h>

int main(){
  int sec,secM,min,hour;

  puts("Insira a quantidade de segundos: ");
  scanf("%d",&sec);

  min = sec/60;
  secM = sec%60;
  hour = min/60;
  min = min%60;

  printf("%d segundos = %d horas %d minutos e %d segundos",sec,hour,min,secM);


  return 0;
}