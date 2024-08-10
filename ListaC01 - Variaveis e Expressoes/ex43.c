#include <stdio.h>

int main(){

    float valor, aux;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    //com desconto de 10%
    aux = valor - valor*0.10;
    printf("Com 10%% de desconto: %.2f\n", aux);

    //parcela 3x sem juros
    aux = valor/3;
    printf("Valor da parcela 3x sem juros: %.2f\n", aux);

    //se a vista, comissao de 5% no valor com desconto
    aux = (valor - valor*0.1) * 0.05;
    printf("Comissao, se a vista: %.2f\n", aux);

    //se a praso, comissao 5% no valor total
    aux = valor*0.05;
    printf("Comissao, se parcelado: %.2f\n", aux);

    return 0;
}
