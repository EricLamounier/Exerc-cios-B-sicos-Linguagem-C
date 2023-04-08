#include <stdio.h>

int main(){

    int vet[10];
    int i;

    //le os valores
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(i=0;i<10;i++){
        if(vet[i] < 0)
            vet[i] = 0;
    }

    for(i=0;i<10;i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
