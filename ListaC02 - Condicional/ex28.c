#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x, y, z;
    float geometrica, ponderada, harmonica, aritmetica;

    printf("Numero 1: ");
    scanf("%d", &x);

    printf("Numero 2: ");
    scanf("%d", &y);

    printf("Numero 3: ");
    scanf("%d", &z);

    geometrica = pow( (x*y*z), (1/3.0) );

    ponderada = (x + 2*y + 3*z)/6.0;

    harmonica = (float)1/((float)1/x + (float)1/y + (float)1/z);

    aritmetica = (x+y+z)/3.0;

    printf("Media geometrica: %.2f\n", geometrica);

    printf("Media ponderada: %.2f\n", ponderada);

    printf("Media hermonica: %.2f\n", harmonica);

    printf("Media aritmetica: %.2f\n", aritmetica);

    return 0;
}
