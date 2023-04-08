#include <stdio.h>

int main(){

    float valorVenda, comissao = 0;

    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);

    if(valorVenda >= 100000){
        comissao = 700 + 0.16*valorVenda;

    }else if(valorVenda < 100000 && valorVenda >= 80000){
        comissao = 650 + 0.14*valorVenda;

    }else if(valorVenda < 80000 && valorVenda >= 60000){
        comissao = 600 + 0.14*valorVenda;

    }else if(valorVenda < 60000 && valorVenda >= 40000){
        comissao = 550 + 0.14*valorVenda;

    }else if(valorVenda < 40000 && valorVenda >= 20000){
        comissao = 500 + 0.14*valorVenda;

    }else if(valorVenda < 20000){
        comissao = 400 + 0.14*valorVenda;

    }

    printf("Comissao: %.2f\n", comissao);
    return 0;
}
