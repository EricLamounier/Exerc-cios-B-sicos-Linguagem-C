#include <stdio.h>

int main(){

    int vet[10];
    int num;
    int i=0, j;
    int controlador;

    while(i<10){

        do{
            printf("Numero na posicao %d: ", i);
            scanf("%d", &vet[i]);

            for(j=0;j<i;j++){
                controlador = 0;

                if(vet[i] == vet[j]){
                    controlador = 1;
                    break;
                }
            }
        }while(controlador);
        i++;
    }

    for(i=0;i<10;i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
