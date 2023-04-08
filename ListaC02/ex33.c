#include <stdio.h>

int main(){

    float precoAntigo, precoNovo;

    printf("Digite o preco antigo: ");
    scanf("%f", &precoAntigo);

    if(precoAntigo < 50){
        precoNovo = precoAntigo + precoAntigo*0.05;

    }else if(precoAntigo >= 50 && precoAntigo <= 100){
        precoNovo = precoAntigo + precoAntigo*0.1;

    }else{
        precoNovo = precoAntigo + precoAntigo*0.15;

    }

    printf("Novo preco: %.2f\n", precoNovo);

    if(precoNovo < 80){
        printf("Barato\n");

    }else if(precoNovo >= 80 && precoNovo <= 120){
        printf("Normal\n");

    }else if(precoNovo > 120 && precoNovo <= 200){
        printf("Caro\n");

    }else{
        printf("Muito caro\n");
    }

    return 0;
}
