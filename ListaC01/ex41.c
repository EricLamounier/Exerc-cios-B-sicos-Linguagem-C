#include <stdio.h>

int main(){

    float horaTrabalho, horaMes, total;

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &horaTrabalho);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horaMes);

    total = horaTrabalho * horaMes;
    total = total + total*0.1;

    printf("Valor a ser pago: %.2f\n", total);


    return 0;
}
