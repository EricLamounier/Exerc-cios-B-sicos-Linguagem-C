#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *f;
    char nomeArquivo[31];

    printf("Nome do arquivo: ");
    setbuf(stdin, NULL);
    scanf("%s", nomeArquivo);

    f = fopen(strcat(nomeArquivo, ".txt"), "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int diaAtual;
    int mesAtual;
    int anoAtual;

    printf("Dia atual: ");
    scanf("%d", &diaAtual);

    printf("Mes atual: ");
    scanf("%d", &mesAtual);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    FILE *dest;
    dest = fopen("dest.txt", "w");
    if(dest == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    char nome[51];
    int dia, mes, ano, idade = 0;

    while(fscanf(f, "%s", &nome) != EOF){
        fscanf(f, "%d", &dia);
        fscanf(f, "%d", &mes);
        fscanf(f, "%d", &ano);

        idade = anoAtual - ano;

        if(mes > mesAtual)
            idade -= 1;

        fprintf(dest, "%s %d\n", nome, idade);
    }

    fclose(f);
    fclose(dest);
    return 0;
}
