#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIM 80

int main(){
  char str1[LIM], str2[LIM];

  puts("Escreva a frase 1:");
  fgets(str1,LIM,stdin);
  str1[strcspn(str1,"\n")] = '\0';

  puts("Escreva a frase 2:");
  fgets(str2,LIM,stdin);
  str2[strcspn(str2,"\n")] = '\0';

  printf("A palavra concatenada é %s",strcat(str1,str2));

  return 0;
}