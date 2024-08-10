#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n, qnt = 0;
    int i;

    arr = (int*) calloc (1, sizeof(int));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    do {
        printf("N = ");
        scanf("%d", &n);

        if(n >= 0){
            qnt++;
            arr = (int*) realloc (arr, qnt * sizeof(int));
            arr[qnt-1] = n;
        }
    } while(n >= 0);

    for(i=0;i<qnt;i++)
        printf("%d ", arr[i

    free(arr);
    return 0;
}
