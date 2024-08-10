#include <stdio.h>

int main(){

    float distancia, milhas;

    printf("Digite uma distiancia em quilometros: ");
    scanf("%f", &distancia);

    milhas = distancia/1.61;

    printf("%.2f milhas = %.2f km\n", distancia, milhas);
    return 0;
}
