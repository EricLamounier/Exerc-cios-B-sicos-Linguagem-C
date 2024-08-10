#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

float cilindro(float altura, float raio){
    return pi * raio*raio * altura;
}

int main(){

    float res;

    res = cilindro(5, 6);

    printf("%.2f\n", res);

    return 0;
}
