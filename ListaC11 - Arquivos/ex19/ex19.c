#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f = fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char nome[31];
    char nomeMaiorNota[31];
    char text[31];
    float nota, maiorNota = -1;

    while(fscanf(f, "%s %s %s %f", &text, &nome, &text, &nota) != EOF){
        if(nota > maiorNota){
            maiorNota = nota;
            strcpy(nomeMaiorNota, nome);
        }
    }

    fclose(f);

    printf("%s possui a maior nota com %.2f pontos.\n", nomeMaiorNota, maiorNota);

    return 0;
}
