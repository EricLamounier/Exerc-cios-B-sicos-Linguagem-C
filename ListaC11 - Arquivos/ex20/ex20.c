#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numero_alunos;

    printf("Numero de alunos: \n");
    scanf("%d", &numero_alunos);

    char **nome_alunos;
    float *nota_alunos;

    nome_alunos = (char**) calloc (numero_alunos, sizeof(char*)); //linhas (x alunos);

    nota_alunos = (float*) calloc (numero_alunos, sizeof(float));

    if(nome_alunos == NULL || nota_alunos == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i;
    int tam = 41;

    //cada nome vai ter no maximo 40 caracteres + \0
    for(i=0;i<numero_alunos;i++){
        nome_alunos[i] = (char*) calloc (tam, sizeof(char));
        if(nome_alunos[i] == NULL){
            printf("ERRO - Memoria nao alocada!\n");
            exit(1);
        }
    }

    //recebe os alunos e guarda em um arquivo

    FILE *f;
    f = fopen("arq.txt", "a");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int j=0;
    for(i=0;i<numero_alunos;i++){
        printf("Aluno[%d]:\n", i);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(nome_alunos[i], 41, stdin);

        //remove \n da string
        if(nome_alunos[i][strlen(nome_alunos[i])-1] == '\n')
            nome_alunos[i][strlen(nome_alunos[i])-1] = '\0' ;

        //preenche com espacos vazios
        if(strlen(nome_alunos[i]) != 40){ //se nao estiver cheio
            for(j=strlen(nome_alunos[i]);j<40;j++)
                nome_alunos[i][j] = ' ';

            //acrescenta o \0 ao final da string
            nome_alunos[i][40] = '\0';
        }

        printf("\tNota final: ");
        scanf("%f", &nota_alunos[i]);

        fprintf(f, "%s %f\n", nome_alunos[i], nota_alunos[i]);
    }

    //desaloca a memoria
    for(i=0;i<numero_alunos;i++)
        free(nome_alunos[i]);

    free(nome_alunos);
    free(nota_alunos);
    fclose(f);

    return 0;

    //12345 strlen = 5 char precisa ser 6 pois o 5 é o \0
}
