#include <stdio.h>

int main(){

    float vet[10];
    int i;
    int qntNegativos = 0;
    float somaPositivos = 0;

    //le o vetor
    for(i=0;i<10;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%f", &vet[i]);
    }

    //verifica negativos e positivos
    for(i=0;i<10;i++){
        if(vet[i] < 0)
            qntNegativos++;
        else
            somaPositivos += vet[i];
    }

    printf("Quantidade de nagativos: %d\n", qntNegativos);
    printf("Soma dos positivos: %.2f\n", somaPositivos);

    return 0;
}
