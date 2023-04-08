#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(float m[][3], int lin, int col){
    int l, c;
    for(l=0;l<lin;l++)
        for(c=0;c<col;c++)
            printf("Endereco da posicao [%d][%d]: %d\n", l, c, &m[l][c]);
}

#define TAM 3

int main(){
    float m[TAM][TAM];
    int lin = TAM, col = TAM;
    imprime_vetor(m, lin, col);
    return 0;
}
