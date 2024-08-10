#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
ERRADO
int numero_caracteres(char *str){
    int size = strlen(str);
    int i, qnt = 0;
    for(i=0;i<size;i++){
        if(str[i] != ' ' && str[i] != '\n'){
            qnt++;
        }
    }
    return qnt;
}

int numero_linhas(FILE *file){
    char str[1001];
    int qnt=0;
    while(fgets(str, 1001, file) != NULL)
        qnt++;
    return qnt;
}

int numero_palavras(FILE *file){
    char str[1001];
    int qnt=0;
    while(fscanf(file, "%s", str) != EOF)
        qnt++;
    return qnt;
}

int main(){
    FILE *f;
    int qnt_caractere = 0;

    f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    char str[1001];
    while(fgets(str, 1001, f) != NULL)
        qnt_caractere += numero_caracteres(str);

    printf("Qnt de caractere: %d\n", qnt_caractere);

    printf("Qnt de palavras: %d\n", numero_palavras(f));

    printf("Qnt de linhas: %d\n", numero_linhas(f));

    fclose(f);
    return 0;
}
