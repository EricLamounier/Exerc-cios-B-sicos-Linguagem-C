#include <stdio.h>

int main(){

    int vet[10];
    int maior, posMaior;
    int i;

    //le o vetor
    for(i=0;i<10;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);

        //inicializa maior com o primeiro elemento
        if(i==0){
            maior = vet[i];
            posMaior = i;
        }
    }

    //maior elemento e sua posicao
    for(i=0;i<10;i++){

        if(vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        }
    }

    printf("Maior: %d na posicao %d\n", maior, posMaior);
    return 0;
}
