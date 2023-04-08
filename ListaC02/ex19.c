#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    /*
    if(num%3 == 0 ^ num%5 == 0){
        printf("E divisivel por 3 ou 5\n");
    }
    */

    if( (num%3 == 0 && num%5 != 0) || ( num%3 != 0 && num%5 == 0) ){
        printf("E divisivel por 3 ou 5, mas nao simultaneamente pelos dois\n");

    }else{
        printf("Nao e divisivel por 3 ou 5, ou e divisivel simultaneamente pelos dois\n");
    }
    return 0;
}
