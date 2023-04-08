#include <stdio.h>

int main(){

    int mat[4][4];
    int maior, indiceX, indiceY;
    int i, j;

    //le a matriz
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Numero no indice %d %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
          if(i==0 && j==0){
            maior = mat[i][j];
            indiceX = i;
            indiceY = j;
          }else{
            if(mat[i][j] > maior){
                maior = mat[i][j];
                indiceX = i;
                indiceY = j;
            }
          }
        }
    }

    printf("Maior: mat[%d][%d] = %d\n", indiceX, indiceY, maior);

    return 0;
}
