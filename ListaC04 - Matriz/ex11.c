#include <stdio.h>

int main(){

    int mat[3][3] = {1, 2, 3,
                     5, 6, 7,
                     9, 15, 11};

    int i, j, soma=0;

    //leitura mat1
    printf("Matriz:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Numero na posicao %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i == j+1)
                soma += mat[i][j];
        }
    }

    printf("Soma: %d\n", soma);

    return 0;
}

