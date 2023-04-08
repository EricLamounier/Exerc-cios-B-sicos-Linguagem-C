#include <stdio.h>

int main(){

    int n, i, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i=0;i<=n;i++){
        soma += n;
    }

    printf("Soma dos %d numeros naturais: %d\n", n, soma);
    return 0;
}
