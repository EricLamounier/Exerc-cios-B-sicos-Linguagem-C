#include <stdio.h>

int main(){

    float salario, novoSalario;

    printf("Digite o valor de salario: ");
    scanf("%f", &salario);

    //25% == 25/100 == 0.25
    novoSalario = salario + (salario*0.25);

    printf("%.2f com 25%% de aumento = %.2f\n", salario, novoSalario);
    return 0;
}
