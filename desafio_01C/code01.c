#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void conversor_binario(unsigned short int num){
  for(int j = 7; j>=0; j--){
    printf("%d",(num >> j) & 1);
  }
  puts("\n");
}

int main(){

  int i;
  unsigned short int armarios = 0;
  unsigned char ch;
  unsigned short int pos;

  srand(time(NULL));

  do{
    puts("Lista de armários (Ocupado = 1 / Vago = 0):");
    conversor_binario(armarios);
    printf("Selecione uma das seguintes opções:\n1. Ocupar armário aleatório\n2. Liberar armário\n3. Sair\n");
    

    if (scanf("%hhu", &ch) != 1) {
        puts("\nDigite apenas números!\n");
        scanf("%*s");
        continue;
    }

    switch (ch)
    {
    case 1:
      if (armarios == 255) {
        puts("\nTodos os armários estão ocupados\nEscolha outra opção.\n");
        break;
      }

      do{
        pos = rand() % 8;
      }while ((armarios & (1 << pos)) != 0);

      armarios = armarios ^ (1 << pos);
      
      puts("\nPosição sorteada: ");
      conversor_binario(1 << pos);
      break;

    case 2:
      if(armarios == 0){
        puts("\nNão existem armários para desocupar\n");
        break;
      }
      
      printf("\nEscolha uma posição de 0 a 7 para desocupar um armário:\n");
      if (scanf("%hu", &pos) != 1) {
        puts("\nDigite apenas números\n");
        scanf("%*s");
        continue;
      }

      if(pos>7){
        puts("\nValor inválido\nDigite uma posição entre 0 e 7.\n");
        continue;
      }

      if((armarios & (1 << pos)) == 0) {
        puts("\nEsse armário já está desocupado\n");
        break;
      }

      armarios &= ~(1 << pos);
      puts("\nArmário desocupado\n");

      break;

    case 3:
      puts("\nAdeus");
      break;
    
    default:
      puts("\nNenhuma opção selecionada, tente novamete\n");
      break;
    }
  }while (ch != 3);
  
  return 0;


}
