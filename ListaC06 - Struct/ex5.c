#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sVetor{
    float x;
    float y;
    float z;
}Vetor;

int main(){

    Vetor v1, v2;

    printf("Vetor 1:\n");

    printf("\tx: ");
    scanf("%f", &v1.x);

    printf("\ty: ");
    scanf("%f", &v1.y);

    printf("\tz: ");
    scanf("%f", &v1.z);

    printf("\nVetor 2:\n");

    printf("\tx: ");
    scanf("%f", &v2.x);

    printf("\ty: ");
    scanf("%f", &v2.y);

    printf("\tz: ");
    scanf("%f", &v2.z);

    printf("\nSoma de V1 e V2: (%.2f, %.2f, %.2f)\n", (v1.x+v2.x), (v1.y+v2.y), (v1.z + v2.z));

    return 0;
}
