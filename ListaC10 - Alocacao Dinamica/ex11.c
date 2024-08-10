#include <stdio.h>
#include <stdlib.h>

typedef struct sAluno {
    int matricula;
    char sobrenome[31];
    int anoNasc;
}Aluno;

int main(){
    int qnt;
    Aluno *al;

    printf("Quantidade de alunos a serem armazenados: ");
    scanf("%d", &qnt);

    al = (Aluno*) calloc (qnt, sizeof(Aluno));
    if(al == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i;
    for(i=0;i<qnt;i++){
        printf("Aluno[%d]:\n", i);

        printf("\tMatricula: ");
        scanf("%d", &al[i].matricula);

        printf("\tSobrenome: ");
        setbuf(stdin, NULL);
        scanf("%s", al[i].sobrenome);

        printf("\tAno de nascimento: ");
        scanf("%d", &al[i].anoNasc);

        puts("");
    }

    for(i=0;i<qnt;i++){
        printf("Aluno[%d]:\n", i);

        printf("Matricula: %d\n", al[i].matricula);
        printf("Sobrenome: %s\n", al[i].sobrenome);
        printf("Ano de nascimento: %d\n\n", al[i].anoNasc);
    }

    free(al);
    return 0;
}
