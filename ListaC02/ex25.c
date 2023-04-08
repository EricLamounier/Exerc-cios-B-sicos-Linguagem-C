#include <stdio.h>

int main(){

    float a = 0, b = 0, c = 0, delta;

    printf("Valor de a: ");
    scanf("%f", &a);

    printf("Valor de b: ");
    scanf("%f", &b);

    printf("Valor de c: ");
    scanf("%f", &c);

    if(a == 0){
        printf("Nao e' equacao de segundo grau\n");
        return 0;
    }

    printf("\n%.1fx^2 + %.1fx + %.1f\n\n", a, b, c);

    delta = (b*b) - 4 * a * c;

    if(delta < 0){
        printf("Nao existe raiz real\n");

    }else if(delta == 0){
        printf("Raiz unica\n");

    }else if(delta > 0){
        printf("Duas raizes\n");
    }

    return 0;
}
