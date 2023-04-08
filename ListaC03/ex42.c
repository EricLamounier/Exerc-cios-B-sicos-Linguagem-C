#include <stdio.h>
#include <math.h>

int main(){

    int num;

    while(1){

        printf("Digite um valor: ");
        scanf("%d", &num);

        if(num <= 0)
            break;

        printf("Quadrado: %d\n", num*num);

        printf("Cubo: %d\n", num*num*num);

        printf("Raiz quadrada: %.3f\n\n", (float)pow(num, 0.5));
    }
    return 0;
}
