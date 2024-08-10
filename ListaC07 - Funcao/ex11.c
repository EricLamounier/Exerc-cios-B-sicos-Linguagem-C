#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float funct(float x, float y, float z, char c){
    if(c == 'A')
        return (x+y+z)/3.0;
    else if(c == 'P')
        return (x*5 + y*3 + z*2)/10.0;
    else
        return -1;
}

int main(){

    float nota1, nota2, nota3;
    char c;
    float res;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    printf("Menu:\n");
    printf("A - Media Aritimetica\n");
    printf("P - Media Ponderada\n");

    setbuf(stdin, NULL);
    scanf("%c", &c);

    c = toupper(c);

    res = funct(nota1, nota2, nota3, c);

    printf("%.2f\n", res);

    return 0;
}

