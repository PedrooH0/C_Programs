#include <stdio.h>

int main() {

    unsigned int n;
    int x_anterior, x_atual, x_proximo, y;

    do{
        printf("Digite a quantidade de amostras (n tem que ser maior ou igual a 3): ");
        scanf("%u", &n);

        if(n<3){
            puts("\nDigite um valor maior ou igual a 3\n");
        }
    }while(n<3);

        printf("Digite a amostra 1: ");
        scanf("%d", &x_anterior);

        printf("Digite a amostra 2: ");
        scanf("%d", &x_atual);

        for (int i = 2; i <= n - 1; i++) {
            printf("Digite a amostra %d: ", i + 1);
            scanf("%d", &x_proximo);

            y = ((float)(x_anterior + x_atual + x_proximo)) / 3;

            printf("y%d = %.2f\n", i, (float)y);

            x_anterior = x_atual;
            x_atual = x_proximo;
        }
        
    return 0;
}