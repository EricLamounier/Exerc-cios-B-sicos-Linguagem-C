#include <stdio.h>

int main(){

    int saque;
    int cem, cinquenta, vinte, dez, cinco, dois, um;

    printf("Digite o valor do saque (inteiro): ");
    scanf("%d", &saque);

    cem = saque/100;
    saque = saque%100;

    cinquenta = saque/50;

    saque = saque%50;
    vinte = saque/20;

    saque = saque%20;
    dez = saque/10;

    saque = saque%10;
    cinco = saque/5;

    saque = saque%5;
    dois = saque/2;

    saque = saque%2;
    um = saque/1;

    if(cem!=0)
        printf("%d notas de 100\n", cem);

    if(cinquenta!=0)
        printf("%d notas de 50\n", cinquenta);

    if(vinte!=0)
        printf("%d notas de 20\n", vinte);

    if(dez!=0)
        printf("%d notas de 10\n", dez);

    if(cinco!=0)
        printf("%d notas de 5\n", cinco);

    if(dois!=0)
        printf("%d notas de 2\n", dois);

    if(um!=0)
        printf("%d notas de 1\n", um);

    return 0;
}
