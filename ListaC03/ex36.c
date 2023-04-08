#include <stdio.h>

int main(){

    int diferenca = 0, somaQuad = 0, quadSoma = 0;
    int i;

    for(i=1;i<=100;i++){

        somaQuad += (i*i);
        quadSoma += i;

    }

    quadSoma *= quadSoma;

    diferenca = somaQuad - quadSoma;

    if(diferenca < 0)
        diferenca *= (-1);


    printf("A diferenca e': %d\n", diferenca);

    return 0;
}
