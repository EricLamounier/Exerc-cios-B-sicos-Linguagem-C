#include <stdio.h>

int main(){

    float metroQuad, hectare;

    printf("Digite um valor de area em hectares: ");
    scanf("%f", &hectare);

    metroQuad= hectare * 10000;

    printf("%.2f hectares = %.2f metros quadradados\n", hectare, metroQuad);

    return 0;
}

