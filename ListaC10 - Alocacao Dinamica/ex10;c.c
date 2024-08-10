#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int qnt;
    srand(time(NULL));

    printf("Quantos valores deseja armazenar? ");
    scanf("%d", &qnt);

    double *arr;

    arr = (double*) malloc (qnt * sizeof(double));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i;

    for(i=0;i<qnt;i++){
        arr[i] = rand()%100;
    }

    for(i=0;i<qnt;i++)
        printf("%.2lf ", arr[i]);

    free(arr);
    return 0;
}
