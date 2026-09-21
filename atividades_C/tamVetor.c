#include <stdio.h>
#include <string.h>

int main(){
    char str[30];

    puts("Digite seu nome");
    gets(str);

    unsigned long int count=0;
    while(str[count]!='\0') count++;

    for(int i=0;i<10;i++){
        printf("%c\n",str[i]);
    }

    printf("Quantidade de caracteres: %lu\n", strlen(str));

    return 0;
}