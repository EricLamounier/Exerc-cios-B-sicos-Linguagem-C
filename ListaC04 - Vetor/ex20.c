#include <stdio.h>

int main(){

    int vet[10];
    int impar[10];
    int i;
    int tamanhoVetImpar = 0;

    //le os elementos
    for(i=0;i<10;i++){

        do{
            printf("Numero na posicao %d: ", i);
            scanf("%d", &vet[i]);

            if(vet[i] < 0 || vet[i] > 50)
                printf("Numero invalido, intervalo de 0 - 50!\n\n");

        }while(vet[i] < 0 || vet[i] > 50);
    }

    //verifica os impares e coloca no vetor
    for(i=0;i<10;i++){
        if(vet[i]%2 != 0){
            impar[tamanhoVetImpar] = vet[i];
            tamanhoVetImpar++;
        }
    }

    printf("\n\n");

    //imprime o vetor impar
    for(i=0;i<tamanhoVetImpar;i++){
        printf("%d ", impar[i]);
    }
    return 0;
}
