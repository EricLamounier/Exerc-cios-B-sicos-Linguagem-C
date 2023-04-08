#include <stdio.h>

int main(){

    int i, n1, n2;
    int somaPares = 0, multImpares = 1;

    printf("Numero 1: ");
    scanf("%d", &n1);

    printf("Numero 2: ");
    scanf("%d", &n2);

    for(i=n1+1;i<n2;i++){

        if(i%2 == 0){
            somaPares += i;
        }

        if(i%2 != 0){
            multImpares *= i;
        }
    }

    printf("Soma dos pares entre %d e %d: %d\n", n1, n2, somaPares);

    printf("Multiplicacao dos impares entre %d e %d: %d\n", n1, n2, multImpares);
    return 0;
}
