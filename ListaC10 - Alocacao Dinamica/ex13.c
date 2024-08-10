#include <stdio.h>
#include <stdlib.h>

int main(){
    int lin, col;
    int i,j;

    printf("Linhas: ");
    scanf("%d", &lin);

    printf("Colunas: ");
    scanf("%d", &col);

    int **mat;

    mat = (int**) calloc (lin, sizeof(int*));
    if(mat == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    for(i=0;i<lin;i++){
        mat[i] = (int*) calloc (col, sizeof(int));
        if(mat[i] == NULL){
            printf("ERRO - Memoria nao alocada!\n");
            exit(1);
        }
    }

    int qnt = 0;

    for(i=0;i<lin;i++)
        for(j=0;j<col;j++)
            if(mat[i][j] == 0)
                qnt++;

    for(i=0;i<lin;i++)
        free(mat[i]);

    printf("%d\n", qnt);


    return 0;
}
