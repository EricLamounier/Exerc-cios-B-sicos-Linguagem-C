#include <stdio.h>

int main(){

    int vet[5];
    int maior, menor, posMaior, posMenor;
    int i;

    //le o vetor
    for(i=0;i<5;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);

        //inicializa maior com o primeiro elemento
        if(i==0){
            maior = vet[i];
            posMaior = i;
            menor = vet[i];
            posMenor = i;
        }
    }

    //maior elemento e sua posicao
    for(i=0;i<5;i++){

        if(vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        }

        if(vet[i] < menor){
            menor = vet[i];
            posMenor = i;
        }
    }

    printf("Maior: %d na posicao %d\n", maior, posMaior);
    printf("Menor: %d na posicao %d\n", menor, posMenor);
    return 0;
}
