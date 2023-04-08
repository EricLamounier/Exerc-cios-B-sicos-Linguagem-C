#include <stdio.h>

int main(){

    float r1, r2;
    float res;

    while(1){

        printf("Resistor 1: ");
        scanf("%f", &r1);

        printf("Registor 2: ");
        scanf("%f", &r2);

        if(r1 == 0 || r2 == 0)
            break;

        res = (r1*r2)/(r1+r2);

        printf("Resultado: %.4f\n\n", res);
    }
    return 0;
}
