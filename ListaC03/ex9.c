#include <stdio.h>

int main(){

    int n, cont = 0, i = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    while(i<n){

        if(cont%2 != 0){
            printf("%d ", cont);
            i++;
        }
        cont++;
    }
    return 0;
}
