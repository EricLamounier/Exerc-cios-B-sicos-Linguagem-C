#include <stdio.h>
#include <stdlib.h>

int soma_dobro(int *x, int *y){
    *x *= 2;
    *y *= 2;

    return *x + *y;
}

int main(){
    int x, y, soma;
    x = 10;
    y = 5;
    soma = soma_dobro(&x, &y);

    printf("soma = %d\nx=%d\ny=%d\n", soma, x, y);
    return 0;
}
