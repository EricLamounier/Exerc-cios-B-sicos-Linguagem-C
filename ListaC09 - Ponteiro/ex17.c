#include <stdio.h>
#include <stdlib.h>

void frac(float *num, int *inteiro, float *frac){
    *inteiro = (int)*num;
    *frac = *num - *inteiro;
}
int main(){
    float var = 12.345;
    float decimal;
    int inteiro;

    frac(&var, &inteiro, &decimal);

    printf("Int: %d\nDec: %f\n", inteiro, decimal);
    return 0;
}
