#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero inteiro entre 1 e 7: ");
    scanf("%d", &num);

    switch(num){

        case 1:
            printf("Domingo\n");
            break;

        case 2:
            printf("Segunda-Feira\n");
            break;

        case 3:
            printf("Terca-Feira\n");
            break;

        case 4:
            printf("Quarta-Feira\n");
            break;

        case 5:
            printf("Quinta-Feira\n");
            break;

        case 6:
            printf("Sexta-Feira\n");
            break;

        case 7:
            printf("Sabado\n");
            break;

        default:
            printf("Numero invalido\n");
            break;
    }
}
