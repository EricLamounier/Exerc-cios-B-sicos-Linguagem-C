#include <stdio.h>

int main(){

    int n; //n numeros
    int i, j; //multiplos de i e/ou j
    int k;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    printf("Digite o valor de j: ");
    scanf("%d", &j);

    k = 0;
    while(n > 0){

        if(k%i == 0 || k%j == 0){
            printf("%d ", k);
            n--;
        }
        k++;
    }
    return 0;
}
