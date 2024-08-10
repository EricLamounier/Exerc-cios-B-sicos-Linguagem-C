#include <stdio.h>

int main(){

    int idade, tempoServico;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Tempo de servico: ");
    scanf("%d", &tempoServico);

    if(idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25) ){

        printf("Pode se aposentar\n");

    }else{
        printf("Nao pode se aposentar\n");
    }

    return 0;
}
