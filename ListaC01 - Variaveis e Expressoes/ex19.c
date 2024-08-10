#include <stdio.h>

int main(){

    float litro, metroCubico;

    printf("Digite um volume em litros: ");
    scanf("%f", &litro);

    metroCubico = litro/1000.0;

    printf("%.2f litros = %.2f metros cubicos\n", litro, metroCubico);

    return 0;
}
