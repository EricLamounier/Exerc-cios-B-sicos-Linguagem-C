#include <stdio.h>

int main(){
    int n = 1, pares = 0, cont = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n%2 == 0){
            pares++;
        }

        cont++;

    }while(n != 1000);

    cont--;
    pares--;

    printf("Numeros lidos: %d, pares: %d\n", cont, pares);

    return 0;
}
