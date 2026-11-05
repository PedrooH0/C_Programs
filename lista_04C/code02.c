#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIM 80

int main(){
  
  unsigned aux = 0;
  char str[LIM], carac;

  puts("Insira uma frase:");

  fgets(str,LIM,stdin);
  str[strcspn(str,"\n")] = '\0';

  puts("\nInsira uma letra para ver se ela existe na frase");
  scanf("%c",&carac);

  for(int i = 0; i<80; i++){

    if(str[i] == carac){
      aux++;
    } 
  }

  if(aux > 0){
    printf("A letra '%c' está presente na frase inserida\n", carac);
  } else{
    printf("A letra '%c' não está presente na frase inserida\n", carac);
  }
  





  return 0;


}