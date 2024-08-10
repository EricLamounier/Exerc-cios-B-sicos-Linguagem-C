#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int x, y;
    x = 10;
    y = 99;

    printf("x = %d\ny = %d\n\n", x, y);

    troca(&x, &y);

    printf("x = %d\ny = %d\n", x, y);
    return 0;
}
