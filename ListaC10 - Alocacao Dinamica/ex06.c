#include <stdio.h>
#include <stdlib.h>

int main(){
    int bytes;
    int opcao = -1, posicao = -1;
    int value = -1;

    printf("Quantos bytes serao alocados na memoria\n(cada inteiro ocupa 4 bytes): ");
    scanf("%d", &bytes);

    if(bytes%4 != 0){
        printf("Multiplos de 4!\n");
        exit(1);
    }

    int *arr;
    arr = (int*) calloc (bytes/4, sizeof(int));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    while(1) {
        printf("0 - Sair\n");
        printf("1 - Inserir um valor em uma determinada posicao\n");
        printf("2 - consultar o valor contido em determinada posicao\n");
        scanf("%d", &opcao);

        if(opcao < 0 || opcao > 2){
            printf("Opcao invalida!\n\n");
            continue;
        }

        if(opcao == 0)
            break;

        while(posicao < 0 || posicao > (bytes/4)-1){
            printf("Posicao: ");
            scanf("%d", &posicao);

            if(posicao < 0 || posicao > (bytes/4)-1)
                printf("Posicao invalida!\n\n");

        }

        if(opcao == 1){
            printf("Valor a ser adicionado: ");
            scanf("%d", &value);

            arr[posicao] = value;
        }else if(opcao == 2){
            printf("Valor na posicao [%d]: %d\n", posicao, arr[posicao]);
        }

        posicao = -1;
    }

    free(arr);
    return 0;
}
