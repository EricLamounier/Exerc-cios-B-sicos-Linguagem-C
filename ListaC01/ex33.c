#include <stdio.h>

//a area do quadrado segue pela formula Area = lado * lado

int main(){

    float lado, area;

    printf("Digite o valor para o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A area de um quadrado com lado %.2f e': %.2f\n", lado, area);

    return 0;
}
