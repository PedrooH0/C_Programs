#include <stdio.h>

int main(){
    unsigned int horas,minutos,segundos;

    puts("Escreva uma quantida de horas:");
    scanf("%u",&horas);
    puts("Escreva uma quantida de minutos:");
    scanf("%u",&minutos);
    puts("Escreva uma quantida de segundos:");
    scanf("%u",&segundos);

    horas*=3600;
    minutos*=60;

    printf("O total de segundos é %u\n",segundos+minutos+horas);

    return 0;
}