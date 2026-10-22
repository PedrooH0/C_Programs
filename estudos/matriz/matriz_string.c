#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para contar caracteres reais em UTF-8
int contar_caracteres_utf8(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        // Se o byte atual NÃO for um byte de continuação UTF-8, ele é um novo caractere
        // (s[i] & 0xC0) != 0x80 filtra os bytes de continuação (10xxxxxx)
        if ((s[i] & 0xC0) != 0x80) {
            count++;
        }
    }
    return count;
}

int main(){

  char s1[80], s2[80];

  fgets(s1,80, stdin); // Lê o que é digitado no teclado
  s1[strcspn(s1,"\n")] = '\0'; // Busca pelo "enter" no s1 e substitui pelo \0

  fgets(s2,80, stdin);
  s2[strcspn(s2,"\n")] = '\0';

  printf("Tamanhos: %d e %d.\n", contar_caracteres_utf8(s1), contar_caracteres_utf8(s2));




  return 0;
}

// strcpy(s1,s2) -> copia s2 em s1
// strcat(s1,s2) -> concatena s2 ao final de s1
// strlen(s1) -> retorna o tamanho de s1
// strcmp(s1,s2) -> retorna 0 se iguais
// menor que 0 se s1 < s2
// maior que 0 se s1 > s2.
// strchr(s1,ch) -> retorna um ponteiro para a
// primeira ocorrência de ch em s1.
// strstr(s1,s2) -> retorna um ponteiro para a
// primeira ocorrência de s2 em s1.