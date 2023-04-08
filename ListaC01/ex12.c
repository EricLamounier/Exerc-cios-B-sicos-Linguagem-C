#include <stdio.h>

int main(){

    float distancia, km;

    printf("Digite uma distiancia em milhas: ");
    scanf("%f", &distancia);

    km = distancia*1.61;

    printf("%.2f milhas = %.2f km\n", distancia, km);
    return 0;
}
