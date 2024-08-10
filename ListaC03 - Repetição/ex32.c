#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int d1, d2;

    srand(time(NULL));

    d1 = rand() % 6; //sorteia dado 1 (1-6)
    d2 = rand() % 6; //sorteia dado 2 (1-6)

    printf("Dado 1: %d\n", d1);

    printf("Dado 2: %d\n", d2);

    if(d1 == d2){
        printf("=: %d = %d\n", d1, d2);

    }else if(d1 > d2){
        printf(">: %d > %d\n", d1, d2);

    }else if(d1 < d2){
        printf("<: %d < %d\n", d1, d2);
    }

    srand(time(NULL)); //seed "aleatoria"
    return 0;
}
