#include <stdio.h>

#define TAM 2

int main(){

    int mat1[TAM][TAM];
    int mat2[TAM][TAM];
    int mat3[TAM][TAM];
    int i, j;

    //leitura mat1
    printf("Matriz 1:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Numero na posicao %d %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    //leitura mat2
    printf("\nMatriz 2:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Numero na posicao %d %d: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    //maiores na mat3
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(mat1[i][j] > mat2[i][j])
                mat3[i][j] = mat1[i][j];
            else
                mat3[i][j] = mat2[i][j];
        }
    }

    //printa mat3
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}
