#include <stdio.h>

int main(){

    float salario, prestracao;

    printf("Salario: ");
    scanf("%f", &salario);

    printf("Valor da prestracao: ");
    scanf("%f", prestracao);

    if(prestracao > 0.2*salario){
        printf("Emprestimo nao concedido\n");

    }else{
        printf("Emprestimo concedido\n");
    }

    return 0;
}
