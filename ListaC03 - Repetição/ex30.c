#include <stdio.h>

int main(){

    int i, num, res1 = 0, res2 = 0, res3 = 0;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        res1 += i;
    }

    for(i=1;i<(2*num);i++){

        if(i%2 == 0){
           res2  -= i;
        }else{
            res2 += i;
        }
    }

    for(i=0;i<(2*num);i++){
        if(i%2 != 0){
            res3 += i;
        }
    }

    printf("Primeira sequencia: %d\n", res1);

    printf("Segunda sequencia: %d\n", res2);

    printf("Terceira sequencia: %d\n", res3);

    return 0;
}
