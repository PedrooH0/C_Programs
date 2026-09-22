#include <stdio.h>

int main(){
    int n;
    float x_norm;
    unsigned char x,x_max,x_min;

    do{
    puts("Insira a quantidade de pixels:");
    scanf("%d",&n);

    if(n<1) puts("\nInsira valores maiores que 0\n");

    }while(n<1);

    for(int i = 1; i <= n; i++){
        printf("Insira a intensidade %d: ",i);
        scanf("%hhu",&x);

        if(i == 1){
            x_max = x;
            x_min = x;
        }

        if(x > x_max) x_max = x;
            
        if(x < x_min) x_min = x;
    }

    puts("Agora insira uma intensidade para calcular seu valor normalizado");
    scanf("%hhu",&x);

    x_norm = (float) (x - x_min)/(x_max - x_min);

    printf("O valor de x normalizado é de: %.2f\n",x_norm);
}