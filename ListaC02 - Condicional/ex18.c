#include <stdio.h>

int main(){

    int opcao; //1-soma 2-sub 3-mult 4-div
    float num1, num2, res;

    printf("Menu:\n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");

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
            printf("Numero invalido\n");
            res = 0;
            break;
    }

    printf("Resultado: %.2f\n", res);

    return 0;
}
