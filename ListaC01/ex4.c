#include <stdio.h>

int main(){

    float numero;
    float quadrado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %f e' %f\n", numero, quadrado);

    return 0;
}
