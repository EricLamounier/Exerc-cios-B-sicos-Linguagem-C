#include <stdio.h>

int main(){

    int A[10];
    int B[10];
    int C[10];
    int i;

    printf("Vetor A:\n");
    for(i=0;i<10;i++){
        printf("Numero no indice %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nVetor B:\n");
    for(i=0;i<10;i++){
        printf("Numero no indice %d: ", i);
        scanf("%d", &B[i]);
    }

    printf("A - B:\n");
    for(i=0;i<10;i++){
        C[i] = A[i] - B[i];
    }

    for(i=0;i<10;i++)
    printf("%d ", C[i]);

    return 0;
}
