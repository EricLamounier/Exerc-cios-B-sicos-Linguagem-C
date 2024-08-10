#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A, float B, float C, float *x1, float *x2){
    int qnt_raizes = 0;
    float delta = B*B - 4*A*C;

    if(delta < 0)
        return 0;

    if(delta == 0){
        *x1 = (-B + pow(delta, 0.5))/(2*A);
        *x2 = *x1;
        return 1;
    }

    *x1 = (-B + pow(delta, 0.5))/(2*A);
    *x2 = (-B - pow(delta, 0.5))/(2*A);
    return 2;
}

int main(){

    float A, B, C, x1, x2;
    int qnt_raizes = -1;
    A = 1;
    B = 2;
    C = 2;

    qnt_raizes = raizes(A, B, C, &x1, &x2);

    printf("%d raiz(s) real(is)\n", qnt_raizes);
    printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    return 0;
}
