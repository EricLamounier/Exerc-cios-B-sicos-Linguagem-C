#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int i;
    arr = (int*) calloc (5, sizeof(int));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    for(i=0;i<5;i++){
        printf("Numero na posicao [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<5;i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
