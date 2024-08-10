#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int funcao(char *str, char c){
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
    FILE *f = fopen("arq.txt", "r");
    int qnt =0;
    char c;

    if(f == NULL){
        printf("ERRO ao abrir arquivo\n");
        exit(1);
    }

    printf("Caractere a ser buscado: ");
    scanf("%c", &c);

    char str[1001];

    while(fgets(str, 1001, f) != NULL)
        qnt += funcao(str, c);

    printf("'%c' aparece %d vezes no arquivo\n", c, qnt);
    fclose(f);
    return 0;
}
