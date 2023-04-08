#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int mat[4][4];
    int i, j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            mat[i][j] = rand()%20;
        }
    }

    printf("Original:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(mat[i][j]  < 10)
                printf("0%d ", mat[i][j]);
            else
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //diag inferior
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i < j)
                mat[i][j] = 0;
        }
    }

    printf("\nTriangular inferior:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(mat[i][j]  < 10)
                printf("0%d ", mat[i][j]);
            else
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
