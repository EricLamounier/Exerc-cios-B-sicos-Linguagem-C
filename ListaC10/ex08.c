#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int i;
    int qnt=0;

    arr = (int*) calloc (1500, sizeof(int));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int size = sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<1500;i++){
        if(arr[i] == 0)
            qnt++;

        arr[i] = i;
    }

    printf("%d\n", qnt);

    for(i=0;i<1500;i++){
        if(i < 10 || i >= 1490)
            printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
