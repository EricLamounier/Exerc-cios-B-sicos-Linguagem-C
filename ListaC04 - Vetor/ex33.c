#include <stdio.h>

#define TAM 10
int main(){

    int v[TAM];
    int i=0;
    int x;
    int indice;

    //le os valores
    for(i=0;i<TAM;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    i = 0;
    while(i<TAM){

        if(v[i] == 0){
            x = i+1;
            indice = i;

            while(v[x] == 0 && x < TAM){
                x++;
            }

            while(v[x]!=0 && indice < TAM-1 && x < TAM){
                v[indice] = v[x];
                v[x] = 0;
                x++;
                indice++;
            }

        }
        i++;
    }

    for(i=0;i<TAM;i++){
        printf("%d ", v[i]);
    }
    return 0;
}
