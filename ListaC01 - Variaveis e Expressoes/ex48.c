#include <stdio.h>

int main(){

    int valor;
    int horas, minutos, segundos;

    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &valor);

    horas = valor/3600;
    minutos = (valor%3600)/60;
    segundos = (valor%3600)%60;

    printf("%d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
