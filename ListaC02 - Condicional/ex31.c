#include <stdio.h>

int main(){

    float altura, peso;

    printf("Digite sua altura: (cm) ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if(altura < 120){

        if(peso < 60){
            printf("A\n");

        }else if(peso > 60 && peso <= 90){
            printf("D\n");

        }else {
            printf("G\n");

        }
    }else if(altura >= 120 && altura <= 170){

        if(peso < 60){
            printf("B\n");

        }else if(peso > 60 && peso <= 90){
            printf("E\n");

        }else {
            printf("H\n");

        }
    }else{

        if(peso < 60){
            printf("C\n");

        }else if(peso > 60 && peso <= 90){
            printf("F\n");

        }else {
            printf("I\n");

        }
    }

    return 0;
}
