#include <stdio.h>

int main(){

    float jardas, metros;

    printf("Digite um valor de comprimento em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("%.2f jardas = %.2f metros\n", jardas, metros);

    return 0;
}
