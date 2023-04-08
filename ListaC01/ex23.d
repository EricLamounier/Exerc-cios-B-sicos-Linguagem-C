#include <stdio.h>

int main(){

    float kg, libras;

    printf("Digite um valor de massa em libras: ");
    scanf("%f", &libras);

    kg = libras*0.45;

    printf("%.2f libras = %.2f kg\n", libras, kg);

    return 0;
}
