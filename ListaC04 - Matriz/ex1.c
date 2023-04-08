#include <stdio.h>

int main(){

    int mat[4][4] = {1, 2, 3, 4,
                     5, 6, 7, 8,
                     9, 10, 11, 12,
                     13, 14, 15, 16};

    int i, j;
    int cont = 0;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(mat[i][j] > 10)
                cont++;
        }
    }

    printf("%d valores maiores que 10\n", cont);
    return 0;
}
