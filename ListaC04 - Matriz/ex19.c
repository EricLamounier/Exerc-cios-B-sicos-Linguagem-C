#include <stdio.h>

int main(){

    int mat[5][4];
    int i, j;
    int soma;
    int maiorNota;
    int indiceMaiorNota;
    float media = 0;

    //(a)
    for(i=0;i<5;i++){

        printf("Aluno [%d]\n", i+1);

        for(j=0;j<3;j++){
            if(j == 0)
                printf("\tMatricula: ");

            else if(j == 1)
                printf("\tMedia das provas: ");

            else if(j == 2)
                printf("\tMedia dos trabalhos: ");

            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    //(b)
    for(i=0;i<5;i++){
        soma = 0;
        for(j=1;j<3;j++){
            soma += mat[i][j];
        }
        mat[i][j] = soma;
    }

    //(c)
    for(i=0;i<5;i++){
        if(i == 0){
            maiorNota = mat[i][3];
            indiceMaiorNota = i;
        }else{
            if(mat[i][3] > maiorNota){
                maiorNota = mat[i][3];
                indiceMaiorNota = i;
            }
        }
    }

    printf("\nMaior nota:\n");
    printf("Aluno [%d] com matricula %d\n\n", indiceMaiorNota+1, mat[indiceMaiorNota][3]);


    //(d)
    for(i=0;i<5;i++){
        media += mat[i][3];
    }

    media /= 5.0;

    printf("Media das notas finais: %.2f\n", media);

    return 0;
}
