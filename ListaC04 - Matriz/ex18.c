#include <stdio.h>

int main(){

    int mat[3][3];
    int vet[3];
    int i, j;
    int soma;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Numero na posicao %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0;i<3;i++){
        soma = 0;
        for(j=0;j<3;j++){
            soma += mat[j][i];
        }

        vet[i] = soma;
    }

    for(i=0;i<3;i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
