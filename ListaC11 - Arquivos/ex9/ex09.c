#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    FILE *arq1;
    FILE *arq2;
    FILE *arq3;

    arq1 = fopen("arq1.txt", "r");
    arq2 = fopen("arq2.txt", "r");
    if(arq1 == NULL || arq2 == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    arq3 = fopen("arq3.txt", "a");
    if(arq3 == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char conteudo[1001];
    fread(&conteudo, sizeof(char), 1001, arq1);
    fwrite(&conteudo, sizeof(char), strlen(conteudo), arq3);

    fread(&conteudo, sizeof(char), 1001, arq2);
    fwrite(&conteudo, sizeof(char), strlen(conteudo), arq3);


    //printf("%s\n", conteudo);

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    return 0;
}
