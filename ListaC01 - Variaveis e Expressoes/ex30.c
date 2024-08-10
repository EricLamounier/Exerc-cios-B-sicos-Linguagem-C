#include <stdio.h>

int main(){

    float dolar, real;

    printf("Digite um valor em real: ");
    scanf("%f", &real);

    printf("Cotacao do dolar: ");
    scanf("%f", &dolar);

    printf("Valor correspondente de %.2f reais em dolar: %.2f\n", real, real/dolar);
    return 0;
}
