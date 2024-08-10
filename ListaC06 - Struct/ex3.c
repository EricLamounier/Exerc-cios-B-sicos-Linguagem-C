#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sAluno{
    char nome[30];
    int matricula;
    char curso[50];
}Aluno;

#define TAM 5

int main(){

    Aluno a[TAM];
    int i;

    //le os alunos
    for(i=0;i<TAM;i++){
        printf("Aluno[%d]:\n", i);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(a[i].nome, 50, stdin);

        if(a[i].nome[strlen(a[i].nome)-1] == '\n')
            a[i].nome[strlen(a[i].nome)-1] = '\0';

        printf("\tMatricula: ");
        scanf("%d", &a[i].matricula);

        printf("\tCurso: ");
        setbuf(stdin, NULL);
        fgets(a[i].curso, 50, stdin);

        if(a[i].curso[strlen(a[i].curso)-1] == '\n')
            a[i].curso[strlen(a[i].curso)-1] = '\0';

        printf("\n\n");
    }

    for(i=0;i<TAM;i++){
        printf("Aluno[%d]:\n", i);

        printf("\tNome: %s\n", a[i].nome);

        printf("\tMatricula: %d\n", a[i].matricula);

        printf("\tCurso: %s\n", a[i].curso);

        printf("\n");
    }

    return 0;
}
