#include <stdio.h>
#include <math.h>

int main(){

    float num, aux;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num >= 0){
        aux = num * num;
        printf("%.2f ao quadrado = %.2f\n", num, aux);

        aux = sqrt(num);
        printf("Raiz de %.2f = %.2f\n", num, aux);
    }

    return 0;
}
