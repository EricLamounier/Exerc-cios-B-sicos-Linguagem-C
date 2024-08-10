#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sAluno{
    int matricula;
    char nome[30];
    float p1;
    float p2;
    float p3;
}Aluno;

#define TAM 5

int main(){

    Aluno al[TAM];
    int i;
    int indiceMaiorP1;
    int indiceMaiorMediaGeral;
    int indiceMenorMediaGeral;
    float maiorNotaP1;
    float maiorMediaGeral;
    float menorMediaGeral;

    //le os dados
    for(i=0;i<TAM;i++){
        printf("Aluno[%d]:\n", i+1);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(al[i].nome, 30, stdin);

        if(al[i].nome[strlen(al[i].nome)-1] == '\n')
            al[i].nome[strlen(al[i].nome)-1] = '\0';

        printf("\tMatricula: ");
        scanf("%d", &al[i].matricula);

        printf("\tNota da P1: ");
        scanf("%f", &al[i].p1);

        printf("\tNota da P2: ");
        scanf("%f", &al[i].p2);

        printf("\tNota da P3: ");
        scanf("%f", &al[i].p3);

        printf("\n\n");
    }

    //maior p1
    for(i=0;i<TAM;i++){
        if(i==0){
            maiorNotaP1 = al[i].p1;
            indiceMaiorP1 = i;
        }else{

            if(al[i].p1 > maiorNotaP1){
                maiorNotaP1 = al[i].p1;
                indiceMaiorP1 = i;
            }
        }
    }

    printf("\n%s possui a maior nota na P1\n\n", al[indiceMaiorP1].nome);

    //maior media geral
    for(i=0;i<TAM;i++){
        if(i==0){
            indiceMaiorMediaGeral = i;
            maiorMediaGeral = (al[i].p1 + al[i].p2 + al[i].p3)/3;
        }else{
            if((al[i].p1 + al[i].p2 + al[i].p3)/3 > maiorMediaGeral){
                indiceMaiorMediaGeral = i;
                maiorMediaGeral = (al[i].p1 + al[i].p2 + al[i].p3)/3;
            }
        }
    }

    printf("\n%s possui a maior media geral\n\n", al[indiceMaiorMediaGeral].nome);

    //menor media geral
    for(i=0;i<TAM;i++){
        if(i==0){
            indiceMenorMediaGeral = i;
            menorMediaGeral = (al[i].p1 + al[i].p2 + al[i].p3)/3;
        }else{
            if((al[i].p1 + al[i].p2 + al[i].p3)/3 < menorMediaGeral){
                indiceMenorMediaGeral = i;
                menorMediaGeral = (al[i].p1 + al[i].p2 + al[i].p3)/3;
            }
        }
    }

    printf("\n%s possui a menor media geral\n\n", al[indiceMenorMediaGeral].nome);

    //se foi aprovado ou reprovado
    for(i=0;i<TAM;i++){

        if((al[i].p1 + al[i].p2 + al[i].p3)/3 >= 6)
            printf("%s APROVADO!\n", al[i].nome);
        else
            printf("%s REPROVADO!\n", al[i].nome);
    }

    return 0;
}
