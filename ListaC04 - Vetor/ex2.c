#include <stdio.h>

int main(){

    int vet[6];
    int i;

    printf("Leitura dos numeros:\n");
    //le os valores
    for(i=0;i<6;i++){
        printf("Numero da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n");

    printf("Mostra os numeros:\n");
    //printa os valores
    for(i=0;i<6;i++){
        printf("Numero da posicao %d: %d\n", i, vet[i]);
    }

    return 0;
}
