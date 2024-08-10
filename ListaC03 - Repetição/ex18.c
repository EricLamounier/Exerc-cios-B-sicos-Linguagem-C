#include <stdio.h>

int main(){

    int qnt, i, num, maior, contMaior = 0;

    printf("Quantidade de numeros: ");
    scanf("%d", &qnt);

    for(i=0;i<qnt;i++){

        printf("Digite um numero: ");
        scanf("%d", &num);

        if(i==0){ //inicialida maior com o primeiro valor
            maior = num;
            contMaior = 1;
        }

        if(num > maior){
            maior = num;
            contMaior = 1;

        }else if(num == maior){
            contMaior++;
        }

    }

    printf("Maior: %d e apareceu %d vezes\n", maior, contMaior);

    return 0;
}
