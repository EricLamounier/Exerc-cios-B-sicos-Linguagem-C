#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int vogais(char *str){
    int i, j, qnt = 0;
    char vogais[] = {"aeiou"};
    int sizeVogais = strlen(vogais);
    int sizeStr = strlen(str);

    for(i=0;i<sizeStr;i++){
        for(j=0;j<sizeVogais;j++){
            if(tolower(str[i]) == vogais[j])
                qnt++;
        }
    }

    return qnt;
}
int main(){
    FILE *f;
    int cont = 0;
    int tentativas=0;
    int dot = 0;

    abre_arquivo: f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("ERRO ao abrir o arquivo!\n");
        printf("tentando novamente");

        dot=0;
        while(dot<3){
            printf(". ");
            Sleep(1000);
            dot++;
        }

        printf("\n\n");
        tentativas++;

        if(tentativas == 3){
            printf("ERRO - TimeOut\n");
            exit(1);
        }

        goto abre_arquivo;
    }

    int qnt_vogais = 0;
    char str[1000];
    while(fgets(str, 1000, f) != NULL){
        qnt_vogais += vogais(str);
    }

    printf("%d vogais\n", qnt_vogais);

    fclose(f);

    return 0;
}
