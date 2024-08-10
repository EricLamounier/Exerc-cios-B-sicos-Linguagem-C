#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main(){
    int *arr;
    int *aux;

    arr = (int*) calloc (TAM, sizeof(int));
    if(arr ==  NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i;
    for(i=0;i<TAM;i++){
        printf("Valor [%d]: ", i);
        aux = &arr[i];

        scanf("%d", aux);
    }
    aux = NULL;

    for(i=0;i<TAM;i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
