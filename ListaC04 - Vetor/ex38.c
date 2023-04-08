#include <stdio.h>

int main(){

    int vet[10];
    int i,j;
    int ordenado[10];
    int tam = 0;
    int aux;

    //le os valores
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &vet[i]);

        tam++;

        for(j=0;j<tam;j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(i=0;i<10;i++)
        printf("%d ", vet[i]);
}
