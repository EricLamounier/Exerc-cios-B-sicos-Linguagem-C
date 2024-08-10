#include <stdio.h>

int fat(int n){

    int i;

    int fat = 1;

    for(i=1; i<=n ;i++){
        fat *= i;
    }

    return fat;
}

int main(){

    int i, n;
    float res;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        res += (float)1/fat(i);
    }

    printf("Resultado: %.3f\n", res);
    return 0;
}
