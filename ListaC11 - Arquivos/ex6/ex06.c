#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int quantidade_cada_letra(char *str, char c){
    int i;
    int size = strlen(str);
    int qnt = 0;
    c = tolower(c);

    for(i=0;i<size;i++)
        if(tolower(str[i]) == c)
            qnt++;
    return qnt;
}

int main(){
    FILE *f;
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    int size = strlen(alfabeto);
    int i;
    int qnt = 0;

    f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char str[1001];

    for(i=0;i<size;i++){
        printf("Letra '%c': ", alfabeto[i]);

        qnt = 0;
        while(fgets(str, 1001, f) != NULL)
            qnt += quantidade_cada_letra(str, alfabeto[i]);

        printf("%d vezes\n", qnt);

        rewind(f); //volta o indicador para o inicio do arquivo
    }


    return 0;
}
