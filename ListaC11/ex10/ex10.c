#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    char entrada[31];
    char saida[31];

    printf("Nome do arquivo de entrada: ");
    setbuf(stdin, NULL);
    scanf("%s", entrada);

    printf("Nome do arquivo de saida: ");
    setbuf(stdin, NULL);
    scanf("%s", saida);

    FILE *in;
    FILE *out;

    in = fopen(strcat(entrada, ".txt"), "r");
    if(in == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char cidade_mais_populosa[41];
    int mais_habitantes = -1;

    char cidade[41];
    int habitantes = -1;

    while(fscanf(in, "%s %d", &cidade, &habitantes) != EOF){
        printf("Cidade: %s Habitantes: %d\n", cidade, habitantes);

        if(habitantes > mais_habitantes){
            mais_habitantes = habitantes;
            strcpy(cidade_mais_populosa, cidade);
        }
    }

    out = fopen(strcat(saida, ".txt"), "w");
    if(out == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fprintf(out, "Cidade mais populosa: %s\nHabitantes: %d\n", cidade_mais_populosa, mais_habitantes);

    fclose(out);
    fclose(in);
    //fclose(out);
    return 0;
}
