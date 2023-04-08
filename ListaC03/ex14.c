#include <stdio.h>

int main(){

    int n, i;

    printf("Digite um numero inteiro par: ");
    scanf("%d", &n);

    for(i=n;i>=0;i--){
        if(i%2 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}

