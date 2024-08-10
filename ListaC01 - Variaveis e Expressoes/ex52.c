#include <stdio.h>

int main(){

    float premio;
    float aposta1, aposta2, aposta3;
    float totalAposta;
    float aux;

    printf("Digite o valor do premio: ");
    scanf("%f", &premio);

    printf("Apostador 1: ");
    scanf("%f", &aposta1);

    printf("Apostador 2: ");
    scanf("%f", &aposta2);

    printf("Apostador 3: ");
    scanf("%f", &aposta3);

    totalAposta = aposta1 + aposta2 + aposta3;

    aux = aposta1/totalAposta;
    aposta1 = aux * premio;

    aux = aposta2/totalAposta;
    aposta2 = aux * premio;

    aux = aposta3/totalAposta;
    aposta3 = aux * premio;

    printf("Apostador 1: %.2f\n", aposta1);
    printf("Apostador 2: %.2f\n", aposta2);
    printf("Apostador 3: %.2f\n", aposta3);

    return 0;
}
