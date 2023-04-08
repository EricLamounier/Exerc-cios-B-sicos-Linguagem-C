#include <stdio.h>

int main(){

    float n1, n2, n3, soma;

    printf("Valor 1: ");
    scanf("%f", &n1);

    printf("Valor 2: ");
    scanf("%f", &n2);

    printf("Valor 3: ");
    scanf("%f", &n3);

    soma = (n1*n1) + (n2*n2) + (n3*n3);

    printf("Soma dos quadrados de %.2f, %.2f e %.2f = %.2f\n", n1, n2, n3, soma);


    return 0;
}
