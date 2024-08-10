#include <stdio.h>

int main(){

    int numero, aux, invertido;

    printf("Digite um numero inteiro de 3 difitos: ");
    scanf("%d", &numero);

    aux = 0;

    //pega a centena e transforma em unidade
    aux = numero/100;
    invertido = aux;

    //pega a dezena e a deixa como dezena
    aux = numero%100;
    aux = aux/10;
    aux = aux*10;
    invertido += aux;

    //pega a unidade e a transforma em centena
    aux = numero%100;
    aux = aux%10;
    aux = aux*100;
    invertido += aux;

    printf("%d Invertido: %d\n", numero, invertido);


    return 0;
}
