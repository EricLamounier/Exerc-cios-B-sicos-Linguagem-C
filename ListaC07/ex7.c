#include <stdio.h>
#include <stdlib.h>

float Fahrenheit(float celcius){
    return celcius * (9/5.0) + 32;
}

int main(){

    float res;

    res = Fahrenheit(5);

    printf("%.2f\n", res);

    return 0;
}

