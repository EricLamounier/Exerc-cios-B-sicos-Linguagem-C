#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sHorario{
    int hora;
    int minuto;
    int segundo;
}Horario;

typedef struct sData{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct sCompromisso{
    char descricao[100];
    Horario hora;
    Data data;
}Compromisso;

int main(){

    Compromisso c1;

    printf("Descricao do compromisso: ");
    fgets(c1.descricao, 100, stdin);

    if(c1.descricao[strlen(c1.descricao)-1] == '\n')
        c1.descricao[strlen(c1.descricao)-1] = '\0';

    printf("Horario do compromisso:\n");
    printf("\tHora: ");
    scanf("%d", &c1.hora.hora);

    printf("\tMinuto: ");
    scanf("%d", &c1.hora.minuto);

    printf("\tSegundo: ");
    scanf("%d", &c1.hora.segundo);

    printf("Data do compromisso:\n");
    printf("\tDia: ");
    scanf("%d", &c1.data.dia);

    printf("\tMes: ");
    scanf("%d", &c1.data.mes);

    printf("\tAno: ");
    scanf("%d", &c1.data.ano);

    printf("\nSeu compromisso de descricao: %s tera inicio dia %d/%d/%d as %d:%d:%d\n", c1.descricao, c1.data.dia, c1.data.mes, c1.data.ano, c1.hora.hora, c1.hora.minuto, c1.hora.segundo);


    return 0;
}
