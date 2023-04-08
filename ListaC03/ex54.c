#include <stdio.h>

int main(){

    int num, i, cont=0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){

        if(num%i == 0)
            cont++;

        if(cont > 2)
            break;
    }

    if(cont == 3)
        printf("%d nao e' primo\n", num);

    else
        printf("%d e' primo\n", num);

    return 0;
}
