#include <stdio.h>

int main(){

    float salarioBase, total;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salarioBase);

    //gratificacao
    total = salarioBase + salarioBase*0.05;

    //imposto
    total = total - salarioBase*0.07;

    printf("Total a ser pago: %.2f\n", total);



    return 0;
}
