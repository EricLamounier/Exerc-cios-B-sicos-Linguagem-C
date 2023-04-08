#include <stdio.h>

int main(){

    float diasTrabalhados, total;

    printf("Dias trabalhados: ");
    scanf("%f", &diasTrabalhados);

    total = diasTrabalhados*30.0 - (diasTrabalhados*30.0 * 0.08);

    printf("Salario: %.2f\n", total);
    printf("Imposto: %.2f\n", diasTrabalhados*30.0 * 0.08);

    return 0;
}
