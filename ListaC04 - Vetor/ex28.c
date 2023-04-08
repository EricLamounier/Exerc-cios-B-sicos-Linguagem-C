#include <stdio.h>

int main(){

    int v[10];
    int v1[10], indicePar = 0;
    int v2[10], indiceImpar = 0;
    int i;

    //le os numeros
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    //copia os pares para v1 e os impares para v2
    for(i=0;i<10;i++){
        if(v[i]%2 == 0){
            v1[indicePar] = v[i];
            indicePar++;
        }else{
            v2[indiceImpar] = v[i];
            indiceImpar++;
        }
    }

    printf("\nVetor par: ");

    //imprime vetor par
    for(i=0;i<indicePar;i++){
        printf("%d ", v1[i]);
    }

    printf("\nVetor impar: ");

    //imprime vetor impar
    for(i=0;i<indiceImpar;i++){
        printf("%d ", v2[i]);
    }
    return 0;
}
