#include <stdio.h>

int main(){

    int quantHoras;
    float horaAula, percentINSS, salarioBruto, salarioLiquido;

    puts("Insira a quantidades de horas trabalhadas no mês: ");
    scanf("%d",&quantHoras);

    puts("Insira o valor da hora aula: ");
    scanf("%f",&horaAula);

    puts("Insira a porcentagem de desconto do INSS (escreva o valor sem o símbolo %)");
    scanf("%f",&percentINSS);


    salarioBruto = quantHoras * horaAula;
    salarioLiquido = salarioBruto * ((100-percentINSS)/100);

    printf("Salário Bruto: R$%.2f\nSalário Líquido: R$%.2f\n",salarioBruto,salarioLiquido);

    return 0;
}