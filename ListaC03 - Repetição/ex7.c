#include <stdio.h>

int main(){

    int n, i = 0, soma = 0;

    while(i<10){

        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &n);

        if(n >= 0){
            soma += n;
            i++;
        }
    }

    printf("Media dos positivos: %.2f\n", soma/10.0);
    return 0;
}
