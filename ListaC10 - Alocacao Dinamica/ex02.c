#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, i;
    int *arr;

    printf("Quantidade a ser alocada: ");
    scanf("%d", &n);

    arr = (int*) calloc (n, sizeof(int));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    for(i=0;i<n;i++){
        printf("Numero na posicao [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
