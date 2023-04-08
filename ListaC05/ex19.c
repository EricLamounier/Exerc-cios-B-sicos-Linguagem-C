#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int idade[10];
    char primeiroNome[10][20];
    int qntLida = 0;
    int i;
    int idadeJovem, indiceJovem;
    int idadeVelha, indiceVelha;

    for(i=0;i<10;i++){

        printf("Pessoa [%d]:\n", i+1);

        printf("\tIdade: ");
        scanf("%d", &idade[i]);

        if(idade[i] < 0)
            break;

        setbuf(stdin, NULL);

        printf("\tPrimeiro nome: ");

        scanf("%s", &primeiroNome[i]);

        qntLida++;
    }

    for(i=0;i<qntLida;i++){
        if(i==0){
            idadeJovem = idade[i];
            indiceJovem = i;
            idadeVelha = idade[i];
            indiceVelha = i;
        }else{

            if(idade[i] < idadeJovem){
                idadeJovem = idade[i];
                indiceJovem = i;
            }

            if(idade[i] > idadeVelha){
                idadeVelha = idade[i];
                indiceVelha = i;
            }
        }
    }

    printf("\n\nPessoa mais jovem:\n");
    printf("\tNome: %s", primeiroNome[indiceJovem]);
    printf("\tIdade: %d\n\n", idade[indiceJovem]);

    printf("Pessoa mais velha:\n");
    printf("\tNome: %s", primeiroNome[indiceVelha]);
    printf("\tIdade: %d\n\n", idade[indiceVelha]);

    return 0;
}
