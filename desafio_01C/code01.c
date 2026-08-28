#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main(){

  int i;
  unsigned short int armarios = 0;
  int sum = 0;
  unsigned char ch;
  unsigned short int rd;
  unsigned short int control;

  do{
    printf("Selecione uma das seguintes opções:\n1. Ocupar armário\n2. Liberar armário\n3. Sair\n");
    scanf("%hhu",&ch);

    switch (ch)
    {
    case 1:
      puts("você está no 1");
      rd = rand() % 8;
      printf("%hu\n\n",rd);
      control = 1<<rd;
      printf("%hu\n\n",control);
      armarios = armarios ^ control;
      printf("%hu\n\n",armarios);

      break;

    case 2:
      puts("você está no 2\n");
      //ch=0;
      break;

    case 3:
      puts("Adeus");
      ch=0;
      break;
    
    default:
      puts("Nenhuma opção selecionada, tente novamete");
      break;
    }
  }while (ch != 0);
  
  return 0;


}