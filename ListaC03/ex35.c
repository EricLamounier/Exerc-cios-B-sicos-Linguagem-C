#include <stdio.h>

int main(){

    int n1, n2, i;
    int somaImpar = 0;

    printf("Intervalo entre:\n");

    printf("Numero 1: ");
    scanf("%d", &n1);

    printf("Numero 2: ");
    scanf("%d", &n2);

    if(n2 < n1){
        printf("Intervalo entre valores invalido\n");

    }else{

        for(i=(n1);i<=n2;i++){
            if(i%2 != 0)
                somaImpar += i;
        }
    }

    printf("Soma dos impares neste intervalo: %d\n", somaImpar);

    return 0;
}
