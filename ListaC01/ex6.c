#include <stdio.h>

int main(){

    float temperaturaCelcius;
    float temperaturaFahrenheit;

    printf("Digite uma temperatura em graus Celcius: ");
    scanf("%f", &temperaturaCelcius);

    temperaturaFahrenheit = temperaturaCelcius*(9/5.0) + 32.0;

    printf("A temperatura %.2f C em Fahrenheit e': %.2f F\n", temperaturaCelcius, temperaturaFahrenheit);

    return 0;
}
