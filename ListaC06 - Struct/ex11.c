#include <stdio.h>
#include <stdlib.h>

typedef struct sAluno {
    char nome[31];
    int matricula;
    float mediaFinal;
}Aluno;

#define MAX_ALUNOS 10

int main() {

    Aluno al[MAX_ALUNOS];
    Aluno *aprovados;
    Aluno *reprovados;
    int i, cont_aprovados = 0, cont_reprovados=0;

    //recebe os dados dos alunos
    for(i=0;i<MAX_ALUNOS;i++){
        printf("Aluno [%d]:\n", i+1);

        setbuf(stdin, NULL);
        printf("Nome: ");
        fgets(al[i].nome, 31, stdin);

        printf("Matricula: ");
        scanf("%d", &al[i].matricula);

        printf("Media final: ");
        scanf("%f", &al[i].mediaFinal);
    }

    aprovados = (Aluno*) calloc (1, sizeof(Aluno));
    reprovados = (Aluno*) calloc (1, sizeof(Aluno));

    if(aprovados == NULL || reprovados == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }


    //verifica se o aluno esta aprovado ou reprovado e coloca em seu respectivo vetor
    for(i=0;i<MAX_ALUNOS;i++){
        if(al[i].mediaFinal >= 5){
            aprovados = (Aluno*) realloc (aprovados, (cont_aprovados+1) * sizeof(Aluno));
            aprovados[cont_aprovados] = al[i];
            cont_aprovados++;
        }else{
            reprovados = (Aluno*) realloc (reprovados, (cont_reprovados+1) * sizeof(Aluno));
            reprovados[cont_reprovados] = al[i];
            cont_reprovados++;
        }
    }

    //aprovados
    printf("APROVADOS:\n");
    for(i=0;i<cont_aprovados;i++){
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media final: %.2f\n\n", aprovados[i].mediaFinal);
    }

    printf("REPROVADOS:\n");
    //reprovados
    for(i=0;i<cont_reprovados;i++){
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media final: %.2f\n\n", reprovados[i].mediaFinal);
    }

    free(aprovados);
    free(reprovados);

    return 0;
}
