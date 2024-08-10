#include <stdio.h>

int main(){

    float metroQuad, acres;

    printf("Digite um valor de area em acres: ");
    scanf("%f", &acres);

    metroQuad = acres * 4048.58;

    printf("%.2f acres = %.2f metros quadrados\n",  acres, metroQuad);

    return 0;
}
