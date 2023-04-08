#include <stdio.h>

int main(){

    float polegadas, centimetros;

    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("%.2f polegadas = %.2f  centimetros\n", polegadas, centimetros);
    return 0;
}
