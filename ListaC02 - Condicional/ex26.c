#include <stdio.h>

int main(){

    float km, litros, consumo;

    printf("Digite a distancia em km: ");
    scanf("%f", &km);

    printf("Digite a quantidade em litros de gasolina: ");
    scanf("%f", &litros);

    consumo = km * litros;

    if(consumo < 8){
        printf("Venda o carro!\n");

    }else if(consumo >= 8 && consumo <= 12){
        printf("Economico\n");

    }else if(consumo > 12){
        printf("Super economico\n");

    }

    return 0;
}
