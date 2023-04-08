#include <stdio.h>

int main(){

    int a, b, i, cont=0, primos=0;

    printf("Intervalo inicia em: ");
    scanf("%d", &a);

    printf("Intervalo termina em: ");
    scanf("%d", &b);

    for(a;a<=b;a++){

        for(i=1;i<=b;i++){

            if(a%i == 0)
                cont++;

            if(cont>2)
                break; //nao e' primo
        }

        if(cont<=2){ //e' primo
            printf("%d\n", a);
            primos++;
        }
        cont=0;
    }

    printf("%d numeros primos\n", primos);

    return 0;
}
