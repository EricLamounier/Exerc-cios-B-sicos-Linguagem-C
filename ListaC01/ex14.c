#include <stdio.h>
#define pi 3.1415

int main(){

    float angulo, radianos;

    printf("Digite um angulo em graus: ");
    scanf("%f", &angulo);

    radianos = angulo * pi/180.0;

    printf("%.2f graus  = %.2f radianos\n", angulo, radianos);
    return 0;
}
