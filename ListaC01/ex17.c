#include <stdio.h>

int main(){

    float polegadas, centimetros;

    printf("Digite um comprimento em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("%.2f centimetros = %.2f  polegadas\n", centimetros, polegadas);
    return 0;
}

