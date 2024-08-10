#include <stdio.h>
#include <stdlib.h>

float calc(float n1, float n2, char c){
    if(c == '+')
        return n1+n2;
    else if(c == '-')
        return n1-n2;
    else if(c == '*')
        return n1*n2;
    else if(c == '/')
        return n1/n2;
    else
        return 0;
}

int main(){

    float n1, n2, res;
    char c;

    printf("Num1: ");
    scanf("%f", &n1);

    printf("Num2: ");
    scanf("%f", &n2);

    printf("Simbolo: ");
    setbuf(stdin, NULL);
    scanf("%c", &c);

    res = calc(n1, n2, c);

    printf("%.2f\n", res);

    return 0;
}
