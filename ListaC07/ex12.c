#include <stdio.h>
#include <stdlib.h>

int somaAlgaritmos(int n){
    int soma = 0;

    while(n != 0){
        soma += n%10;
        n /= 10;
    }
    return soma;
}

int main(){

    int n;

    printf("Numero: ");
    scanf("%d", &n);

    if(n < 0)
        printf("Numero invalido\n");
    else
        n = somaAlgaritmos(n);


    return 0;
}

