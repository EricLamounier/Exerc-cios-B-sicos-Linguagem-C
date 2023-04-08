#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int mat[5][5];
    int i, j;
    int res[10];

    //gerando a cartela de bingo
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] = rand()%99;
        }
    }

    //exibe as cartelas
    for(i=0;i<5;i++){
        printf("Cartela %d: ", i+1);
        for(j=0;j<5;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
