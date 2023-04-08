#include <stdio.h>

int main(){


    int vet[6];
    int i;
    int somaPar = 0;
    int qntImpar = 0;

    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Numeros pares: ");
    for(i=0;i<10;i++){
        if(vet[i]%2 == 0){
            printf("%d ", vet[i]);
            somaPar += vet[i];
        }
    }
    printf("Soma dos valores pares: %d\n\n", somaPar);

    printf("Numeros impares: ");
    for(i=0;i<10;i++){
        if(vet[i]%2 != 0){
            printf("%d ", vet[i]);
            qntImpar++;
        }
    }

    printf("Quantidade impar: %d\n", qntImpar);
    return 0;
}
