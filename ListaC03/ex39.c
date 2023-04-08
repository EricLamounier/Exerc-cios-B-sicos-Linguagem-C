#include <stdio.h>

int main(){

    float base, altura, area = 0;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    if(altura <= 0 || base <= 0){
        printf("Dados invalidos\n");

    }else{
        area = (base*altura)/2;
    }

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
