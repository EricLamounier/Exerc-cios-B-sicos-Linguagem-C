#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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

    char aux[1000];

    while(fgets(aux, 1000, f) != NULL){
        cont++;
        printf("%s\n", aux);
    }

    printf("%d linhas\n", cont);

    fclose(f);

    return 0;
}
