#include <stdio.h>

int main(){

    int n, i, aux;

    printf("Digite um valor entre 100 e 999: ");
    scanf("%d", &n);

    aux = n;

    for(i=100;i>=1;i/=10){

        printf("%d\n", n/i);
        n = n%i;

    }
    return 0;
}
