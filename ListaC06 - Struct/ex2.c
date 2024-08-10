#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sPessoa{
    char nome[50];
    int idade;
    char endereco[50];
}Pessoa;

int main(){

    Pessoa p1;

    printf("Nome: ");
    fgets(p1.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &p1.idade);

    printf("Endereco: ");
    setbuf(stdin, NULL);
    fgets(p1.endereco, 50, stdin);
    return 0;
}
