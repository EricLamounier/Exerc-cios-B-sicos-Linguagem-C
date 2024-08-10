#include <stdio.h>

int main(){

    float velocidade;
    float ms;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &velocidade);

    ms = velocidade/3.6;

    printf("%.2f em m/s = %.2f m/s\n", velocidade, ms);


    return 0;
}
