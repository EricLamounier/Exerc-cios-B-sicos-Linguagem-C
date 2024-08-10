#include <stdio.h>
#include <math.h>

int main(){

    int num;
    float logaritmo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Numero invalido\n");

    }else{
        logaritmo = log10(num);
        printf("Log (num) = %.2f\n", logaritmo);
    }
    return 0;
}
