#include <stdio.h>

int main(){

    float jardas, metros;

    printf("Digite um valor de comprimento em metros: ");
    scanf("%f", &metros);

    jardas = metros/0.91;

    printf("%.2f metros = %.2f jardas\n", metros, jardas);

    return 0;
}
