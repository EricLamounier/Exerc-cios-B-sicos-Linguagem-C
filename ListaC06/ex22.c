#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct sEndereco {
    char rua[31];
    char estado[3];
    char bairro[31];
    char cep[9];
    char cidade[31];
}Endereco;

typedef struct sCadastro {
    char nome[31];
    char identidade[12];
    char telefone[13];
    Endereco endereco;
    char cpf[12];
    int idade;
    float salario;
    char estado_civil[10];
    char sexo;
}Cadastro;

#define QNT_MAX 3

int main() {

    Cadastro cad[QNT_MAX];
    int i;

    for(i=0;i<QNT_MAX;i++){
        printf("Cadastro[%d]:\n", i+1);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(cad[i].nome, 31, stdin);

        printf("\tIdentidade: ");
        setbuf(stdin, NULL);
        fgets(cad[i].identidade, 12, stdin);

        /*printf("\tTelefone: ");
        setbuf(stdin, NULL);
        fgets(cad[i].telefone, 12, stdin);

        printf("\tEndereco:\n");
        printf("\t\tRua: ");
        setbuf(stdin, NULL);
        fgets(cad[i].endereco.rua, 31, stdin);

        printf("\t\tBairro: ");
        setbuf(stdin, NULL);
        fgets(cad[i].endereco.bairro, 31, stdin);

        printf("\t\tCidade: ");
        setbuf(stdin, NULL);
        fgets(cad[i].endereco.cidade, 31, stdin);

        printf("\t\tEstado: ");
        setbuf(stdin, NULL);
        fgets(cad[i].endereco.estado, 3, stdin);

        printf("\t\tCEP: ");
        setbuf(stdin, NULL);
        fgets(cad[i].endereco.cep, 9, stdin);

        printf("\CPF: ");
        setbuf(stdin, NULL);
        fgets(cad[i].cpf, 12, stdin);*/

        printf("\tIdade: ");
        scanf("%d", &cad[i].idade);

        printf("\tSalario: ");
        scanf("%f", &cad[i].salario);
        /*
        printf("\Estado civil: ");
        setbuf(stdin, NULL);
        fgets(cad[i].estado_civil, 10, stdin);
        */
        printf("\tSexo (M/F): ");
        setbuf(stdin, NULL);
        scanf("%c", &cad[i].sexo);
    }

    //pessoa com maior idade
    int indice_maior_idade = 0;

    for(i=1;i<QNT_MAX;i++){
        if(cad[i].idade > cad[indice_maior_idade].idade)
            indice_maior_idade = i;
    }

    printf("Maior idade:\n");
    printf("Nome: %s\n", cad[indice_maior_idade].nome);

    puts("");

    //pessoas do sexo masculino
    printf("Pessoas masculinas:\n");
    for(i=0;i<QNT_MAX;i++){
        if(toupper(cad[i].sexo) == 'M')
            printf("Nome: %s\n", cad[i].nome);
    }

    puts("");

    //pessoas com salario maior que 1000
    for(i=0;i<QNT_MAX;i++){
        if(cad[i].salario > 1000)
            printf("Nome: %s\n", cad[i].nome);
    }

    puts("");

    char identidade[12];
    printf("Identidade a ser buscada: ");
    setbuf(stdin, NULL);
    fgets(identidade, 12, stdin);

    //buscar identidade digitada
    for(i=0;i<QNT_MAX;i++){
        if(strcmp(identidade, cad[i].identidade)==0){
            printf("Identidade encontrada:\n");
            printf("\tNome: %s\n", cad[i].nome);
            break;
        }
    }

    if(i==QNT_MAX)
        printf("Identidade nao encontrada.\n");

    return 0;
}
