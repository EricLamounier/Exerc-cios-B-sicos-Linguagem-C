#include <stdio.h>

int main(){

    int n, i, fib, ant, aux;

    printf("Numero inteiro positivo: ");
    scanf("%d", &n);

    fib = 0;
    ant = 1;
    while(1){

        printf("%d ", fib);

        aux = fib;
        fib += ant;
        ant = aux;

        if(ant > n)
            break;
    }

    return 0;
}
