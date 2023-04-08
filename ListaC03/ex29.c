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

    int i = 0;
    float soma = 0;

    while(i<5){
        soma += (float)i/fat(2*i);
        i++;
    }

    printf("Soma: %.3f\n", soma);
    return 0;
}
