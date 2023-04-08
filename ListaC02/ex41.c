#include <stdio.h>

int main(){
    float massa = 0;
    float altura = 0;
    float imc = 0;

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite sua massa (em Kg): ");
    scanf("%f", &massa);

    imc = massa/(altura*altura);

    printf("Seu IMC = %.3f\n", imc);

    if(imc <= 18.5){
        printf("Abaixo do peso\n");
    }else if(imc < 25){
        printf("Saudavel\n");
    }else if(imc < 30){
        printf("Peso em excesso\n");
    }else if(imc < 35){
        printf("Obesidade Grau I\n");
    }else if(imc < 40){
        printf("Obesidade Grau II(severa)\n");
    }else{
        printf("Obesidade Grau III(morbida)\n");
    }
    return 0;
}
