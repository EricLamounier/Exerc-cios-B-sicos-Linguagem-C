#include <stdio.h>

int main(){

    int n, i, soma = 0;

    for(i=0;i<10;i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);

        soma += n;
    }

    printf("Media: %.2f\n", soma/10.0);
    return 0;
}
