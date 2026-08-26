#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main(){

  int i;
  int sum = 0;
  unsigned char ch;
  unsigned short int rd;
  unsigned char control;

  for(i=0;i<=7;i++){ // for que deixa todos os armários ocupados
    if (i==0) sum = sum + 1;
    sum = sum + (1<<i);
    printf("%d\n",sum);
  } 
  puts("");
  

  
  // do{
  //   printf("Selecione uma das seguintes opções:\n1. Ocupar armário\n2. Liberar armário\n3. Sair\n");
  //   scanf("%hhu",&ch);

  //   switch (ch)
  //   {
  //   case 1:
  //     puts("você está no 1");
  //     //ch=0;

  //     rd = rand() % 8;
  //     printf("%hu\n\n",rd);

  //     break;

  //   case 2:
  //     puts("você está no 2\n");
  //     //ch=0;
  //     break;

  //   case 3:
  //     puts("Adeus");
  //     ch=0;
  //     break;
    
  //   default:
  //     puts("Nenhuma opção selecionada, tente novamete");
  //     break;
  //   }
  // }while (ch != 0);
  
  return 0;


}