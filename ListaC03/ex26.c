#include <stdio.h>

int main(){

    int n;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    while(1){

        if(n%11 == 0 || n%13 == 0 || n%17 == 0){
            break;
        }
        n++;
    }

    printf("Primeiro multiplo de 11, 13 ou 17: %d\n", n);
    return 0;
}
