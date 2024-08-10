#include <stdio.h>

int main(){

    float metroQuad, acres;

    printf("Digite um valor de area em metros quadradados: ");
    scanf("%f", &metroQuad);

    acres = metroQuad * 0.000247;

    printf("%.2f metros quadrados = %.2f acres\n",  metroQuad, acres);

    return 0;
}
