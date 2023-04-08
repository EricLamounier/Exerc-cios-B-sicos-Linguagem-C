#include <stdio.h>

int main(){

    float nota[10][3];
    float piorNota = 0;
    int indicePiorNota = 0;
    int i, j;
    int p1 = 0, p2 = 0, p3 = 0;

    for(i=0;i<10;i++){
        printf("Aluno [%d]:\n", i+1);
        for(j=0;j<3;j++){
            printf("\tNota [%d]: ", j+1);
            scanf("%f", &nota[i][j]);
        }
        printf("\n\n");
    }

    //pior nota ser a p1
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){

            if(j == 0){
                piorNota = nota[i][j];
                indicePiorNota = j;
            }else{
                if(nota[i][j] < piorNota){
                    piorNota = nota[i][j];
                    indicePiorNota = j;
                }
            }
        }

        if(indicePiorNota == 0) //p1
            p1++;
        else if(indicePiorNota == 1) //p2
            p2++;
        else if(indicePiorNota == 2) //p3
            p3++;

    }

    printf("%d alunos tiveram a p1 como pior nota\n");
    return 0;
}
