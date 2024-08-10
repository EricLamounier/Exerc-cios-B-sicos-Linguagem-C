#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sAlunos{
    int matricula;
    char nome[30];
    int codigo_disc;
    float nota1;
    float nota2;
}Aluno;

#define TAM 2

int main(){

    Aluno al[TAM];
    int i;

    //leitura
    for(i=0;i<TAM;i++){
        printf("Aluno [%d]:\n", i+1);

        printf("\tMatricula: ");
        scanf("%d", &al[i].matricula);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(al[i].nome, 30, stdin);

        if(al[i].nome[strlen(al[i].nome)-1] == '\n')
            al[i].nome[strlen(al[i].nome)-1] = '\0';

        printf("\tCodigo da disciplina: ");
        scanf("%d", &al[i].codigo_disc);

        printf("\tNota 1: ");
        scanf("%f", &al[i].nota1);

        printf("\tNota 2: ");
        scanf("%f", &al[i].nota2);

        printf("\n");
    }

    //listagem
    for(i=0;i<TAM;i++){
        printf("Aluno [%d]:\n", i+1);

        printf("\tMatricula: %d\n", al[i].matricula);

        printf("\tNome: %s\n", al[i].nome);

        printf("\tCodigo da disciplina: %d\n", al[i].codigo_disc);

        printf("\tNota 1: %.2f\n", al[i].nota1);

        printf("\tNota 2: %.2f\n", al[i].nota2);

        printf("\tMedia final: %.2f\n", (al[i].nota1*1 + al[i].nota2*2)/3.0);

        printf("\n");
    }

    return 0;
}
