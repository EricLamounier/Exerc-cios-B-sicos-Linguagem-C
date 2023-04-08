#include <stdio.h>
#define TAM 10
int main(){

    int vet[10];
    int vetRepetidos[10];
    int tamIguais = 0;
    int i, j, k;
    int cont = 0;

    //le os numeros
    for(i=0;i<TAM;i++){
        printf("Numero da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    //verifica se possui iguais

    for(i=0;i<TAM-1;i++){
        for(j=i+1;j<TAM;j++){

            if(vet[i] == vet[j]){

                if(tamIguais == 0){
                    vetRepetidos[tamIguais] = vet[i];
                    tamIguais++;
                }else{
                    for(k=0;k<tamIguais;k++){
                        if(vet[i] == vetRepetidos[k]){
                            cont++;
                            break;
                        }
                    }
                    if(!cont){
                        vetRepetidos[tamIguais] = vet[i];
                        tamIguais++;
                    }
                    cont = 0;
                }
            }
        }
    }

    printf("\n\n");

    //imprime os numeros que repetem
    for(i=0;i<tamIguais;i++){

        if(i==0)
            printf("Numeros repetido: ");
        printf("%d ", vetRepetidos[i]);
    }

    return 0;
}
