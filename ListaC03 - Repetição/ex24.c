#include <stdio.h>

int main(){

    int i, n, soma = 0;

    printf("Digite um valor positivo: ");
    scanf("%d", &n);

    for(i=1;i<n;i++){

        if(n%i == 0){
            soma += i;
        }
    }

    printf("Soma dos divisores: %d\n", soma);
    return 0;
}

