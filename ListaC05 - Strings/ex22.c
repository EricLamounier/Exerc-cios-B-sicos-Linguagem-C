#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[10];
    float valor;

    printf("Nome do produto: ");
    fgets(nome, 10, stdin);

    printf("Valor: ");
    scanf("%f", &valor);

    if(nome[strlen(nome) - 1] == '\n')
        nome[strlen(nome)-1] = '\0';

    printf("\nNome: %s\n", nome);
    printf("Valor total: %.2f\n",valor);
    printf("Valor do desconto: %.2f\n", valor*0.1);
    printf("Valor pago a vista: %.2f\n", valor - valor*0.1);
    return 0;
}
