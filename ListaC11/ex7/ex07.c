#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void troca(char *str, FILE *f){
    int size = strlen(str);
    int i, j;
    char vogal[] = {"aeiou"};
    int sizeVogal = strlen(vogal);
    int controller = 0;

    for(i=0;i<size;i++){
        for(j=0;j<sizeVogal;j++){
            if(tolower(str[i]) == vogal[j]){
                controller = 1;
                break;
            }else{
                controller = 0;
            }
        }

        if(controller)
            fputc('*', f);
        else
            fputc(str[i], f);
    }
}

int main(){

    FILE *arquivoOrigem, *arquivoDestino;

    arquivoOrigem = fopen("arq.txt", "r");
    arquivoDestino = fopen("destino.txt", "w");

    if(arquivoOrigem == NULL || arquivoDestino == NULL){
        printf("ERRO ao abrir arquivo(s)\n");
        exit(1);
    }

    char str[1001];

    while(fgets(str, 1001, arquivoOrigem) != NULL){
        troca(str, arquivoDestino);
    }

    fclose(arquivoOrigem);
    fclose(arquivoDestino);
    return 0;
}
