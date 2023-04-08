#include <stdio.h>

int main(){

    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];

    int i, j;

    //le mat1
    printf("Matriz 1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Numero na posicao (%d, %d): ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    //le mat2
    printf("Matriz 2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Numero na posicao (%d, %d): ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat3[i][j] = mat1[i][j] * mat2[i][j];
        }
    }

    printf("\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
