#include <stdlib.h>
#include <stdio.h>

int main(){
    int N, i;
    int *arr;

    printf("Quantidade a ser alocada: ");
    scanf("%d", &N);

    arr = (int*) calloc (N, sizeof(int));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    for(i=0;i<N;i++){
        printf("Numero na posicao [%d]: ",i);
        scanf("%d", &arr[i]);
    }

    int X;

    printf("\nValor: ");
    scanf("%d", &X);

    int qnt_multiplos=0;
    int *multiplos;

    multiplos = (int*) calloc (1, sizeof(int));
    if(multiplos == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    for(i=0;i<N;i++){
        if(arr[i]%X == 0){
            qnt_multiplos++;
            multiplos = (int*) realloc (multiplos, (qnt_multiplos) * sizeof(int));
            multiplos[qnt_multiplos-1] = arr[i];
        }
    }

    printf("Quantidade de numeros multiplos de %d: %d\n", X, qnt_multiplos);

    printf("Multiplos de X encontrados: ");
    for(i=0;i<qnt_multiplos;i++)
        printf("%d ", multiplos[i]);

    free(arr);
    return 0;
}
