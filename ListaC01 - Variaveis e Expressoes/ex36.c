#include <stdio.h>
#define pi 3.141592

int main(){

    float altura, raio, volume;

    printf("Altura do cilindro: ");
    scanf("%f", &altura);

    printf("Raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * raio * raio * altura;

    printf("Volume do cilindro: %.2f\n", volume);

    return 0;
}
