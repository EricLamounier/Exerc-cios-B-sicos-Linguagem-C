#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sProduto {
    int id;
    char nome[51];
    int qnt;
    float preco;
}Produto;

int main(){
    int n;
    Produto *product;

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &n);

    product = (Produto*) calloc (n, sizeof(Produto));
    if(product == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i;
    for(i=0;i<n;i++){
        printf("Produto[%d]:\n", i);

        printf("\tId: ");
        scanf("%d", &product[i].id);

        printf("\tNome: ");
        setbuf(stdin, NULL);
        fgets(product[i].nome, 51, stdin);

        if(product[i].nome[strlen(product[i].nome)-1] == '\n')
            product[i].nome[strlen(product[i].nome)-1] = '\0';

        printf("\tQuantidade em estoque: ");
        scanf("%d", &product[i].qnt);

        printf("\tPreco de venda: ");
        scanf("%f", &product[i].preco);

    }

    int index_maior_qnt = 0;

    for(i=1;i<n;i++){
        if(product[i].qnt > product[index_maior_qnt].qnt)
            index_maior_qnt = i;
    }

    printf("\nProduto com maior quantidade em estoque:\n");
    printf("Codigo id: %d\n", product[index_maior_qnt].id);
    printf("Nome: %s\n", product[index_maior_qnt].nome);
    printf("Quantidade em estoque: %d\n", product[index_maior_qnt].qnt);
    printf("Preco de venda: %.2f\n", product[index_maior_qnt].preco);

    free(product);
    return 0;
}
