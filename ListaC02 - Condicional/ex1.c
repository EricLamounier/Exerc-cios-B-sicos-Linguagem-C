#include <stdio.h>

int main(){
    int n1 ,n2;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Segundo numero inteiro: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("%d e' maior\n", n1);

    }else if(n2 > n1){
        printf("%d e' maior\n", n2);

    }else{
        printf("%d e %d sao iguais\n", n1, n2);
    }


}
