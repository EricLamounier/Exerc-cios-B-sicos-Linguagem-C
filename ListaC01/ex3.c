#include <stdio.h>

int main(){

    int n1, n2, n3;
    int soma;

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    printf("Terceiro numero: ");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;

    printf("A soma de %d + %d + %d = %d\n", n1, n2, n3, soma);
    return 0;
}
