#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *f;
    f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int linha, coluna, i, j;
    fscanf(f, "%d %d %d", &linha, &coluna, &qnt);

    FILE *saida = fopen("saida.txt", "w");
    if(saida == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){

        }
    }

    return 0;
}
