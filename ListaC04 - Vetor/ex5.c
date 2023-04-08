#include <stdio.h>

int main(){

    int vet[10];
    int qntPar = 0;
    int i;

    //le o vetor
    for(i=0;i<10;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    //verifica quantos pares tem
    for(i=0;i<10;i++){
        if(vet[i]%2 == 0){
            qntPar++;
        }
    }

    printf("O vetor possui %d numeros pares\n", qntPar);


    return 0;
}
