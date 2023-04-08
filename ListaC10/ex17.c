#include <stdio.h>
#include <stdlib.h>

int main(){
    float *arr;
    int size = 0;
    float n;

    arr = (float*) calloc (10, sizeof(float));
    if(arr == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }

    int i;

    int control = 10;
    do{
        printf("Valor: ");
        scanf("%f", &n);

        if(n!=0){
            if(size == control){ //vetor cheio

                //realloca espaco
                control += 10;

                arr = (float*) realloc (arr, control * sizeof(float));

                //preenche com 0's o valor realocado
                for(i=control-10;i<control;i++)
                    arr[i] = 0;
            }
            arr[size] = n;
            size++;
        }
    }while(n!=0);

    //printa vetor
    for(i=0;i<control;i++)
        printf("%.2f ", arr[i]);

    free(arr);
    return 0;
}
