#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char entrada[31];
    char saida[31];

    printf("Nome do arquivo de entrada: ");
    setbuf(stdin, NULL);
    //scanf("%s", entrada);

    printf("Nome do arquivo de saida: ");
    setbuf(stdin, NULL);
    //scanf("%s", saida);

    strcpy(entrada, "arq");
    strcpy(saida, "saida");

    FILE *in, *out;

    in = fopen(strcat(entrada, ".txt"), "r");
    out = fopen(strcat(saida, ".txt"), "w");

    if(in == NULL || out == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fseek(in, 41, 1);
    char str[31];
    puts("");
    while(fgets(str, 31, in) != NULL){
        printf("%s\n", str);
        fseek(in, 41, 1);
    }

    fclose(in);
    fclose(out);
    return 0;
}
