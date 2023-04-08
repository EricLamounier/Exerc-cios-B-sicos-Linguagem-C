#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, m;

    printf("Linhas: ");
    scanf("%d", &n);

    printf("Colunas: ");
    scanf("%d", &m);

    int **mat;

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

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Numero posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int x1, y1, x2, y2, x3, y3;
    x1 = x2 = x3 = 0;
    y1 = y2 = y3 = 0;

    //primeiro
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mat[i][j] > mat[x1][y1]){
                x1 = i;
                y1 = j;
            }
        }
    }

    srand(time(NULL));
    do {
        x2 = rand()%n;
        y2 = rand()%m;
    }while(x2 == x1 && y2 == y1);

    //segundo
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((mat[i][j] > mat[x2][y2]) && (mat[i][j] != mat[x1][y1])){
                x2 = i;
                y2 = j;
                printf("%d\n\n", mat[i][j]);
            }
        }
    }

    do {
        x3 = rand()%n;
        y3 = rand()%m;
    }while(x3 == x1 && y3 == y1 && x3 == x2 && y3 == y2);

    //terceiro
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(mat[i][j] > mat[x3][y3] && mat[i][j] != mat[x1][y1] && mat[i][j] != mat[x2][y2]){
                x3 = i;
                y3 = j;
            }
        }
    }


    printf("Tres maiores: %d, %d e %d\n", mat[x1][y1], mat[x2][y2], mat[x3][y3]);

    for(i=0;i<n;i++)
        free(mat[i]);

    free(mat);

    return 0;
}
