#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sAluno {
    char nome[41]; //indice 40 eh o \0
    float notaFinal;
}Aluno;

int main(){
    int num;
    Aluno *al;

    printf("Numero de alunos: ");
    //scanf("%d", &num);

    num = 2;

    al = (Aluno*) calloc (num, sizeof(Aluno));
    if(al == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
    }

    int i;
    for(i=0;i<num;i++){
        printf("Aluno[%d]:\n", i);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(al[i].nome, 41, stdin);

        //remove \n da string
        if(al[i].nome[strlen(al[i].nome)-1] == '\n')
            al[i].nome[strlen(al[i].nome)-1] = '\0';

        printf("\tNota final: ");
        scanf("%f", &al[i].notaFinal);

        printf("\n");
    }

    FILE *f;

    f = fopen("arq.txt", "wb");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    //escreve no arquivo
    for(i=0;i<num;i++){
        fwrite(&al[i], sizeof(Aluno), 1, f);
    }

    fclose(f);

    f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char nome[41];
    float nota;

    Aluno *saida;
    saida = (Aluno*) calloc (num, sizeof(Aluno));
    if(saida == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
    }

    //guarda o que esta no arquivo em vetor de estrutura
    for(i=0;i<num;i++)
        fread(&saida[i], sizeof(Aluno), 1, f);


    for(i=0;i<num;i++){
        printf("Aluno[%d]:\n", i);
        printf("Nome: %s\nNota: %.2f\n\n", saida[i].nome, saida[i].notaFinal);
    }

    fclose(f);

    return 0;
}
