#include <stdio.h>

int main(){

    int n = 0;
    int i, maior, menor;

    i=0;

    while(1){

        printf("Numero: ");
        scanf("%d", &n);

        if(n < 0)
            break;

        if(i==0){
            maior = n;
            menor = n;
            i++;
        }

        if(maior > n)
            maior = n;

        if(menor < n)
            menor = n;
    }

    printf("Maior: %d\n", maior);

    printf("Menor: %d\n", menor);
    return 0;
}
