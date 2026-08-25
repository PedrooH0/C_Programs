#include <stdio.h>
#include <stdlib.h>

int main(){

  unsigned char ch;
  do{
    printf("Selecione uma das seguintes opções:\n1. Ocupar armário\n2. Liberar armário\n3. Sair\n");
    scanf("%hhu",&ch);
    //printf("%hhu\n",ch);

    switch (ch)
    {
    case 1:
      puts("você está no 1");
      ch=0;
      break;

    case 2:
      puts("você está no 2");
      ch=0;
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