#include <stdio.h>
#include <stdlib.h>

float consumoKmL(float dist, float litro){
    return dist/litro;
}

int main() {

    float distancia_KM;
    float litro_gasolina;
    float consumo_res;

    consumo_res = consumoKmL(distancia_KM, litro_gasolina);

    if(consumo_res < 8)
        printf("Venda o carro!\n");
    else if(consumo_res <= 12)
        printf("Economico!\n");
    else
        printf("Super economico!\n");

    return 0;
}
