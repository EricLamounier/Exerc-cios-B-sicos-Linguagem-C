#include <stdio.h>

int main(){

    int num1, num2, diferenca = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d e' maior que %d\n", num1, num2);
        diferenca = num1 - num2;

    }else if(num2 > num1){
        printf("%d e' maior que %d\n", num2, num1);
        diferenca = num2 - num1;
    }

    printf("Diferenca: %d\n", diferenca);
    return 0;
}
