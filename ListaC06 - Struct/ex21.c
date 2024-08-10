#include <stdio.h>
#include <stdlib.h>

int isPrime(int n){
    int i, controller = 0;
    for(i=1;i<=n;i++){
        if(n%i == 0){
            controller++;
            if(controller > 2)
                return 0; //nao eh primo
        }
    }
    return 1; //eh primo
}

int primos_abaixo_de_n(int n, int *v) {
    int i;
    int cont = 0;
    for(i=1;i<n;i++){
        if(isPrime(i) && i != 1){
            v = (int*) realloc (v, (cont+1) * sizeof(int));
            v[cont] = i;
            cont++;
        }
    }
    return cont;
}

int main() {
    int n;
    int *primos;

    primos = (int*) calloc (1, sizeof(int));
    if(primos == NULL){
        printf("ERRO - Memoria nao alocada!\n");
        exit(1);
    }
    n = 20;

    int size = primos_abaixo_de_n(n, primos);

    int i;
    printf("Numeros primos abaixo de %d\n", n);
    for(i=0;i<size;i++){
        printf("%d ", primos[i]);
    }

    free(primos);
    return 0;
}
