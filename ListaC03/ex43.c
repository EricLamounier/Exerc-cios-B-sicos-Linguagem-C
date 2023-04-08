#include <stdio.h>

int main(){

    int idade, cont = 0, soma=0;

    while(1){

        printf("Idade: ");
        scanf("%d", &idade);

        if(idade <= 0)
            break;

        soma += idade;
        cont++;
    }

    printf("Media das idades: %.2f\n", (float)soma/cont);
    return 0;
}
