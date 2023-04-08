#include <stdio.h>

int main(){

    float premio = 780000;
    float ganhador1, ganhador2, ganhador3;

    ganhador1 = premio*0.46;
    ganhador2 = premio*0.32;
    ganhador3 = premio*0.22;

    printf("Ganhador 1: %.2f\n", ganhador1);
    printf("Ganhador 2: %.2f\n", ganhador2);
    printf("Ganhador 3: %.2f\n", ganhador3);

    return 0;
}
