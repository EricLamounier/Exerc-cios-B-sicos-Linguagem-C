#include <stdio.h>

int main(){

    int mat[5][5] = {1, 2, 3, 4, 90,
                     5, 6, 7, 8, 100,
                     9, 10, 11, 12, 110,
                     13, 14, 15, 16, 120,
                     91, 92, 93, 94, 95};
    int i, j;
    int x, stop = 0;

    //leitura
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j] = i*j;
        }
    }

    printf("Valor X: ");
    scanf("%d", &x);

    //busca
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(mat[i][j] == x){
                stop = 1;
                break;
            }


        }
        if(stop)
            break;
        j = -1;
    }

    if(j != -1){
        printf("[%d][%d] = %d\n", i, j, mat[i][j]);
    }else{
        printf("Nao encontrado!\n");
    }

    return 0;
}

