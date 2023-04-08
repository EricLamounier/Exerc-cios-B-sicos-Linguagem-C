#include <stdio.h>

int main(){

    float a, b, c;

    printf("A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

    printf("C: ");
    scanf("%f", &c);

    if(a<b+c && b<a+c && c<a+b){ //e' um triangulo

        if(a == b && a == c && b == c){
            printf("Equilatero\n");

        }else if(a == b || a == c || b == c){
            printf("Isosceles\n");

        }else if(a != b && a != c && b != c){
            printf("Escaneleno\n");
        }
    }

    return 0;
}
