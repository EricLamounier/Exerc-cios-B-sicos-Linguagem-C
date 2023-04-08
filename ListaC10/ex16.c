#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat;
    int **transposta;

    int n,m;

    printf("Linhas: ");
    scanf("%d", &n);

    printf("Colunas: ");
    scanf("%d", &m);

    //aloca espaco para a matriz
    mat = (int**) calloc (n, sizeof(int*));
    if(mat == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i, j;
    for(i=0;i<n;i++){
        mat[i] = (int*) calloc (m, sizeof(int));
        if(mat[i] == NULL){
            printf("ERRO - Memoria nao alocada!\n");
            exit(1);
        }
    }

    //le a matriz
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //mostra matriz lida
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    //aloca espaco para a transposta
    transposta = (int**) calloc (m, sizeof(int*));
    if(transposta == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    for(i=0;i<m;i++){
        transposta[i] = (int*) calloc (n, sizeof(int));
        if(transposta[i] == NULL){
            printf("ERRO - Memoria nao alocada!\n");
            exit(1);
        }
    }

    //preenche a transposta
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            transposta[i][j] = mat[j][i];
        }
    }

    //mostra a matriz transposta
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ", transposta[i][j]);
        printf("\n");
    }

    //desaloca
    for(i=0;i<n;i++){
        free(mat[i]);
        free(transposta[i]);
    }
    free(mat);
    free(transposta);
    return 0;
}
