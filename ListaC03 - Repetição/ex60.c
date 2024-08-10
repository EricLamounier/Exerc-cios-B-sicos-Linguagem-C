#include <stdio.h>

int main(){

    int n;
    float soma=0;
    int maior = 0, menor = 0;
    float media;
    float mediaPar;
    int qnt=0;
    int qntPar=0;

    while(1){

        printf("Numero: ");
        scanf("%d", &n);

        if(n==0)
            break;

        soma += n; // (A) soma dos numeros digitados

        media += n; // (C) media dos numeros digitados

        if(qnt==0){
            maior = n;
            menor = n;

        }else{

            if(n > maior) // (D) maior numero digitado
                maior = n;

            if(n < menor) // (E) menor numero digitado
                menor = n;
        }

        qnt++; // (B) quantidade de numeros digitados

        if(n%2==0){
            mediaPar += n; // (F) media dos pares
            qntPar++;
        }
    }

    printf("A - soma dos numeros: %.2f\n", soma);

    printf("B - quantidade de numeros: %d\n", qnt);

    printf("C - media dos numeros: %.2f\n", soma/qnt);

    printf("D - maior numero: %d\n", maior);

    printf("E - menor numero: %d\n", menor);

    printf("F - media dos pares: %.2f\n", mediaPar/qntPar);
    return 0;
}
