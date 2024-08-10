#include <stdio.h>

int main(){

    int idade, anoAtual, anoNasc;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNasc = anoAtual - idade;

    printf("Ano de nascimento: %d\n", anoNasc);

    return 0;
}
