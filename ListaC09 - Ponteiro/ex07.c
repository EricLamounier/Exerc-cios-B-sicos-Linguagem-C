#include <stdio.h>
#include <stdlib.h>

void soma(int *x, int *y){
    *x = *x + *y;
}

int main(){
    int x, y;
    x = 10;
    y = 20;
    soma(&x, &y);
    printf("Soma: %d\nx=%d\ny=%d\n", x, x, y);
    return 0;
}
