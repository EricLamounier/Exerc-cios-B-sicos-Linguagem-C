#include <stdio.h>

int main(){

    int fib, aux, ant, i, soma;

    fib = 0;
    ant = 1;
    soma = 0;
    while(1){

        aux = fib;
        fib += ant;
        ant = aux;

        if(fib >= 4000000)
            break;

        soma += fib;

        printf("%d ", fib);
    }

    printf("Soma: %d\n", soma);
    return 0;
}
