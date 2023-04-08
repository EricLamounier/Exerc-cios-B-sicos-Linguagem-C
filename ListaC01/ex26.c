#include <stdio.h>

int main(){

    float metroQuad, hectare;

    printf("Digite um valor de area em metros quadradados: ");
    scanf("%f", &metroQuad);

    hectare = metroQuad * 0.0001;

    printf("%.2f metros quadrados = %.2f hectares\n",  metroQuad, hectare);

    return 0;
}
