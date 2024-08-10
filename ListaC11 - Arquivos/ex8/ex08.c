#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void funcao(char *str, FILE *f){
    int size = strlen(str);
    int i;
    for(i=0;i<size;i++)
        fputc(toupper(str[i]), f);
}

int main(){
    FILE *origem;
    FILE *destino;

    char nome_origem[31];
    char nome_destino[31];

    printf("Nome do arquivo de origem: ");
    setbuf(stdin, NULL);
    scanf("%s", &nome_origem);

    printf("Nome do arquivo de destino: ");
    setbuf(stdin, NULL);
    scanf("%s", &nome_destino);

    origem = fopen(strcat(nome_origem, ".txt"), "r");
    destino = fopen(strcat(nome_destino, ".txt"), "w");

    if(origem == NULL || destino == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char str[1001];

    while(fgets(str, 1001, origem) != NULL)
        funcao(str, destino);

    fclose(origem);
    fclose(destino);
    return 0;
}
