#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int anoAtual;
    char arq1[31];
    char arq2[31];

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    printf("Nome do arquivo 1: ");
    setbuf(stdin, NULL);
    scanf("%s", arq1);

    printf("Nome do arquivo 2: ");
    setbuf(stdin, NULL);
    scanf("%s", arq2);

    FILE *f1, *f2;
    f1 = fopen(strcat(arq1, ".txt"), "r");
    f2 = fopen(strcat(arq2, ".txt"), "a");

    char nome[31];
    int ano, idade = 0;

    while(fscanf(f1, "%s", &nome) != EOF){
        fscanf(f1, "%d", &ano);

        idade = anoAtual - ano;

        fprintf(f2, "%s ", nome);
        if(idade < 18)
            fprintf(f2, "menor de idade\n");
        else if(idade ==18)
            fprintf(f2, "entrando na maior idade\n");
        else
            fprintf(f2, "maior de idade\n");
    }

    fclose(f1);
    fclose(f2);
    return 0;
}
