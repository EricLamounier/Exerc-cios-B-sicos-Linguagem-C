#include <stdio.h>

int main(){

    int num, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    sucessor = num + 1;
    antecessor = num - 1;

    printf("Sucessor de %d: %d\n", num, sucessor);
    printf("Antecessor de %d: %d\n", num, antecessor);
    return 0;
}
