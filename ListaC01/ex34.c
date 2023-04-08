#include <stdio.h>
#define pi 3.141592

int main(){

    float raio, area;
    //ou float pi = 3.141592

    printf("Digite um valor para o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * (raio*raio);

    printf("Area do circulo de raio %.2f e': %.2f\n", raio, area);

    return 0;
}
