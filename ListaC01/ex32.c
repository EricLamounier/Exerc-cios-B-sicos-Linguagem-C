#include <stdio.h>

/*
exemplo:
num = 5;

tripo de 5 = 15
sucessor do triplo = 16

dobro de 5 = 10
antecessor do dobro = 9

soma = 16 + 9
soma = 25
*/

int main(){

    int num, sucessorDoTriplo, antecessorDoDobro, aux, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //o triplo de um numero e' ele multiplicado por 3, logo
    aux = num*3; //aux recebe o triplo de num

    sucessorDoTriplo = aux +  1;

    //o dobro de um numero e' ele multilicado por 2, logo
    aux = num*2; //aux recebe, agora, o dobro de num

    antecessorDoDobro = aux - 1;

    soma = sucessorDoTriplo + antecessorDoDobro;

    printf("Soma do sucessor do triplo com antecessor do dobro de %d = %d\n", num, soma);

    return 0;
}
