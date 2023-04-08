#include <stdio.h>

int main(){

    float chico = 150; //2cm ao ano
    float ze = 110; // 3cm ao ano
    int anos = 0;

    while(1){

        chico += 2;
        ze += 3;

        printf("%.4f %.4f\n\n", chico, ze);

        if(chico == ze)
            break;

        anos++;
    }

    printf("%d anos\n", anos);


    return 0;
}
