#include <stdio.h>

int main(){

    int mat[3][3] = {1, 2, 3,
                     5, 6, 7,
                     9, 15, 11};
    int i, j;


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}
