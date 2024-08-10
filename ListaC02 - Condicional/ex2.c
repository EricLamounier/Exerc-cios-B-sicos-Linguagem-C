#include <stdio.h>
#include <math.h>

int main(){

    float num, raiz;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num >= 0){ //se for positivo
        raiz = sqrt(num);
        printf("Raiz de %.2f = %.2f", num, raiz);

    }else{
        printf("Numero invalido\n");
    }

    return 0;
}
