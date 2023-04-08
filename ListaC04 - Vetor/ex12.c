
#include <stdio.h>

int main(){

    int vet[5];
    int maior, menor;
    int i;
    float media = 0;

    //le o vetor
    for(i=0;i<5;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);

        //inicializa o menor e maior com o primeiro valor
        if(i == 0){
            maior = vet[i];
            menor = vet[i];
        }
    }

    //verifica maior e menor
    for(i=0;i<5;i++){

       if(vet[i] < menor)
        menor = vet[i];

        if(vet[i] > maior)
        maior = vet[i];

        media += vet[i];
    }

    media /= 5.0;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);


    return 0;
}
