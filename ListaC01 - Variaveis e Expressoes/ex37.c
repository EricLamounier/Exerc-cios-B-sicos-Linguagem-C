#include <stdio.h>

int main(){

    float valor, desconto;

    printf("Digite o valor de um produto: ");
    scanf("%f", &valor);

    //12% == 12/100 == 0.12
    desconto = valor - (valor*0.12);

    printf("%.2f com 12%% de desconto = %.2f\n", valor, desconto);
    return 0;
}
