#include <stdio.h>

int main(){

    int vet[6];
    int i;

    //le os valores
    for(i=0;i<6;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    //mostra inversamente
    for(i=5;i>=0;i--){
        printf("%d\n", vet[i]);
    }
}
