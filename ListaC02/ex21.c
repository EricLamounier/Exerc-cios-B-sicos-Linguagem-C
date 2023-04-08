#include <stdio.h>

int main(){

    float num1, num2, res = 0;
    int opcao;

    printf("Escolha a opcao:\n");
    printf("1 - Soma de dois numeros\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor)\n");
    printf("3 - Produto entre 2 numeros\n");
    printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero)\n");

    scanf("%d", &opcao);

    printf("Numero 1: ");
    scanf("%f", &num1);

    printf("Numero 2: ");
    scanf("%f", &num2);

    switch(opcao){
        case 1:
            res = num1 + num2;
            break;

        case 2:
            res = num1 - num2;
            break;

        case 3:
            res = num1 * num2;
            break;

        case 4:
            res = num1 / num2;
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }

    printf("Resultado: %.2f\n", res);

    return 0;
}
