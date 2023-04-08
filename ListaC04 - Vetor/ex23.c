#include <stdio.h>

int main(){

    float vetA[5];
    float vetB[5];
    int i;

    printf("Conjunto A:\n");
    for(i=0;i<5;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%f", &vetA[i]);
    }

    printf("\n\nConjunto B:\n");
    for(i=0;i<5;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%f", &vetB[i]);
    }

    for(i=0;i<5;i++){
        printf("%.2f x %.2f = %.2f\n", vetA[i], vetB[i], vetA[i]*vetB[i]);
    }

    return 0;
}
