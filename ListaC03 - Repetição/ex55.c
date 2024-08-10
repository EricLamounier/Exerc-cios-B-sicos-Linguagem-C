#include <stdio.h>

int main(){

    int num, i, j=0, cont=0, soma=0;
    int primo = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);

    while(cont < num){

        for(i=1;i<=primo;i++){

            if(primo%i == 0)
                j++;

            if(j>2)
                break; //nao e' primo
        }

        if(j<=2){
            soma+=primo;
            cont++;
            printf("%d\n", primo);
        }
        j=0;
        primo++;
    }

    printf("Soma dos primeiros %d numeros primos: %d\n", num, soma);

    return 0;
}
