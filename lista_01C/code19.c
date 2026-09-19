#include <stdio.h>

int main() {
    int num;

    printf("Insira um número: ");
    scanf("%d", &num);

    printf("O número %d é: %s\n", num, (num % 2 == 0) ? "Par" : "Impar");

    return 0;
}