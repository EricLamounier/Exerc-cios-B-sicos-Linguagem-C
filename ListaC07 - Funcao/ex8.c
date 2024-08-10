#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float a, float b){
    return sqrt(a*a + b*b);
}

int main(){

    float res;

    res = hipotenusa(2, 5);

    printf("%.2f\n", res);

    return 0;
}

