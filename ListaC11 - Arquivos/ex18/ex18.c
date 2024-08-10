#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    f= fopen("arq.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char nomeProduto[31];
    float preco;
    float total = 0;

    while(fscanf(f, "%s", &nomeProduto) != EOF){
        fscanf(f, "%f", &preco);
        total += preco;
    }

    fclose(f);

    printf("Preco total: %.2f\n", total);
    return 0;
}
