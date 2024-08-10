#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    int tentativas=0;

    abre_arquivo: f = fopen("arq.txt", "w");
    if(f == NULL){
        printf("ERRO - Arquivo nao aberto!\n");
        printf("tentando novamente...\n\n");

        tentativas++;

        if(tentativas==3){
            printf("ERRO - TimeOut\n");
            exit(1);
        }

        goto abre_arquivo;
    }

    char c;
    do {
        printf("Caractere: ");
        setbuf(stdin, NULL);
        scanf("%c", &c);

        if(c != '0'){
            fputc(c, f);
        }
    }while(c != '0');

    fclose(f);

    f = fopen("arq.txt", "r");

    c = fgetc(f);
    while(c != EOF){
            printf("%c", c);
            c = fgetc(f);
    }

    fclose(f);
    return 0;
}
