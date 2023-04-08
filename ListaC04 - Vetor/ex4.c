#include <stdio.h>

int main(){

    int vet[8];
    int i;
    int soma;
    int x, y;

    //le o vetor
    for(i=0;i<8;i++){
        printf("Valor do vetor no indice %d: ", i);
        scanf("%d", &vet[i]);
    }

    //recebe x e y
    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    //soma os indices x e y
    soma = vet[x] + vet[y];

    printf("Soma de %d + %d = %d\n", vet[x], vet[y], soma);
    return 0;
}
