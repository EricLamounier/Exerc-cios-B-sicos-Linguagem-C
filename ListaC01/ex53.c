#include <stdio.h>

int main(){

    float comprimento, largura, preco, custo;

    printf("Valor do comprimento: ");
    scanf("%f", comprimento);

    printf("Valor da largura: ");
    scanf("%f", &largura);

    printf("Preco da tela: ");
    scanf("%f", &preco);

    printf("O custo sera de %.2f\n", custo);

    return 0;
}
