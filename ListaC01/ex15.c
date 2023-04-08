#include <stdio.h>
#define pi 3.1415

int main(){

    float grau, radianos;

    printf("Digite um angulo em radianos: ");
    scanf("%f", &radianos);

    grau = radianos * 180/pi;

    printf("%.2f radianos  = %.2f graus\n", radianos, grau);
    return 0;
}
