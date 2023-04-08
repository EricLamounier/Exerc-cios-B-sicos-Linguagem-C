#include <stdio.h>

int main(){

    float velocidade, km;

    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &velocidade);

    km = velocidade * 3.6;

    printf("%.2f km/h = %.2f m/s\n", velocidade, km);
    return 0;
}
