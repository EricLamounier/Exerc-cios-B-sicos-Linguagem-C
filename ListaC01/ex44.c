#include <stdio.h>

int main(){

    float alturaDegrau, alturaDesejada;
    int degraus;

    printf("Digite a altura do degrau: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura desejada: ");
    scanf("%f", &alturaDesejada);

    degraus = alturaDesejada/alturaDegrau;

    printf("%d degraus\n", degraus);

    return 0;
}
