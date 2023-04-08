#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas;

    printf("Quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Quantidade de colunas: ");
    scanf("%d", &colunas);

    float **mat;

    mat = (float**) calloc (linhas, sizeof(float*));
    if(mat == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i, j;
    for(i=0;i<linhas;i++){
        mat[i] = (float*) calloc (colunas, sizeof(float));
        if(mat[i] == NULL){
            printf("ERRO - Memoria nao alocada!\n");
            exit(1);
        }
    }

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++)
            printf("%.1f ", mat[i][j]);
        printf("\n");
    }

    for(i=0;i<linhas;i++)
        free(mat[i]);

    free(mat);
    return 0;
}
