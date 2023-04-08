#include <stdio.h>

int main(){

    int num, aux;

    printf("Digite um valor de 4 digitos: ");
    scanf("%d", &num);

    //milhar
    aux = num/1000;
    printf("%d\n", aux);

    //centena
    aux = (num%1000)/100;
    printf("%d\n", aux);

    //dezena
    aux = ((num%1000)%100)/10;
    printf("%d\n", aux);

    //unicade
    aux = ((num%1000)%100)%10;
    printf("%d\n", aux);


    return 0;
}
