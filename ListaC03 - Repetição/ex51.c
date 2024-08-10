#include <stdio.h>

int main(){

    float salario = 2000;
    float aumento = 30;


    int ano = 1998; //salario = dobro do aumento do ano anterior (2030) logo, 1998 sera 2060

    while(ano <= 2022){

        aumento = 2*aumento;
        ano++;
    }

    printf("%.2f\n", (float)salario+aumento);
    return 0;
}
