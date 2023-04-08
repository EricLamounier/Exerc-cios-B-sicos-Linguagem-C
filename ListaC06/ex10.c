#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sPessoa {
    char nome[51];
    char endereco[51];
    char telefone[12];
}Pessoa;

#define TAM 2

int main(){

    Pessoa pes[TAM];
    int i;

    for(i=0;i<TAM;i++){
        printf("Pessoa[%d]:\n", i+1);

        printf("\tNome: ");
        fgets(pes[i].nome, 51, stdin);
        setbuf(stdin, NULL);

        if(pes[i].nome[strlen(pes[i].nome)-1] == '\n')
            pes[i].nome[strlen(pes[i].nome)-1] = '\0';

        printf("\tEndereco: ");
        fgets(pes[i].endereco, 51, stdin);
        setbuf(stdin, NULL);

        if(pes[i].endereco[strlen(pes[i].endereco)-1] == '\n')
            pes[i].endereco[strlen(pes[i].endereco)-1] = '\0';

        printf("\tTelefone: ");
        fgets(pes[i].telefone, 51, stdin);
        setbuf(stdin, NULL);

        if(pes[i].telefone[strlen(pes[i].telefone)-1] == '\n')
            pes[i].telefone[strlen(pes[i].telefone)-1] = '\0';

        printf("\n\n");
    }

    for(i=0;i<TAM;i++){
        printf("Pessoa[%d]:\n", i+1);

        printf("\tNome: %s\n", pes[i].nome);
        printf("\tEndereco: %s\n", pes[i].endereco);
        printf("\tTelefone: %s\n\n", pes[i].telefone);
    }
    return 0;
}
