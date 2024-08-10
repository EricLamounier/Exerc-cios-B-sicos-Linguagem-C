#include <stdio.h>

int main(){

    int cod, qnt;
    float total = -1;

    printf("Codigo do produto: ");
    scanf("%d", &cod);

    printf("Quantidade: ");
    scanf("%d", &qnt);

    switch(cod){
        case 100:
        case 103:
            total = 1.2 * qnt;
            break;

        case 101:
            total = 1.3 * qnt;
            break;

        case 102:
            total = 1.5 * qnt;
            break;

        case 104:
            total = 1.7 * qnt;
            break;

        case 106:
            total = 1.0 * qnt;
            break;

        default:
            printf("Codigo invalido\n");
            break;
    }

    printf("Total a ser pago: %.2f\n", total);

    return 0;
}
