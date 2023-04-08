#include <stdio.h>

int main(){

    int v1[5];
    int v2[5];
    int i;

    //le o vetor 1
    printf("V1:\n");
    for(i=0;i<5;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &v1[i]);
    }

    //le o vetor 2
    printf("\nV2:\n");
    for(i=0;i<5;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &v2[i]);
    }

    //soma de x e y
    printf("x + y\n");
    for(i=0;i<5;i++){
        printf("%d + %d = %d\n", v1[i], v2[i], v1[i]+v2[i]);
    }

    //produto de x e y
    printf("x * y\n");
    for(i=0;i<5;i++){
        printf("%d x %d = %d\n", v1[i], v2[i], v1[i]*v2[i]);
    }

    //diferenca de x e y
    printf("x - y\n");
    for(i=0;i<5;i++){
        printf("%d - %d = %d\n", v1[i], v2[i], v1[i]-v2[i]);
    }

    return 0;
}


