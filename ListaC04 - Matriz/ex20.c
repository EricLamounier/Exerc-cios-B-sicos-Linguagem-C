#include <stdio.h>

int main(){

    int mat[3][6];
    int i, j;
    int soma = 0;
    float media = 0;
    float mediaSeg = 0;
    float mediaQua = 0;

    //le a matriz
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            printf("Numero na posicao (%d, %d): ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //(a)
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            if(j%2 != 0)
                soma += mat[i][j];
        }
    }
    printf("Soma das colunas impares: %d\n\n", soma);

    //(b)
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            if(j==1)
                mediaSeg += mat[i][j];
            else if(j == 3)
                mediaQua += mat[i][j];
        }
    }
    media = (mediaSeg + mediaQua)/6.0;
    mediaSeg /= 3.0;
    mediaQua /= 3.0;

    printf("Media da segunda coluna: %.2f\n", mediaSeg);
    printf("Media da quarta  coluna: %.2f\n", mediaQua);
    printf("Media das  duas colunas: %.2f\n\n", media);

    //(c)
    soma = 0;
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            if(j == 0 || j == 1)
                soma += mat[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            if(j == 5)
                mat[i][j] = soma;
        }
    }

    //(d)
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            if(mat[i][j] < 10)
                printf("00%d ", mat[i][j]);
            else if(mat[i][j] >= 10 && mat[i][j] < 100)
                printf("0%d ", mat[i][j]);
            else
                printf("%d ", mat[i][j]);

        }
        printf("\n");
    }

    return 0;
}
