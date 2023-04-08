#include <stdio.h>
#include <stdlib.h>
#define TAM 9

int main(){

    int vet[TAM];
    int *vetRepetidos;
    int T1 = 0;
    int cont = 0;
    int i, j, k;

    vetRepetidos = (int*) calloc (1, sizeof(int));

    if(vetRepetidos == NULL){
        printf("Erro ao alocar memoria!\n");
        return -1;
    }

    //LE O VETOR
    for(i=0;i<TAM;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(i=0;i<TAM-1;i++){
        for(j=i+1;j<TAM;j++){
            if(vet[i] == vet[j]){
                    if(T1 == 0){
                        T1++;
                        vetRepetidos[T1-1 ] = vet[i];
                    }else{
                        for(k=0;k<T1;k++){
                            if(vet[i] == vet[k]){
                                cont++;
                                break;
                            }
                        }

                        if(cont == 0){
                            T1++;
                            vetRepetidos = (int*) realloc (vetRepetidos, T1);
                            vetRepetidos[T1-1 ] = vet[i];
                        }
                        cont = 0;
                    }
                break;
            }
        }
    }

    printf("\n\nNumeros que repetem: ");

    //mostra os numeros que repetem
    for(i=0;i<T1;i++){
        printf("%d ", vetRepetidos[i]);
    }

    printf("\n\nNumeros exceto os que repetem: ");


    //mostra valores exceto os que repetem
    for(i=0;i<TAM;i++){
        cont = 0;
        for(j=0;j<T1;j++){
            if(vet[i] == vetRepetidos[j]){
                cont++;
                break;
            }
        }

        if(cont == 0){
            printf("%d ", vet[i]);
        }
    }

    printf("\n\n");
    free(vetRepetidos);
    return 0;
}
