#include <stdio.h>

int main(){

    float num, soma = 0;
    int i;

    for(i=0;i<10;i++){

        printf("Digite um numero: ");
        scanf("%f", &num);

        soma += num;
    }

    printf("Soma: %.2f\n", soma);
    return 0;
}
