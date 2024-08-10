#include <stdio.h>
#include <stdlib.h>

void troca_maior(int *x, int *y){
    int aux;
    if(*x < *y){
        aux = *x;
        *x = *y;
        *y = aux;
    }
}

int main(){
    int x,y;
    x = 10;
    y = 99;
    troca_maior(&x, &y);
    printf("x(maior)=%d\ny(menor)=%d\n", x, y);
    return 0;
}
