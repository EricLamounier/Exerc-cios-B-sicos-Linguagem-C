#include <stdio.h>

int main(){

    int vet[10];
    int i, j;
    int ehPrimo = 0;
    int cont = 0;

    //le os valores
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    //verifica qual e' primo
    for(i=0;i<10;i++){

        ehPrimo = 0;

        for(j=1;j<=vet[i];j++){
            if(vet[i]%j == 0)
                ehPrimo++;

            if(ehPrimo > 2)
                break;
        }

        if(ehPrimo == 2)
            printf("[%d] %d\n", i, vet[i]);
    }
    return 0;
}
