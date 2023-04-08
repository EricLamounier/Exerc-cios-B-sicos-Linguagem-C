#include <stdio.h>
#include <string.h>

int main(){

    float valor, precoFinal = -1;
    char estado[2];

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Estado: ");
    scanf("%s", &estado);

    if(strcmp(estado, "MG") == 0){
        precoFinal = valor + (valor * 0.07);

    }else if(strcmp(estado, "SP") == 0){
        precoFinal = valor + (valor * 0.12);

    }else if(strcmp(estado, "RJ") == 0){
        precoFinal = valor + (valor * 0.15);

    }else if(strcmp(estado, "MS") == 0){
        precoFinal = valor + (valor * 0.08);

    }else{
        printf("Estado invalido\n");

    }

    printf("Preco final: %.2f\n", precoFinal);

    return 0;
}
