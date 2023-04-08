#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct sData{
    int dia, mes, ano;
}Data;

typedef struct sFuncionario{
    char nome[30];
    int idade;
    char sexo;
    char cpf[12];
    Data nascimento;
    int cod_setor;
    char cargo[10];
    float salario;
}Funcionario;

int main(){

    Funcionario func;

    //leitura
    printf("Nome: ");
    setbuf(stdin, NULL);
    fgets(func.nome, 30, stdin);

    if(func.nome[strlen(func.nome)-1] == '\n')
        func.nome[strlen(func.nome)-1] = '\0';

    printf("Idade: ");
    scanf("%d", &func.idade);

    printf("Sexo (M/F): ");
    setbuf(stdin, NULL);
    scanf("%c", &func.sexo);

    func.sexo = toupper(func.sexo);

    printf("CPF: ");
    setbuf(stdin, NULL);
    scanf("%s", func.cpf);

    if(func.cpf[strlen(func.cpf)-1] == '\n')
        func.cpf[strlen(func.cpf)-1] = '\0';

    printf("Data de nascimento:\n");
    printf("\tDia: ");
    scanf("%d", &func.nascimento.dia);

    printf("\tMes: ");
    scanf("%d", &func.nascimento.mes);

    printf("\tAno: ");
    scanf("%d", &func.nascimento.ano);

    printf("Codigo do setor (0-99): ");
    scanf("%d", &func.cod_setor);

    printf("Cargo: ");
    setbuf(stdin, NULL);
    fgets(func.cargo, 10, stdin);

    printf("Salario: ");
    scanf("%f", &func.salario);

    printf("\n\n");

    //listagem
    printf("Nome: %s\n", func.nome);

    printf("Idade: %d\n", func.idade);

    printf("Sexo (M/F): %c\n", func.sexo);

    printf("CPF: %s\n", func.cpf);

    printf("Data de nascimento: %d/%d/%d\n", func.nascimento.dia, func.nascimento.mes, func.nascimento.ano);

    printf("Codigo do setor (0-99): %d\n", func.cod_setor);

    printf("Cargo: %s\n", func.cargo);

    printf("Salario: %.2f\n", func.salario);

    return 0;
}
