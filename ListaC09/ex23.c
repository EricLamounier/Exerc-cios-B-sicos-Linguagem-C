#include <stdio.h>
#include <stdlib.h>

void imprime(int *arr, int k, int size){
    int i;
    int cont = 0;
    int aux = size/k;

    for(i=0;i<size;i++){

        cont++;

        printf("%d ", arr[i]);
        if(cont == aux){
            printf("\n");
            cont=0;
        }
    }

}
int main(){
    int *arr;
    int k, n, cont=0;

    printf("Quantidade de valores: ");
    scanf("%d", &n);

    arr = (int*) calloc (n, sizeof(int));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]); // le o array

    printf("Quantas linhas? ");
    scanf("%d", &k);

    imprime(arr, k,n);

    free(arr);
    return 0;
}
