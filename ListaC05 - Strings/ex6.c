#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char  nome[30];
    char sexo;
    int idade;

    printf("Nome: ");
    fgets(nome, 20, stdin);

    setbuf(stdin, NULL);

    printf("Sexo (M ou F): ");
    scanf("%c", &sexo);

    printf("Idade: ");
    scanf("%d", &idade);

    if((sexo == 'f' || sexo == 'F') && idade < 25){
        printf("%s\n", nome);
        printf("ACEITA\n");
    }else{
        printf("NAO ACEITA\n");
    }

    return 0;
}

