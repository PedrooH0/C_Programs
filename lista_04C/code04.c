#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIM 80

int main(){
  char str1[LIM], str2[LIM];
  unsigned count = 0;

  puts("Escreva a frase 1:");
  fgets(str1,LIM,stdin);
  str1[strcspn(str1,"\n")] = '\0';

  puts("Escreva a frase 2:");
  fgets(str2,LIM,stdin);
  str2[strcspn(str2,"\n")] = '\0';

  for(int i = 0; i<LIM; i++){

    if(str1[i] == '\0' && str2[i] == '\0'){
      break;
    }

    if(str1[i] != str2[i]){
      count++;
      break;
    }
  }

  if(count>0){
    puts("A frase 1 e a frase 2 são diferentes");
  }else{
    puts("A frase 1 e a frase 2 são iguais");
  }

  return 0;
}