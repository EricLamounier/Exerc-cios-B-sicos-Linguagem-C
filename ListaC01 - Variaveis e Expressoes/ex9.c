#include <stdio.h>

int main(){

    float temperaturaCelcius;
    float temperaturaKelvin;

    printf("Digite uma temperatura em graus Celcius: ");
    scanf("%f", &temperaturaCelcius);

    temperaturaKelvin = temperaturaCelcius + 273.15;

    printf("A temperatura %.2f C em Kelvin e': %.2f K\n", temperaturaCelcius, temperaturaKelvin);

    return 0;
}
