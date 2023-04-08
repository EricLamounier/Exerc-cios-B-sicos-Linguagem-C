#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte_string(char *str){
    int size = strlen(str); //tamanho da string
    int i;
    char aux;

    if(str[strlen(str)-1] == '\n')
        str[size-1] = ' ';

    for(i=0;i<(size/2);i++){
        aux = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = aux;
    }
}

int main(){

    FILE *entrada, *saida;
    entrada = fopen("arq.txt", "r");
    saida = fopen("saida.txt", "w");

    if(entrada == NULL || saida == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char str[31];

    while(fgets(str, 31, entrada) != NULL){
        inverte_string(str);

        rewind(saida);

        //insere no arquivo
        fprintf(saida, "%s\n", str);
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}
