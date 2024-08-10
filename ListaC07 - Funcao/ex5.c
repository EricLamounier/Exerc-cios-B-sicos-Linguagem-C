#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

float volumeEsfera(float raio){
    return ((4/3.0) * pi * (raio*raio*raio));
}

int main(){

    float res;

    res = volumeEsfera(5);

    printf("%.1f\n", res);

    return 0;
}

