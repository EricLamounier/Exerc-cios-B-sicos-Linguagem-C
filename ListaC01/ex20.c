#include <stdio.h>

int main(){

    float kg, libras;

    printf("Digite um valor de massa em quilogramas: ");
    scanf("%f", &kg);

    libras = kg/0.45;

    printf("%.2f kg = %.2f libras\n", kg, libras);

    return 0;
}
