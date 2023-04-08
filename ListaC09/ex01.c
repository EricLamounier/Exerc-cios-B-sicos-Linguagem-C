#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro = 99;
    float real = 99.65;
    char caractere = '6';

    int *ptr_int;
    float *ptr_float;
    char *ptr_char;

    printf("Antes:\nInt: %d\nFloat: %f\nChar: %c\n", inteiro, real, caractere);

    ptr_int = &inteiro;
    *ptr_int = 123;

    ptr_float = &real;
    *ptr_float = 123.123;

    ptr_char = &caractere;
    *ptr_char = 'x';

    printf("\nDepois:\nInt: %d\nfloat: %f\nChar: %c\n", inteiro, real, caractere);

    return 0;
}
