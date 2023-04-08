#include <stdio.h>

int main(){

    int i;
    float vet[10];
    float quad[10];

    //le os 10 valores
    for(i=0;i<10;i++){
        printf("Valor do vetor no indice %d: ", i);
        scanf("%f", &vet[i]);
    }

    //calcula o quadrado de cada indice e coloca no segundo vetor
    for(i=0;i<10;i++){
        quad[i] = vet[i] * vet[i];
    }

    //mostra o resultado
    for(i=0;i<10;i++){
        printf("%.2f\n", quad[i]);
    }
    return 0;
}
