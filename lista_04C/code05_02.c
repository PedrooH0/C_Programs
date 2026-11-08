#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIM 80

int main(){
  char str1[LIM], str2[LIM];
  int i = 0, j = 0;

  puts("Insira a frase 1:");
  fgets(str1,LIM,stdin);

  puts("Insira a frase 2:");
  fgets(str2,LIM,stdin);

  while(str1[i] != '\0'){
    i++;
  }

  while((str2[j] != '\0') && (i < LIM-1)){
    str1[i] = str2[j];
    i++;
    j++;
  }

  str1[i] = '\0';

  printf("Frase concatenada: %s\n",str1);

  return 0;
}