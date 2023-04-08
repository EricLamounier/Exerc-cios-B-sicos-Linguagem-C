#include <stdio.h>

int main(){

    int vet[10];
    int maior, menor;
    int i;

    //le o vetor
    for(i=0;i<10;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);

        //inicializa o menor e maior com o primeiro valor
        if(i == 0){
            maior = vet[i];
            menor = vet[i];
        }
    }

    //verifica maior e menor
    for(i=1;i<10;i++){

       if(vet[i] < menor)
        menor = vet[i];

        if(vet[i] > maior)
        maior = vet[i];
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);


    return 0;
}
