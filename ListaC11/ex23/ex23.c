#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preenche(char *str){
    int size = strlen(str);
    int i;

    for(i=size;i<40;i++)
        str[i] = ' ';

    //coloca \0 no final da string
    str[40] = '\0';
}
int main(){

    char nome[41];
    int tempoServico;
    int i;

    FILE *f;
    f = fopen("emp.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    for(i=0;i<5;i++){
        printf("Funcionario[%d]:\n", i);

        printf("Nome: ");
        setbuf(stdin, NULL);
        fgets(nome, 41, stdin);

        //remove o \n
        if(nome[strlen(nome)-1] == '\n')
            nome[strlen(nome)-1] = '\0';

        //preenche string com espacos se nao tiver cheia
        preenche(nome);

        printf("Tempo de servico (anos): ");
        scanf("%d", &tempoServico);

        //guarda no arquivo
        fprintf(f, "%s %d\n", nome, tempoServico);
    }

    fclose(f);

    f = fopen("emp.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    while(fscanf(f, "%s %d", &nome, &tempoServico) != EOF)
        printf("Nome: %s\nTempo de servico: %d\n\n", nome, tempoServico);

    fclose(f);
    return 0;
}
