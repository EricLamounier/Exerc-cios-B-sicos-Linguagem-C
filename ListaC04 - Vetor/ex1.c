#include <stdio.h>

int main(){

    int A[6];
    int soma;
    int i;


    //(a)
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    //(b)
    soma = A[0] + A[1] + A[5];

    printf("Soma %d + %d + %d = %d\n", A[0], A[1], A[5], soma);

    //(c)
    A[4] = 100;

    //(d)
    for(i=0;i<6;i++){
        printf("%d\n", A[i]);
    }

    return 0;
}
