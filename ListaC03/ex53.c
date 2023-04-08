#include <stdio.h>

int main(){

    int num, i;
    int j, cont = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        for(j=0;j<i;j++){
            printf("%d ", cont);
            cont++;
        }
        printf("\n");

    }
    return 0;
}
