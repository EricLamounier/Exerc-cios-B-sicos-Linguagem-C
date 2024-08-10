#include <stdio.h>

int main(){ //exercicio que utiliza conceitos de looping, pular para o proximo!!

    int num, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while(num > 0){
        soma += num%10;
        num /= 10;
    }

    printf("Soma: %d\n", soma);

    return 0;
}
